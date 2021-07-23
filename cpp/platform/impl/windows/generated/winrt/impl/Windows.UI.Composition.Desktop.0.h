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

#ifndef WINRT_Windows_UI_Composition_Desktop_0_H
#define WINRT_Windows_UI_Composition_Desktop_0_H
WINRT_EXPORT namespace winrt::Windows::UI::Composition::Desktop {
  struct IDesktopWindowTarget;
  struct DesktopWindowTarget;
}
namespace winrt::impl {
template <>
struct category<
    winrt::Windows::UI::Composition::Desktop::IDesktopWindowTarget> {
  using type = interface_category;
};
template <>
struct category<winrt::Windows::UI::Composition::Desktop::DesktopWindowTarget> {
  using type = class_category;
};
template <>
inline constexpr auto&
    name_v<winrt::Windows::UI::Composition::Desktop::DesktopWindowTarget> =
        L"Windows.UI.Composition.Desktop.DesktopWindowTarget";
template <>
inline constexpr auto&
    name_v<winrt::Windows::UI::Composition::Desktop::IDesktopWindowTarget> =
        L"Windows.UI.Composition.Desktop.IDesktopWindowTarget";
template <>
inline constexpr guid
    guid_v<winrt::Windows::UI::Composition::Desktop::IDesktopWindowTarget>{
        0x6329D6CA,
        0x3366,
        0x490E,
        {0x9D, 0xB3, 0x25, 0x31, 0x29, 0x29, 0xAC,
         0x51}};  // 6329D6CA-3366-490E-9DB3-25312929AC51
template <>
struct default_interface<
    winrt::Windows::UI::Composition::Desktop::DesktopWindowTarget> {
  using type = winrt::Windows::UI::Composition::Desktop::IDesktopWindowTarget;
};
template <>
struct abi<winrt::Windows::UI::Composition::Desktop::IDesktopWindowTarget> {
  struct __declspec(novtable) type : inspectable_abi {
    virtual int32_t __stdcall get_IsTopmost(bool*) noexcept = 0;
  };
};
template <typename D>
struct consume_Windows_UI_Composition_Desktop_IDesktopWindowTarget {
  [[nodiscard]] WINRT_IMPL_AUTO(bool) IsTopmost() const;
};
template <>
struct consume<winrt::Windows::UI::Composition::Desktop::IDesktopWindowTarget> {
  template <typename D>
  using type = consume_Windows_UI_Composition_Desktop_IDesktopWindowTarget<D>;
};
}  // namespace winrt::impl
#endif
