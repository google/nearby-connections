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

#ifndef WINRT_Windows_Storage_Provider_1_H
#define WINRT_Windows_Storage_Provider_1_H
#include "winrt/impl/Windows.Storage.Provider.0.h"
WINRT_EXPORT namespace winrt::Windows::Storage::Provider {
  struct __declspec(empty_bases) ICachedFileUpdaterStatics
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICachedFileUpdaterStatics> {
    ICachedFileUpdaterStatics(std::nullptr_t = nullptr) noexcept {}
    ICachedFileUpdaterStatics(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ICachedFileUpdaterStatics(ICachedFileUpdaterStatics const&) noexcept =
        default;
    ICachedFileUpdaterStatics(ICachedFileUpdaterStatics&&) noexcept = default;
    ICachedFileUpdaterStatics& operator=(
        ICachedFileUpdaterStatics const&) & noexcept = default;
    ICachedFileUpdaterStatics& operator=(
        ICachedFileUpdaterStatics&&) & noexcept = default;
  };
  struct __declspec(empty_bases) ICachedFileUpdaterUI
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICachedFileUpdaterUI> {
    ICachedFileUpdaterUI(std::nullptr_t = nullptr) noexcept {}
    ICachedFileUpdaterUI(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ICachedFileUpdaterUI(ICachedFileUpdaterUI const&) noexcept = default;
    ICachedFileUpdaterUI(ICachedFileUpdaterUI&&) noexcept = default;
    ICachedFileUpdaterUI& operator=(ICachedFileUpdaterUI const&) & noexcept =
        default;
    ICachedFileUpdaterUI& operator=(ICachedFileUpdaterUI&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) ICachedFileUpdaterUI2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICachedFileUpdaterUI2>,
        impl::require<winrt::Windows::Storage::Provider::ICachedFileUpdaterUI2,
                      winrt::Windows::Storage::Provider::ICachedFileUpdaterUI> {
    ICachedFileUpdaterUI2(std::nullptr_t = nullptr) noexcept {}
    ICachedFileUpdaterUI2(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ICachedFileUpdaterUI2(ICachedFileUpdaterUI2 const&) noexcept = default;
    ICachedFileUpdaterUI2(ICachedFileUpdaterUI2&&) noexcept = default;
    ICachedFileUpdaterUI2& operator=(ICachedFileUpdaterUI2 const&) & noexcept =
        default;
    ICachedFileUpdaterUI2& operator=(ICachedFileUpdaterUI2&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IFileUpdateRequest
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFileUpdateRequest> {
    IFileUpdateRequest(std::nullptr_t = nullptr) noexcept {}
    IFileUpdateRequest(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IFileUpdateRequest(IFileUpdateRequest const&) noexcept = default;
    IFileUpdateRequest(IFileUpdateRequest&&) noexcept = default;
    IFileUpdateRequest& operator=(IFileUpdateRequest const&) & noexcept =
        default;
    IFileUpdateRequest& operator=(IFileUpdateRequest&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IFileUpdateRequest2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFileUpdateRequest2>,
        impl::require<winrt::Windows::Storage::Provider::IFileUpdateRequest2,
                      winrt::Windows::Storage::Provider::IFileUpdateRequest> {
    IFileUpdateRequest2(std::nullptr_t = nullptr) noexcept {}
    IFileUpdateRequest2(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IFileUpdateRequest2(IFileUpdateRequest2 const&) noexcept = default;
    IFileUpdateRequest2(IFileUpdateRequest2&&) noexcept = default;
    IFileUpdateRequest2& operator=(IFileUpdateRequest2 const&) & noexcept =
        default;
    IFileUpdateRequest2& operator=(IFileUpdateRequest2&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IFileUpdateRequestDeferral
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFileUpdateRequestDeferral> {
    IFileUpdateRequestDeferral(std::nullptr_t = nullptr) noexcept {}
    IFileUpdateRequestDeferral(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IFileUpdateRequestDeferral(IFileUpdateRequestDeferral const&) noexcept =
        default;
    IFileUpdateRequestDeferral(IFileUpdateRequestDeferral&&) noexcept = default;
    IFileUpdateRequestDeferral& operator=(
        IFileUpdateRequestDeferral const&) & noexcept = default;
    IFileUpdateRequestDeferral& operator=(
        IFileUpdateRequestDeferral&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IFileUpdateRequestedEventArgs
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFileUpdateRequestedEventArgs> {
    IFileUpdateRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
    IFileUpdateRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IFileUpdateRequestedEventArgs(
        IFileUpdateRequestedEventArgs const&) noexcept = default;
    IFileUpdateRequestedEventArgs(IFileUpdateRequestedEventArgs&&) noexcept =
        default;
    IFileUpdateRequestedEventArgs& operator=(
        IFileUpdateRequestedEventArgs const&) & noexcept = default;
    IFileUpdateRequestedEventArgs& operator=(
        IFileUpdateRequestedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IStorageProviderFileTypeInfo
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderFileTypeInfo> {
    IStorageProviderFileTypeInfo(std::nullptr_t = nullptr) noexcept {}
    IStorageProviderFileTypeInfo(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IStorageProviderFileTypeInfo(IStorageProviderFileTypeInfo const&) noexcept =
        default;
    IStorageProviderFileTypeInfo(IStorageProviderFileTypeInfo&&) noexcept =
        default;
    IStorageProviderFileTypeInfo& operator=(
        IStorageProviderFileTypeInfo const&) & noexcept = default;
    IStorageProviderFileTypeInfo& operator=(
        IStorageProviderFileTypeInfo&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IStorageProviderFileTypeInfoFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderFileTypeInfoFactory> {
    IStorageProviderFileTypeInfoFactory(std::nullptr_t = nullptr) noexcept {}
    IStorageProviderFileTypeInfoFactory(void* ptr,
                                        take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IStorageProviderFileTypeInfoFactory(
        IStorageProviderFileTypeInfoFactory const&) noexcept = default;
    IStorageProviderFileTypeInfoFactory(
        IStorageProviderFileTypeInfoFactory&&) noexcept = default;
    IStorageProviderFileTypeInfoFactory& operator=(
        IStorageProviderFileTypeInfoFactory const&) & noexcept = default;
    IStorageProviderFileTypeInfoFactory& operator=(
        IStorageProviderFileTypeInfoFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IStorageProviderGetContentInfoForPathResult
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderGetContentInfoForPathResult> {
    IStorageProviderGetContentInfoForPathResult(
        std::nullptr_t = nullptr) noexcept {}
    IStorageProviderGetContentInfoForPathResult(
        void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IStorageProviderGetContentInfoForPathResult(
        IStorageProviderGetContentInfoForPathResult const&) noexcept = default;
    IStorageProviderGetContentInfoForPathResult(
        IStorageProviderGetContentInfoForPathResult&&) noexcept = default;
    IStorageProviderGetContentInfoForPathResult& operator=(
        IStorageProviderGetContentInfoForPathResult const&) & noexcept =
        default;
    IStorageProviderGetContentInfoForPathResult& operator=(
        IStorageProviderGetContentInfoForPathResult&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IStorageProviderGetPathForContentUriResult
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderGetPathForContentUriResult> {
    IStorageProviderGetPathForContentUriResult(
        std::nullptr_t = nullptr) noexcept {}
    IStorageProviderGetPathForContentUriResult(
        void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IStorageProviderGetPathForContentUriResult(
        IStorageProviderGetPathForContentUriResult const&) noexcept = default;
    IStorageProviderGetPathForContentUriResult(
        IStorageProviderGetPathForContentUriResult&&) noexcept = default;
    IStorageProviderGetPathForContentUriResult& operator=(
        IStorageProviderGetPathForContentUriResult const&) & noexcept = default;
    IStorageProviderGetPathForContentUriResult& operator=(
        IStorageProviderGetPathForContentUriResult&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IStorageProviderItemPropertiesStatics
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderItemPropertiesStatics> {
    IStorageProviderItemPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
    IStorageProviderItemPropertiesStatics(void* ptr,
                                          take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IStorageProviderItemPropertiesStatics(
        IStorageProviderItemPropertiesStatics const&) noexcept = default;
    IStorageProviderItemPropertiesStatics(
        IStorageProviderItemPropertiesStatics&&) noexcept = default;
    IStorageProviderItemPropertiesStatics& operator=(
        IStorageProviderItemPropertiesStatics const&) & noexcept = default;
    IStorageProviderItemPropertiesStatics& operator=(
        IStorageProviderItemPropertiesStatics&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IStorageProviderItemProperty
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderItemProperty> {
    IStorageProviderItemProperty(std::nullptr_t = nullptr) noexcept {}
    IStorageProviderItemProperty(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IStorageProviderItemProperty(IStorageProviderItemProperty const&) noexcept =
        default;
    IStorageProviderItemProperty(IStorageProviderItemProperty&&) noexcept =
        default;
    IStorageProviderItemProperty& operator=(
        IStorageProviderItemProperty const&) & noexcept = default;
    IStorageProviderItemProperty& operator=(
        IStorageProviderItemProperty&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IStorageProviderItemPropertyDefinition
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderItemPropertyDefinition> {
    IStorageProviderItemPropertyDefinition(std::nullptr_t = nullptr) noexcept {}
    IStorageProviderItemPropertyDefinition(void* ptr,
                                           take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IStorageProviderItemPropertyDefinition(
        IStorageProviderItemPropertyDefinition const&) noexcept = default;
    IStorageProviderItemPropertyDefinition(
        IStorageProviderItemPropertyDefinition&&) noexcept = default;
    IStorageProviderItemPropertyDefinition& operator=(
        IStorageProviderItemPropertyDefinition const&) & noexcept = default;
    IStorageProviderItemPropertyDefinition& operator=(
        IStorageProviderItemPropertyDefinition&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IStorageProviderItemPropertySource
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderItemPropertySource> {
    IStorageProviderItemPropertySource(std::nullptr_t = nullptr) noexcept {}
    IStorageProviderItemPropertySource(void* ptr,
                                       take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IStorageProviderItemPropertySource(
        IStorageProviderItemPropertySource const&) noexcept = default;
    IStorageProviderItemPropertySource(
        IStorageProviderItemPropertySource&&) noexcept = default;
    IStorageProviderItemPropertySource& operator=(
        IStorageProviderItemPropertySource const&) & noexcept = default;
    IStorageProviderItemPropertySource& operator=(
        IStorageProviderItemPropertySource&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IStorageProviderPropertyCapabilities
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderPropertyCapabilities> {
    IStorageProviderPropertyCapabilities(std::nullptr_t = nullptr) noexcept {}
    IStorageProviderPropertyCapabilities(void* ptr,
                                         take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IStorageProviderPropertyCapabilities(
        IStorageProviderPropertyCapabilities const&) noexcept = default;
    IStorageProviderPropertyCapabilities(
        IStorageProviderPropertyCapabilities&&) noexcept = default;
    IStorageProviderPropertyCapabilities& operator=(
        IStorageProviderPropertyCapabilities const&) & noexcept = default;
    IStorageProviderPropertyCapabilities& operator=(
        IStorageProviderPropertyCapabilities&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IStorageProviderSyncRootInfo
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderSyncRootInfo> {
    IStorageProviderSyncRootInfo(std::nullptr_t = nullptr) noexcept {}
    IStorageProviderSyncRootInfo(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IStorageProviderSyncRootInfo(IStorageProviderSyncRootInfo const&) noexcept =
        default;
    IStorageProviderSyncRootInfo(IStorageProviderSyncRootInfo&&) noexcept =
        default;
    IStorageProviderSyncRootInfo& operator=(
        IStorageProviderSyncRootInfo const&) & noexcept = default;
    IStorageProviderSyncRootInfo& operator=(
        IStorageProviderSyncRootInfo&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IStorageProviderSyncRootInfo2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderSyncRootInfo2> {
    IStorageProviderSyncRootInfo2(std::nullptr_t = nullptr) noexcept {}
    IStorageProviderSyncRootInfo2(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IStorageProviderSyncRootInfo2(
        IStorageProviderSyncRootInfo2 const&) noexcept = default;
    IStorageProviderSyncRootInfo2(IStorageProviderSyncRootInfo2&&) noexcept =
        default;
    IStorageProviderSyncRootInfo2& operator=(
        IStorageProviderSyncRootInfo2 const&) & noexcept = default;
    IStorageProviderSyncRootInfo2& operator=(
        IStorageProviderSyncRootInfo2&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IStorageProviderSyncRootInfo3
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderSyncRootInfo3> {
    IStorageProviderSyncRootInfo3(std::nullptr_t = nullptr) noexcept {}
    IStorageProviderSyncRootInfo3(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IStorageProviderSyncRootInfo3(
        IStorageProviderSyncRootInfo3 const&) noexcept = default;
    IStorageProviderSyncRootInfo3(IStorageProviderSyncRootInfo3&&) noexcept =
        default;
    IStorageProviderSyncRootInfo3& operator=(
        IStorageProviderSyncRootInfo3 const&) & noexcept = default;
    IStorageProviderSyncRootInfo3& operator=(
        IStorageProviderSyncRootInfo3&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IStorageProviderSyncRootManagerStatics
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderSyncRootManagerStatics> {
    IStorageProviderSyncRootManagerStatics(std::nullptr_t = nullptr) noexcept {}
    IStorageProviderSyncRootManagerStatics(void* ptr,
                                           take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IStorageProviderSyncRootManagerStatics(
        IStorageProviderSyncRootManagerStatics const&) noexcept = default;
    IStorageProviderSyncRootManagerStatics(
        IStorageProviderSyncRootManagerStatics&&) noexcept = default;
    IStorageProviderSyncRootManagerStatics& operator=(
        IStorageProviderSyncRootManagerStatics const&) & noexcept = default;
    IStorageProviderSyncRootManagerStatics& operator=(
        IStorageProviderSyncRootManagerStatics&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IStorageProviderSyncRootManagerStatics2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderSyncRootManagerStatics2> {
    IStorageProviderSyncRootManagerStatics2(std::nullptr_t = nullptr) noexcept {
    }
    IStorageProviderSyncRootManagerStatics2(void* ptr,
                                            take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IStorageProviderSyncRootManagerStatics2(
        IStorageProviderSyncRootManagerStatics2 const&) noexcept = default;
    IStorageProviderSyncRootManagerStatics2(
        IStorageProviderSyncRootManagerStatics2&&) noexcept = default;
    IStorageProviderSyncRootManagerStatics2& operator=(
        IStorageProviderSyncRootManagerStatics2 const&) & noexcept = default;
    IStorageProviderSyncRootManagerStatics2& operator=(
        IStorageProviderSyncRootManagerStatics2&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IStorageProviderUriSource
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderUriSource> {
    IStorageProviderUriSource(std::nullptr_t = nullptr) noexcept {}
    IStorageProviderUriSource(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IStorageProviderUriSource(IStorageProviderUriSource const&) noexcept =
        default;
    IStorageProviderUriSource(IStorageProviderUriSource&&) noexcept = default;
    IStorageProviderUriSource& operator=(
        IStorageProviderUriSource const&) & noexcept = default;
    IStorageProviderUriSource& operator=(
        IStorageProviderUriSource&&) & noexcept = default;
  };
}
#endif
