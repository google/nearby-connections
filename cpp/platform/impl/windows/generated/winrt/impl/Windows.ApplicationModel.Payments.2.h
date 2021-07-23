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

#ifndef WINRT_Windows_ApplicationModel_Payments_2_H
#define WINRT_Windows_ApplicationModel_Payments_2_H
#include "winrt/impl/Windows.ApplicationModel.Payments.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Payments {
  struct PaymentRequestChangedHandler : Windows::Foundation::IUnknown {
    PaymentRequestChangedHandler(std::nullptr_t = nullptr) noexcept {}
    PaymentRequestChangedHandler(void* ptr, take_ownership_from_abi_t) noexcept
        : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
    PaymentRequestChangedHandler(PaymentRequestChangedHandler const&) noexcept =
        default;
    PaymentRequestChangedHandler(PaymentRequestChangedHandler&&) noexcept =
        default;
    PaymentRequestChangedHandler& operator=(
        PaymentRequestChangedHandler const&) & noexcept = default;
    PaymentRequestChangedHandler& operator=(
        PaymentRequestChangedHandler&&) & noexcept = default;
    template <typename L>
    PaymentRequestChangedHandler(L lambda);
    template <typename F>
    PaymentRequestChangedHandler(F* function);
    template <typename O, typename M>
    PaymentRequestChangedHandler(O* object, M method);
    template <typename O, typename M>
    PaymentRequestChangedHandler(com_ptr<O>&& object, M method);
    template <typename O, typename M>
    PaymentRequestChangedHandler(weak_ref<O>&& object, M method);
    auto operator()(
        winrt::Windows::ApplicationModel::Payments::PaymentRequest const&
            paymentRequest,
        winrt::Windows::ApplicationModel::Payments::
            PaymentRequestChangedArgs const& args) const;
  };
  struct __declspec(empty_bases) PaymentAddress
      : winrt::Windows::ApplicationModel::Payments::IPaymentAddress {
    PaymentAddress(std::nullptr_t) noexcept {}
    PaymentAddress(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Payments::IPaymentAddress(
              ptr, take_ownership_from_abi) {}
    PaymentAddress();
    PaymentAddress(PaymentAddress const&) noexcept = default;
    PaymentAddress(PaymentAddress&&) noexcept = default;
    PaymentAddress& operator=(PaymentAddress const&) & noexcept = default;
    PaymentAddress& operator=(PaymentAddress&&) & noexcept = default;
  };
  struct __declspec(empty_bases) PaymentCanMakePaymentResult
      : winrt::Windows::ApplicationModel::Payments::
            IPaymentCanMakePaymentResult {
    PaymentCanMakePaymentResult(std::nullptr_t) noexcept {}
    PaymentCanMakePaymentResult(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Payments::
              IPaymentCanMakePaymentResult(ptr, take_ownership_from_abi) {}
    explicit PaymentCanMakePaymentResult(
        winrt::Windows::ApplicationModel::Payments::
            PaymentCanMakePaymentResultStatus const& value);
    PaymentCanMakePaymentResult(PaymentCanMakePaymentResult const&) noexcept =
        default;
    PaymentCanMakePaymentResult(PaymentCanMakePaymentResult&&) noexcept =
        default;
    PaymentCanMakePaymentResult& operator=(
        PaymentCanMakePaymentResult const&) & noexcept = default;
    PaymentCanMakePaymentResult& operator=(
        PaymentCanMakePaymentResult&&) & noexcept = default;
  };
  struct __declspec(empty_bases) PaymentCurrencyAmount
      : winrt::Windows::ApplicationModel::Payments::IPaymentCurrencyAmount {
    PaymentCurrencyAmount(std::nullptr_t) noexcept {}
    PaymentCurrencyAmount(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Payments::IPaymentCurrencyAmount(
              ptr, take_ownership_from_abi) {}
    PaymentCurrencyAmount(param::hstring const& value,
                          param::hstring const& currency);
    PaymentCurrencyAmount(param::hstring const& value,
                          param::hstring const& currency,
                          param::hstring const& currencySystem);
    PaymentCurrencyAmount(PaymentCurrencyAmount const&) noexcept = default;
    PaymentCurrencyAmount(PaymentCurrencyAmount&&) noexcept = default;
    PaymentCurrencyAmount& operator=(PaymentCurrencyAmount const&) & noexcept =
        default;
    PaymentCurrencyAmount& operator=(PaymentCurrencyAmount&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) PaymentDetails
      : winrt::Windows::ApplicationModel::Payments::IPaymentDetails {
    PaymentDetails(std::nullptr_t) noexcept {}
    PaymentDetails(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Payments::IPaymentDetails(
              ptr, take_ownership_from_abi) {}
    PaymentDetails();
    explicit PaymentDetails(
        winrt::Windows::ApplicationModel::Payments::PaymentItem const& total);
    PaymentDetails(
        winrt::Windows::ApplicationModel::Payments::PaymentItem const& total,
        param::iterable<
            winrt::Windows::ApplicationModel::Payments::PaymentItem> const&
            displayItems);
    PaymentDetails(PaymentDetails const&) noexcept = default;
    PaymentDetails(PaymentDetails&&) noexcept = default;
    PaymentDetails& operator=(PaymentDetails const&) & noexcept = default;
    PaymentDetails& operator=(PaymentDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) PaymentDetailsModifier
      : winrt::Windows::ApplicationModel::Payments::IPaymentDetailsModifier {
    PaymentDetailsModifier(std::nullptr_t) noexcept {}
    PaymentDetailsModifier(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Payments::IPaymentDetailsModifier(
              ptr, take_ownership_from_abi) {}
    PaymentDetailsModifier(
        param::iterable<hstring> const& supportedMethodIds,
        winrt::Windows::ApplicationModel::Payments::PaymentItem const& total);
    PaymentDetailsModifier(
        param::iterable<hstring> const& supportedMethodIds,
        winrt::Windows::ApplicationModel::Payments::PaymentItem const& total,
        param::iterable<
            winrt::Windows::ApplicationModel::Payments::PaymentItem> const&
            additionalDisplayItems);
    PaymentDetailsModifier(
        param::iterable<hstring> const& supportedMethodIds,
        winrt::Windows::ApplicationModel::Payments::PaymentItem const& total,
        param::iterable<
            winrt::Windows::ApplicationModel::Payments::PaymentItem> const&
            additionalDisplayItems,
        param::hstring const& jsonData);
    PaymentDetailsModifier(PaymentDetailsModifier const&) noexcept = default;
    PaymentDetailsModifier(PaymentDetailsModifier&&) noexcept = default;
    PaymentDetailsModifier& operator=(
        PaymentDetailsModifier const&) & noexcept = default;
    PaymentDetailsModifier& operator=(PaymentDetailsModifier&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) PaymentItem
      : winrt::Windows::ApplicationModel::Payments::IPaymentItem {
    PaymentItem(std::nullptr_t) noexcept {}
    PaymentItem(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Payments::IPaymentItem(
              ptr, take_ownership_from_abi) {}
    PaymentItem(
        param::hstring const& label,
        winrt::Windows::ApplicationModel::Payments::PaymentCurrencyAmount const&
            amount);
    PaymentItem(PaymentItem const&) noexcept = default;
    PaymentItem(PaymentItem&&) noexcept = default;
    PaymentItem& operator=(PaymentItem const&) & noexcept = default;
    PaymentItem& operator=(PaymentItem&&) & noexcept = default;
  };
  struct __declspec(empty_bases) PaymentMediator
      : winrt::Windows::ApplicationModel::Payments::IPaymentMediator,
        impl::require<
            PaymentMediator,
            winrt::Windows::ApplicationModel::Payments::IPaymentMediator2> {
    PaymentMediator(std::nullptr_t) noexcept {}
    PaymentMediator(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Payments::IPaymentMediator(
              ptr, take_ownership_from_abi) {}
    PaymentMediator();
    PaymentMediator(PaymentMediator const&) noexcept = default;
    PaymentMediator(PaymentMediator&&) noexcept = default;
    PaymentMediator& operator=(PaymentMediator const&) & noexcept = default;
    PaymentMediator& operator=(PaymentMediator&&) & noexcept = default;
  };
  struct __declspec(empty_bases) PaymentMerchantInfo
      : winrt::Windows::ApplicationModel::Payments::IPaymentMerchantInfo {
    PaymentMerchantInfo(std::nullptr_t) noexcept {}
    PaymentMerchantInfo(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Payments::IPaymentMerchantInfo(
              ptr, take_ownership_from_abi) {}
    PaymentMerchantInfo();
    explicit PaymentMerchantInfo(winrt::Windows::Foundation::Uri const& uri);
    PaymentMerchantInfo(PaymentMerchantInfo const&) noexcept = default;
    PaymentMerchantInfo(PaymentMerchantInfo&&) noexcept = default;
    PaymentMerchantInfo& operator=(PaymentMerchantInfo const&) & noexcept =
        default;
    PaymentMerchantInfo& operator=(PaymentMerchantInfo&&) & noexcept = default;
  };
  struct __declspec(empty_bases) PaymentMethodData
      : winrt::Windows::ApplicationModel::Payments::IPaymentMethodData {
    PaymentMethodData(std::nullptr_t) noexcept {}
    PaymentMethodData(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Payments::IPaymentMethodData(
              ptr, take_ownership_from_abi) {}
    explicit PaymentMethodData(
        param::iterable<hstring> const& supportedMethodIds);
    PaymentMethodData(param::iterable<hstring> const& supportedMethodIds,
                      param::hstring const& jsonData);
    PaymentMethodData(PaymentMethodData const&) noexcept = default;
    PaymentMethodData(PaymentMethodData&&) noexcept = default;
    PaymentMethodData& operator=(PaymentMethodData const&) & noexcept = default;
    PaymentMethodData& operator=(PaymentMethodData&&) & noexcept = default;
  };
  struct __declspec(empty_bases) PaymentOptions
      : winrt::Windows::ApplicationModel::Payments::IPaymentOptions {
    PaymentOptions(std::nullptr_t) noexcept {}
    PaymentOptions(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Payments::IPaymentOptions(
              ptr, take_ownership_from_abi) {}
    PaymentOptions();
    PaymentOptions(PaymentOptions const&) noexcept = default;
    PaymentOptions(PaymentOptions&&) noexcept = default;
    PaymentOptions& operator=(PaymentOptions const&) & noexcept = default;
    PaymentOptions& operator=(PaymentOptions&&) & noexcept = default;
  };
  struct __declspec(empty_bases) PaymentRequest
      : winrt::Windows::ApplicationModel::Payments::IPaymentRequest,
        impl::require<
            PaymentRequest,
            winrt::Windows::ApplicationModel::Payments::IPaymentRequest2> {
    PaymentRequest(std::nullptr_t) noexcept {}
    PaymentRequest(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Payments::IPaymentRequest(
              ptr, take_ownership_from_abi) {}
    PaymentRequest(
        winrt::Windows::ApplicationModel::Payments::PaymentDetails const&
            details,
        param::iterable<winrt::Windows::ApplicationModel::Payments::
                            PaymentMethodData> const& methodData);
    PaymentRequest(
        winrt::Windows::ApplicationModel::Payments::PaymentDetails const&
            details,
        param::iterable<winrt::Windows::ApplicationModel::Payments::
                            PaymentMethodData> const& methodData,
        winrt::Windows::ApplicationModel::Payments::PaymentMerchantInfo const&
            merchantInfo);
    PaymentRequest(
        winrt::Windows::ApplicationModel::Payments::PaymentDetails const&
            details,
        param::iterable<winrt::Windows::ApplicationModel::Payments::
                            PaymentMethodData> const& methodData,
        winrt::Windows::ApplicationModel::Payments::PaymentMerchantInfo const&
            merchantInfo,
        winrt::Windows::ApplicationModel::Payments::PaymentOptions const&
            options);
    PaymentRequest(
        winrt::Windows::ApplicationModel::Payments::PaymentDetails const&
            details,
        param::iterable<winrt::Windows::ApplicationModel::Payments::
                            PaymentMethodData> const& methodData,
        winrt::Windows::ApplicationModel::Payments::PaymentMerchantInfo const&
            merchantInfo,
        winrt::Windows::ApplicationModel::Payments::PaymentOptions const&
            options,
        param::hstring const& id);
    PaymentRequest(PaymentRequest const&) noexcept = default;
    PaymentRequest(PaymentRequest&&) noexcept = default;
    PaymentRequest& operator=(PaymentRequest const&) & noexcept = default;
    PaymentRequest& operator=(PaymentRequest&&) & noexcept = default;
  };
  struct __declspec(empty_bases) PaymentRequestChangedArgs
      : winrt::Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs {
    PaymentRequestChangedArgs(std::nullptr_t) noexcept {}
    PaymentRequestChangedArgs(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Payments::
              IPaymentRequestChangedArgs(ptr, take_ownership_from_abi) {}
    PaymentRequestChangedArgs(PaymentRequestChangedArgs const&) noexcept =
        default;
    PaymentRequestChangedArgs(PaymentRequestChangedArgs&&) noexcept = default;
    PaymentRequestChangedArgs& operator=(
        PaymentRequestChangedArgs const&) & noexcept = default;
    PaymentRequestChangedArgs& operator=(
        PaymentRequestChangedArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) PaymentRequestChangedResult
      : winrt::Windows::ApplicationModel::Payments::
            IPaymentRequestChangedResult {
    PaymentRequestChangedResult(std::nullptr_t) noexcept {}
    PaymentRequestChangedResult(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Payments::
              IPaymentRequestChangedResult(ptr, take_ownership_from_abi) {}
    explicit PaymentRequestChangedResult(bool changeAcceptedByMerchant);
    PaymentRequestChangedResult(
        bool changeAcceptedByMerchant,
        winrt::Windows::ApplicationModel::Payments::PaymentDetails const&
            updatedPaymentDetails);
    PaymentRequestChangedResult(PaymentRequestChangedResult const&) noexcept =
        default;
    PaymentRequestChangedResult(PaymentRequestChangedResult&&) noexcept =
        default;
    PaymentRequestChangedResult& operator=(
        PaymentRequestChangedResult const&) & noexcept = default;
    PaymentRequestChangedResult& operator=(
        PaymentRequestChangedResult&&) & noexcept = default;
  };
  struct __declspec(empty_bases) PaymentRequestSubmitResult
      : winrt::Windows::ApplicationModel::Payments::
            IPaymentRequestSubmitResult {
    PaymentRequestSubmitResult(std::nullptr_t) noexcept {}
    PaymentRequestSubmitResult(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Payments::
              IPaymentRequestSubmitResult(ptr, take_ownership_from_abi) {}
    PaymentRequestSubmitResult(PaymentRequestSubmitResult const&) noexcept =
        default;
    PaymentRequestSubmitResult(PaymentRequestSubmitResult&&) noexcept = default;
    PaymentRequestSubmitResult& operator=(
        PaymentRequestSubmitResult const&) & noexcept = default;
    PaymentRequestSubmitResult& operator=(
        PaymentRequestSubmitResult&&) & noexcept = default;
  };
  struct __declspec(empty_bases) PaymentResponse
      : winrt::Windows::ApplicationModel::Payments::IPaymentResponse {
    PaymentResponse(std::nullptr_t) noexcept {}
    PaymentResponse(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Payments::IPaymentResponse(
              ptr, take_ownership_from_abi) {}
    PaymentResponse(PaymentResponse const&) noexcept = default;
    PaymentResponse(PaymentResponse&&) noexcept = default;
    PaymentResponse& operator=(PaymentResponse const&) & noexcept = default;
    PaymentResponse& operator=(PaymentResponse&&) & noexcept = default;
  };
  struct __declspec(empty_bases) PaymentShippingOption
      : winrt::Windows::ApplicationModel::Payments::IPaymentShippingOption {
    PaymentShippingOption(std::nullptr_t) noexcept {}
    PaymentShippingOption(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Payments::IPaymentShippingOption(
              ptr, take_ownership_from_abi) {}
    PaymentShippingOption(
        param::hstring const& label,
        winrt::Windows::ApplicationModel::Payments::PaymentCurrencyAmount const&
            amount);
    PaymentShippingOption(
        param::hstring const& label,
        winrt::Windows::ApplicationModel::Payments::PaymentCurrencyAmount const&
            amount,
        bool selected);
    PaymentShippingOption(
        param::hstring const& label,
        winrt::Windows::ApplicationModel::Payments::PaymentCurrencyAmount const&
            amount,
        bool selected, param::hstring const& tag);
    PaymentShippingOption(PaymentShippingOption const&) noexcept = default;
    PaymentShippingOption(PaymentShippingOption&&) noexcept = default;
    PaymentShippingOption& operator=(PaymentShippingOption const&) & noexcept =
        default;
    PaymentShippingOption& operator=(PaymentShippingOption&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) PaymentToken
      : winrt::Windows::ApplicationModel::Payments::IPaymentToken {
    PaymentToken(std::nullptr_t) noexcept {}
    PaymentToken(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Payments::IPaymentToken(
              ptr, take_ownership_from_abi) {}
    explicit PaymentToken(param::hstring const& paymentMethodId);
    PaymentToken(param::hstring const& paymentMethodId,
                 param::hstring const& jsonDetails);
    PaymentToken(PaymentToken const&) noexcept = default;
    PaymentToken(PaymentToken&&) noexcept = default;
    PaymentToken& operator=(PaymentToken const&) & noexcept = default;
    PaymentToken& operator=(PaymentToken&&) & noexcept = default;
  };
}
#endif
