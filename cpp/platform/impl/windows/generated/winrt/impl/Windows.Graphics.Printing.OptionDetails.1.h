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

#ifndef WINRT_Windows_Graphics_Printing_OptionDetails_1_H
#define WINRT_Windows_Graphics_Printing_OptionDetails_1_H
#include "winrt/impl/Windows.Graphics.Printing.OptionDetails.0.h"
WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::OptionDetails {
  struct __declspec(empty_bases) IPrintBindingOptionDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintBindingOptionDetails> {
    IPrintBindingOptionDetails(std::nullptr_t = nullptr) noexcept {}
    IPrintBindingOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintBindingOptionDetails(IPrintBindingOptionDetails const&) noexcept =
        default;
    IPrintBindingOptionDetails(IPrintBindingOptionDetails&&) noexcept = default;
    IPrintBindingOptionDetails& operator=(
        IPrintBindingOptionDetails const&) & noexcept = default;
    IPrintBindingOptionDetails& operator=(
        IPrintBindingOptionDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPrintBorderingOptionDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintBorderingOptionDetails> {
    IPrintBorderingOptionDetails(std::nullptr_t = nullptr) noexcept {}
    IPrintBorderingOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintBorderingOptionDetails(IPrintBorderingOptionDetails const&) noexcept =
        default;
    IPrintBorderingOptionDetails(IPrintBorderingOptionDetails&&) noexcept =
        default;
    IPrintBorderingOptionDetails& operator=(
        IPrintBorderingOptionDetails const&) & noexcept = default;
    IPrintBorderingOptionDetails& operator=(
        IPrintBorderingOptionDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPrintCollationOptionDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintCollationOptionDetails> {
    IPrintCollationOptionDetails(std::nullptr_t = nullptr) noexcept {}
    IPrintCollationOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintCollationOptionDetails(IPrintCollationOptionDetails const&) noexcept =
        default;
    IPrintCollationOptionDetails(IPrintCollationOptionDetails&&) noexcept =
        default;
    IPrintCollationOptionDetails& operator=(
        IPrintCollationOptionDetails const&) & noexcept = default;
    IPrintCollationOptionDetails& operator=(
        IPrintCollationOptionDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPrintColorModeOptionDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintColorModeOptionDetails> {
    IPrintColorModeOptionDetails(std::nullptr_t = nullptr) noexcept {}
    IPrintColorModeOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintColorModeOptionDetails(IPrintColorModeOptionDetails const&) noexcept =
        default;
    IPrintColorModeOptionDetails(IPrintColorModeOptionDetails&&) noexcept =
        default;
    IPrintColorModeOptionDetails& operator=(
        IPrintColorModeOptionDetails const&) & noexcept = default;
    IPrintColorModeOptionDetails& operator=(
        IPrintColorModeOptionDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPrintCopiesOptionDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintCopiesOptionDetails> {
    IPrintCopiesOptionDetails(std::nullptr_t = nullptr) noexcept {}
    IPrintCopiesOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintCopiesOptionDetails(IPrintCopiesOptionDetails const&) noexcept =
        default;
    IPrintCopiesOptionDetails(IPrintCopiesOptionDetails&&) noexcept = default;
    IPrintCopiesOptionDetails& operator=(
        IPrintCopiesOptionDetails const&) & noexcept = default;
    IPrintCopiesOptionDetails& operator=(
        IPrintCopiesOptionDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPrintCustomItemDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintCustomItemDetails> {
    IPrintCustomItemDetails(std::nullptr_t = nullptr) noexcept {}
    IPrintCustomItemDetails(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintCustomItemDetails(IPrintCustomItemDetails const&) noexcept = default;
    IPrintCustomItemDetails(IPrintCustomItemDetails&&) noexcept = default;
    IPrintCustomItemDetails& operator=(
        IPrintCustomItemDetails const&) & noexcept = default;
    IPrintCustomItemDetails& operator=(IPrintCustomItemDetails&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IPrintCustomItemListOptionDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintCustomItemListOptionDetails>,
        impl::require<winrt::Windows::Graphics::Printing::OptionDetails::
                          IPrintCustomItemListOptionDetails,
                      winrt::Windows::Graphics::Printing::OptionDetails::
                          IPrintOptionDetails,
                      winrt::Windows::Graphics::Printing::OptionDetails::
                          IPrintItemListOptionDetails,
                      winrt::Windows::Graphics::Printing::OptionDetails::
                          IPrintCustomOptionDetails> {
    IPrintCustomItemListOptionDetails(std::nullptr_t = nullptr) noexcept {}
    IPrintCustomItemListOptionDetails(void* ptr,
                                      take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintCustomItemListOptionDetails(
        IPrintCustomItemListOptionDetails const&) noexcept = default;
    IPrintCustomItemListOptionDetails(
        IPrintCustomItemListOptionDetails&&) noexcept = default;
    IPrintCustomItemListOptionDetails& operator=(
        IPrintCustomItemListOptionDetails const&) & noexcept = default;
    IPrintCustomItemListOptionDetails& operator=(
        IPrintCustomItemListOptionDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPrintCustomItemListOptionDetails2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintCustomItemListOptionDetails2> {
    IPrintCustomItemListOptionDetails2(std::nullptr_t = nullptr) noexcept {}
    IPrintCustomItemListOptionDetails2(void* ptr,
                                       take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintCustomItemListOptionDetails2(
        IPrintCustomItemListOptionDetails2 const&) noexcept = default;
    IPrintCustomItemListOptionDetails2(
        IPrintCustomItemListOptionDetails2&&) noexcept = default;
    IPrintCustomItemListOptionDetails2& operator=(
        IPrintCustomItemListOptionDetails2 const&) & noexcept = default;
    IPrintCustomItemListOptionDetails2& operator=(
        IPrintCustomItemListOptionDetails2&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPrintCustomItemListOptionDetails3
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintCustomItemListOptionDetails3> {
    IPrintCustomItemListOptionDetails3(std::nullptr_t = nullptr) noexcept {}
    IPrintCustomItemListOptionDetails3(void* ptr,
                                       take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintCustomItemListOptionDetails3(
        IPrintCustomItemListOptionDetails3 const&) noexcept = default;
    IPrintCustomItemListOptionDetails3(
        IPrintCustomItemListOptionDetails3&&) noexcept = default;
    IPrintCustomItemListOptionDetails3& operator=(
        IPrintCustomItemListOptionDetails3 const&) & noexcept = default;
    IPrintCustomItemListOptionDetails3& operator=(
        IPrintCustomItemListOptionDetails3&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPrintCustomOptionDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintCustomOptionDetails>,
        impl::require<winrt::Windows::Graphics::Printing::OptionDetails::
                          IPrintCustomOptionDetails,
                      winrt::Windows::Graphics::Printing::OptionDetails::
                          IPrintOptionDetails> {
    IPrintCustomOptionDetails(std::nullptr_t = nullptr) noexcept {}
    IPrintCustomOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintCustomOptionDetails(IPrintCustomOptionDetails const&) noexcept =
        default;
    IPrintCustomOptionDetails(IPrintCustomOptionDetails&&) noexcept = default;
    IPrintCustomOptionDetails& operator=(
        IPrintCustomOptionDetails const&) & noexcept = default;
    IPrintCustomOptionDetails& operator=(
        IPrintCustomOptionDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPrintCustomTextOptionDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintCustomTextOptionDetails>,
        impl::require<winrt::Windows::Graphics::Printing::OptionDetails::
                          IPrintCustomTextOptionDetails,
                      winrt::Windows::Graphics::Printing::OptionDetails::
                          IPrintOptionDetails,
                      winrt::Windows::Graphics::Printing::OptionDetails::
                          IPrintCustomOptionDetails> {
    IPrintCustomTextOptionDetails(std::nullptr_t = nullptr) noexcept {}
    IPrintCustomTextOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintCustomTextOptionDetails(
        IPrintCustomTextOptionDetails const&) noexcept = default;
    IPrintCustomTextOptionDetails(IPrintCustomTextOptionDetails&&) noexcept =
        default;
    IPrintCustomTextOptionDetails& operator=(
        IPrintCustomTextOptionDetails const&) & noexcept = default;
    IPrintCustomTextOptionDetails& operator=(
        IPrintCustomTextOptionDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPrintCustomTextOptionDetails2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintCustomTextOptionDetails2> {
    IPrintCustomTextOptionDetails2(std::nullptr_t = nullptr) noexcept {}
    IPrintCustomTextOptionDetails2(void* ptr,
                                   take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintCustomTextOptionDetails2(
        IPrintCustomTextOptionDetails2 const&) noexcept = default;
    IPrintCustomTextOptionDetails2(IPrintCustomTextOptionDetails2&&) noexcept =
        default;
    IPrintCustomTextOptionDetails2& operator=(
        IPrintCustomTextOptionDetails2 const&) & noexcept = default;
    IPrintCustomTextOptionDetails2& operator=(
        IPrintCustomTextOptionDetails2&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPrintCustomToggleOptionDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintCustomToggleOptionDetails> {
    IPrintCustomToggleOptionDetails(std::nullptr_t = nullptr) noexcept {}
    IPrintCustomToggleOptionDetails(void* ptr,
                                    take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintCustomToggleOptionDetails(
        IPrintCustomToggleOptionDetails const&) noexcept = default;
    IPrintCustomToggleOptionDetails(
        IPrintCustomToggleOptionDetails&&) noexcept = default;
    IPrintCustomToggleOptionDetails& operator=(
        IPrintCustomToggleOptionDetails const&) & noexcept = default;
    IPrintCustomToggleOptionDetails& operator=(
        IPrintCustomToggleOptionDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPrintDuplexOptionDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintDuplexOptionDetails> {
    IPrintDuplexOptionDetails(std::nullptr_t = nullptr) noexcept {}
    IPrintDuplexOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintDuplexOptionDetails(IPrintDuplexOptionDetails const&) noexcept =
        default;
    IPrintDuplexOptionDetails(IPrintDuplexOptionDetails&&) noexcept = default;
    IPrintDuplexOptionDetails& operator=(
        IPrintDuplexOptionDetails const&) & noexcept = default;
    IPrintDuplexOptionDetails& operator=(
        IPrintDuplexOptionDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPrintHolePunchOptionDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintHolePunchOptionDetails> {
    IPrintHolePunchOptionDetails(std::nullptr_t = nullptr) noexcept {}
    IPrintHolePunchOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintHolePunchOptionDetails(IPrintHolePunchOptionDetails const&) noexcept =
        default;
    IPrintHolePunchOptionDetails(IPrintHolePunchOptionDetails&&) noexcept =
        default;
    IPrintHolePunchOptionDetails& operator=(
        IPrintHolePunchOptionDetails const&) & noexcept = default;
    IPrintHolePunchOptionDetails& operator=(
        IPrintHolePunchOptionDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPrintItemListOptionDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintItemListOptionDetails>,
        impl::require<winrt::Windows::Graphics::Printing::OptionDetails::
                          IPrintItemListOptionDetails,
                      winrt::Windows::Graphics::Printing::OptionDetails::
                          IPrintOptionDetails> {
    IPrintItemListOptionDetails(std::nullptr_t = nullptr) noexcept {}
    IPrintItemListOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintItemListOptionDetails(IPrintItemListOptionDetails const&) noexcept =
        default;
    IPrintItemListOptionDetails(IPrintItemListOptionDetails&&) noexcept =
        default;
    IPrintItemListOptionDetails& operator=(
        IPrintItemListOptionDetails const&) & noexcept = default;
    IPrintItemListOptionDetails& operator=(
        IPrintItemListOptionDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPrintMediaSizeOptionDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintMediaSizeOptionDetails> {
    IPrintMediaSizeOptionDetails(std::nullptr_t = nullptr) noexcept {}
    IPrintMediaSizeOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintMediaSizeOptionDetails(IPrintMediaSizeOptionDetails const&) noexcept =
        default;
    IPrintMediaSizeOptionDetails(IPrintMediaSizeOptionDetails&&) noexcept =
        default;
    IPrintMediaSizeOptionDetails& operator=(
        IPrintMediaSizeOptionDetails const&) & noexcept = default;
    IPrintMediaSizeOptionDetails& operator=(
        IPrintMediaSizeOptionDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPrintMediaTypeOptionDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintMediaTypeOptionDetails> {
    IPrintMediaTypeOptionDetails(std::nullptr_t = nullptr) noexcept {}
    IPrintMediaTypeOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintMediaTypeOptionDetails(IPrintMediaTypeOptionDetails const&) noexcept =
        default;
    IPrintMediaTypeOptionDetails(IPrintMediaTypeOptionDetails&&) noexcept =
        default;
    IPrintMediaTypeOptionDetails& operator=(
        IPrintMediaTypeOptionDetails const&) & noexcept = default;
    IPrintMediaTypeOptionDetails& operator=(
        IPrintMediaTypeOptionDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPrintNumberOptionDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintNumberOptionDetails>,
        impl::require<winrt::Windows::Graphics::Printing::OptionDetails::
                          IPrintNumberOptionDetails,
                      winrt::Windows::Graphics::Printing::OptionDetails::
                          IPrintOptionDetails> {
    IPrintNumberOptionDetails(std::nullptr_t = nullptr) noexcept {}
    IPrintNumberOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintNumberOptionDetails(IPrintNumberOptionDetails const&) noexcept =
        default;
    IPrintNumberOptionDetails(IPrintNumberOptionDetails&&) noexcept = default;
    IPrintNumberOptionDetails& operator=(
        IPrintNumberOptionDetails const&) & noexcept = default;
    IPrintNumberOptionDetails& operator=(
        IPrintNumberOptionDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPrintOptionDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintOptionDetails> {
    IPrintOptionDetails(std::nullptr_t = nullptr) noexcept {}
    IPrintOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintOptionDetails(IPrintOptionDetails const&) noexcept = default;
    IPrintOptionDetails(IPrintOptionDetails&&) noexcept = default;
    IPrintOptionDetails& operator=(IPrintOptionDetails const&) & noexcept =
        default;
    IPrintOptionDetails& operator=(IPrintOptionDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPrintOrientationOptionDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintOrientationOptionDetails> {
    IPrintOrientationOptionDetails(std::nullptr_t = nullptr) noexcept {}
    IPrintOrientationOptionDetails(void* ptr,
                                   take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintOrientationOptionDetails(
        IPrintOrientationOptionDetails const&) noexcept = default;
    IPrintOrientationOptionDetails(IPrintOrientationOptionDetails&&) noexcept =
        default;
    IPrintOrientationOptionDetails& operator=(
        IPrintOrientationOptionDetails const&) & noexcept = default;
    IPrintOrientationOptionDetails& operator=(
        IPrintOrientationOptionDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPrintPageRangeOptionDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintPageRangeOptionDetails> {
    IPrintPageRangeOptionDetails(std::nullptr_t = nullptr) noexcept {}
    IPrintPageRangeOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintPageRangeOptionDetails(IPrintPageRangeOptionDetails const&) noexcept =
        default;
    IPrintPageRangeOptionDetails(IPrintPageRangeOptionDetails&&) noexcept =
        default;
    IPrintPageRangeOptionDetails& operator=(
        IPrintPageRangeOptionDetails const&) & noexcept = default;
    IPrintPageRangeOptionDetails& operator=(
        IPrintPageRangeOptionDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPrintQualityOptionDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintQualityOptionDetails> {
    IPrintQualityOptionDetails(std::nullptr_t = nullptr) noexcept {}
    IPrintQualityOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintQualityOptionDetails(IPrintQualityOptionDetails const&) noexcept =
        default;
    IPrintQualityOptionDetails(IPrintQualityOptionDetails&&) noexcept = default;
    IPrintQualityOptionDetails& operator=(
        IPrintQualityOptionDetails const&) & noexcept = default;
    IPrintQualityOptionDetails& operator=(
        IPrintQualityOptionDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPrintStapleOptionDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintStapleOptionDetails> {
    IPrintStapleOptionDetails(std::nullptr_t = nullptr) noexcept {}
    IPrintStapleOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintStapleOptionDetails(IPrintStapleOptionDetails const&) noexcept =
        default;
    IPrintStapleOptionDetails(IPrintStapleOptionDetails&&) noexcept = default;
    IPrintStapleOptionDetails& operator=(
        IPrintStapleOptionDetails const&) & noexcept = default;
    IPrintStapleOptionDetails& operator=(
        IPrintStapleOptionDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPrintTaskOptionChangedEventArgs
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTaskOptionChangedEventArgs> {
    IPrintTaskOptionChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    IPrintTaskOptionChangedEventArgs(void* ptr,
                                     take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintTaskOptionChangedEventArgs(
        IPrintTaskOptionChangedEventArgs const&) noexcept = default;
    IPrintTaskOptionChangedEventArgs(
        IPrintTaskOptionChangedEventArgs&&) noexcept = default;
    IPrintTaskOptionChangedEventArgs& operator=(
        IPrintTaskOptionChangedEventArgs const&) & noexcept = default;
    IPrintTaskOptionChangedEventArgs& operator=(
        IPrintTaskOptionChangedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPrintTaskOptionDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTaskOptionDetails> {
    IPrintTaskOptionDetails(std::nullptr_t = nullptr) noexcept {}
    IPrintTaskOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintTaskOptionDetails(IPrintTaskOptionDetails const&) noexcept = default;
    IPrintTaskOptionDetails(IPrintTaskOptionDetails&&) noexcept = default;
    IPrintTaskOptionDetails& operator=(
        IPrintTaskOptionDetails const&) & noexcept = default;
    IPrintTaskOptionDetails& operator=(IPrintTaskOptionDetails&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IPrintTaskOptionDetails2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTaskOptionDetails2> {
    IPrintTaskOptionDetails2(std::nullptr_t = nullptr) noexcept {}
    IPrintTaskOptionDetails2(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintTaskOptionDetails2(IPrintTaskOptionDetails2 const&) noexcept =
        default;
    IPrintTaskOptionDetails2(IPrintTaskOptionDetails2&&) noexcept = default;
    IPrintTaskOptionDetails2& operator=(
        IPrintTaskOptionDetails2 const&) & noexcept = default;
    IPrintTaskOptionDetails2& operator=(IPrintTaskOptionDetails2&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IPrintTaskOptionDetailsStatic
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTaskOptionDetailsStatic> {
    IPrintTaskOptionDetailsStatic(std::nullptr_t = nullptr) noexcept {}
    IPrintTaskOptionDetailsStatic(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintTaskOptionDetailsStatic(
        IPrintTaskOptionDetailsStatic const&) noexcept = default;
    IPrintTaskOptionDetailsStatic(IPrintTaskOptionDetailsStatic&&) noexcept =
        default;
    IPrintTaskOptionDetailsStatic& operator=(
        IPrintTaskOptionDetailsStatic const&) & noexcept = default;
    IPrintTaskOptionDetailsStatic& operator=(
        IPrintTaskOptionDetailsStatic&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPrintTextOptionDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTextOptionDetails>,
        impl::require<winrt::Windows::Graphics::Printing::OptionDetails::
                          IPrintTextOptionDetails,
                      winrt::Windows::Graphics::Printing::OptionDetails::
                          IPrintOptionDetails> {
    IPrintTextOptionDetails(std::nullptr_t = nullptr) noexcept {}
    IPrintTextOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPrintTextOptionDetails(IPrintTextOptionDetails const&) noexcept = default;
    IPrintTextOptionDetails(IPrintTextOptionDetails&&) noexcept = default;
    IPrintTextOptionDetails& operator=(
        IPrintTextOptionDetails const&) & noexcept = default;
    IPrintTextOptionDetails& operator=(IPrintTextOptionDetails&&) & noexcept =
        default;
  };
}
#endif
