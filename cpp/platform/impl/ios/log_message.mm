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

#include "platform/impl/ios/log_message.h"

#include <algorithm>

namespace location {
namespace nearby {
namespace ios {

api::LogMessage::Severity kMinLogSeverity = api::LogMessage::Severity::kInfo;

inline absl::LogSeverity ConvertSeverity(api::LogMessage::Severity severity) {
  switch (severity) {
    case api::LogMessage::Severity::kInfo:
      return absl::LogSeverity::kInfo;
    case api::LogMessage::Severity::kWarning:
      return absl::LogSeverity::kWarning;
    case api::LogMessage::Severity::kError:
      return absl::LogSeverity::kError;
    case api::LogMessage::Severity::kFatal:
      return absl::LogSeverity::kFatal;
  }
}

LogMessage::LogMessage(const char* file, int line, Severity severity)
    : log_streamer_(ConvertSeverity(severity), file, line) {}

LogMessage::~LogMessage() = default;

std::ostream& LogMessage::Stream() { return log_streamer_.stream(); }

}  // namespace ios

namespace api {

void LogMessage::SetMinLogSeverity(Severity severity) {
  ios::kMinLogSeverity = severity;
}

bool LogMessage::ShouldCreateLogMessage(Severity severity) {
  return severity >= ios::kMinLogSeverity;
}

}  // namespace api
}  // namespace nearby
}  // namespace location
