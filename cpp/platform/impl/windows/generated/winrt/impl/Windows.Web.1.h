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

#ifndef WINRT_Windows_Web_1_H
#define WINRT_Windows_Web_1_H
#include "winrt/impl/Windows.Web.0.h"
WINRT_EXPORT namespace winrt::Windows::Web {
  struct __declspec(empty_bases) IUriToStreamResolver
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUriToStreamResolver> {
    IUriToStreamResolver(std::nullptr_t = nullptr) noexcept {}
    IUriToStreamResolver(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IUriToStreamResolver(IUriToStreamResolver const&) noexcept = default;
    IUriToStreamResolver(IUriToStreamResolver&&) noexcept = default;
    IUriToStreamResolver& operator=(IUriToStreamResolver const&) & noexcept =
        default;
    IUriToStreamResolver& operator=(IUriToStreamResolver&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IWebErrorStatics
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWebErrorStatics> {
    IWebErrorStatics(std::nullptr_t = nullptr) noexcept {}
    IWebErrorStatics(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IWebErrorStatics(IWebErrorStatics const&) noexcept = default;
    IWebErrorStatics(IWebErrorStatics&&) noexcept = default;
    IWebErrorStatics& operator=(IWebErrorStatics const&) & noexcept = default;
    IWebErrorStatics& operator=(IWebErrorStatics&&) & noexcept = default;
  };
}
#endif
