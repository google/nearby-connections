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

#ifndef WINRT_Windows_UI_Composition_Diagnostics_2_H
#define WINRT_Windows_UI_Composition_Diagnostics_2_H
#include "winrt/impl/Windows.UI.Composition.1.h"
#include "winrt/impl/Windows.UI.Composition.Diagnostics.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Composition::Diagnostics {
  struct __declspec(empty_bases) CompositionDebugHeatMaps
      : winrt::Windows::UI::Composition::Diagnostics::
            ICompositionDebugHeatMaps {
    CompositionDebugHeatMaps(std::nullptr_t) noexcept {}
    CompositionDebugHeatMaps(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Composition::Diagnostics::
              ICompositionDebugHeatMaps(ptr, take_ownership_from_abi) {}
    CompositionDebugHeatMaps(CompositionDebugHeatMaps const&) noexcept =
        default;
    CompositionDebugHeatMaps(CompositionDebugHeatMaps&&) noexcept = default;
    CompositionDebugHeatMaps& operator=(
        CompositionDebugHeatMaps const&) & noexcept = default;
    CompositionDebugHeatMaps& operator=(CompositionDebugHeatMaps&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) CompositionDebugSettings
      : winrt::Windows::UI::Composition::Diagnostics::
            ICompositionDebugSettings {
    CompositionDebugSettings(std::nullptr_t) noexcept {}
    CompositionDebugSettings(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Composition::Diagnostics::
              ICompositionDebugSettings(ptr, take_ownership_from_abi) {}
    CompositionDebugSettings(CompositionDebugSettings const&) noexcept =
        default;
    CompositionDebugSettings(CompositionDebugSettings&&) noexcept = default;
    CompositionDebugSettings& operator=(
        CompositionDebugSettings const&) & noexcept = default;
    CompositionDebugSettings& operator=(CompositionDebugSettings&&) & noexcept =
        default;
    static auto TryGetSettings(
        winrt::Windows::UI::Composition::Compositor const& compositor);
  };
}
#endif
