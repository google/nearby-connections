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

#ifndef WINRT_Windows_Phone_System_UserProfile_GameServices_Core_2_H
#define WINRT_Windows_Phone_System_UserProfile_GameServices_Core_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Phone.System.UserProfile.GameServices.Core.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
WINRT_EXPORT namespace winrt::Windows::Phone::System::UserProfile::
    GameServices::Core {
  struct GameService {
    GameService() = delete;
    [[nodiscard]] static auto ServiceUri();
    static auto GetGamerProfileAsync();
    static auto GetInstalledGameItemsAsync();
    static auto GetPartnerTokenAsync(
        winrt::Windows::Foundation::Uri const& audienceUri);
    static auto GetPrivilegesAsync();
    static auto GrantAchievement(uint32_t achievementId);
    static auto GrantAvatarAward(uint32_t avatarAwardId);
    static auto PostResult(
        uint32_t gameVariant,
        winrt::Windows::Phone::System::UserProfile::GameServices::Core::
            GameServiceScoreKind const& scoreKind,
        int64_t scoreValue,
        winrt::Windows::Phone::System::UserProfile::GameServices::Core::
            GameServiceGameOutcome const& gameOutcome,
        winrt::Windows::Storage::Streams::IBuffer const& buffer);
    static auto NotifyPartnerTokenExpired(
        winrt::Windows::Foundation::Uri const& audienceUri);
    static auto GetAuthenticationStatus();
  };
  struct __declspec(empty_bases) GameServicePropertyCollection
      : winrt::Windows::Phone::System::UserProfile::GameServices::Core::
            IGameServicePropertyCollection {
    GameServicePropertyCollection(std::nullptr_t) noexcept {}
    GameServicePropertyCollection(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Phone::System::UserProfile::GameServices::Core::
              IGameServicePropertyCollection(ptr, take_ownership_from_abi) {}
    GameServicePropertyCollection(
        GameServicePropertyCollection const&) noexcept = default;
    GameServicePropertyCollection(GameServicePropertyCollection&&) noexcept =
        default;
    GameServicePropertyCollection& operator=(
        GameServicePropertyCollection const&) & noexcept = default;
    GameServicePropertyCollection& operator=(
        GameServicePropertyCollection&&) & noexcept = default;
  };
}
#endif
