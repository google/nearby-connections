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

#ifndef WINRT_Windows_UI_Popups_2_H
#define WINRT_Windows_UI_Popups_2_H
#include "winrt/impl/Windows.UI.Popups.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Popups {
  struct UICommandInvokedHandler : Windows::Foundation::IUnknown {
    UICommandInvokedHandler(std::nullptr_t = nullptr) noexcept {}
    UICommandInvokedHandler(void* ptr, take_ownership_from_abi_t) noexcept
        : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
    UICommandInvokedHandler(UICommandInvokedHandler const&) noexcept = default;
    UICommandInvokedHandler(UICommandInvokedHandler&&) noexcept = default;
    UICommandInvokedHandler& operator=(
        UICommandInvokedHandler const&) & noexcept = default;
    UICommandInvokedHandler& operator=(UICommandInvokedHandler&&) & noexcept =
        default;
    template <typename L>
    UICommandInvokedHandler(L lambda);
    template <typename F>
    UICommandInvokedHandler(F* function);
    template <typename O, typename M>
    UICommandInvokedHandler(O* object, M method);
    template <typename O, typename M>
    UICommandInvokedHandler(com_ptr<O>&& object, M method);
    template <typename O, typename M>
    UICommandInvokedHandler(weak_ref<O>&& object, M method);
    auto operator()(
        winrt::Windows::UI::Popups::IUICommand const& command) const;
  };
  struct __declspec(empty_bases) MessageDialog
      : winrt::Windows::UI::Popups::IMessageDialog {
    MessageDialog(std::nullptr_t) noexcept {}
    MessageDialog(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Popups::IMessageDialog(ptr,
                                                     take_ownership_from_abi) {}
    explicit MessageDialog(param::hstring const& content);
    MessageDialog(param::hstring const& content, param::hstring const& title);
    MessageDialog(MessageDialog const&) noexcept = default;
    MessageDialog(MessageDialog&&) noexcept = default;
    MessageDialog& operator=(MessageDialog const&) & noexcept = default;
    MessageDialog& operator=(MessageDialog&&) & noexcept = default;
  };
  struct __declspec(empty_bases) PopupMenu
      : winrt::Windows::UI::Popups::IPopupMenu {
    PopupMenu(std::nullptr_t) noexcept {}
    PopupMenu(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Popups::IPopupMenu(ptr, take_ownership_from_abi) {
    }
    PopupMenu();
    PopupMenu(PopupMenu const&) noexcept = default;
    PopupMenu(PopupMenu&&) noexcept = default;
    PopupMenu& operator=(PopupMenu const&) & noexcept = default;
    PopupMenu& operator=(PopupMenu&&) & noexcept = default;
  };
  struct __declspec(empty_bases) UICommand
      : winrt::Windows::UI::Popups::IUICommand {
    UICommand(std::nullptr_t) noexcept {}
    UICommand(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Popups::IUICommand(ptr, take_ownership_from_abi) {
    }
    UICommand();
    explicit UICommand(param::hstring const& label);
    UICommand(
        param::hstring const& label,
        winrt::Windows::UI::Popups::UICommandInvokedHandler const& action);
    UICommand(param::hstring const& label,
              winrt::Windows::UI::Popups::UICommandInvokedHandler const& action,
              winrt::Windows::Foundation::IInspectable const& commandId);
    UICommand(UICommand const&) noexcept = default;
    UICommand(UICommand&&) noexcept = default;
    UICommand& operator=(UICommand const&) & noexcept = default;
    UICommand& operator=(UICommand&&) & noexcept = default;
  };
  struct __declspec(empty_bases) UICommandSeparator
      : winrt::Windows::UI::Popups::IUICommand {
    UICommandSeparator(std::nullptr_t) noexcept {}
    UICommandSeparator(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Popups::IUICommand(ptr, take_ownership_from_abi) {
    }
    UICommandSeparator();
    UICommandSeparator(UICommandSeparator const&) noexcept = default;
    UICommandSeparator(UICommandSeparator&&) noexcept = default;
    UICommandSeparator& operator=(UICommandSeparator const&) & noexcept =
        default;
    UICommandSeparator& operator=(UICommandSeparator&&) & noexcept = default;
  };
}
#endif
