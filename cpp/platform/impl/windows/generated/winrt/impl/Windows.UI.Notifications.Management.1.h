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

#ifndef WINRT_Windows_UI_Notifications_Management_1_H
#define WINRT_Windows_UI_Notifications_Management_1_H
#include "winrt/impl/Windows.UI.Notifications.Management.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::Notifications::Management {
  struct __declspec(empty_bases) IUserNotificationListener
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUserNotificationListener> {
    IUserNotificationListener(std::nullptr_t = nullptr) noexcept {}
    IUserNotificationListener(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IUserNotificationListener(IUserNotificationListener const&) noexcept =
        default;
    IUserNotificationListener(IUserNotificationListener&&) noexcept = default;
    IUserNotificationListener& operator=(
        IUserNotificationListener const&) & noexcept = default;
    IUserNotificationListener& operator=(
        IUserNotificationListener&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IUserNotificationListenerStatics
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUserNotificationListenerStatics> {
    IUserNotificationListenerStatics(std::nullptr_t = nullptr) noexcept {}
    IUserNotificationListenerStatics(void* ptr,
                                     take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IUserNotificationListenerStatics(
        IUserNotificationListenerStatics const&) noexcept = default;
    IUserNotificationListenerStatics(
        IUserNotificationListenerStatics&&) noexcept = default;
    IUserNotificationListenerStatics& operator=(
        IUserNotificationListenerStatics const&) & noexcept = default;
    IUserNotificationListenerStatics& operator=(
        IUserNotificationListenerStatics&&) & noexcept = default;
  };
}
#endif
