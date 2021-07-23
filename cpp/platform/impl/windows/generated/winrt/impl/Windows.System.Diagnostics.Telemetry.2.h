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

// WARNING: Please don't edit this file. It was generated by C++/WinRT
// v2.0.210505.3

#ifndef WINRT_Windows_System_Diagnostics_Telemetry_2_H
#define WINRT_Windows_System_Diagnostics_Telemetry_2_H
#include "winrt/impl/Windows.System.Diagnostics.Telemetry.1.h"
WINRT_EXPORT namespace winrt::Windows::System::Diagnostics::Telemetry {
  struct PlatformTelemetryClient {
    PlatformTelemetryClient() = delete;
    static auto Register(param::hstring const& id);
    static auto Register(
        param::hstring const& id,
        winrt::Windows::System::Diagnostics::Telemetry::
            PlatformTelemetryRegistrationSettings const& settings);
  };
  struct __declspec(empty_bases) PlatformTelemetryRegistrationResult
      : winrt::Windows::System::Diagnostics::Telemetry::
            IPlatformTelemetryRegistrationResult {
    PlatformTelemetryRegistrationResult(std::nullptr_t) noexcept {}
    PlatformTelemetryRegistrationResult(void* ptr,
                                        take_ownership_from_abi_t) noexcept
        : winrt::Windows::System::Diagnostics::Telemetry::
              IPlatformTelemetryRegistrationResult(ptr,
                                                   take_ownership_from_abi) {}
    PlatformTelemetryRegistrationResult(
        PlatformTelemetryRegistrationResult const&) noexcept = default;
    PlatformTelemetryRegistrationResult(
        PlatformTelemetryRegistrationResult&&) noexcept = default;
    PlatformTelemetryRegistrationResult& operator=(
        PlatformTelemetryRegistrationResult const&) & noexcept = default;
    PlatformTelemetryRegistrationResult& operator=(
        PlatformTelemetryRegistrationResult&&) & noexcept = default;
  };
  struct __declspec(empty_bases) PlatformTelemetryRegistrationSettings
      : winrt::Windows::System::Diagnostics::Telemetry::
            IPlatformTelemetryRegistrationSettings {
    PlatformTelemetryRegistrationSettings(std::nullptr_t) noexcept {}
    PlatformTelemetryRegistrationSettings(void* ptr,
                                          take_ownership_from_abi_t) noexcept
        : winrt::Windows::System::Diagnostics::Telemetry::
              IPlatformTelemetryRegistrationSettings(ptr,
                                                     take_ownership_from_abi) {}
    PlatformTelemetryRegistrationSettings();
    PlatformTelemetryRegistrationSettings(
        PlatformTelemetryRegistrationSettings const&) noexcept = default;
    PlatformTelemetryRegistrationSettings(
        PlatformTelemetryRegistrationSettings&&) noexcept = default;
    PlatformTelemetryRegistrationSettings& operator=(
        PlatformTelemetryRegistrationSettings const&) & noexcept = default;
    PlatformTelemetryRegistrationSettings& operator=(
        PlatformTelemetryRegistrationSettings&&) & noexcept = default;
  };
}
#endif
