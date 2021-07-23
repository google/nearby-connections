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

#ifndef WINRT_Windows_UI_WebUI_Core_2_H
#define WINRT_Windows_UI_WebUI_Core_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.UI.WebUI.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::WebUI::Core {
  struct MenuClosedEventHandler : Windows::Foundation::IUnknown {
    MenuClosedEventHandler(std::nullptr_t = nullptr) noexcept {}
    MenuClosedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept
        : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
    MenuClosedEventHandler(MenuClosedEventHandler const&) noexcept = default;
    MenuClosedEventHandler(MenuClosedEventHandler&&) noexcept = default;
    MenuClosedEventHandler& operator=(
        MenuClosedEventHandler const&) & noexcept = default;
    MenuClosedEventHandler& operator=(MenuClosedEventHandler&&) & noexcept =
        default;
    template <typename L>
    MenuClosedEventHandler(L lambda);
    template <typename F>
    MenuClosedEventHandler(F* function);
    template <typename O, typename M>
    MenuClosedEventHandler(O* object, M method);
    template <typename O, typename M>
    MenuClosedEventHandler(com_ptr<O>&& object, M method);
    template <typename O, typename M>
    MenuClosedEventHandler(weak_ref<O>&& object, M method);
    auto operator()() const;
  };
  struct MenuOpenedEventHandler : Windows::Foundation::IUnknown {
    MenuOpenedEventHandler(std::nullptr_t = nullptr) noexcept {}
    MenuOpenedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept
        : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
    MenuOpenedEventHandler(MenuOpenedEventHandler const&) noexcept = default;
    MenuOpenedEventHandler(MenuOpenedEventHandler&&) noexcept = default;
    MenuOpenedEventHandler& operator=(
        MenuOpenedEventHandler const&) & noexcept = default;
    MenuOpenedEventHandler& operator=(MenuOpenedEventHandler&&) & noexcept =
        default;
    template <typename L>
    MenuOpenedEventHandler(L lambda);
    template <typename F>
    MenuOpenedEventHandler(F* function);
    template <typename O, typename M>
    MenuOpenedEventHandler(O* object, M method);
    template <typename O, typename M>
    MenuOpenedEventHandler(com_ptr<O>&& object, M method);
    template <typename O, typename M>
    MenuOpenedEventHandler(weak_ref<O>&& object, M method);
    auto operator()() const;
  };
  struct SizeChangedEventHandler : Windows::Foundation::IUnknown {
    SizeChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
    SizeChangedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept
        : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
    SizeChangedEventHandler(SizeChangedEventHandler const&) noexcept = default;
    SizeChangedEventHandler(SizeChangedEventHandler&&) noexcept = default;
    SizeChangedEventHandler& operator=(
        SizeChangedEventHandler const&) & noexcept = default;
    SizeChangedEventHandler& operator=(SizeChangedEventHandler&&) & noexcept =
        default;
    template <typename L>
    SizeChangedEventHandler(L lambda);
    template <typename F>
    SizeChangedEventHandler(F* function);
    template <typename O, typename M>
    SizeChangedEventHandler(O* object, M method);
    template <typename O, typename M>
    SizeChangedEventHandler(com_ptr<O>&& object, M method);
    template <typename O, typename M>
    SizeChangedEventHandler(weak_ref<O>&& object, M method);
    auto operator()(
        winrt::Windows::UI::WebUI::Core::
            WebUICommandBarSizeChangedEventArgs const& eventArgs) const;
  };
  struct __declspec(empty_bases) WebUICommandBar
      : winrt::Windows::UI::WebUI::Core::IWebUICommandBar {
    WebUICommandBar(std::nullptr_t) noexcept {}
    WebUICommandBar(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::WebUI::Core::IWebUICommandBar(
              ptr, take_ownership_from_abi) {}
    WebUICommandBar(WebUICommandBar const&) noexcept = default;
    WebUICommandBar(WebUICommandBar&&) noexcept = default;
    WebUICommandBar& operator=(WebUICommandBar const&) & noexcept = default;
    WebUICommandBar& operator=(WebUICommandBar&&) & noexcept = default;
    static auto GetForCurrentView();
  };
  struct __declspec(empty_bases) WebUICommandBarBitmapIcon
      : winrt::Windows::UI::WebUI::Core::IWebUICommandBarBitmapIcon {
    WebUICommandBarBitmapIcon(std::nullptr_t) noexcept {}
    WebUICommandBarBitmapIcon(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::WebUI::Core::IWebUICommandBarBitmapIcon(
              ptr, take_ownership_from_abi) {}
    WebUICommandBarBitmapIcon();
    explicit WebUICommandBarBitmapIcon(
        winrt::Windows::Foundation::Uri const& uri);
    WebUICommandBarBitmapIcon(WebUICommandBarBitmapIcon const&) noexcept =
        default;
    WebUICommandBarBitmapIcon(WebUICommandBarBitmapIcon&&) noexcept = default;
    WebUICommandBarBitmapIcon& operator=(
        WebUICommandBarBitmapIcon const&) & noexcept = default;
    WebUICommandBarBitmapIcon& operator=(
        WebUICommandBarBitmapIcon&&) & noexcept = default;
  };
  struct __declspec(empty_bases) WebUICommandBarConfirmationButton
      : winrt::Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton {
    WebUICommandBarConfirmationButton(std::nullptr_t) noexcept {}
    WebUICommandBarConfirmationButton(void* ptr,
                                      take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton(
              ptr, take_ownership_from_abi) {}
    WebUICommandBarConfirmationButton();
    WebUICommandBarConfirmationButton(
        WebUICommandBarConfirmationButton const&) noexcept = default;
    WebUICommandBarConfirmationButton(
        WebUICommandBarConfirmationButton&&) noexcept = default;
    WebUICommandBarConfirmationButton& operator=(
        WebUICommandBarConfirmationButton const&) & noexcept = default;
    WebUICommandBarConfirmationButton& operator=(
        WebUICommandBarConfirmationButton&&) & noexcept = default;
  };
  struct __declspec(empty_bases) WebUICommandBarIconButton
      : winrt::Windows::UI::WebUI::Core::IWebUICommandBarIconButton {
    WebUICommandBarIconButton(std::nullptr_t) noexcept {}
    WebUICommandBarIconButton(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::WebUI::Core::IWebUICommandBarIconButton(
              ptr, take_ownership_from_abi) {}
    WebUICommandBarIconButton();
    WebUICommandBarIconButton(WebUICommandBarIconButton const&) noexcept =
        default;
    WebUICommandBarIconButton(WebUICommandBarIconButton&&) noexcept = default;
    WebUICommandBarIconButton& operator=(
        WebUICommandBarIconButton const&) & noexcept = default;
    WebUICommandBarIconButton& operator=(
        WebUICommandBarIconButton&&) & noexcept = default;
  };
  struct __declspec(empty_bases) WebUICommandBarItemInvokedEventArgs
      : winrt::Windows::UI::WebUI::Core::IWebUICommandBarItemInvokedEventArgs {
    WebUICommandBarItemInvokedEventArgs(std::nullptr_t) noexcept {}
    WebUICommandBarItemInvokedEventArgs(void* ptr,
                                        take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::WebUI::Core::IWebUICommandBarItemInvokedEventArgs(
              ptr, take_ownership_from_abi) {}
    WebUICommandBarItemInvokedEventArgs(
        WebUICommandBarItemInvokedEventArgs const&) noexcept = default;
    WebUICommandBarItemInvokedEventArgs(
        WebUICommandBarItemInvokedEventArgs&&) noexcept = default;
    WebUICommandBarItemInvokedEventArgs& operator=(
        WebUICommandBarItemInvokedEventArgs const&) & noexcept = default;
    WebUICommandBarItemInvokedEventArgs& operator=(
        WebUICommandBarItemInvokedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) WebUICommandBarSizeChangedEventArgs
      : winrt::Windows::UI::WebUI::Core::IWebUICommandBarSizeChangedEventArgs {
    WebUICommandBarSizeChangedEventArgs(std::nullptr_t) noexcept {}
    WebUICommandBarSizeChangedEventArgs(void* ptr,
                                        take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::WebUI::Core::IWebUICommandBarSizeChangedEventArgs(
              ptr, take_ownership_from_abi) {}
    WebUICommandBarSizeChangedEventArgs(
        WebUICommandBarSizeChangedEventArgs const&) noexcept = default;
    WebUICommandBarSizeChangedEventArgs(
        WebUICommandBarSizeChangedEventArgs&&) noexcept = default;
    WebUICommandBarSizeChangedEventArgs& operator=(
        WebUICommandBarSizeChangedEventArgs const&) & noexcept = default;
    WebUICommandBarSizeChangedEventArgs& operator=(
        WebUICommandBarSizeChangedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) WebUICommandBarSymbolIcon
      : winrt::Windows::UI::WebUI::Core::IWebUICommandBarSymbolIcon {
    WebUICommandBarSymbolIcon(std::nullptr_t) noexcept {}
    WebUICommandBarSymbolIcon(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::WebUI::Core::IWebUICommandBarSymbolIcon(
              ptr, take_ownership_from_abi) {}
    WebUICommandBarSymbolIcon();
    explicit WebUICommandBarSymbolIcon(param::hstring const& symbol);
    WebUICommandBarSymbolIcon(WebUICommandBarSymbolIcon const&) noexcept =
        default;
    WebUICommandBarSymbolIcon(WebUICommandBarSymbolIcon&&) noexcept = default;
    WebUICommandBarSymbolIcon& operator=(
        WebUICommandBarSymbolIcon const&) & noexcept = default;
    WebUICommandBarSymbolIcon& operator=(
        WebUICommandBarSymbolIcon&&) & noexcept = default;
  };
}
#endif
