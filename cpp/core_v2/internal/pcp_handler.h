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

#ifndef CORE_V2_INTERNAL_PCP_HANDLER_H_
#define CORE_V2_INTERNAL_PCP_HANDLER_H_

#include <vector>

#include "core_v2/internal/client_proxy.h"
#include "core_v2/internal/pcp.h"
#include "core_v2/listeners.h"
#include "core_v2/options.h"
#include "core_v2/params.h"
#include "core_v2/status.h"
#include "core_v2/strategy.h"
#include "proto/connections_enums.pb.h"

namespace location {
namespace nearby {
namespace connections {

// Defines the set of methods that need to be implemented to handle the
// per-PCP-specific operations in the OfflineServiceController.
//
// These methods are all meant to be synchronous, and should return only after
// knowing they've done what they were supposed to do (or unequivocally failed
// to do so).
//
// See details here:
// cpp/core_v2/core.h
class PcpHandler {
 public:
  virtual ~PcpHandler() = default;

  // Return strategy supported by this protocol.
  virtual Strategy GetStrategy() = 0;

  // Return concrete variant of protocol.
  virtual Pcp GetPcp() = 0;

  // We have been asked by the client to start advertising. Once we successfully
  // start advertising, we'll change the ClientProxy's state.
  // ConnectionListener (info.listener) will be notified in case of any event.
  // See for details
  // cpp/core_v2/listeners.h
  virtual Status StartAdvertising(ClientProxy* client,
                                  const std::string& service_id,
                                  const ConnectionOptions& options,
                                  const ConnectionRequestInfo& info) = 0;

  // If Advertising is active, stop it, and change CLientProxy state,
  // otherwise do nothing.
  virtual void StopAdvertising(ClientProxy* client) = 0;

  // Start discovery of endpoints that may be advertising.
  // Update ClientProxy state once discovery started.
  // DiscoveryListener will get called in case of any event.
  virtual Status StartDiscovery(ClientProxy* client,
                                const std::string& service_id,
                                const ConnectionOptions& options,
                                const DiscoveryListener& listener) = 0;

  // If Discovery is active, stop it, and change CLientProxy state,
  // otherwise do nothing.
  virtual void StopDiscovery(ClientProxy* client) = 0;

  // If remote endpoint has been successfully discovered, request it to form a
  // connection, update state on ClientProxy.
  virtual Status RequestConnection(ClientProxy* client,
                                   const std::string& endpoint_id,
                                   const ConnectionRequestInfo& info) = 0;

  // Either party may call this to accept connection on their part.
  // Until both parties call it, connection will not reach a data phase.
  // Update state in ClientProxy.
  virtual Status AcceptConnection(ClientProxy* clientProxy,
                                  const std::string& endpoint_id,
                                  const PayloadListener& payload_listener) = 0;

  // Either party may call this to reject connection on their part before
  // connection reaches data phase. If either party does call it, connection
  // will terminate. Update state in ClientProxy.
  virtual Status RejectConnection(ClientProxy* client,
                                  const std::string& endpoint_id) = 0;
};

}  // namespace connections
}  // namespace nearby
}  // namespace location

#endif  // CORE_V2_INTERNAL_PCP_HANDLER_H_
