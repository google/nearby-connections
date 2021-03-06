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

#ifndef WINRT_Windows_Phone_Media_Devices_1_H
#define WINRT_Windows_Phone_Media_Devices_1_H
#include "winrt/impl/Windows.Phone.Media.Devices.0.h"
WINRT_EXPORT namespace winrt::Windows::Phone::Media::Devices {
  struct __declspec(empty_bases) IAudioRoutingManager
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAudioRoutingManager> {
    IAudioRoutingManager(std::nullptr_t = nullptr) noexcept {}
    IAudioRoutingManager(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAudioRoutingManager(IAudioRoutingManager const&) noexcept = default;
    IAudioRoutingManager(IAudioRoutingManager&&) noexcept = default;
    IAudioRoutingManager& operator=(IAudioRoutingManager const&) & noexcept =
        default;
    IAudioRoutingManager& operator=(IAudioRoutingManager&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IAudioRoutingManagerStatics
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAudioRoutingManagerStatics> {
    IAudioRoutingManagerStatics(std::nullptr_t = nullptr) noexcept {}
    IAudioRoutingManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAudioRoutingManagerStatics(IAudioRoutingManagerStatics const&) noexcept =
        default;
    IAudioRoutingManagerStatics(IAudioRoutingManagerStatics&&) noexcept =
        default;
    IAudioRoutingManagerStatics& operator=(
        IAudioRoutingManagerStatics const&) & noexcept = default;
    IAudioRoutingManagerStatics& operator=(
        IAudioRoutingManagerStatics&&) & noexcept = default;
  };
}
#endif
