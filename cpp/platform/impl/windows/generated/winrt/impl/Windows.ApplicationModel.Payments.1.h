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

#ifndef WINRT_Windows_ApplicationModel_Payments_1_H
#define WINRT_Windows_ApplicationModel_Payments_1_H
#include "winrt/impl/Windows.ApplicationModel.Payments.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Payments {
  struct __declspec(empty_bases) IPaymentAddress
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentAddress> {
    IPaymentAddress(std::nullptr_t = nullptr) noexcept {}
    IPaymentAddress(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentAddress(IPaymentAddress const&) noexcept = default;
    IPaymentAddress(IPaymentAddress&&) noexcept = default;
    IPaymentAddress& operator=(IPaymentAddress const&) & noexcept = default;
    IPaymentAddress& operator=(IPaymentAddress&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPaymentCanMakePaymentResult
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentCanMakePaymentResult> {
    IPaymentCanMakePaymentResult(std::nullptr_t = nullptr) noexcept {}
    IPaymentCanMakePaymentResult(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentCanMakePaymentResult(IPaymentCanMakePaymentResult const&) noexcept =
        default;
    IPaymentCanMakePaymentResult(IPaymentCanMakePaymentResult&&) noexcept =
        default;
    IPaymentCanMakePaymentResult& operator=(
        IPaymentCanMakePaymentResult const&) & noexcept = default;
    IPaymentCanMakePaymentResult& operator=(
        IPaymentCanMakePaymentResult&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPaymentCanMakePaymentResultFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentCanMakePaymentResultFactory> {
    IPaymentCanMakePaymentResultFactory(std::nullptr_t = nullptr) noexcept {}
    IPaymentCanMakePaymentResultFactory(void* ptr,
                                        take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentCanMakePaymentResultFactory(
        IPaymentCanMakePaymentResultFactory const&) noexcept = default;
    IPaymentCanMakePaymentResultFactory(
        IPaymentCanMakePaymentResultFactory&&) noexcept = default;
    IPaymentCanMakePaymentResultFactory& operator=(
        IPaymentCanMakePaymentResultFactory const&) & noexcept = default;
    IPaymentCanMakePaymentResultFactory& operator=(
        IPaymentCanMakePaymentResultFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPaymentCurrencyAmount
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentCurrencyAmount> {
    IPaymentCurrencyAmount(std::nullptr_t = nullptr) noexcept {}
    IPaymentCurrencyAmount(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentCurrencyAmount(IPaymentCurrencyAmount const&) noexcept = default;
    IPaymentCurrencyAmount(IPaymentCurrencyAmount&&) noexcept = default;
    IPaymentCurrencyAmount& operator=(
        IPaymentCurrencyAmount const&) & noexcept = default;
    IPaymentCurrencyAmount& operator=(IPaymentCurrencyAmount&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IPaymentCurrencyAmountFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentCurrencyAmountFactory> {
    IPaymentCurrencyAmountFactory(std::nullptr_t = nullptr) noexcept {}
    IPaymentCurrencyAmountFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentCurrencyAmountFactory(
        IPaymentCurrencyAmountFactory const&) noexcept = default;
    IPaymentCurrencyAmountFactory(IPaymentCurrencyAmountFactory&&) noexcept =
        default;
    IPaymentCurrencyAmountFactory& operator=(
        IPaymentCurrencyAmountFactory const&) & noexcept = default;
    IPaymentCurrencyAmountFactory& operator=(
        IPaymentCurrencyAmountFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPaymentDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentDetails> {
    IPaymentDetails(std::nullptr_t = nullptr) noexcept {}
    IPaymentDetails(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentDetails(IPaymentDetails const&) noexcept = default;
    IPaymentDetails(IPaymentDetails&&) noexcept = default;
    IPaymentDetails& operator=(IPaymentDetails const&) & noexcept = default;
    IPaymentDetails& operator=(IPaymentDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPaymentDetailsFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentDetailsFactory> {
    IPaymentDetailsFactory(std::nullptr_t = nullptr) noexcept {}
    IPaymentDetailsFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentDetailsFactory(IPaymentDetailsFactory const&) noexcept = default;
    IPaymentDetailsFactory(IPaymentDetailsFactory&&) noexcept = default;
    IPaymentDetailsFactory& operator=(
        IPaymentDetailsFactory const&) & noexcept = default;
    IPaymentDetailsFactory& operator=(IPaymentDetailsFactory&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IPaymentDetailsModifier
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentDetailsModifier> {
    IPaymentDetailsModifier(std::nullptr_t = nullptr) noexcept {}
    IPaymentDetailsModifier(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentDetailsModifier(IPaymentDetailsModifier const&) noexcept = default;
    IPaymentDetailsModifier(IPaymentDetailsModifier&&) noexcept = default;
    IPaymentDetailsModifier& operator=(
        IPaymentDetailsModifier const&) & noexcept = default;
    IPaymentDetailsModifier& operator=(IPaymentDetailsModifier&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IPaymentDetailsModifierFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentDetailsModifierFactory> {
    IPaymentDetailsModifierFactory(std::nullptr_t = nullptr) noexcept {}
    IPaymentDetailsModifierFactory(void* ptr,
                                   take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentDetailsModifierFactory(
        IPaymentDetailsModifierFactory const&) noexcept = default;
    IPaymentDetailsModifierFactory(IPaymentDetailsModifierFactory&&) noexcept =
        default;
    IPaymentDetailsModifierFactory& operator=(
        IPaymentDetailsModifierFactory const&) & noexcept = default;
    IPaymentDetailsModifierFactory& operator=(
        IPaymentDetailsModifierFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPaymentItem
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentItem> {
    IPaymentItem(std::nullptr_t = nullptr) noexcept {}
    IPaymentItem(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentItem(IPaymentItem const&) noexcept = default;
    IPaymentItem(IPaymentItem&&) noexcept = default;
    IPaymentItem& operator=(IPaymentItem const&) & noexcept = default;
    IPaymentItem& operator=(IPaymentItem&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPaymentItemFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentItemFactory> {
    IPaymentItemFactory(std::nullptr_t = nullptr) noexcept {}
    IPaymentItemFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentItemFactory(IPaymentItemFactory const&) noexcept = default;
    IPaymentItemFactory(IPaymentItemFactory&&) noexcept = default;
    IPaymentItemFactory& operator=(IPaymentItemFactory const&) & noexcept =
        default;
    IPaymentItemFactory& operator=(IPaymentItemFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPaymentMediator
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentMediator> {
    IPaymentMediator(std::nullptr_t = nullptr) noexcept {}
    IPaymentMediator(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentMediator(IPaymentMediator const&) noexcept = default;
    IPaymentMediator(IPaymentMediator&&) noexcept = default;
    IPaymentMediator& operator=(IPaymentMediator const&) & noexcept = default;
    IPaymentMediator& operator=(IPaymentMediator&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPaymentMediator2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentMediator2> {
    IPaymentMediator2(std::nullptr_t = nullptr) noexcept {}
    IPaymentMediator2(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentMediator2(IPaymentMediator2 const&) noexcept = default;
    IPaymentMediator2(IPaymentMediator2&&) noexcept = default;
    IPaymentMediator2& operator=(IPaymentMediator2 const&) & noexcept = default;
    IPaymentMediator2& operator=(IPaymentMediator2&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPaymentMerchantInfo
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentMerchantInfo> {
    IPaymentMerchantInfo(std::nullptr_t = nullptr) noexcept {}
    IPaymentMerchantInfo(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentMerchantInfo(IPaymentMerchantInfo const&) noexcept = default;
    IPaymentMerchantInfo(IPaymentMerchantInfo&&) noexcept = default;
    IPaymentMerchantInfo& operator=(IPaymentMerchantInfo const&) & noexcept =
        default;
    IPaymentMerchantInfo& operator=(IPaymentMerchantInfo&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IPaymentMerchantInfoFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentMerchantInfoFactory> {
    IPaymentMerchantInfoFactory(std::nullptr_t = nullptr) noexcept {}
    IPaymentMerchantInfoFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentMerchantInfoFactory(IPaymentMerchantInfoFactory const&) noexcept =
        default;
    IPaymentMerchantInfoFactory(IPaymentMerchantInfoFactory&&) noexcept =
        default;
    IPaymentMerchantInfoFactory& operator=(
        IPaymentMerchantInfoFactory const&) & noexcept = default;
    IPaymentMerchantInfoFactory& operator=(
        IPaymentMerchantInfoFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPaymentMethodData
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentMethodData> {
    IPaymentMethodData(std::nullptr_t = nullptr) noexcept {}
    IPaymentMethodData(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentMethodData(IPaymentMethodData const&) noexcept = default;
    IPaymentMethodData(IPaymentMethodData&&) noexcept = default;
    IPaymentMethodData& operator=(IPaymentMethodData const&) & noexcept =
        default;
    IPaymentMethodData& operator=(IPaymentMethodData&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPaymentMethodDataFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentMethodDataFactory> {
    IPaymentMethodDataFactory(std::nullptr_t = nullptr) noexcept {}
    IPaymentMethodDataFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentMethodDataFactory(IPaymentMethodDataFactory const&) noexcept =
        default;
    IPaymentMethodDataFactory(IPaymentMethodDataFactory&&) noexcept = default;
    IPaymentMethodDataFactory& operator=(
        IPaymentMethodDataFactory const&) & noexcept = default;
    IPaymentMethodDataFactory& operator=(
        IPaymentMethodDataFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPaymentOptions
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentOptions> {
    IPaymentOptions(std::nullptr_t = nullptr) noexcept {}
    IPaymentOptions(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentOptions(IPaymentOptions const&) noexcept = default;
    IPaymentOptions(IPaymentOptions&&) noexcept = default;
    IPaymentOptions& operator=(IPaymentOptions const&) & noexcept = default;
    IPaymentOptions& operator=(IPaymentOptions&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPaymentRequest
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentRequest> {
    IPaymentRequest(std::nullptr_t = nullptr) noexcept {}
    IPaymentRequest(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentRequest(IPaymentRequest const&) noexcept = default;
    IPaymentRequest(IPaymentRequest&&) noexcept = default;
    IPaymentRequest& operator=(IPaymentRequest const&) & noexcept = default;
    IPaymentRequest& operator=(IPaymentRequest&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPaymentRequest2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentRequest2> {
    IPaymentRequest2(std::nullptr_t = nullptr) noexcept {}
    IPaymentRequest2(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentRequest2(IPaymentRequest2 const&) noexcept = default;
    IPaymentRequest2(IPaymentRequest2&&) noexcept = default;
    IPaymentRequest2& operator=(IPaymentRequest2 const&) & noexcept = default;
    IPaymentRequest2& operator=(IPaymentRequest2&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPaymentRequestChangedArgs
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentRequestChangedArgs> {
    IPaymentRequestChangedArgs(std::nullptr_t = nullptr) noexcept {}
    IPaymentRequestChangedArgs(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentRequestChangedArgs(IPaymentRequestChangedArgs const&) noexcept =
        default;
    IPaymentRequestChangedArgs(IPaymentRequestChangedArgs&&) noexcept = default;
    IPaymentRequestChangedArgs& operator=(
        IPaymentRequestChangedArgs const&) & noexcept = default;
    IPaymentRequestChangedArgs& operator=(
        IPaymentRequestChangedArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPaymentRequestChangedResult
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentRequestChangedResult> {
    IPaymentRequestChangedResult(std::nullptr_t = nullptr) noexcept {}
    IPaymentRequestChangedResult(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentRequestChangedResult(IPaymentRequestChangedResult const&) noexcept =
        default;
    IPaymentRequestChangedResult(IPaymentRequestChangedResult&&) noexcept =
        default;
    IPaymentRequestChangedResult& operator=(
        IPaymentRequestChangedResult const&) & noexcept = default;
    IPaymentRequestChangedResult& operator=(
        IPaymentRequestChangedResult&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPaymentRequestChangedResultFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentRequestChangedResultFactory> {
    IPaymentRequestChangedResultFactory(std::nullptr_t = nullptr) noexcept {}
    IPaymentRequestChangedResultFactory(void* ptr,
                                        take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentRequestChangedResultFactory(
        IPaymentRequestChangedResultFactory const&) noexcept = default;
    IPaymentRequestChangedResultFactory(
        IPaymentRequestChangedResultFactory&&) noexcept = default;
    IPaymentRequestChangedResultFactory& operator=(
        IPaymentRequestChangedResultFactory const&) & noexcept = default;
    IPaymentRequestChangedResultFactory& operator=(
        IPaymentRequestChangedResultFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPaymentRequestFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentRequestFactory> {
    IPaymentRequestFactory(std::nullptr_t = nullptr) noexcept {}
    IPaymentRequestFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentRequestFactory(IPaymentRequestFactory const&) noexcept = default;
    IPaymentRequestFactory(IPaymentRequestFactory&&) noexcept = default;
    IPaymentRequestFactory& operator=(
        IPaymentRequestFactory const&) & noexcept = default;
    IPaymentRequestFactory& operator=(IPaymentRequestFactory&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IPaymentRequestFactory2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentRequestFactory2> {
    IPaymentRequestFactory2(std::nullptr_t = nullptr) noexcept {}
    IPaymentRequestFactory2(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentRequestFactory2(IPaymentRequestFactory2 const&) noexcept = default;
    IPaymentRequestFactory2(IPaymentRequestFactory2&&) noexcept = default;
    IPaymentRequestFactory2& operator=(
        IPaymentRequestFactory2 const&) & noexcept = default;
    IPaymentRequestFactory2& operator=(IPaymentRequestFactory2&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IPaymentRequestSubmitResult
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentRequestSubmitResult> {
    IPaymentRequestSubmitResult(std::nullptr_t = nullptr) noexcept {}
    IPaymentRequestSubmitResult(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentRequestSubmitResult(IPaymentRequestSubmitResult const&) noexcept =
        default;
    IPaymentRequestSubmitResult(IPaymentRequestSubmitResult&&) noexcept =
        default;
    IPaymentRequestSubmitResult& operator=(
        IPaymentRequestSubmitResult const&) & noexcept = default;
    IPaymentRequestSubmitResult& operator=(
        IPaymentRequestSubmitResult&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPaymentResponse
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentResponse> {
    IPaymentResponse(std::nullptr_t = nullptr) noexcept {}
    IPaymentResponse(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentResponse(IPaymentResponse const&) noexcept = default;
    IPaymentResponse(IPaymentResponse&&) noexcept = default;
    IPaymentResponse& operator=(IPaymentResponse const&) & noexcept = default;
    IPaymentResponse& operator=(IPaymentResponse&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPaymentShippingOption
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentShippingOption> {
    IPaymentShippingOption(std::nullptr_t = nullptr) noexcept {}
    IPaymentShippingOption(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentShippingOption(IPaymentShippingOption const&) noexcept = default;
    IPaymentShippingOption(IPaymentShippingOption&&) noexcept = default;
    IPaymentShippingOption& operator=(
        IPaymentShippingOption const&) & noexcept = default;
    IPaymentShippingOption& operator=(IPaymentShippingOption&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IPaymentShippingOptionFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentShippingOptionFactory> {
    IPaymentShippingOptionFactory(std::nullptr_t = nullptr) noexcept {}
    IPaymentShippingOptionFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentShippingOptionFactory(
        IPaymentShippingOptionFactory const&) noexcept = default;
    IPaymentShippingOptionFactory(IPaymentShippingOptionFactory&&) noexcept =
        default;
    IPaymentShippingOptionFactory& operator=(
        IPaymentShippingOptionFactory const&) & noexcept = default;
    IPaymentShippingOptionFactory& operator=(
        IPaymentShippingOptionFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPaymentToken
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentToken> {
    IPaymentToken(std::nullptr_t = nullptr) noexcept {}
    IPaymentToken(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentToken(IPaymentToken const&) noexcept = default;
    IPaymentToken(IPaymentToken&&) noexcept = default;
    IPaymentToken& operator=(IPaymentToken const&) & noexcept = default;
    IPaymentToken& operator=(IPaymentToken&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPaymentTokenFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentTokenFactory> {
    IPaymentTokenFactory(std::nullptr_t = nullptr) noexcept {}
    IPaymentTokenFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPaymentTokenFactory(IPaymentTokenFactory const&) noexcept = default;
    IPaymentTokenFactory(IPaymentTokenFactory&&) noexcept = default;
    IPaymentTokenFactory& operator=(IPaymentTokenFactory const&) & noexcept =
        default;
    IPaymentTokenFactory& operator=(IPaymentTokenFactory&&) & noexcept =
        default;
  };
}
#endif
