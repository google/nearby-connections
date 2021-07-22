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

#ifndef CORE_EVENT_LOGGER_H_
#define CORE_EVENT_LOGGER_H_

#include "platform/base/byte_array.h"

namespace location {
namespace nearby {
namespace connections {
namespace analytics {

// This base class defines the API to log back the analytics |ConnectionsLog|
// proto byte array which is collected in this library. Client AP needs to
// implement it, who wishes to have analytics log (e.g. clearcut logger).
//
// google3/logs/proto/location/nearby/nearby_client_log.proto
class EventLogger {
 public:
  virtual ~EventLogger() = default;

  // Calls back the |ConnectionsLog| proto byte array data.
  virtual void Log(const ByteArray& connections_log_bytes) = 0;
};

}  // namespace analytics
}  // namespace connections
}  // namespace nearby
}  // namespace location

#endif  // CORE_EVENT_LOGGER_H_
