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

#ifndef WINRT_Windows_Networking_1_H
#define WINRT_Windows_Networking_1_H
#include "winrt/impl/Windows.Networking.0.h"
WINRT_EXPORT namespace winrt::Windows::Networking {
  struct __declspec(empty_bases) IEndpointPair
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IEndpointPair> {
    IEndpointPair(std::nullptr_t = nullptr) noexcept {}
    IEndpointPair(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IEndpointPair(IEndpointPair const&) noexcept = default;
    IEndpointPair(IEndpointPair&&) noexcept = default;
    IEndpointPair& operator=(IEndpointPair const&) & noexcept = default;
    IEndpointPair& operator=(IEndpointPair&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IEndpointPairFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IEndpointPairFactory> {
    IEndpointPairFactory(std::nullptr_t = nullptr) noexcept {}
    IEndpointPairFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IEndpointPairFactory(IEndpointPairFactory const&) noexcept = default;
    IEndpointPairFactory(IEndpointPairFactory&&) noexcept = default;
    IEndpointPairFactory& operator=(IEndpointPairFactory const&) & noexcept =
        default;
    IEndpointPairFactory& operator=(IEndpointPairFactory&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IHostName
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IHostName> {
    IHostName(std::nullptr_t = nullptr) noexcept {}
    IHostName(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IHostName(IHostName const&) noexcept = default;
    IHostName(IHostName&&) noexcept = default;
    IHostName& operator=(IHostName const&) & noexcept = default;
    IHostName& operator=(IHostName&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IHostNameFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IHostNameFactory> {
    IHostNameFactory(std::nullptr_t = nullptr) noexcept {}
    IHostNameFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IHostNameFactory(IHostNameFactory const&) noexcept = default;
    IHostNameFactory(IHostNameFactory&&) noexcept = default;
    IHostNameFactory& operator=(IHostNameFactory const&) & noexcept = default;
    IHostNameFactory& operator=(IHostNameFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IHostNameStatics
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IHostNameStatics> {
    IHostNameStatics(std::nullptr_t = nullptr) noexcept {}
    IHostNameStatics(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IHostNameStatics(IHostNameStatics const&) noexcept = default;
    IHostNameStatics(IHostNameStatics&&) noexcept = default;
    IHostNameStatics& operator=(IHostNameStatics const&) & noexcept = default;
    IHostNameStatics& operator=(IHostNameStatics&&) & noexcept = default;
  };
}
#endif
