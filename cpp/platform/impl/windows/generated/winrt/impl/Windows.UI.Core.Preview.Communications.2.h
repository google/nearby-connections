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

#ifndef WINRT_Windows_UI_Core_Preview_Communications_2_H
#define WINRT_Windows_UI_Core_Preview_Communications_2_H
#include "winrt/impl/Windows.UI.Core.Preview.Communications.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Core::Preview::Communications {
  struct __declspec(empty_bases) PreviewTeamCleanupRequestedEventArgs
      : winrt::Windows::UI::Core::Preview::Communications::
            IPreviewTeamCleanupRequestedEventArgs {
    PreviewTeamCleanupRequestedEventArgs(std::nullptr_t) noexcept {}
    PreviewTeamCleanupRequestedEventArgs(void* ptr,
                                         take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Core::Preview::Communications::
              IPreviewTeamCleanupRequestedEventArgs(ptr,
                                                    take_ownership_from_abi) {}
    PreviewTeamCleanupRequestedEventArgs(
        PreviewTeamCleanupRequestedEventArgs const&) noexcept = default;
    PreviewTeamCleanupRequestedEventArgs(
        PreviewTeamCleanupRequestedEventArgs&&) noexcept = default;
    PreviewTeamCleanupRequestedEventArgs& operator=(
        PreviewTeamCleanupRequestedEventArgs const&) & noexcept = default;
    PreviewTeamCleanupRequestedEventArgs& operator=(
        PreviewTeamCleanupRequestedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) PreviewTeamCommandInvokedEventArgs
      : winrt::Windows::UI::Core::Preview::Communications::
            IPreviewTeamCommandInvokedEventArgs {
    PreviewTeamCommandInvokedEventArgs(std::nullptr_t) noexcept {}
    PreviewTeamCommandInvokedEventArgs(void* ptr,
                                       take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Core::Preview::Communications::
              IPreviewTeamCommandInvokedEventArgs(ptr,
                                                  take_ownership_from_abi) {}
    PreviewTeamCommandInvokedEventArgs(
        PreviewTeamCommandInvokedEventArgs const&) noexcept = default;
    PreviewTeamCommandInvokedEventArgs(
        PreviewTeamCommandInvokedEventArgs&&) noexcept = default;
    PreviewTeamCommandInvokedEventArgs& operator=(
        PreviewTeamCommandInvokedEventArgs const&) & noexcept = default;
    PreviewTeamCommandInvokedEventArgs& operator=(
        PreviewTeamCommandInvokedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) PreviewTeamDeviceCredentials
      : winrt::Windows::UI::Core::Preview::Communications::
            IPreviewTeamDeviceCredentials {
    PreviewTeamDeviceCredentials(std::nullptr_t) noexcept {}
    PreviewTeamDeviceCredentials(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Core::Preview::Communications::
              IPreviewTeamDeviceCredentials(ptr, take_ownership_from_abi) {}
    PreviewTeamDeviceCredentials();
    PreviewTeamDeviceCredentials(PreviewTeamDeviceCredentials const&) noexcept =
        default;
    PreviewTeamDeviceCredentials(PreviewTeamDeviceCredentials&&) noexcept =
        default;
    PreviewTeamDeviceCredentials& operator=(
        PreviewTeamDeviceCredentials const&) & noexcept = default;
    PreviewTeamDeviceCredentials& operator=(
        PreviewTeamDeviceCredentials&&) & noexcept = default;
  };
  struct __declspec(empty_bases) PreviewTeamEndMeetingRequestedEventArgs
      : winrt::Windows::UI::Core::Preview::Communications::
            IPreviewTeamEndMeetingRequestedEventArgs {
    PreviewTeamEndMeetingRequestedEventArgs(std::nullptr_t) noexcept {}
    PreviewTeamEndMeetingRequestedEventArgs(void* ptr,
                                            take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Core::Preview::Communications::
              IPreviewTeamEndMeetingRequestedEventArgs(
                  ptr, take_ownership_from_abi) {}
    PreviewTeamEndMeetingRequestedEventArgs(
        PreviewTeamEndMeetingRequestedEventArgs const&) noexcept = default;
    PreviewTeamEndMeetingRequestedEventArgs(
        PreviewTeamEndMeetingRequestedEventArgs&&) noexcept = default;
    PreviewTeamEndMeetingRequestedEventArgs& operator=(
        PreviewTeamEndMeetingRequestedEventArgs const&) & noexcept = default;
    PreviewTeamEndMeetingRequestedEventArgs& operator=(
        PreviewTeamEndMeetingRequestedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) PreviewTeamJoinMeetingRequestedEventArgs
      : winrt::Windows::UI::Core::Preview::Communications::
            IPreviewTeamJoinMeetingRequestedEventArgs {
    PreviewTeamJoinMeetingRequestedEventArgs(std::nullptr_t) noexcept {}
    PreviewTeamJoinMeetingRequestedEventArgs(void* ptr,
                                             take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Core::Preview::Communications::
              IPreviewTeamJoinMeetingRequestedEventArgs(
                  ptr, take_ownership_from_abi) {}
    PreviewTeamJoinMeetingRequestedEventArgs(
        PreviewTeamJoinMeetingRequestedEventArgs const&) noexcept = default;
    PreviewTeamJoinMeetingRequestedEventArgs(
        PreviewTeamJoinMeetingRequestedEventArgs&&) noexcept = default;
    PreviewTeamJoinMeetingRequestedEventArgs& operator=(
        PreviewTeamJoinMeetingRequestedEventArgs const&) & noexcept = default;
    PreviewTeamJoinMeetingRequestedEventArgs& operator=(
        PreviewTeamJoinMeetingRequestedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) PreviewTeamView
      : winrt::Windows::UI::Core::Preview::Communications::IPreviewTeamView,
        impl::require<PreviewTeamView, winrt::Windows::UI::Core::Preview::
                                           Communications::IPreviewTeamView2> {
    PreviewTeamView(std::nullptr_t) noexcept {}
    PreviewTeamView(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Core::Preview::Communications::IPreviewTeamView(
              ptr, take_ownership_from_abi) {}
    PreviewTeamView(PreviewTeamView const&) noexcept = default;
    PreviewTeamView(PreviewTeamView&&) noexcept = default;
    PreviewTeamView& operator=(PreviewTeamView const&) & noexcept = default;
    PreviewTeamView& operator=(PreviewTeamView&&) & noexcept = default;
    static auto GetForCurrentView();
  };
}
#endif
