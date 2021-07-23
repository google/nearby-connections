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

#ifndef WINRT_Windows_ApplicationModel_SocialInfo_Provider_2_H
#define WINRT_Windows_ApplicationModel_SocialInfo_Provider_2_H
#include "winrt/impl/Windows.ApplicationModel.SocialInfo.1.h"
#include "winrt/impl/Windows.ApplicationModel.SocialInfo.Provider.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::SocialInfo::Provider {
  struct __declspec(empty_bases) SocialDashboardItemUpdater
      : winrt::Windows::ApplicationModel::SocialInfo::Provider::
            ISocialDashboardItemUpdater {
    SocialDashboardItemUpdater(std::nullptr_t) noexcept {}
    SocialDashboardItemUpdater(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::SocialInfo::Provider::
              ISocialDashboardItemUpdater(ptr, take_ownership_from_abi) {}
    SocialDashboardItemUpdater(SocialDashboardItemUpdater const&) noexcept =
        default;
    SocialDashboardItemUpdater(SocialDashboardItemUpdater&&) noexcept = default;
    SocialDashboardItemUpdater& operator=(
        SocialDashboardItemUpdater const&) & noexcept = default;
    SocialDashboardItemUpdater& operator=(
        SocialDashboardItemUpdater&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SocialFeedUpdater
      : winrt::Windows::ApplicationModel::SocialInfo::Provider::
            ISocialFeedUpdater {
    SocialFeedUpdater(std::nullptr_t) noexcept {}
    SocialFeedUpdater(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::SocialInfo::Provider::
              ISocialFeedUpdater(ptr, take_ownership_from_abi) {}
    SocialFeedUpdater(SocialFeedUpdater const&) noexcept = default;
    SocialFeedUpdater(SocialFeedUpdater&&) noexcept = default;
    SocialFeedUpdater& operator=(SocialFeedUpdater const&) & noexcept = default;
    SocialFeedUpdater& operator=(SocialFeedUpdater&&) & noexcept = default;
  };
  struct SocialInfoProviderManager {
    SocialInfoProviderManager() = delete;
    static auto CreateSocialFeedUpdaterAsync(
        winrt::Windows::ApplicationModel::SocialInfo::SocialFeedKind const&
            kind,
        winrt::Windows::ApplicationModel::SocialInfo::
            SocialFeedUpdateMode const& mode,
        param::hstring const& ownerRemoteId);
    static auto CreateDashboardItemUpdaterAsync(
        param::hstring const& ownerRemoteId);
    static auto UpdateBadgeCountValue(param::hstring const& itemRemoteId,
                                      int32_t newCount);
    static auto ReportNewContentAvailable(
        param::hstring const& contactRemoteId,
        winrt::Windows::ApplicationModel::SocialInfo::SocialFeedKind const&
            kind);
    static auto ProvisionAsync();
    static auto DeprovisionAsync();
  };
}
#endif
