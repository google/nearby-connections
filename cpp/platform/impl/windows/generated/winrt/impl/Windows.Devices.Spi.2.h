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

#ifndef WINRT_Windows_Devices_Spi_2_H
#define WINRT_Windows_Devices_Spi_2_H
#include "winrt/impl/Windows.Devices.Spi.1.h"
#include "winrt/impl/Windows.Devices.Spi.Provider.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Spi {
  struct __declspec(empty_bases) SpiBusInfo
      : winrt::Windows::Devices::Spi::ISpiBusInfo {
    SpiBusInfo(std::nullptr_t) noexcept {}
    SpiBusInfo(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Devices::Spi::ISpiBusInfo(ptr,
                                                    take_ownership_from_abi) {}
    SpiBusInfo(SpiBusInfo const&) noexcept = default;
    SpiBusInfo(SpiBusInfo&&) noexcept = default;
    SpiBusInfo& operator=(SpiBusInfo const&) & noexcept = default;
    SpiBusInfo& operator=(SpiBusInfo&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SpiConnectionSettings
      : winrt::Windows::Devices::Spi::ISpiConnectionSettings {
    SpiConnectionSettings(std::nullptr_t) noexcept {}
    SpiConnectionSettings(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Devices::Spi::ISpiConnectionSettings(
              ptr, take_ownership_from_abi) {}
    explicit SpiConnectionSettings(int32_t chipSelectLine);
    SpiConnectionSettings(SpiConnectionSettings const&) noexcept = default;
    SpiConnectionSettings(SpiConnectionSettings&&) noexcept = default;
    SpiConnectionSettings& operator=(SpiConnectionSettings const&) & noexcept =
        default;
    SpiConnectionSettings& operator=(SpiConnectionSettings&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) SpiController
      : winrt::Windows::Devices::Spi::ISpiController {
    SpiController(std::nullptr_t) noexcept {}
    SpiController(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Devices::Spi::ISpiController(
              ptr, take_ownership_from_abi) {}
    SpiController(SpiController const&) noexcept = default;
    SpiController(SpiController&&) noexcept = default;
    SpiController& operator=(SpiController const&) & noexcept = default;
    SpiController& operator=(SpiController&&) & noexcept = default;
    static auto GetDefaultAsync();
    static auto GetControllersAsync(
        winrt::Windows::Devices::Spi::Provider::ISpiProvider const& provider);
  };
  struct __declspec(empty_bases) SpiDevice
      : winrt::Windows::Devices::Spi::ISpiDevice {
    SpiDevice(std::nullptr_t) noexcept {}
    SpiDevice(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Devices::Spi::ISpiDevice(ptr,
                                                   take_ownership_from_abi) {}
    SpiDevice(SpiDevice const&) noexcept = default;
    SpiDevice(SpiDevice&&) noexcept = default;
    SpiDevice& operator=(SpiDevice const&) & noexcept = default;
    SpiDevice& operator=(SpiDevice&&) & noexcept = default;
    static auto GetDeviceSelector();
    static auto GetDeviceSelector(param::hstring const& friendlyName);
    static auto GetBusInfo(param::hstring const& busId);
    static auto FromIdAsync(
        param::hstring const& busId,
        winrt::Windows::Devices::Spi::SpiConnectionSettings const& settings);
  };
}
#endif
