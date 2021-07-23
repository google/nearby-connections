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

#ifndef WINRT_Windows_UI_Input_Inking_Preview_0_H
#define WINRT_Windows_UI_Input_Inking_Preview_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation { struct Rect; }
WINRT_EXPORT namespace winrt::Windows::UI::Composition { struct Visual; }
WINRT_EXPORT namespace winrt::Windows::UI::Input::Inking::Preview {
  struct IPalmRejectionDelayZonePreview;
  struct IPalmRejectionDelayZonePreviewStatics;
  struct PalmRejectionDelayZonePreview;
}
namespace winrt::impl {
template <>
struct category<winrt::Windows::UI::Input::Inking::Preview::
                    IPalmRejectionDelayZonePreview> {
  using type = interface_category;
};
template <>
struct category<winrt::Windows::UI::Input::Inking::Preview::
                    IPalmRejectionDelayZonePreviewStatics> {
  using type = interface_category;
};
template <>
struct category<
    winrt::Windows::UI::Input::Inking::Preview::PalmRejectionDelayZonePreview> {
  using type = class_category;
};
template <>
inline constexpr auto& name_v<
    winrt::Windows::UI::Input::Inking::Preview::PalmRejectionDelayZonePreview> =
    L"Windows.UI.Input.Inking.Preview.PalmRejectionDelayZonePreview";
template <>
inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Preview::
                                  IPalmRejectionDelayZonePreview> =
    L"Windows.UI.Input.Inking.Preview.IPalmRejectionDelayZonePreview";
template <>
inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Preview::
                                  IPalmRejectionDelayZonePreviewStatics> =
    L"Windows.UI.Input.Inking.Preview.IPalmRejectionDelayZonePreviewStatics";
template <>
inline constexpr guid guid_v<
    winrt::Windows::UI::Input::Inking::Preview::IPalmRejectionDelayZonePreview>{
    0x62B496CB,
    0x539D,
    0x5343,
    {0xA6, 0x5F, 0x41, 0xF5, 0x30, 0x0E, 0xC7,
     0x0C}};  // 62B496CB-539D-5343-A65F-41F5300EC70C
template <>
inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::Preview::
                                 IPalmRejectionDelayZonePreviewStatics>{
    0xCDEF5EE0,
    0x93D0,
    0x53A9,
    {0x8F, 0x0E, 0x9A, 0x37, 0x9F, 0x8F, 0x75,
     0x30}};  // CDEF5EE0-93D0-53A9-8F0E-9A379F8F7530
template <>
struct default_interface<
    winrt::Windows::UI::Input::Inking::Preview::PalmRejectionDelayZonePreview> {
  using type = winrt::Windows::UI::Input::Inking::Preview::
      IPalmRejectionDelayZonePreview;
};
template <>
struct abi<winrt::Windows::UI::Input::Inking::Preview::
               IPalmRejectionDelayZonePreview> {
  struct __declspec(novtable) type : inspectable_abi {};
};
template <>
struct abi<winrt::Windows::UI::Input::Inking::Preview::
               IPalmRejectionDelayZonePreviewStatics> {
  struct __declspec(novtable) type : inspectable_abi {
    virtual int32_t __stdcall CreateForVisual(void*,
                                              winrt::Windows::Foundation::Rect,
                                              void**) noexcept = 0;
    virtual int32_t __stdcall CreateForVisualWithViewportClip(
        void*, winrt::Windows::Foundation::Rect, void*,
        winrt::Windows::Foundation::Rect, void**) noexcept = 0;
  };
};
template <typename D>
struct consume_Windows_UI_Input_Inking_Preview_IPalmRejectionDelayZonePreview {
};
template <>
struct consume<winrt::Windows::UI::Input::Inking::Preview::
                   IPalmRejectionDelayZonePreview> {
  template <typename D>
  using type =
      consume_Windows_UI_Input_Inking_Preview_IPalmRejectionDelayZonePreview<D>;
};
template <typename D>
struct
    consume_Windows_UI_Input_Inking_Preview_IPalmRejectionDelayZonePreviewStatics {
  WINRT_IMPL_AUTO(
      winrt::Windows::UI::Input::Inking::Preview::PalmRejectionDelayZonePreview)
  CreateForVisual(
      winrt::Windows::UI::Composition::Visual const& inputPanelVisual,
      winrt::Windows::Foundation::Rect const& inputPanelRect) const;
  WINRT_IMPL_AUTO(
      winrt::Windows::UI::Input::Inking::Preview::PalmRejectionDelayZonePreview)
  CreateForVisual(
      winrt::Windows::UI::Composition::Visual const& inputPanelVisual,
      winrt::Windows::Foundation::Rect const& inputPanelRect,
      winrt::Windows::UI::Composition::Visual const& viewportVisual,
      winrt::Windows::Foundation::Rect const& viewportRect) const;
};
template <>
struct consume<winrt::Windows::UI::Input::Inking::Preview::
                   IPalmRejectionDelayZonePreviewStatics> {
  template <typename D>
  using type =
      consume_Windows_UI_Input_Inking_Preview_IPalmRejectionDelayZonePreviewStatics<
          D>;
};
}  // namespace winrt::impl
#endif
