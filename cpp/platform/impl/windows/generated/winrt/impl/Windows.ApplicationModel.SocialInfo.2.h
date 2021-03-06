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

#ifndef WINRT_Windows_ApplicationModel_SocialInfo_2_H
#define WINRT_Windows_ApplicationModel_SocialInfo_2_H
#include "winrt/impl/Windows.ApplicationModel.SocialInfo.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::SocialInfo {
  struct __declspec(empty_bases) SocialFeedChildItem
      : winrt::Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem {
    SocialFeedChildItem(std::nullptr_t) noexcept {}
    SocialFeedChildItem(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem(
              ptr, take_ownership_from_abi) {}
    SocialFeedChildItem();
    SocialFeedChildItem(SocialFeedChildItem const&) noexcept = default;
    SocialFeedChildItem(SocialFeedChildItem&&) noexcept = default;
    SocialFeedChildItem& operator=(SocialFeedChildItem const&) & noexcept =
        default;
    SocialFeedChildItem& operator=(SocialFeedChildItem&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SocialFeedContent
      : winrt::Windows::ApplicationModel::SocialInfo::ISocialFeedContent {
    SocialFeedContent(std::nullptr_t) noexcept {}
    SocialFeedContent(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::SocialInfo::ISocialFeedContent(
              ptr, take_ownership_from_abi) {}
    SocialFeedContent(SocialFeedContent const&) noexcept = default;
    SocialFeedContent(SocialFeedContent&&) noexcept = default;
    SocialFeedContent& operator=(SocialFeedContent const&) & noexcept = default;
    SocialFeedContent& operator=(SocialFeedContent&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SocialFeedItem
      : winrt::Windows::ApplicationModel::SocialInfo::ISocialFeedItem {
    SocialFeedItem(std::nullptr_t) noexcept {}
    SocialFeedItem(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::SocialInfo::ISocialFeedItem(
              ptr, take_ownership_from_abi) {}
    SocialFeedItem();
    SocialFeedItem(SocialFeedItem const&) noexcept = default;
    SocialFeedItem(SocialFeedItem&&) noexcept = default;
    SocialFeedItem& operator=(SocialFeedItem const&) & noexcept = default;
    SocialFeedItem& operator=(SocialFeedItem&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SocialFeedSharedItem
      : winrt::Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem {
    SocialFeedSharedItem(std::nullptr_t) noexcept {}
    SocialFeedSharedItem(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem(
              ptr, take_ownership_from_abi) {}
    SocialFeedSharedItem();
    SocialFeedSharedItem(SocialFeedSharedItem const&) noexcept = default;
    SocialFeedSharedItem(SocialFeedSharedItem&&) noexcept = default;
    SocialFeedSharedItem& operator=(SocialFeedSharedItem const&) & noexcept =
        default;
    SocialFeedSharedItem& operator=(SocialFeedSharedItem&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) SocialItemThumbnail
      : winrt::Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail {
    SocialItemThumbnail(std::nullptr_t) noexcept {}
    SocialItemThumbnail(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail(
              ptr, take_ownership_from_abi) {}
    SocialItemThumbnail();
    SocialItemThumbnail(SocialItemThumbnail const&) noexcept = default;
    SocialItemThumbnail(SocialItemThumbnail&&) noexcept = default;
    SocialItemThumbnail& operator=(SocialItemThumbnail const&) & noexcept =
        default;
    SocialItemThumbnail& operator=(SocialItemThumbnail&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SocialUserInfo
      : winrt::Windows::ApplicationModel::SocialInfo::ISocialUserInfo {
    SocialUserInfo(std::nullptr_t) noexcept {}
    SocialUserInfo(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::SocialInfo::ISocialUserInfo(
              ptr, take_ownership_from_abi) {}
    SocialUserInfo(SocialUserInfo const&) noexcept = default;
    SocialUserInfo(SocialUserInfo&&) noexcept = default;
    SocialUserInfo& operator=(SocialUserInfo const&) & noexcept = default;
    SocialUserInfo& operator=(SocialUserInfo&&) & noexcept = default;
  };
}
#endif
