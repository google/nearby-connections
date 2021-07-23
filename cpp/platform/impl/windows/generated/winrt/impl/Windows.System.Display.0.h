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

#ifndef WINRT_Windows_System_Display_0_H
#define WINRT_Windows_System_Display_0_H
WINRT_EXPORT namespace winrt::Windows::System::Display {
  struct IDisplayRequest;
  struct DisplayRequest;
}
namespace winrt::impl {
template <>
struct category<winrt::Windows::System::Display::IDisplayRequest> {
  using type = interface_category;
};
template <>
struct category<winrt::Windows::System::Display::DisplayRequest> {
  using type = class_category;
};
template <>
inline constexpr auto& name_v<winrt::Windows::System::Display::DisplayRequest> =
    L"Windows.System.Display.DisplayRequest";
template <>
inline constexpr auto&
    name_v<winrt::Windows::System::Display::IDisplayRequest> =
        L"Windows.System.Display.IDisplayRequest";
template <>
inline constexpr guid guid_v<winrt::Windows::System::Display::IDisplayRequest>{
    0xE5732044,
    0xF49F,
    0x4B60,
    {0x8D, 0xD4, 0x5E, 0x7E, 0x3A, 0x63, 0x2A,
     0xC0}};  // E5732044-F49F-4B60-8DD4-5E7E3A632AC0
template <>
struct default_interface<winrt::Windows::System::Display::DisplayRequest> {
  using type = winrt::Windows::System::Display::IDisplayRequest;
};
template <>
struct abi<winrt::Windows::System::Display::IDisplayRequest> {
  struct __declspec(novtable) type : inspectable_abi {
    virtual int32_t __stdcall RequestActive() noexcept = 0;
    virtual int32_t __stdcall RequestRelease() noexcept = 0;
  };
};
template <typename D>
struct consume_Windows_System_Display_IDisplayRequest {
  WINRT_IMPL_AUTO(void) RequestActive() const;
  WINRT_IMPL_AUTO(void) RequestRelease() const;
};
template <>
struct consume<winrt::Windows::System::Display::IDisplayRequest> {
  template <typename D>
  using type = consume_Windows_System_Display_IDisplayRequest<D>;
};
}  // namespace winrt::impl
#endif
