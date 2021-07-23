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

#ifndef WINRT_Windows_Devices_Spi_1_H
#define WINRT_Windows_Devices_Spi_1_H
#include "winrt/impl/Windows.Devices.Spi.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Spi {
  struct __declspec(empty_bases) ISpiBusInfo
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpiBusInfo> {
    ISpiBusInfo(std::nullptr_t = nullptr) noexcept {}
    ISpiBusInfo(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISpiBusInfo(ISpiBusInfo const&) noexcept = default;
    ISpiBusInfo(ISpiBusInfo&&) noexcept = default;
    ISpiBusInfo& operator=(ISpiBusInfo const&) & noexcept = default;
    ISpiBusInfo& operator=(ISpiBusInfo&&) & noexcept = default;
  };
  struct __declspec(empty_bases) ISpiConnectionSettings
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpiConnectionSettings> {
    ISpiConnectionSettings(std::nullptr_t = nullptr) noexcept {}
    ISpiConnectionSettings(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISpiConnectionSettings(ISpiConnectionSettings const&) noexcept = default;
    ISpiConnectionSettings(ISpiConnectionSettings&&) noexcept = default;
    ISpiConnectionSettings& operator=(
        ISpiConnectionSettings const&) & noexcept = default;
    ISpiConnectionSettings& operator=(ISpiConnectionSettings&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) ISpiConnectionSettingsFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpiConnectionSettingsFactory> {
    ISpiConnectionSettingsFactory(std::nullptr_t = nullptr) noexcept {}
    ISpiConnectionSettingsFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISpiConnectionSettingsFactory(
        ISpiConnectionSettingsFactory const&) noexcept = default;
    ISpiConnectionSettingsFactory(ISpiConnectionSettingsFactory&&) noexcept =
        default;
    ISpiConnectionSettingsFactory& operator=(
        ISpiConnectionSettingsFactory const&) & noexcept = default;
    ISpiConnectionSettingsFactory& operator=(
        ISpiConnectionSettingsFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases) ISpiController
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpiController> {
    ISpiController(std::nullptr_t = nullptr) noexcept {}
    ISpiController(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISpiController(ISpiController const&) noexcept = default;
    ISpiController(ISpiController&&) noexcept = default;
    ISpiController& operator=(ISpiController const&) & noexcept = default;
    ISpiController& operator=(ISpiController&&) & noexcept = default;
  };
  struct __declspec(empty_bases) ISpiControllerStatics
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpiControllerStatics> {
    ISpiControllerStatics(std::nullptr_t = nullptr) noexcept {}
    ISpiControllerStatics(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISpiControllerStatics(ISpiControllerStatics const&) noexcept = default;
    ISpiControllerStatics(ISpiControllerStatics&&) noexcept = default;
    ISpiControllerStatics& operator=(ISpiControllerStatics const&) & noexcept =
        default;
    ISpiControllerStatics& operator=(ISpiControllerStatics&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) ISpiDevice
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpiDevice>,
        impl::require<winrt::Windows::Devices::Spi::ISpiDevice,
                      winrt::Windows::Foundation::IClosable> {
    ISpiDevice(std::nullptr_t = nullptr) noexcept {}
    ISpiDevice(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISpiDevice(ISpiDevice const&) noexcept = default;
    ISpiDevice(ISpiDevice&&) noexcept = default;
    ISpiDevice& operator=(ISpiDevice const&) & noexcept = default;
    ISpiDevice& operator=(ISpiDevice&&) & noexcept = default;
  };
  struct __declspec(empty_bases) ISpiDeviceStatics
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpiDeviceStatics> {
    ISpiDeviceStatics(std::nullptr_t = nullptr) noexcept {}
    ISpiDeviceStatics(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISpiDeviceStatics(ISpiDeviceStatics const&) noexcept = default;
    ISpiDeviceStatics(ISpiDeviceStatics&&) noexcept = default;
    ISpiDeviceStatics& operator=(ISpiDeviceStatics const&) & noexcept = default;
    ISpiDeviceStatics& operator=(ISpiDeviceStatics&&) & noexcept = default;
  };
}
#endif
