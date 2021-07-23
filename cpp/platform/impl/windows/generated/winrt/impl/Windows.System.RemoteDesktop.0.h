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

#ifndef WINRT_Windows_System_RemoteDesktop_0_H
#define WINRT_Windows_System_RemoteDesktop_0_H
WINRT_EXPORT namespace winrt::Windows::System::RemoteDesktop {
  struct IInteractiveSessionStatics;
  struct InteractiveSession;
}
namespace winrt::impl {
template <>
struct category<
    winrt::Windows::System::RemoteDesktop::IInteractiveSessionStatics> {
  using type = interface_category;
};
template <>
struct category<winrt::Windows::System::RemoteDesktop::InteractiveSession> {
  using type = class_category;
};
template <>
inline constexpr auto&
    name_v<winrt::Windows::System::RemoteDesktop::InteractiveSession> =
        L"Windows.System.RemoteDesktop.InteractiveSession";
template <>
inline constexpr auto&
    name_v<winrt::Windows::System::RemoteDesktop::IInteractiveSessionStatics> =
        L"Windows.System.RemoteDesktop.IInteractiveSessionStatics";
template <>
inline constexpr guid
    guid_v<winrt::Windows::System::RemoteDesktop::IInteractiveSessionStatics>{
        0x60884631,
        0xDD3A,
        0x4576,
        {0x9C, 0x8D, 0xE8, 0x02, 0x76, 0x18, 0xBD,
         0xCE}};  // 60884631-DD3A-4576-9C8D-E8027618BDCE
template <>
struct abi<winrt::Windows::System::RemoteDesktop::IInteractiveSessionStatics> {
  struct __declspec(novtable) type : inspectable_abi {
    virtual int32_t __stdcall get_IsRemote(bool*) noexcept = 0;
  };
};
template <typename D>
struct consume_Windows_System_RemoteDesktop_IInteractiveSessionStatics {
  [[nodiscard]] WINRT_IMPL_AUTO(bool) IsRemote() const;
};
template <>
struct consume<
    winrt::Windows::System::RemoteDesktop::IInteractiveSessionStatics> {
  template <typename D>
  using type =
      consume_Windows_System_RemoteDesktop_IInteractiveSessionStatics<D>;
};
}  // namespace winrt::impl
#endif
