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

#ifndef WINRT_Windows_ApplicationModel_Wallet_1_H
#define WINRT_Windows_ApplicationModel_Wallet_1_H
#include "winrt/impl/Windows.ApplicationModel.Wallet.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Wallet {
  struct __declspec(empty_bases) IWalletBarcode
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWalletBarcode> {
    IWalletBarcode(std::nullptr_t = nullptr) noexcept {}
    IWalletBarcode(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWalletBarcode(IWalletBarcode const&) noexcept = default;
    IWalletBarcode(IWalletBarcode&&) noexcept = default;
    IWalletBarcode& operator=(IWalletBarcode const&) & noexcept = default;
    IWalletBarcode& operator=(IWalletBarcode&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IWalletBarcodeFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWalletBarcodeFactory> {
    IWalletBarcodeFactory(std::nullptr_t = nullptr) noexcept {}
    IWalletBarcodeFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWalletBarcodeFactory(IWalletBarcodeFactory const&) noexcept = default;
    IWalletBarcodeFactory(IWalletBarcodeFactory&&) noexcept = default;
    IWalletBarcodeFactory& operator=(IWalletBarcodeFactory const&) & noexcept =
        default;
    IWalletBarcodeFactory& operator=(IWalletBarcodeFactory&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IWalletItem
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWalletItem> {
    IWalletItem(std::nullptr_t = nullptr) noexcept {}
    IWalletItem(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWalletItem(IWalletItem const&) noexcept = default;
    IWalletItem(IWalletItem&&) noexcept = default;
    IWalletItem& operator=(IWalletItem const&) & noexcept = default;
    IWalletItem& operator=(IWalletItem&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IWalletItemCustomProperty
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWalletItemCustomProperty> {
    IWalletItemCustomProperty(std::nullptr_t = nullptr) noexcept {}
    IWalletItemCustomProperty(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWalletItemCustomProperty(IWalletItemCustomProperty const&) noexcept =
        default;
    IWalletItemCustomProperty(IWalletItemCustomProperty&&) noexcept = default;
    IWalletItemCustomProperty& operator=(
        IWalletItemCustomProperty const&) & noexcept = default;
    IWalletItemCustomProperty& operator=(
        IWalletItemCustomProperty&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IWalletItemCustomPropertyFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWalletItemCustomPropertyFactory> {
    IWalletItemCustomPropertyFactory(std::nullptr_t = nullptr) noexcept {}
    IWalletItemCustomPropertyFactory(void* ptr,
                                     take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWalletItemCustomPropertyFactory(
        IWalletItemCustomPropertyFactory const&) noexcept = default;
    IWalletItemCustomPropertyFactory(
        IWalletItemCustomPropertyFactory&&) noexcept = default;
    IWalletItemCustomPropertyFactory& operator=(
        IWalletItemCustomPropertyFactory const&) & noexcept = default;
    IWalletItemCustomPropertyFactory& operator=(
        IWalletItemCustomPropertyFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IWalletItemFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWalletItemFactory> {
    IWalletItemFactory(std::nullptr_t = nullptr) noexcept {}
    IWalletItemFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWalletItemFactory(IWalletItemFactory const&) noexcept = default;
    IWalletItemFactory(IWalletItemFactory&&) noexcept = default;
    IWalletItemFactory& operator=(IWalletItemFactory const&) & noexcept =
        default;
    IWalletItemFactory& operator=(IWalletItemFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IWalletItemStore
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWalletItemStore> {
    IWalletItemStore(std::nullptr_t = nullptr) noexcept {}
    IWalletItemStore(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWalletItemStore(IWalletItemStore const&) noexcept = default;
    IWalletItemStore(IWalletItemStore&&) noexcept = default;
    IWalletItemStore& operator=(IWalletItemStore const&) & noexcept = default;
    IWalletItemStore& operator=(IWalletItemStore&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IWalletItemStore2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWalletItemStore2> {
    IWalletItemStore2(std::nullptr_t = nullptr) noexcept {}
    IWalletItemStore2(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWalletItemStore2(IWalletItemStore2 const&) noexcept = default;
    IWalletItemStore2(IWalletItemStore2&&) noexcept = default;
    IWalletItemStore2& operator=(IWalletItemStore2 const&) & noexcept = default;
    IWalletItemStore2& operator=(IWalletItemStore2&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IWalletManagerStatics
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWalletManagerStatics> {
    IWalletManagerStatics(std::nullptr_t = nullptr) noexcept {}
    IWalletManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWalletManagerStatics(IWalletManagerStatics const&) noexcept = default;
    IWalletManagerStatics(IWalletManagerStatics&&) noexcept = default;
    IWalletManagerStatics& operator=(IWalletManagerStatics const&) & noexcept =
        default;
    IWalletManagerStatics& operator=(IWalletManagerStatics&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IWalletRelevantLocation
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWalletRelevantLocation> {
    IWalletRelevantLocation(std::nullptr_t = nullptr) noexcept {}
    IWalletRelevantLocation(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWalletRelevantLocation(IWalletRelevantLocation const&) noexcept = default;
    IWalletRelevantLocation(IWalletRelevantLocation&&) noexcept = default;
    IWalletRelevantLocation& operator=(
        IWalletRelevantLocation const&) & noexcept = default;
    IWalletRelevantLocation& operator=(IWalletRelevantLocation&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IWalletTransaction
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWalletTransaction> {
    IWalletTransaction(std::nullptr_t = nullptr) noexcept {}
    IWalletTransaction(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWalletTransaction(IWalletTransaction const&) noexcept = default;
    IWalletTransaction(IWalletTransaction&&) noexcept = default;
    IWalletTransaction& operator=(IWalletTransaction const&) & noexcept =
        default;
    IWalletTransaction& operator=(IWalletTransaction&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IWalletVerb
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWalletVerb> {
    IWalletVerb(std::nullptr_t = nullptr) noexcept {}
    IWalletVerb(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWalletVerb(IWalletVerb const&) noexcept = default;
    IWalletVerb(IWalletVerb&&) noexcept = default;
    IWalletVerb& operator=(IWalletVerb const&) & noexcept = default;
    IWalletVerb& operator=(IWalletVerb&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IWalletVerbFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWalletVerbFactory> {
    IWalletVerbFactory(std::nullptr_t = nullptr) noexcept {}
    IWalletVerbFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWalletVerbFactory(IWalletVerbFactory const&) noexcept = default;
    IWalletVerbFactory(IWalletVerbFactory&&) noexcept = default;
    IWalletVerbFactory& operator=(IWalletVerbFactory const&) & noexcept =
        default;
    IWalletVerbFactory& operator=(IWalletVerbFactory&&) & noexcept = default;
  };
}
#endif
