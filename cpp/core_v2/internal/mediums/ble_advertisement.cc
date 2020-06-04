// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "core_v2/internal/mediums/ble_advertisement.h"

#include <inttypes.h>

#include "platform_v2/public/logging.h"

namespace location {
namespace nearby {
namespace connections {
namespace mediums {

BleAdvertisement::BleAdvertisement(Version version,
                                   SocketVersion socket_version,
                                   const ByteArray &service_id_hash,
                                   const ByteArray &data) {
  // Check that the given input is valid.
  if (!IsSupportedVersion(version) ||
      !IsSupportedSocketVersion(socket_version) ||
      service_id_hash.size() != kServiceIdHashLength ||
      data.size() > kMaxDataSize) {
    return;
  }

  version_ = version;
  socket_version_ = socket_version;
  service_id_hash_ = service_id_hash;
  data_ = data;
}

BleAdvertisement::BleAdvertisement(const ByteArray &ble_advertisement_bytes) {
  if (ble_advertisement_bytes.Empty()) {
    NEARBY_LOG(INFO,
               "Cannot deserialize BleAdvertisement: null bytes passed in.");
    return;
  }

  if (ble_advertisement_bytes.size() < kMinAdvertisementLength) {
    NEARBY_LOG(INFO,
               "Cannot deserialize BleAdvertisement: expecting min %d raw "
               "bytes, got %" PRIu64,
               kMinAdvertisementLength, ble_advertisement_bytes.size());
    return;
  }

  // Now, time to read the bytes!
  const auto *read_ptr = ble_advertisement_bytes.data();

  // 1. Version.
  version_ = static_cast<Version>((*read_ptr & kVersionBitmask) >> 5);
  if (!IsSupportedVersion(version_)) {
    NEARBY_LOG(INFO,
               "Cannot deserialize BleAdvertisement: unsupported Version %u",
               version_);
    return;
  }

  // 2. Socket Version.
  socket_version_ =
      static_cast<SocketVersion>((*read_ptr & kSocketVersionBitmask) >> 2);
  if (!IsSupportedSocketVersion(socket_version_)) {
    NEARBY_LOG(
        INFO,
        "Cannot deserialize BLEAdvertisement: unsupported SocketVersion %u",
        socket_version_);
    version_ = Version::kUndefined;
    return;
  }
  read_ptr += kVersionLength;

  // 3. Service ID hash.
  service_id_hash_ = ByteArray(read_ptr, kServiceIdHashLength);
  read_ptr += kServiceIdHashLength;

  // 4.1. Data size.
  size_t expected_data_size = DeserializeDataSize(read_ptr);
  if (expected_data_size < 0) {
    NEARBY_LOG(
        INFO,
        "Cannot deserialize BleAdvertisement: negative data size %" PRIu64,
        expected_data_size);
    version_ = Version::kUndefined;
    return;
  }
  read_ptr += kDataSizeLength;

  // Check that the stated data size is the same as what we received.
  size_t actual_data_size = ComputeDataSize(ble_advertisement_bytes);
  if (actual_data_size < expected_data_size) {
    NEARBY_LOG(INFO,
               "Cannot deserialize BLEAdvertisement: expected data to be %zu "
               "bytes, got %" PRIu64 " bytes",
               expected_data_size, actual_data_size);
    version_ = Version::kUndefined;
    return;
  }

  // 4.2. Data.
  data_ = ByteArray(read_ptr, expected_data_size);
  read_ptr += expected_data_size;
}

BleAdvertisement::operator ByteArray() const {
  if (!IsValid()) {
    return ByteArray{};
  }

  std::string out;

  // The first 3 bits are the Version.
  char version_and_socket_version_byte =
      (static_cast<char>(version_) << 5) & kVersionBitmask;
  // The next 3 bits are the Socket version. 2 bits left are reserved.
  version_and_socket_version_byte |=
      (static_cast<char>(socket_version_) << 2) & kSocketVersionBitmask;
  // Serialize Data size bytes(4).
  ByteArray data_size_bytes{kDataSizeLength};
  auto *data_size_bytes_write_ptr = data_size_bytes.data();
  SerializeDataSize(data_size_bytes_write_ptr, data_.size());

  out.reserve(1 + service_id_hash_.size() + 1 + data_.size());
  out.append(1, version_and_socket_version_byte);
  out.append(std::string(service_id_hash_));
  out.append(std::string(data_size_bytes));
  out.append(std::string(data_));

  return ByteArray{std::move(out)};
}

bool BleAdvertisement::operator==(const BleAdvertisement &rhs) const {
  return this->GetVersion() == rhs.GetVersion() &&
         this->GetSocketVersion() == rhs.GetSocketVersion() &&
         this->GetServiceIdHash() == rhs.GetServiceIdHash() &&
         this->GetData() == rhs.GetData();
}

bool BleAdvertisement::operator<(const BleAdvertisement &rhs) const {
  if (this->GetVersion() != rhs.GetVersion()) {
    return this->GetVersion() < rhs.GetVersion();
  }
  if (this->GetSocketVersion() != rhs.GetSocketVersion()) {
    return this->GetSocketVersion() < rhs.GetSocketVersion();
  }
  if (this->GetServiceIdHash() != rhs.GetServiceIdHash()) {
    return this->GetServiceIdHash() < rhs.GetServiceIdHash();
  }
  return this->GetData() < rhs.GetData();
}

bool BleAdvertisement::IsSupportedVersion(Version version) const {
  return version >= Version::kV1 && version <= Version::kV2;
}

bool BleAdvertisement::IsSupportedSocketVersion(
    SocketVersion socket_version) const {
  return socket_version >= SocketVersion::kV1 &&
         socket_version <= SocketVersion::kV2;
}

void BleAdvertisement::SerializeDataSize(char *data_size_bytes_write_ptr,
                                         size_t data_size) const {
  // Get a raw representation of the data size bytes in memory.
  char *data_size_bytes = reinterpret_cast<char *>(&data_size);

  // Append these raw bytes to advertisement bytes, keeping in mind that we need
  // to convert from Little Endian to Big Endian in the process.
  for (int i = 0; i < kDataSizeLength; ++i) {
    data_size_bytes_write_ptr[i] = data_size_bytes[kDataSizeLength - i - 1];
  }
}

size_t BleAdvertisement::DeserializeDataSize(
    const char *data_size_bytes_read_ptr) const {
  // Allocate a chunk of memory to store our deserialized size.
  char data_size_bytes[kDataSizeLength];

  // Assign the bits of our size from the given raw bytes, keeping in mind that
  // we need to convert from Big Endian to Little Endian in the process.
  for (int i = 0; i < kDataSizeLength; ++i) {
    data_size_bytes[i] = data_size_bytes_read_ptr[kDataSizeLength - i - 1];
  }

  // Interpret the char array as a single int.
  return static_cast<size_t>(
      *(reinterpret_cast<std::uint32_t *>(&data_size_bytes)));
}

size_t BleAdvertisement::ComputeDataSize(
    const ByteArray &ble_advertisement_bytes) const {
  return ble_advertisement_bytes.size() - kMinAdvertisementLength;
}

size_t BleAdvertisement::ComputeAdvertisementLength(
    const ByteArray &data) const {
  // The advertisement length is the minimum length + the length of the data.
  return kMinAdvertisementLength + data.size();
}

}  // namespace mediums
}  // namespace connections
}  // namespace nearby
}  // namespace location
