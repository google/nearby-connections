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

#ifndef _CORE_INTERNAL_OFFLINE_FRAMES_H_
#define _CORE_INTERNAL_OFFLINE_FRAMES_H_

#include <cstdint>
#include <vector>

#include "core/options.h"
#include "proto/connections/offline_wire_formats.pb.h"
#include "platform/base/byte_array.h"
#include "platform/base/exception.h"
#include "proto/connections_enums.pb.h"

namespace location {
namespace nearby {
namespace connections {
namespace parser {

using UpgradePathInfo = BandwidthUpgradeNegotiationFrame::UpgradePathInfo;

// Serialize/Deserialize Nearby Connections Protocol messages.

// Parses incoming message.
// Returns OfflineFrame if parser was able to understand it, or
// Exception::kInvalidProtocolBuffer, if parser failed.
ExceptionOr<OfflineFrame> FromBytes(const ByteArray& offline_frame_bytes);

// Returns FrameType of a parsed message, or
// V1Frame::UNKNOWN_FRAME_TYPE, if frame contents is not recognized.
V1Frame::FrameType GetFrameType(const OfflineFrame& offline_frame);

// Builds Connection Request / Response messages.
ByteArray ForConnectionRequest(const std::string& endpoint_id,
                               const ByteArray& endpoint_info,
                               std::int32_t nonce, bool supports_5_ghz,
                               const std::string& bssid,
                               const std::vector<Medium>& mediums);
ByteArray ForConnectionResponse(std::int32_t status);

// Builds Payload transfer messages.
ByteArray ForDataPayloadTransfer(
    const PayloadTransferFrame::PayloadHeader& header,
    const PayloadTransferFrame::PayloadChunk& chunk);
ByteArray ForControlPayloadTransfer(
    const PayloadTransferFrame::PayloadHeader& header,
    const PayloadTransferFrame::ControlMessage& control);

// Builds Bandwidth Upgrade [BWU] messages.
ByteArray ForBwuIntroduction(const std::string& endpoint_id);
ByteArray ForBwuIntroductionAck();
ByteArray ForBwuWifiHotspotPathAvailable(const std::string& ssid,
                                         const std::string& password,
                                         std::int32_t port,
                                         const std::string& gateway,
                                         bool supports_disabling_encryption);
ByteArray ForBwuWifiLanPathAvailable(const std::string& ip_address,
                                     std::int32_t port);
ByteArray ForBwuWifiAwarePathAvailable(const std::string& service_id,
                                       const std::string& service_info,
                                       const std::string& password,
                                       bool supports_disabling_encryption);
ByteArray ForBwuWifiDirectPathAvailable(const std::string& ssid,
                                        const std::string& password,
                                        std::int32_t port,
                                        std::int32_t frequency,
                                        bool supports_disabling_encryption);
ByteArray ForBwuBluetoothPathAvailable(const std::string& service_id,
                                       const std::string& mac_address);
ByteArray ForBwuWebrtcPathAvailable(const std::string& peer_id,
                                    const LocationHint& location_hint_a);
ByteArray ForBwuFailure(const UpgradePathInfo& info);
ByteArray ForBwuLastWrite();
ByteArray ForBwuSafeToClose();

ByteArray ForKeepAlive();
ByteArray ForDisconnection();

UpgradePathInfo::Medium MediumToUpgradePathInfoMedium(Medium medium);
Medium UpgradePathInfoMediumToMedium(UpgradePathInfo::Medium medium);

ConnectionRequestFrame::Medium MediumToConnectionRequestMedium(Medium medium);
Medium ConnectionRequestMediumToMedium(ConnectionRequestFrame::Medium medium);
std::vector<Medium> ConnectionRequestMediumsToMediums(
    const ConnectionRequestFrame& connection_request_frame);

}  // namespace parser
}  // namespace connections
}  // namespace nearby
}  // namespace location

#endif  // _CORE_INTERNAL_OFFLINE_FRAMES_H_
