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

#ifndef WINRT_Windows_ApplicationModel_Contacts_Provider_2_H
#define WINRT_Windows_ApplicationModel_Contacts_Provider_2_H
#include "winrt/impl/Windows.ApplicationModel.Contacts.Provider.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Contacts::Provider {
  struct __declspec(empty_bases) ContactPickerUI
      : winrt::Windows::ApplicationModel::Contacts::Provider::IContactPickerUI,
        impl::require<ContactPickerUI,
                      winrt::Windows::ApplicationModel::Contacts::Provider::
                          IContactPickerUI2> {
    ContactPickerUI(std::nullptr_t) noexcept {}
    ContactPickerUI(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Contacts::Provider::
              IContactPickerUI(ptr, take_ownership_from_abi) {}
    ContactPickerUI(ContactPickerUI const&) noexcept = default;
    ContactPickerUI(ContactPickerUI&&) noexcept = default;
    ContactPickerUI& operator=(ContactPickerUI const&) & noexcept = default;
    ContactPickerUI& operator=(ContactPickerUI&&) & noexcept = default;
    using winrt::Windows::ApplicationModel::Contacts::Provider::
        IContactPickerUI::AddContact;
    using impl::consume_t<ContactPickerUI,
                          winrt::Windows::ApplicationModel::Contacts::Provider::
                              IContactPickerUI2>::AddContact;
  };
  struct __declspec(empty_bases) ContactRemovedEventArgs
      : winrt::Windows::ApplicationModel::Contacts::Provider::
            IContactRemovedEventArgs {
    ContactRemovedEventArgs(std::nullptr_t) noexcept {}
    ContactRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Contacts::Provider::
              IContactRemovedEventArgs(ptr, take_ownership_from_abi) {}
    ContactRemovedEventArgs(ContactRemovedEventArgs const&) noexcept = default;
    ContactRemovedEventArgs(ContactRemovedEventArgs&&) noexcept = default;
    ContactRemovedEventArgs& operator=(
        ContactRemovedEventArgs const&) & noexcept = default;
    ContactRemovedEventArgs& operator=(ContactRemovedEventArgs&&) & noexcept =
        default;
  };
}
#endif
