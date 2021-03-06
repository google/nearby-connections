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

#ifndef WINRT_Windows_ApplicationModel_LockScreen_2_H
#define WINRT_Windows_ApplicationModel_LockScreen_2_H
#include "winrt/impl/Windows.ApplicationModel.LockScreen.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::LockScreen {
  struct __declspec(empty_bases) LockApplicationHost
      : winrt::Windows::ApplicationModel::LockScreen::ILockApplicationHost {
    LockApplicationHost(std::nullptr_t) noexcept {}
    LockApplicationHost(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::LockScreen::ILockApplicationHost(
              ptr, take_ownership_from_abi) {}
    LockApplicationHost(LockApplicationHost const&) noexcept = default;
    LockApplicationHost(LockApplicationHost&&) noexcept = default;
    LockApplicationHost& operator=(LockApplicationHost const&) & noexcept =
        default;
    LockApplicationHost& operator=(LockApplicationHost&&) & noexcept = default;
    static auto GetForCurrentView();
  };
  struct __declspec(empty_bases) LockScreenBadge
      : winrt::Windows::ApplicationModel::LockScreen::ILockScreenBadge {
    LockScreenBadge(std::nullptr_t) noexcept {}
    LockScreenBadge(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::LockScreen::ILockScreenBadge(
              ptr, take_ownership_from_abi) {}
    LockScreenBadge(LockScreenBadge const&) noexcept = default;
    LockScreenBadge(LockScreenBadge&&) noexcept = default;
    LockScreenBadge& operator=(LockScreenBadge const&) & noexcept = default;
    LockScreenBadge& operator=(LockScreenBadge&&) & noexcept = default;
  };
  struct __declspec(empty_bases) LockScreenInfo
      : winrt::Windows::ApplicationModel::LockScreen::ILockScreenInfo {
    LockScreenInfo(std::nullptr_t) noexcept {}
    LockScreenInfo(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::LockScreen::ILockScreenInfo(
              ptr, take_ownership_from_abi) {}
    LockScreenInfo(LockScreenInfo const&) noexcept = default;
    LockScreenInfo(LockScreenInfo&&) noexcept = default;
    LockScreenInfo& operator=(LockScreenInfo const&) & noexcept = default;
    LockScreenInfo& operator=(LockScreenInfo&&) & noexcept = default;
  };
  struct __declspec(empty_bases) LockScreenUnlockingDeferral
      : winrt::Windows::ApplicationModel::LockScreen::
            ILockScreenUnlockingDeferral {
    LockScreenUnlockingDeferral(std::nullptr_t) noexcept {}
    LockScreenUnlockingDeferral(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::LockScreen::
              ILockScreenUnlockingDeferral(ptr, take_ownership_from_abi) {}
    LockScreenUnlockingDeferral(LockScreenUnlockingDeferral const&) noexcept =
        default;
    LockScreenUnlockingDeferral(LockScreenUnlockingDeferral&&) noexcept =
        default;
    LockScreenUnlockingDeferral& operator=(
        LockScreenUnlockingDeferral const&) & noexcept = default;
    LockScreenUnlockingDeferral& operator=(
        LockScreenUnlockingDeferral&&) & noexcept = default;
  };
  struct __declspec(empty_bases) LockScreenUnlockingEventArgs
      : winrt::Windows::ApplicationModel::LockScreen::
            ILockScreenUnlockingEventArgs {
    LockScreenUnlockingEventArgs(std::nullptr_t) noexcept {}
    LockScreenUnlockingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::LockScreen::
              ILockScreenUnlockingEventArgs(ptr, take_ownership_from_abi) {}
    LockScreenUnlockingEventArgs(LockScreenUnlockingEventArgs const&) noexcept =
        default;
    LockScreenUnlockingEventArgs(LockScreenUnlockingEventArgs&&) noexcept =
        default;
    LockScreenUnlockingEventArgs& operator=(
        LockScreenUnlockingEventArgs const&) & noexcept = default;
    LockScreenUnlockingEventArgs& operator=(
        LockScreenUnlockingEventArgs&&) & noexcept = default;
  };
}
#endif
