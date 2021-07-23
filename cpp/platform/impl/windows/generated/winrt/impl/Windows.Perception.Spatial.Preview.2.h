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

#ifndef WINRT_Windows_Perception_Spatial_Preview_2_H
#define WINRT_Windows_Perception_Spatial_Preview_2_H
#include "winrt/impl/Windows.Foundation.Numerics.1.h"
#include "winrt/impl/Windows.Perception.Spatial.1.h"
#include "winrt/impl/Windows.Perception.Spatial.Preview.1.h"
WINRT_EXPORT namespace winrt::Windows::Perception::Spatial::Preview {
  struct __declspec(empty_bases) SpatialGraphInteropFrameOfReferencePreview
      : winrt::Windows::Perception::Spatial::Preview::
            ISpatialGraphInteropFrameOfReferencePreview {
    SpatialGraphInteropFrameOfReferencePreview(std::nullptr_t) noexcept {}
    SpatialGraphInteropFrameOfReferencePreview(
        void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Perception::Spatial::Preview::
              ISpatialGraphInteropFrameOfReferencePreview(
                  ptr, take_ownership_from_abi) {}
    SpatialGraphInteropFrameOfReferencePreview(
        SpatialGraphInteropFrameOfReferencePreview const&) noexcept = default;
    SpatialGraphInteropFrameOfReferencePreview(
        SpatialGraphInteropFrameOfReferencePreview&&) noexcept = default;
    SpatialGraphInteropFrameOfReferencePreview& operator=(
        SpatialGraphInteropFrameOfReferencePreview const&) & noexcept = default;
    SpatialGraphInteropFrameOfReferencePreview& operator=(
        SpatialGraphInteropFrameOfReferencePreview&&) & noexcept = default;
  };
  struct SpatialGraphInteropPreview {
    SpatialGraphInteropPreview() = delete;
    static auto CreateCoordinateSystemForNode(winrt::guid const& nodeId);
    static auto CreateCoordinateSystemForNode(
        winrt::guid const& nodeId,
        winrt::Windows::Foundation::Numerics::float3 const& relativePosition);
    static auto CreateCoordinateSystemForNode(
        winrt::guid const& nodeId,
        winrt::Windows::Foundation::Numerics::float3 const& relativePosition,
        winrt::Windows::Foundation::Numerics::quaternion const&
            relativeOrientation);
    static auto CreateLocatorForNode(winrt::guid const& nodeId);
    static auto TryCreateFrameOfReference(
        winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const&
            coordinateSystem);
    static auto TryCreateFrameOfReference(
        winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const&
            coordinateSystem,
        winrt::Windows::Foundation::Numerics::float3 const& relativePosition);
    static auto TryCreateFrameOfReference(
        winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const&
            coordinateSystem,
        winrt::Windows::Foundation::Numerics::float3 const& relativePosition,
        winrt::Windows::Foundation::Numerics::quaternion const&
            relativeOrientation);
  };
}
#endif
