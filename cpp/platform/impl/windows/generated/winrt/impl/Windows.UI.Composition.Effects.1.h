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

#ifndef WINRT_Windows_UI_Composition_Effects_1_H
#define WINRT_Windows_UI_Composition_Effects_1_H
#include "winrt/impl/Windows.UI.Composition.Effects.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::Composition::Effects {
  struct __declspec(empty_bases) ISceneLightingEffect
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISceneLightingEffect> {
    ISceneLightingEffect(std::nullptr_t = nullptr) noexcept {}
    ISceneLightingEffect(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISceneLightingEffect(ISceneLightingEffect const&) noexcept = default;
    ISceneLightingEffect(ISceneLightingEffect&&) noexcept = default;
    ISceneLightingEffect& operator=(ISceneLightingEffect const&) & noexcept =
        default;
    ISceneLightingEffect& operator=(ISceneLightingEffect&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) ISceneLightingEffect2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISceneLightingEffect2> {
    ISceneLightingEffect2(std::nullptr_t = nullptr) noexcept {}
    ISceneLightingEffect2(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISceneLightingEffect2(ISceneLightingEffect2 const&) noexcept = default;
    ISceneLightingEffect2(ISceneLightingEffect2&&) noexcept = default;
    ISceneLightingEffect2& operator=(ISceneLightingEffect2 const&) & noexcept =
        default;
    ISceneLightingEffect2& operator=(ISceneLightingEffect2&&) & noexcept =
        default;
  };
}
#endif
