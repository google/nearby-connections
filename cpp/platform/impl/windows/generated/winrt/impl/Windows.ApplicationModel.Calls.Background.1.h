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

#ifndef WINRT_Windows_ApplicationModel_Calls_Background_1_H
#define WINRT_Windows_ApplicationModel_Calls_Background_1_H
#include "winrt/impl/Windows.ApplicationModel.Calls.Background.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Calls::Background {
  struct __declspec(empty_bases) IPhoneCallBlockedTriggerDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneCallBlockedTriggerDetails> {
    IPhoneCallBlockedTriggerDetails(std::nullptr_t = nullptr) noexcept {}
    IPhoneCallBlockedTriggerDetails(void* ptr,
                                    take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPhoneCallBlockedTriggerDetails(
        IPhoneCallBlockedTriggerDetails const&) noexcept = default;
    IPhoneCallBlockedTriggerDetails(
        IPhoneCallBlockedTriggerDetails&&) noexcept = default;
    IPhoneCallBlockedTriggerDetails& operator=(
        IPhoneCallBlockedTriggerDetails const&) & noexcept = default;
    IPhoneCallBlockedTriggerDetails& operator=(
        IPhoneCallBlockedTriggerDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPhoneCallOriginDataRequestTriggerDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneCallOriginDataRequestTriggerDetails> {
    IPhoneCallOriginDataRequestTriggerDetails(
        std::nullptr_t = nullptr) noexcept {}
    IPhoneCallOriginDataRequestTriggerDetails(
        void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPhoneCallOriginDataRequestTriggerDetails(
        IPhoneCallOriginDataRequestTriggerDetails const&) noexcept = default;
    IPhoneCallOriginDataRequestTriggerDetails(
        IPhoneCallOriginDataRequestTriggerDetails&&) noexcept = default;
    IPhoneCallOriginDataRequestTriggerDetails& operator=(
        IPhoneCallOriginDataRequestTriggerDetails const&) & noexcept = default;
    IPhoneCallOriginDataRequestTriggerDetails& operator=(
        IPhoneCallOriginDataRequestTriggerDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPhoneIncomingCallDismissedTriggerDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneIncomingCallDismissedTriggerDetails> {
    IPhoneIncomingCallDismissedTriggerDetails(
        std::nullptr_t = nullptr) noexcept {}
    IPhoneIncomingCallDismissedTriggerDetails(
        void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPhoneIncomingCallDismissedTriggerDetails(
        IPhoneIncomingCallDismissedTriggerDetails const&) noexcept = default;
    IPhoneIncomingCallDismissedTriggerDetails(
        IPhoneIncomingCallDismissedTriggerDetails&&) noexcept = default;
    IPhoneIncomingCallDismissedTriggerDetails& operator=(
        IPhoneIncomingCallDismissedTriggerDetails const&) & noexcept = default;
    IPhoneIncomingCallDismissedTriggerDetails& operator=(
        IPhoneIncomingCallDismissedTriggerDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPhoneLineChangedTriggerDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneLineChangedTriggerDetails> {
    IPhoneLineChangedTriggerDetails(std::nullptr_t = nullptr) noexcept {}
    IPhoneLineChangedTriggerDetails(void* ptr,
                                    take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPhoneLineChangedTriggerDetails(
        IPhoneLineChangedTriggerDetails const&) noexcept = default;
    IPhoneLineChangedTriggerDetails(
        IPhoneLineChangedTriggerDetails&&) noexcept = default;
    IPhoneLineChangedTriggerDetails& operator=(
        IPhoneLineChangedTriggerDetails const&) & noexcept = default;
    IPhoneLineChangedTriggerDetails& operator=(
        IPhoneLineChangedTriggerDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IPhoneNewVoicemailMessageTriggerDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneNewVoicemailMessageTriggerDetails> {
    IPhoneNewVoicemailMessageTriggerDetails(std::nullptr_t = nullptr) noexcept {
    }
    IPhoneNewVoicemailMessageTriggerDetails(void* ptr,
                                            take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IPhoneNewVoicemailMessageTriggerDetails(
        IPhoneNewVoicemailMessageTriggerDetails const&) noexcept = default;
    IPhoneNewVoicemailMessageTriggerDetails(
        IPhoneNewVoicemailMessageTriggerDetails&&) noexcept = default;
    IPhoneNewVoicemailMessageTriggerDetails& operator=(
        IPhoneNewVoicemailMessageTriggerDetails const&) & noexcept = default;
    IPhoneNewVoicemailMessageTriggerDetails& operator=(
        IPhoneNewVoicemailMessageTriggerDetails&&) & noexcept = default;
  };
}
#endif
