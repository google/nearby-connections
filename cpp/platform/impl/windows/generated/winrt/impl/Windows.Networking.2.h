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

#ifndef WINRT_Windows_Networking_2_H
#define WINRT_Windows_Networking_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Networking.1.h"
WINRT_EXPORT namespace winrt::Windows::Networking {
  struct __declspec(empty_bases) EndpointPair
      : winrt::Windows::Networking::IEndpointPair {
    EndpointPair(std::nullptr_t) noexcept {}
    EndpointPair(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Networking::IEndpointPair(ptr,
                                                    take_ownership_from_abi) {}
    EndpointPair(winrt::Windows::Networking::HostName const& localHostName,
                 param::hstring const& localServiceName,
                 winrt::Windows::Networking::HostName const& remoteHostName,
                 param::hstring const& remoteServiceName);
    EndpointPair(EndpointPair const&) noexcept = default;
    EndpointPair(EndpointPair&&) noexcept = default;
    EndpointPair& operator=(EndpointPair const&) & noexcept = default;
    EndpointPair& operator=(EndpointPair&&) & noexcept = default;
  };
  struct __declspec(empty_bases) HostName
      : winrt::Windows::Networking::IHostName,
        impl::require<HostName, winrt::Windows::Foundation::IStringable> {
    HostName(std::nullptr_t) noexcept {}
    HostName(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Networking::IHostName(ptr, take_ownership_from_abi) {}
    explicit HostName(param::hstring const& hostName);
    HostName(HostName const&) noexcept = default;
    HostName(HostName&&) noexcept = default;
    HostName& operator=(HostName const&) & noexcept = default;
    HostName& operator=(HostName&&) & noexcept = default;
    static auto Compare(param::hstring const& value1,
                        param::hstring const& value2);
  };
}
#endif
