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

#ifndef WINRT_Windows_Security_Cryptography_DataProtection_2_H
#define WINRT_Windows_Security_Cryptography_DataProtection_2_H
#include "winrt/impl/Windows.Security.Cryptography.DataProtection.1.h"
WINRT_EXPORT namespace winrt::Windows::Security::Cryptography::DataProtection {
  struct __declspec(empty_bases) DataProtectionProvider
      : winrt::Windows::Security::Cryptography::DataProtection::
            IDataProtectionProvider {
    DataProtectionProvider(std::nullptr_t) noexcept {}
    DataProtectionProvider(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Security::Cryptography::DataProtection::
              IDataProtectionProvider(ptr, take_ownership_from_abi) {}
    DataProtectionProvider();
    explicit DataProtectionProvider(param::hstring const& protectionDescriptor);
    DataProtectionProvider(DataProtectionProvider const&) noexcept = default;
    DataProtectionProvider(DataProtectionProvider&&) noexcept = default;
    DataProtectionProvider& operator=(
        DataProtectionProvider const&) & noexcept = default;
    DataProtectionProvider& operator=(DataProtectionProvider&&) & noexcept =
        default;
  };
}
#endif
