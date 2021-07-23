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

#ifndef WINRT_Windows_Devices_Bluetooth_Advertisement_1_H
#define WINRT_Windows_Devices_Bluetooth_Advertisement_1_H
#include "winrt/impl/Windows.Devices.Bluetooth.Advertisement.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::Advertisement {
  struct __declspec(empty_bases) IBluetoothLEAdvertisement
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBluetoothLEAdvertisement> {
    IBluetoothLEAdvertisement(std::nullptr_t = nullptr) noexcept {}
    IBluetoothLEAdvertisement(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBluetoothLEAdvertisement(IBluetoothLEAdvertisement const&) noexcept =
        default;
    IBluetoothLEAdvertisement(IBluetoothLEAdvertisement&&) noexcept = default;
    IBluetoothLEAdvertisement& operator=(
        IBluetoothLEAdvertisement const&) & noexcept = default;
    IBluetoothLEAdvertisement& operator=(
        IBluetoothLEAdvertisement&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBluetoothLEAdvertisementBytePattern
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBluetoothLEAdvertisementBytePattern> {
    IBluetoothLEAdvertisementBytePattern(std::nullptr_t = nullptr) noexcept {}
    IBluetoothLEAdvertisementBytePattern(void* ptr,
                                         take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBluetoothLEAdvertisementBytePattern(
        IBluetoothLEAdvertisementBytePattern const&) noexcept = default;
    IBluetoothLEAdvertisementBytePattern(
        IBluetoothLEAdvertisementBytePattern&&) noexcept = default;
    IBluetoothLEAdvertisementBytePattern& operator=(
        IBluetoothLEAdvertisementBytePattern const&) & noexcept = default;
    IBluetoothLEAdvertisementBytePattern& operator=(
        IBluetoothLEAdvertisementBytePattern&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBluetoothLEAdvertisementBytePatternFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBluetoothLEAdvertisementBytePatternFactory> {
    IBluetoothLEAdvertisementBytePatternFactory(
        std::nullptr_t = nullptr) noexcept {}
    IBluetoothLEAdvertisementBytePatternFactory(
        void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBluetoothLEAdvertisementBytePatternFactory(
        IBluetoothLEAdvertisementBytePatternFactory const&) noexcept = default;
    IBluetoothLEAdvertisementBytePatternFactory(
        IBluetoothLEAdvertisementBytePatternFactory&&) noexcept = default;
    IBluetoothLEAdvertisementBytePatternFactory& operator=(
        IBluetoothLEAdvertisementBytePatternFactory const&) & noexcept =
        default;
    IBluetoothLEAdvertisementBytePatternFactory& operator=(
        IBluetoothLEAdvertisementBytePatternFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBluetoothLEAdvertisementDataSection
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBluetoothLEAdvertisementDataSection> {
    IBluetoothLEAdvertisementDataSection(std::nullptr_t = nullptr) noexcept {}
    IBluetoothLEAdvertisementDataSection(void* ptr,
                                         take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBluetoothLEAdvertisementDataSection(
        IBluetoothLEAdvertisementDataSection const&) noexcept = default;
    IBluetoothLEAdvertisementDataSection(
        IBluetoothLEAdvertisementDataSection&&) noexcept = default;
    IBluetoothLEAdvertisementDataSection& operator=(
        IBluetoothLEAdvertisementDataSection const&) & noexcept = default;
    IBluetoothLEAdvertisementDataSection& operator=(
        IBluetoothLEAdvertisementDataSection&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBluetoothLEAdvertisementDataSectionFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBluetoothLEAdvertisementDataSectionFactory> {
    IBluetoothLEAdvertisementDataSectionFactory(
        std::nullptr_t = nullptr) noexcept {}
    IBluetoothLEAdvertisementDataSectionFactory(
        void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBluetoothLEAdvertisementDataSectionFactory(
        IBluetoothLEAdvertisementDataSectionFactory const&) noexcept = default;
    IBluetoothLEAdvertisementDataSectionFactory(
        IBluetoothLEAdvertisementDataSectionFactory&&) noexcept = default;
    IBluetoothLEAdvertisementDataSectionFactory& operator=(
        IBluetoothLEAdvertisementDataSectionFactory const&) & noexcept =
        default;
    IBluetoothLEAdvertisementDataSectionFactory& operator=(
        IBluetoothLEAdvertisementDataSectionFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBluetoothLEAdvertisementDataTypesStatics
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBluetoothLEAdvertisementDataTypesStatics> {
    IBluetoothLEAdvertisementDataTypesStatics(
        std::nullptr_t = nullptr) noexcept {}
    IBluetoothLEAdvertisementDataTypesStatics(
        void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBluetoothLEAdvertisementDataTypesStatics(
        IBluetoothLEAdvertisementDataTypesStatics const&) noexcept = default;
    IBluetoothLEAdvertisementDataTypesStatics(
        IBluetoothLEAdvertisementDataTypesStatics&&) noexcept = default;
    IBluetoothLEAdvertisementDataTypesStatics& operator=(
        IBluetoothLEAdvertisementDataTypesStatics const&) & noexcept = default;
    IBluetoothLEAdvertisementDataTypesStatics& operator=(
        IBluetoothLEAdvertisementDataTypesStatics&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBluetoothLEAdvertisementFilter
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBluetoothLEAdvertisementFilter> {
    IBluetoothLEAdvertisementFilter(std::nullptr_t = nullptr) noexcept {}
    IBluetoothLEAdvertisementFilter(void* ptr,
                                    take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBluetoothLEAdvertisementFilter(
        IBluetoothLEAdvertisementFilter const&) noexcept = default;
    IBluetoothLEAdvertisementFilter(
        IBluetoothLEAdvertisementFilter&&) noexcept = default;
    IBluetoothLEAdvertisementFilter& operator=(
        IBluetoothLEAdvertisementFilter const&) & noexcept = default;
    IBluetoothLEAdvertisementFilter& operator=(
        IBluetoothLEAdvertisementFilter&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBluetoothLEAdvertisementPublisher
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBluetoothLEAdvertisementPublisher> {
    IBluetoothLEAdvertisementPublisher(std::nullptr_t = nullptr) noexcept {}
    IBluetoothLEAdvertisementPublisher(void* ptr,
                                       take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBluetoothLEAdvertisementPublisher(
        IBluetoothLEAdvertisementPublisher const&) noexcept = default;
    IBluetoothLEAdvertisementPublisher(
        IBluetoothLEAdvertisementPublisher&&) noexcept = default;
    IBluetoothLEAdvertisementPublisher& operator=(
        IBluetoothLEAdvertisementPublisher const&) & noexcept = default;
    IBluetoothLEAdvertisementPublisher& operator=(
        IBluetoothLEAdvertisementPublisher&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBluetoothLEAdvertisementPublisher2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBluetoothLEAdvertisementPublisher2> {
    IBluetoothLEAdvertisementPublisher2(std::nullptr_t = nullptr) noexcept {}
    IBluetoothLEAdvertisementPublisher2(void* ptr,
                                        take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBluetoothLEAdvertisementPublisher2(
        IBluetoothLEAdvertisementPublisher2 const&) noexcept = default;
    IBluetoothLEAdvertisementPublisher2(
        IBluetoothLEAdvertisementPublisher2&&) noexcept = default;
    IBluetoothLEAdvertisementPublisher2& operator=(
        IBluetoothLEAdvertisementPublisher2 const&) & noexcept = default;
    IBluetoothLEAdvertisementPublisher2& operator=(
        IBluetoothLEAdvertisementPublisher2&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBluetoothLEAdvertisementPublisherFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBluetoothLEAdvertisementPublisherFactory> {
    IBluetoothLEAdvertisementPublisherFactory(
        std::nullptr_t = nullptr) noexcept {}
    IBluetoothLEAdvertisementPublisherFactory(
        void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBluetoothLEAdvertisementPublisherFactory(
        IBluetoothLEAdvertisementPublisherFactory const&) noexcept = default;
    IBluetoothLEAdvertisementPublisherFactory(
        IBluetoothLEAdvertisementPublisherFactory&&) noexcept = default;
    IBluetoothLEAdvertisementPublisherFactory& operator=(
        IBluetoothLEAdvertisementPublisherFactory const&) & noexcept = default;
    IBluetoothLEAdvertisementPublisherFactory& operator=(
        IBluetoothLEAdvertisementPublisherFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases)
      IBluetoothLEAdvertisementPublisherStatusChangedEventArgs
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<
            IBluetoothLEAdvertisementPublisherStatusChangedEventArgs> {
    IBluetoothLEAdvertisementPublisherStatusChangedEventArgs(
        std::nullptr_t = nullptr) noexcept {}
    IBluetoothLEAdvertisementPublisherStatusChangedEventArgs(
        void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBluetoothLEAdvertisementPublisherStatusChangedEventArgs(
        IBluetoothLEAdvertisementPublisherStatusChangedEventArgs const&) noexcept =
        default;
    IBluetoothLEAdvertisementPublisherStatusChangedEventArgs(
        IBluetoothLEAdvertisementPublisherStatusChangedEventArgs&&) noexcept =
        default;
    IBluetoothLEAdvertisementPublisherStatusChangedEventArgs& operator=(
        IBluetoothLEAdvertisementPublisherStatusChangedEventArgs const&) & noexcept =
        default;
    IBluetoothLEAdvertisementPublisherStatusChangedEventArgs& operator=(
        IBluetoothLEAdvertisementPublisherStatusChangedEventArgs&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases)
      IBluetoothLEAdvertisementPublisherStatusChangedEventArgs2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<
            IBluetoothLEAdvertisementPublisherStatusChangedEventArgs2> {
    IBluetoothLEAdvertisementPublisherStatusChangedEventArgs2(
        std::nullptr_t = nullptr) noexcept {}
    IBluetoothLEAdvertisementPublisherStatusChangedEventArgs2(
        void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBluetoothLEAdvertisementPublisherStatusChangedEventArgs2(
        IBluetoothLEAdvertisementPublisherStatusChangedEventArgs2 const&) noexcept =
        default;
    IBluetoothLEAdvertisementPublisherStatusChangedEventArgs2(
        IBluetoothLEAdvertisementPublisherStatusChangedEventArgs2&&) noexcept =
        default;
    IBluetoothLEAdvertisementPublisherStatusChangedEventArgs2& operator=(
        IBluetoothLEAdvertisementPublisherStatusChangedEventArgs2 const&) & noexcept =
        default;
    IBluetoothLEAdvertisementPublisherStatusChangedEventArgs2& operator=(
        IBluetoothLEAdvertisementPublisherStatusChangedEventArgs2&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IBluetoothLEAdvertisementReceivedEventArgs
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBluetoothLEAdvertisementReceivedEventArgs> {
    IBluetoothLEAdvertisementReceivedEventArgs(
        std::nullptr_t = nullptr) noexcept {}
    IBluetoothLEAdvertisementReceivedEventArgs(
        void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBluetoothLEAdvertisementReceivedEventArgs(
        IBluetoothLEAdvertisementReceivedEventArgs const&) noexcept = default;
    IBluetoothLEAdvertisementReceivedEventArgs(
        IBluetoothLEAdvertisementReceivedEventArgs&&) noexcept = default;
    IBluetoothLEAdvertisementReceivedEventArgs& operator=(
        IBluetoothLEAdvertisementReceivedEventArgs const&) & noexcept = default;
    IBluetoothLEAdvertisementReceivedEventArgs& operator=(
        IBluetoothLEAdvertisementReceivedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBluetoothLEAdvertisementReceivedEventArgs2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBluetoothLEAdvertisementReceivedEventArgs2> {
    IBluetoothLEAdvertisementReceivedEventArgs2(
        std::nullptr_t = nullptr) noexcept {}
    IBluetoothLEAdvertisementReceivedEventArgs2(
        void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBluetoothLEAdvertisementReceivedEventArgs2(
        IBluetoothLEAdvertisementReceivedEventArgs2 const&) noexcept = default;
    IBluetoothLEAdvertisementReceivedEventArgs2(
        IBluetoothLEAdvertisementReceivedEventArgs2&&) noexcept = default;
    IBluetoothLEAdvertisementReceivedEventArgs2& operator=(
        IBluetoothLEAdvertisementReceivedEventArgs2 const&) & noexcept =
        default;
    IBluetoothLEAdvertisementReceivedEventArgs2& operator=(
        IBluetoothLEAdvertisementReceivedEventArgs2&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBluetoothLEAdvertisementWatcher
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBluetoothLEAdvertisementWatcher> {
    IBluetoothLEAdvertisementWatcher(std::nullptr_t = nullptr) noexcept {}
    IBluetoothLEAdvertisementWatcher(void* ptr,
                                     take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBluetoothLEAdvertisementWatcher(
        IBluetoothLEAdvertisementWatcher const&) noexcept = default;
    IBluetoothLEAdvertisementWatcher(
        IBluetoothLEAdvertisementWatcher&&) noexcept = default;
    IBluetoothLEAdvertisementWatcher& operator=(
        IBluetoothLEAdvertisementWatcher const&) & noexcept = default;
    IBluetoothLEAdvertisementWatcher& operator=(
        IBluetoothLEAdvertisementWatcher&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBluetoothLEAdvertisementWatcher2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBluetoothLEAdvertisementWatcher2> {
    IBluetoothLEAdvertisementWatcher2(std::nullptr_t = nullptr) noexcept {}
    IBluetoothLEAdvertisementWatcher2(void* ptr,
                                      take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBluetoothLEAdvertisementWatcher2(
        IBluetoothLEAdvertisementWatcher2 const&) noexcept = default;
    IBluetoothLEAdvertisementWatcher2(
        IBluetoothLEAdvertisementWatcher2&&) noexcept = default;
    IBluetoothLEAdvertisementWatcher2& operator=(
        IBluetoothLEAdvertisementWatcher2 const&) & noexcept = default;
    IBluetoothLEAdvertisementWatcher2& operator=(
        IBluetoothLEAdvertisementWatcher2&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBluetoothLEAdvertisementWatcherFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBluetoothLEAdvertisementWatcherFactory> {
    IBluetoothLEAdvertisementWatcherFactory(std::nullptr_t = nullptr) noexcept {
    }
    IBluetoothLEAdvertisementWatcherFactory(void* ptr,
                                            take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBluetoothLEAdvertisementWatcherFactory(
        IBluetoothLEAdvertisementWatcherFactory const&) noexcept = default;
    IBluetoothLEAdvertisementWatcherFactory(
        IBluetoothLEAdvertisementWatcherFactory&&) noexcept = default;
    IBluetoothLEAdvertisementWatcherFactory& operator=(
        IBluetoothLEAdvertisementWatcherFactory const&) & noexcept = default;
    IBluetoothLEAdvertisementWatcherFactory& operator=(
        IBluetoothLEAdvertisementWatcherFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases)
      IBluetoothLEAdvertisementWatcherStoppedEventArgs
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBluetoothLEAdvertisementWatcherStoppedEventArgs> {
    IBluetoothLEAdvertisementWatcherStoppedEventArgs(
        std::nullptr_t = nullptr) noexcept {}
    IBluetoothLEAdvertisementWatcherStoppedEventArgs(
        void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBluetoothLEAdvertisementWatcherStoppedEventArgs(
        IBluetoothLEAdvertisementWatcherStoppedEventArgs const&) noexcept =
        default;
    IBluetoothLEAdvertisementWatcherStoppedEventArgs(
        IBluetoothLEAdvertisementWatcherStoppedEventArgs&&) noexcept = default;
    IBluetoothLEAdvertisementWatcherStoppedEventArgs& operator=(
        IBluetoothLEAdvertisementWatcherStoppedEventArgs const&) & noexcept =
        default;
    IBluetoothLEAdvertisementWatcherStoppedEventArgs& operator=(
        IBluetoothLEAdvertisementWatcherStoppedEventArgs&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IBluetoothLEManufacturerData
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBluetoothLEManufacturerData> {
    IBluetoothLEManufacturerData(std::nullptr_t = nullptr) noexcept {}
    IBluetoothLEManufacturerData(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBluetoothLEManufacturerData(IBluetoothLEManufacturerData const&) noexcept =
        default;
    IBluetoothLEManufacturerData(IBluetoothLEManufacturerData&&) noexcept =
        default;
    IBluetoothLEManufacturerData& operator=(
        IBluetoothLEManufacturerData const&) & noexcept = default;
    IBluetoothLEManufacturerData& operator=(
        IBluetoothLEManufacturerData&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBluetoothLEManufacturerDataFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBluetoothLEManufacturerDataFactory> {
    IBluetoothLEManufacturerDataFactory(std::nullptr_t = nullptr) noexcept {}
    IBluetoothLEManufacturerDataFactory(void* ptr,
                                        take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBluetoothLEManufacturerDataFactory(
        IBluetoothLEManufacturerDataFactory const&) noexcept = default;
    IBluetoothLEManufacturerDataFactory(
        IBluetoothLEManufacturerDataFactory&&) noexcept = default;
    IBluetoothLEManufacturerDataFactory& operator=(
        IBluetoothLEManufacturerDataFactory const&) & noexcept = default;
    IBluetoothLEManufacturerDataFactory& operator=(
        IBluetoothLEManufacturerDataFactory&&) & noexcept = default;
  };
}
#endif
