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

#ifndef WINRT_Windows_System_Inventory_0_H
#define WINRT_Windows_System_Inventory_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation {
  template <typename TResult>
  struct __declspec(empty_bases) IAsyncOperation;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {
  template <typename T>
  struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::System::Inventory {
  struct IInstalledDesktopApp;
  struct IInstalledDesktopAppStatics;
  struct InstalledDesktopApp;
}
namespace winrt::impl {
template <>
struct category<winrt::Windows::System::Inventory::IInstalledDesktopApp> {
  using type = interface_category;
};
template <>
struct category<
    winrt::Windows::System::Inventory::IInstalledDesktopAppStatics> {
  using type = interface_category;
};
template <>
struct category<winrt::Windows::System::Inventory::InstalledDesktopApp> {
  using type = class_category;
};
template <>
inline constexpr auto&
    name_v<winrt::Windows::System::Inventory::InstalledDesktopApp> =
        L"Windows.System.Inventory.InstalledDesktopApp";
template <>
inline constexpr auto&
    name_v<winrt::Windows::System::Inventory::IInstalledDesktopApp> =
        L"Windows.System.Inventory.IInstalledDesktopApp";
template <>
inline constexpr auto&
    name_v<winrt::Windows::System::Inventory::IInstalledDesktopAppStatics> =
        L"Windows.System.Inventory.IInstalledDesktopAppStatics";
template <>
inline constexpr guid
    guid_v<winrt::Windows::System::Inventory::IInstalledDesktopApp>{
        0x75EAB8ED,
        0xC0BC,
        0x5364,
        {0x4C, 0x28, 0x16, 0x6E, 0x05, 0x45, 0x16,
         0x7A}};  // 75EAB8ED-C0BC-5364-4C28-166E0545167A
template <>
inline constexpr guid
    guid_v<winrt::Windows::System::Inventory::IInstalledDesktopAppStatics>{
        0x264CF74E,
        0x21CD,
        0x5F9B,
        {0x60, 0x56, 0x78, 0x66, 0xAD, 0x72, 0x48,
         0x9A}};  // 264CF74E-21CD-5F9B-6056-7866AD72489A
template <>
struct default_interface<
    winrt::Windows::System::Inventory::InstalledDesktopApp> {
  using type = winrt::Windows::System::Inventory::IInstalledDesktopApp;
};
template <>
struct abi<winrt::Windows::System::Inventory::IInstalledDesktopApp> {
  struct __declspec(novtable) type : inspectable_abi {
    virtual int32_t __stdcall get_Id(void**) noexcept = 0;
    virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
    virtual int32_t __stdcall get_Publisher(void**) noexcept = 0;
    virtual int32_t __stdcall get_DisplayVersion(void**) noexcept = 0;
  };
};
template <>
struct abi<winrt::Windows::System::Inventory::IInstalledDesktopAppStatics> {
  struct __declspec(novtable) type : inspectable_abi {
    virtual int32_t __stdcall GetInventoryAsync(void**) noexcept = 0;
  };
};
template <typename D>
struct consume_Windows_System_Inventory_IInstalledDesktopApp {
  [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
  [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
  [[nodiscard]] WINRT_IMPL_AUTO(hstring) Publisher() const;
  [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayVersion() const;
};
template <>
struct consume<winrt::Windows::System::Inventory::IInstalledDesktopApp> {
  template <typename D>
  using type = consume_Windows_System_Inventory_IInstalledDesktopApp<D>;
};
template <typename D>
struct consume_Windows_System_Inventory_IInstalledDesktopAppStatics {
  WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<
                  winrt::Windows::Foundation::Collections::IVectorView<
                      winrt::Windows::System::Inventory::InstalledDesktopApp>>)
  GetInventoryAsync() const;
};
template <>
struct consume<winrt::Windows::System::Inventory::IInstalledDesktopAppStatics> {
  template <typename D>
  using type = consume_Windows_System_Inventory_IInstalledDesktopAppStatics<D>;
};
}  // namespace winrt::impl
#endif
