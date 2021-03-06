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

#ifndef WINRT_Windows_UI_Core_Preview_2_H
#define WINRT_Windows_UI_Core_Preview_2_H
#include "winrt/impl/Windows.UI.Core.Preview.1.h"
#include "winrt/impl/Windows.UI.WindowManagement.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Core::Preview {
  struct __declspec(empty_bases) CoreAppWindowPreview
      : winrt::Windows::UI::Core::Preview::ICoreAppWindowPreview {
    CoreAppWindowPreview(std::nullptr_t) noexcept {}
    CoreAppWindowPreview(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Core::Preview::ICoreAppWindowPreview(
              ptr, take_ownership_from_abi) {}
    CoreAppWindowPreview(CoreAppWindowPreview const&) noexcept = default;
    CoreAppWindowPreview(CoreAppWindowPreview&&) noexcept = default;
    CoreAppWindowPreview& operator=(CoreAppWindowPreview const&) & noexcept =
        default;
    CoreAppWindowPreview& operator=(CoreAppWindowPreview&&) & noexcept =
        default;
    static auto GetIdFromWindow(
        winrt::Windows::UI::WindowManagement::AppWindow const& window);
  };
  struct __declspec(empty_bases) SystemNavigationCloseRequestedPreviewEventArgs
      : winrt::Windows::UI::Core::Preview::
            ISystemNavigationCloseRequestedPreviewEventArgs {
    SystemNavigationCloseRequestedPreviewEventArgs(std::nullptr_t) noexcept {}
    SystemNavigationCloseRequestedPreviewEventArgs(
        void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Core::Preview::
              ISystemNavigationCloseRequestedPreviewEventArgs(
                  ptr, take_ownership_from_abi) {}
    SystemNavigationCloseRequestedPreviewEventArgs(
        SystemNavigationCloseRequestedPreviewEventArgs const&) noexcept =
        default;
    SystemNavigationCloseRequestedPreviewEventArgs(
        SystemNavigationCloseRequestedPreviewEventArgs&&) noexcept = default;
    SystemNavigationCloseRequestedPreviewEventArgs& operator=(
        SystemNavigationCloseRequestedPreviewEventArgs const&) & noexcept =
        default;
    SystemNavigationCloseRequestedPreviewEventArgs& operator=(
        SystemNavigationCloseRequestedPreviewEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SystemNavigationManagerPreview
      : winrt::Windows::UI::Core::Preview::ISystemNavigationManagerPreview {
    SystemNavigationManagerPreview(std::nullptr_t) noexcept {}
    SystemNavigationManagerPreview(void* ptr,
                                   take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Core::Preview::ISystemNavigationManagerPreview(
              ptr, take_ownership_from_abi) {}
    SystemNavigationManagerPreview(
        SystemNavigationManagerPreview const&) noexcept = default;
    SystemNavigationManagerPreview(SystemNavigationManagerPreview&&) noexcept =
        default;
    SystemNavigationManagerPreview& operator=(
        SystemNavigationManagerPreview const&) & noexcept = default;
    SystemNavigationManagerPreview& operator=(
        SystemNavigationManagerPreview&&) & noexcept = default;
    static auto GetForCurrentView();
  };
}
#endif
