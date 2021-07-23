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

#ifndef WINRT_Windows_UI_Xaml_Printing_2_H
#define WINRT_Windows_UI_Xaml_Printing_2_H
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Printing.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Printing {
  struct AddPagesEventHandler : Windows::Foundation::IUnknown {
    AddPagesEventHandler(std::nullptr_t = nullptr) noexcept {}
    AddPagesEventHandler(void* ptr, take_ownership_from_abi_t) noexcept
        : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
    AddPagesEventHandler(AddPagesEventHandler const&) noexcept = default;
    AddPagesEventHandler(AddPagesEventHandler&&) noexcept = default;
    AddPagesEventHandler& operator=(AddPagesEventHandler const&) & noexcept =
        default;
    AddPagesEventHandler& operator=(AddPagesEventHandler&&) & noexcept =
        default;
    template <typename L>
    AddPagesEventHandler(L lambda);
    template <typename F>
    AddPagesEventHandler(F* function);
    template <typename O, typename M>
    AddPagesEventHandler(O* object, M method);
    template <typename O, typename M>
    AddPagesEventHandler(com_ptr<O>&& object, M method);
    template <typename O, typename M>
    AddPagesEventHandler(weak_ref<O>&& object, M method);
    auto operator()(
        winrt::Windows::Foundation::IInspectable const& sender,
        winrt::Windows::UI::Xaml::Printing::AddPagesEventArgs const& e) const;
  };
  struct GetPreviewPageEventHandler : Windows::Foundation::IUnknown {
    GetPreviewPageEventHandler(std::nullptr_t = nullptr) noexcept {}
    GetPreviewPageEventHandler(void* ptr, take_ownership_from_abi_t) noexcept
        : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
    GetPreviewPageEventHandler(GetPreviewPageEventHandler const&) noexcept =
        default;
    GetPreviewPageEventHandler(GetPreviewPageEventHandler&&) noexcept = default;
    GetPreviewPageEventHandler& operator=(
        GetPreviewPageEventHandler const&) & noexcept = default;
    GetPreviewPageEventHandler& operator=(
        GetPreviewPageEventHandler&&) & noexcept = default;
    template <typename L>
    GetPreviewPageEventHandler(L lambda);
    template <typename F>
    GetPreviewPageEventHandler(F* function);
    template <typename O, typename M>
    GetPreviewPageEventHandler(O* object, M method);
    template <typename O, typename M>
    GetPreviewPageEventHandler(com_ptr<O>&& object, M method);
    template <typename O, typename M>
    GetPreviewPageEventHandler(weak_ref<O>&& object, M method);
    auto operator()(
        winrt::Windows::Foundation::IInspectable const& sender,
        winrt::Windows::UI::Xaml::Printing::GetPreviewPageEventArgs const& e)
        const;
  };
  struct PaginateEventHandler : Windows::Foundation::IUnknown {
    PaginateEventHandler(std::nullptr_t = nullptr) noexcept {}
    PaginateEventHandler(void* ptr, take_ownership_from_abi_t) noexcept
        : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
    PaginateEventHandler(PaginateEventHandler const&) noexcept = default;
    PaginateEventHandler(PaginateEventHandler&&) noexcept = default;
    PaginateEventHandler& operator=(PaginateEventHandler const&) & noexcept =
        default;
    PaginateEventHandler& operator=(PaginateEventHandler&&) & noexcept =
        default;
    template <typename L>
    PaginateEventHandler(L lambda);
    template <typename F>
    PaginateEventHandler(F* function);
    template <typename O, typename M>
    PaginateEventHandler(O* object, M method);
    template <typename O, typename M>
    PaginateEventHandler(com_ptr<O>&& object, M method);
    template <typename O, typename M>
    PaginateEventHandler(weak_ref<O>&& object, M method);
    auto operator()(
        winrt::Windows::Foundation::IInspectable const& sender,
        winrt::Windows::UI::Xaml::Printing::PaginateEventArgs const& e) const;
  };
  struct __declspec(empty_bases) AddPagesEventArgs
      : winrt::Windows::UI::Xaml::Printing::IAddPagesEventArgs {
    AddPagesEventArgs(std::nullptr_t) noexcept {}
    AddPagesEventArgs(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Xaml::Printing::IAddPagesEventArgs(
              ptr, take_ownership_from_abi) {}
    AddPagesEventArgs();
    AddPagesEventArgs(AddPagesEventArgs const&) noexcept = default;
    AddPagesEventArgs(AddPagesEventArgs&&) noexcept = default;
    AddPagesEventArgs& operator=(AddPagesEventArgs const&) & noexcept = default;
    AddPagesEventArgs& operator=(AddPagesEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) GetPreviewPageEventArgs
      : winrt::Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs {
    GetPreviewPageEventArgs(std::nullptr_t) noexcept {}
    GetPreviewPageEventArgs(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs(
              ptr, take_ownership_from_abi) {}
    GetPreviewPageEventArgs();
    GetPreviewPageEventArgs(GetPreviewPageEventArgs const&) noexcept = default;
    GetPreviewPageEventArgs(GetPreviewPageEventArgs&&) noexcept = default;
    GetPreviewPageEventArgs& operator=(
        GetPreviewPageEventArgs const&) & noexcept = default;
    GetPreviewPageEventArgs& operator=(GetPreviewPageEventArgs&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) PaginateEventArgs
      : winrt::Windows::UI::Xaml::Printing::IPaginateEventArgs {
    PaginateEventArgs(std::nullptr_t) noexcept {}
    PaginateEventArgs(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Xaml::Printing::IPaginateEventArgs(
              ptr, take_ownership_from_abi) {}
    PaginateEventArgs();
    PaginateEventArgs(PaginateEventArgs const&) noexcept = default;
    PaginateEventArgs(PaginateEventArgs&&) noexcept = default;
    PaginateEventArgs& operator=(PaginateEventArgs const&) & noexcept = default;
    PaginateEventArgs& operator=(PaginateEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) PrintDocument
      : winrt::Windows::UI::Xaml::Printing::IPrintDocument,
        impl::base<PrintDocument, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<PrintDocument,
                      winrt::Windows::UI::Xaml::IDependencyObject,
                      winrt::Windows::UI::Xaml::IDependencyObject2> {
    PrintDocument(std::nullptr_t) noexcept {}
    PrintDocument(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Xaml::Printing::IPrintDocument(
              ptr, take_ownership_from_abi) {}
    PrintDocument();
    PrintDocument(PrintDocument const&) noexcept = default;
    PrintDocument(PrintDocument&&) noexcept = default;
    PrintDocument& operator=(PrintDocument const&) & noexcept = default;
    PrintDocument& operator=(PrintDocument&&) & noexcept = default;
    [[nodiscard]] static auto DocumentSourceProperty();
  };
}
#endif
