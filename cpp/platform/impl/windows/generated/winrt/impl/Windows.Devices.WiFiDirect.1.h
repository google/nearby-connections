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

#ifndef WINRT_Windows_Devices_WiFiDirect_1_H
#define WINRT_Windows_Devices_WiFiDirect_1_H
#include "winrt/impl/Windows.Devices.WiFiDirect.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::WiFiDirect {
  struct __declspec(empty_bases) IWiFiDirectAdvertisement
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectAdvertisement> {
    IWiFiDirectAdvertisement(std::nullptr_t = nullptr) noexcept {}
    IWiFiDirectAdvertisement(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWiFiDirectAdvertisement(IWiFiDirectAdvertisement const&) noexcept =
        default;
    IWiFiDirectAdvertisement(IWiFiDirectAdvertisement&&) noexcept = default;
    IWiFiDirectAdvertisement& operator=(
        IWiFiDirectAdvertisement const&) & noexcept = default;
    IWiFiDirectAdvertisement& operator=(IWiFiDirectAdvertisement&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IWiFiDirectAdvertisement2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectAdvertisement2> {
    IWiFiDirectAdvertisement2(std::nullptr_t = nullptr) noexcept {}
    IWiFiDirectAdvertisement2(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWiFiDirectAdvertisement2(IWiFiDirectAdvertisement2 const&) noexcept =
        default;
    IWiFiDirectAdvertisement2(IWiFiDirectAdvertisement2&&) noexcept = default;
    IWiFiDirectAdvertisement2& operator=(
        IWiFiDirectAdvertisement2 const&) & noexcept = default;
    IWiFiDirectAdvertisement2& operator=(
        IWiFiDirectAdvertisement2&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IWiFiDirectAdvertisementPublisher
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectAdvertisementPublisher> {
    IWiFiDirectAdvertisementPublisher(std::nullptr_t = nullptr) noexcept {}
    IWiFiDirectAdvertisementPublisher(void* ptr,
                                      take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWiFiDirectAdvertisementPublisher(
        IWiFiDirectAdvertisementPublisher const&) noexcept = default;
    IWiFiDirectAdvertisementPublisher(
        IWiFiDirectAdvertisementPublisher&&) noexcept = default;
    IWiFiDirectAdvertisementPublisher& operator=(
        IWiFiDirectAdvertisementPublisher const&) & noexcept = default;
    IWiFiDirectAdvertisementPublisher& operator=(
        IWiFiDirectAdvertisementPublisher&&) & noexcept = default;
  };
  struct __declspec(empty_bases)
      IWiFiDirectAdvertisementPublisherStatusChangedEventArgs
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<
            IWiFiDirectAdvertisementPublisherStatusChangedEventArgs> {
    IWiFiDirectAdvertisementPublisherStatusChangedEventArgs(
        std::nullptr_t = nullptr) noexcept {}
    IWiFiDirectAdvertisementPublisherStatusChangedEventArgs(
        void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWiFiDirectAdvertisementPublisherStatusChangedEventArgs(
        IWiFiDirectAdvertisementPublisherStatusChangedEventArgs const&) noexcept =
        default;
    IWiFiDirectAdvertisementPublisherStatusChangedEventArgs(
        IWiFiDirectAdvertisementPublisherStatusChangedEventArgs&&) noexcept =
        default;
    IWiFiDirectAdvertisementPublisherStatusChangedEventArgs& operator=(
        IWiFiDirectAdvertisementPublisherStatusChangedEventArgs const&) & noexcept =
        default;
    IWiFiDirectAdvertisementPublisherStatusChangedEventArgs& operator=(
        IWiFiDirectAdvertisementPublisherStatusChangedEventArgs&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IWiFiDirectConnectionListener
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectConnectionListener> {
    IWiFiDirectConnectionListener(std::nullptr_t = nullptr) noexcept {}
    IWiFiDirectConnectionListener(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWiFiDirectConnectionListener(
        IWiFiDirectConnectionListener const&) noexcept = default;
    IWiFiDirectConnectionListener(IWiFiDirectConnectionListener&&) noexcept =
        default;
    IWiFiDirectConnectionListener& operator=(
        IWiFiDirectConnectionListener const&) & noexcept = default;
    IWiFiDirectConnectionListener& operator=(
        IWiFiDirectConnectionListener&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IWiFiDirectConnectionParameters
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectConnectionParameters> {
    IWiFiDirectConnectionParameters(std::nullptr_t = nullptr) noexcept {}
    IWiFiDirectConnectionParameters(void* ptr,
                                    take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWiFiDirectConnectionParameters(
        IWiFiDirectConnectionParameters const&) noexcept = default;
    IWiFiDirectConnectionParameters(
        IWiFiDirectConnectionParameters&&) noexcept = default;
    IWiFiDirectConnectionParameters& operator=(
        IWiFiDirectConnectionParameters const&) & noexcept = default;
    IWiFiDirectConnectionParameters& operator=(
        IWiFiDirectConnectionParameters&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IWiFiDirectConnectionParameters2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectConnectionParameters2> {
    IWiFiDirectConnectionParameters2(std::nullptr_t = nullptr) noexcept {}
    IWiFiDirectConnectionParameters2(void* ptr,
                                     take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWiFiDirectConnectionParameters2(
        IWiFiDirectConnectionParameters2 const&) noexcept = default;
    IWiFiDirectConnectionParameters2(
        IWiFiDirectConnectionParameters2&&) noexcept = default;
    IWiFiDirectConnectionParameters2& operator=(
        IWiFiDirectConnectionParameters2 const&) & noexcept = default;
    IWiFiDirectConnectionParameters2& operator=(
        IWiFiDirectConnectionParameters2&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IWiFiDirectConnectionParametersStatics
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectConnectionParametersStatics> {
    IWiFiDirectConnectionParametersStatics(std::nullptr_t = nullptr) noexcept {}
    IWiFiDirectConnectionParametersStatics(void* ptr,
                                           take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWiFiDirectConnectionParametersStatics(
        IWiFiDirectConnectionParametersStatics const&) noexcept = default;
    IWiFiDirectConnectionParametersStatics(
        IWiFiDirectConnectionParametersStatics&&) noexcept = default;
    IWiFiDirectConnectionParametersStatics& operator=(
        IWiFiDirectConnectionParametersStatics const&) & noexcept = default;
    IWiFiDirectConnectionParametersStatics& operator=(
        IWiFiDirectConnectionParametersStatics&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IWiFiDirectConnectionRequest
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectConnectionRequest>,
        impl::require<
            winrt::Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest,
            winrt::Windows::Foundation::IClosable> {
    IWiFiDirectConnectionRequest(std::nullptr_t = nullptr) noexcept {}
    IWiFiDirectConnectionRequest(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWiFiDirectConnectionRequest(IWiFiDirectConnectionRequest const&) noexcept =
        default;
    IWiFiDirectConnectionRequest(IWiFiDirectConnectionRequest&&) noexcept =
        default;
    IWiFiDirectConnectionRequest& operator=(
        IWiFiDirectConnectionRequest const&) & noexcept = default;
    IWiFiDirectConnectionRequest& operator=(
        IWiFiDirectConnectionRequest&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IWiFiDirectConnectionRequestedEventArgs
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectConnectionRequestedEventArgs> {
    IWiFiDirectConnectionRequestedEventArgs(std::nullptr_t = nullptr) noexcept {
    }
    IWiFiDirectConnectionRequestedEventArgs(void* ptr,
                                            take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWiFiDirectConnectionRequestedEventArgs(
        IWiFiDirectConnectionRequestedEventArgs const&) noexcept = default;
    IWiFiDirectConnectionRequestedEventArgs(
        IWiFiDirectConnectionRequestedEventArgs&&) noexcept = default;
    IWiFiDirectConnectionRequestedEventArgs& operator=(
        IWiFiDirectConnectionRequestedEventArgs const&) & noexcept = default;
    IWiFiDirectConnectionRequestedEventArgs& operator=(
        IWiFiDirectConnectionRequestedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IWiFiDirectDevice
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectDevice>,
        impl::require<winrt::Windows::Devices::WiFiDirect::IWiFiDirectDevice,
                      winrt::Windows::Foundation::IClosable> {
    IWiFiDirectDevice(std::nullptr_t = nullptr) noexcept {}
    IWiFiDirectDevice(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWiFiDirectDevice(IWiFiDirectDevice const&) noexcept = default;
    IWiFiDirectDevice(IWiFiDirectDevice&&) noexcept = default;
    IWiFiDirectDevice& operator=(IWiFiDirectDevice const&) & noexcept = default;
    IWiFiDirectDevice& operator=(IWiFiDirectDevice&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IWiFiDirectDeviceStatics
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectDeviceStatics> {
    IWiFiDirectDeviceStatics(std::nullptr_t = nullptr) noexcept {}
    IWiFiDirectDeviceStatics(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWiFiDirectDeviceStatics(IWiFiDirectDeviceStatics const&) noexcept =
        default;
    IWiFiDirectDeviceStatics(IWiFiDirectDeviceStatics&&) noexcept = default;
    IWiFiDirectDeviceStatics& operator=(
        IWiFiDirectDeviceStatics const&) & noexcept = default;
    IWiFiDirectDeviceStatics& operator=(IWiFiDirectDeviceStatics&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IWiFiDirectDeviceStatics2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectDeviceStatics2> {
    IWiFiDirectDeviceStatics2(std::nullptr_t = nullptr) noexcept {}
    IWiFiDirectDeviceStatics2(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWiFiDirectDeviceStatics2(IWiFiDirectDeviceStatics2 const&) noexcept =
        default;
    IWiFiDirectDeviceStatics2(IWiFiDirectDeviceStatics2&&) noexcept = default;
    IWiFiDirectDeviceStatics2& operator=(
        IWiFiDirectDeviceStatics2 const&) & noexcept = default;
    IWiFiDirectDeviceStatics2& operator=(
        IWiFiDirectDeviceStatics2&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IWiFiDirectInformationElement
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectInformationElement> {
    IWiFiDirectInformationElement(std::nullptr_t = nullptr) noexcept {}
    IWiFiDirectInformationElement(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWiFiDirectInformationElement(
        IWiFiDirectInformationElement const&) noexcept = default;
    IWiFiDirectInformationElement(IWiFiDirectInformationElement&&) noexcept =
        default;
    IWiFiDirectInformationElement& operator=(
        IWiFiDirectInformationElement const&) & noexcept = default;
    IWiFiDirectInformationElement& operator=(
        IWiFiDirectInformationElement&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IWiFiDirectInformationElementStatics
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectInformationElementStatics> {
    IWiFiDirectInformationElementStatics(std::nullptr_t = nullptr) noexcept {}
    IWiFiDirectInformationElementStatics(void* ptr,
                                         take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWiFiDirectInformationElementStatics(
        IWiFiDirectInformationElementStatics const&) noexcept = default;
    IWiFiDirectInformationElementStatics(
        IWiFiDirectInformationElementStatics&&) noexcept = default;
    IWiFiDirectInformationElementStatics& operator=(
        IWiFiDirectInformationElementStatics const&) & noexcept = default;
    IWiFiDirectInformationElementStatics& operator=(
        IWiFiDirectInformationElementStatics&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IWiFiDirectLegacySettings
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectLegacySettings> {
    IWiFiDirectLegacySettings(std::nullptr_t = nullptr) noexcept {}
    IWiFiDirectLegacySettings(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWiFiDirectLegacySettings(IWiFiDirectLegacySettings const&) noexcept =
        default;
    IWiFiDirectLegacySettings(IWiFiDirectLegacySettings&&) noexcept = default;
    IWiFiDirectLegacySettings& operator=(
        IWiFiDirectLegacySettings const&) & noexcept = default;
    IWiFiDirectLegacySettings& operator=(
        IWiFiDirectLegacySettings&&) & noexcept = default;
  };
}
#endif
