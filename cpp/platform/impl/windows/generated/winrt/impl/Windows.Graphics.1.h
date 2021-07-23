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

#ifndef WINRT_Windows_Graphics_1_H
#define WINRT_Windows_Graphics_1_H
#include "winrt/impl/Windows.Graphics.0.h"
WINRT_EXPORT namespace winrt::Windows::Graphics {
  struct __declspec(empty_bases) IGeometrySource2D
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeometrySource2D> {
    IGeometrySource2D(std::nullptr_t = nullptr) noexcept {}
    IGeometrySource2D(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IGeometrySource2D(IGeometrySource2D const&) noexcept = default;
    IGeometrySource2D(IGeometrySource2D&&) noexcept = default;
    IGeometrySource2D& operator=(IGeometrySource2D const&) & noexcept = default;
    IGeometrySource2D& operator=(IGeometrySource2D&&) & noexcept = default;
  };
}
#endif
