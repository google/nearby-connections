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

#ifndef WINRT_Windows_UI_Xaml_Printing_1_H
#define WINRT_Windows_UI_Xaml_Printing_1_H
#include "winrt/impl/Windows.UI.Xaml.Printing.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Printing {
  struct __declspec(empty_bases) IAddPagesEventArgs
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAddPagesEventArgs> {
    IAddPagesEventArgs(std::nullptr_t = nullptr) noexcept {}
    IAddPagesEventArgs(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAddPagesEventArgs(IAddPagesEventArgs const&) noexcept = default;
    IAddPagesEventArgs(IAddPagesEventArgs&&) noexcept = default;
    IAddPagesEventArgs& operator=(IAddPagesEventArgs const&) & noexcept =
        default;
    IAddPagesEventArgs& operator=(IAddPagesEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IGetPreviewPageEventArgs
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGetPreviewPageEventArgs> {
    IGetPreviewPageEventArgs(std::nullptr_t = nullptr) noexcept {}
    IGetPreviewPageEventArgs(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IGetPreviewPageEventArgs(IGetPreviewPageEventArgs const&) noexcept =
        default;
    IGetPreviewPageEventArgs(IGetPreviewPageEventArgs&&) noexcept = default;
    IGetPreviewPageEventArgs& operator=(
        IGetPreviewPageEventArgs const&) & noexcept = default;
    IGetPreviewPageEventArgs& operator=(IGetPreviewPageEventArgs&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IPaginateEventArgs
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaginateEventArgs> {
    IPaginateEventArgs(std::nullptr_t = nullptr) noexcept {}
    IPaginateEventArgs(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaginateEventArgs(IPaginateEventArgs const&) noexcept = default;
    IPaginateEventArgs(IPaginateEventArgs&&) noexcept = default;
    IPaginateEventArgs& operator=(IPaginateEventArgs const&) & noexcept =
        default;
    IPaginateEventArgs& operator=(IPaginateEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPrintDocument
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintDocument> {
    IPrintDocument(std::nullptr_t = nullptr) noexcept {}
    IPrintDocument(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintDocument(IPrintDocument const&) noexcept = default;
    IPrintDocument(IPrintDocument&&) noexcept = default;
    IPrintDocument& operator=(IPrintDocument const&) & noexcept = default;
    IPrintDocument& operator=(IPrintDocument&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPrintDocumentFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintDocumentFactory> {
    IPrintDocumentFactory(std::nullptr_t = nullptr) noexcept {}
    IPrintDocumentFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintDocumentFactory(IPrintDocumentFactory const&) noexcept = default;
    IPrintDocumentFactory(IPrintDocumentFactory&&) noexcept = default;
    IPrintDocumentFactory& operator=(IPrintDocumentFactory const&) & noexcept =
        default;
    IPrintDocumentFactory& operator=(IPrintDocumentFactory&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IPrintDocumentStatics
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintDocumentStatics> {
    IPrintDocumentStatics(std::nullptr_t = nullptr) noexcept {}
    IPrintDocumentStatics(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintDocumentStatics(IPrintDocumentStatics const&) noexcept = default;
    IPrintDocumentStatics(IPrintDocumentStatics&&) noexcept = default;
    IPrintDocumentStatics& operator=(IPrintDocumentStatics const&) & noexcept =
        default;
    IPrintDocumentStatics& operator=(IPrintDocumentStatics&&) & noexcept =
        default;
  };
}
#endif
