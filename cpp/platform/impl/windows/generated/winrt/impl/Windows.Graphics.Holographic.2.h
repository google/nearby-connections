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

#ifndef WINRT_Windows_Graphics_Holographic_2_H
#define WINRT_Windows_Graphics_Holographic_2_H
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Numerics.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.2.h"
#include "winrt/impl/Windows.Graphics.Holographic.1.h"
#include "winrt/impl/Windows.UI.Core.2.h"
WINRT_EXPORT namespace winrt::Windows::Graphics::Holographic {
  struct HolographicAdapterId {
    uint32_t LowPart;
    int32_t HighPart;
  };
  inline bool operator==(HolographicAdapterId const& left,
                         HolographicAdapterId const& right) noexcept {
    return left.LowPart == right.LowPart && left.HighPart == right.HighPart;
  }
  inline bool operator!=(HolographicAdapterId const& left,
                         HolographicAdapterId const& right) noexcept {
    return !(left == right);
  }
  struct HolographicFrameId {
    uint64_t Value;
  };
  inline bool operator==(HolographicFrameId const& left,
                         HolographicFrameId const& right) noexcept {
    return left.Value == right.Value;
  }
  inline bool operator!=(HolographicFrameId const& left,
                         HolographicFrameId const& right) noexcept {
    return !(left == right);
  }
  struct HolographicStereoTransform {
    winrt::Windows::Foundation::Numerics::float4x4 Left;
    winrt::Windows::Foundation::Numerics::float4x4 Right;
  };
  inline bool operator==(HolographicStereoTransform const& left,
                         HolographicStereoTransform const& right) noexcept {
    return left.Left == right.Left && left.Right == right.Right;
  }
  inline bool operator!=(HolographicStereoTransform const& left,
                         HolographicStereoTransform const& right) noexcept {
    return !(left == right);
  }
  struct __declspec(empty_bases) HolographicCamera
      : winrt::Windows::Graphics::Holographic::IHolographicCamera,
        impl::require<
            HolographicCamera,
            winrt::Windows::Graphics::Holographic::IHolographicCamera2,
            winrt::Windows::Graphics::Holographic::IHolographicCamera3,
            winrt::Windows::Graphics::Holographic::IHolographicCamera4,
            winrt::Windows::Graphics::Holographic::IHolographicCamera5,
            winrt::Windows::Graphics::Holographic::IHolographicCamera6> {
    HolographicCamera(std::nullptr_t) noexcept {}
    HolographicCamera(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Graphics::Holographic::IHolographicCamera(
              ptr, take_ownership_from_abi) {}
    HolographicCamera(HolographicCamera const&) noexcept = default;
    HolographicCamera(HolographicCamera&&) noexcept = default;
    HolographicCamera& operator=(HolographicCamera const&) & noexcept = default;
    HolographicCamera& operator=(HolographicCamera&&) & noexcept = default;
  };
  struct __declspec(empty_bases) HolographicCameraPose
      : winrt::Windows::Graphics::Holographic::IHolographicCameraPose,
        impl::require<
            HolographicCameraPose,
            winrt::Windows::Graphics::Holographic::IHolographicCameraPose2> {
    HolographicCameraPose(std::nullptr_t) noexcept {}
    HolographicCameraPose(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Graphics::Holographic::IHolographicCameraPose(
              ptr, take_ownership_from_abi) {}
    HolographicCameraPose(HolographicCameraPose const&) noexcept = default;
    HolographicCameraPose(HolographicCameraPose&&) noexcept = default;
    HolographicCameraPose& operator=(HolographicCameraPose const&) & noexcept =
        default;
    HolographicCameraPose& operator=(HolographicCameraPose&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) HolographicCameraRenderingParameters
      : winrt::Windows::Graphics::Holographic::
            IHolographicCameraRenderingParameters,
        impl::require<HolographicCameraRenderingParameters,
                      winrt::Windows::Graphics::Holographic::
                          IHolographicCameraRenderingParameters2,
                      winrt::Windows::Graphics::Holographic::
                          IHolographicCameraRenderingParameters3> {
    HolographicCameraRenderingParameters(std::nullptr_t) noexcept {}
    HolographicCameraRenderingParameters(void* ptr,
                                         take_ownership_from_abi_t) noexcept
        : winrt::Windows::Graphics::Holographic::
              IHolographicCameraRenderingParameters(ptr,
                                                    take_ownership_from_abi) {}
    HolographicCameraRenderingParameters(
        HolographicCameraRenderingParameters const&) noexcept = default;
    HolographicCameraRenderingParameters(
        HolographicCameraRenderingParameters&&) noexcept = default;
    HolographicCameraRenderingParameters& operator=(
        HolographicCameraRenderingParameters const&) & noexcept = default;
    HolographicCameraRenderingParameters& operator=(
        HolographicCameraRenderingParameters&&) & noexcept = default;
  };
  struct __declspec(empty_bases) HolographicCameraViewportParameters
      : winrt::Windows::Graphics::Holographic::
            IHolographicCameraViewportParameters {
    HolographicCameraViewportParameters(std::nullptr_t) noexcept {}
    HolographicCameraViewportParameters(void* ptr,
                                        take_ownership_from_abi_t) noexcept
        : winrt::Windows::Graphics::Holographic::
              IHolographicCameraViewportParameters(ptr,
                                                   take_ownership_from_abi) {}
    HolographicCameraViewportParameters(
        HolographicCameraViewportParameters const&) noexcept = default;
    HolographicCameraViewportParameters(
        HolographicCameraViewportParameters&&) noexcept = default;
    HolographicCameraViewportParameters& operator=(
        HolographicCameraViewportParameters const&) & noexcept = default;
    HolographicCameraViewportParameters& operator=(
        HolographicCameraViewportParameters&&) & noexcept = default;
  };
  struct __declspec(empty_bases) HolographicDisplay
      : winrt::Windows::Graphics::Holographic::IHolographicDisplay,
        impl::require<
            HolographicDisplay,
            winrt::Windows::Graphics::Holographic::IHolographicDisplay2,
            winrt::Windows::Graphics::Holographic::IHolographicDisplay3> {
    HolographicDisplay(std::nullptr_t) noexcept {}
    HolographicDisplay(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Graphics::Holographic::IHolographicDisplay(
              ptr, take_ownership_from_abi) {}
    HolographicDisplay(HolographicDisplay const&) noexcept = default;
    HolographicDisplay(HolographicDisplay&&) noexcept = default;
    HolographicDisplay& operator=(HolographicDisplay const&) & noexcept =
        default;
    HolographicDisplay& operator=(HolographicDisplay&&) & noexcept = default;
    static auto GetDefault();
  };
  struct __declspec(empty_bases) HolographicFrame
      : winrt::Windows::Graphics::Holographic::IHolographicFrame,
        impl::require<
            HolographicFrame,
            winrt::Windows::Graphics::Holographic::IHolographicFrame2,
            winrt::Windows::Graphics::Holographic::IHolographicFrame3> {
    HolographicFrame(std::nullptr_t) noexcept {}
    HolographicFrame(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Graphics::Holographic::IHolographicFrame(
              ptr, take_ownership_from_abi) {}
    HolographicFrame(HolographicFrame const&) noexcept = default;
    HolographicFrame(HolographicFrame&&) noexcept = default;
    HolographicFrame& operator=(HolographicFrame const&) & noexcept = default;
    HolographicFrame& operator=(HolographicFrame&&) & noexcept = default;
  };
  struct __declspec(empty_bases) HolographicFramePrediction
      : winrt::Windows::Graphics::Holographic::IHolographicFramePrediction {
    HolographicFramePrediction(std::nullptr_t) noexcept {}
    HolographicFramePrediction(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Graphics::Holographic::IHolographicFramePrediction(
              ptr, take_ownership_from_abi) {}
    HolographicFramePrediction(HolographicFramePrediction const&) noexcept =
        default;
    HolographicFramePrediction(HolographicFramePrediction&&) noexcept = default;
    HolographicFramePrediction& operator=(
        HolographicFramePrediction const&) & noexcept = default;
    HolographicFramePrediction& operator=(
        HolographicFramePrediction&&) & noexcept = default;
  };
  struct __declspec(empty_bases) HolographicFramePresentationMonitor
      : winrt::Windows::Graphics::Holographic::
            IHolographicFramePresentationMonitor {
    HolographicFramePresentationMonitor(std::nullptr_t) noexcept {}
    HolographicFramePresentationMonitor(void* ptr,
                                        take_ownership_from_abi_t) noexcept
        : winrt::Windows::Graphics::Holographic::
              IHolographicFramePresentationMonitor(ptr,
                                                   take_ownership_from_abi) {}
    HolographicFramePresentationMonitor(
        HolographicFramePresentationMonitor const&) noexcept = default;
    HolographicFramePresentationMonitor(
        HolographicFramePresentationMonitor&&) noexcept = default;
    HolographicFramePresentationMonitor& operator=(
        HolographicFramePresentationMonitor const&) & noexcept = default;
    HolographicFramePresentationMonitor& operator=(
        HolographicFramePresentationMonitor&&) & noexcept = default;
  };
  struct __declspec(empty_bases) HolographicFramePresentationReport
      : winrt::Windows::Graphics::Holographic::
            IHolographicFramePresentationReport {
    HolographicFramePresentationReport(std::nullptr_t) noexcept {}
    HolographicFramePresentationReport(void* ptr,
                                       take_ownership_from_abi_t) noexcept
        : winrt::Windows::Graphics::Holographic::
              IHolographicFramePresentationReport(ptr,
                                                  take_ownership_from_abi) {}
    HolographicFramePresentationReport(
        HolographicFramePresentationReport const&) noexcept = default;
    HolographicFramePresentationReport(
        HolographicFramePresentationReport&&) noexcept = default;
    HolographicFramePresentationReport& operator=(
        HolographicFramePresentationReport const&) & noexcept = default;
    HolographicFramePresentationReport& operator=(
        HolographicFramePresentationReport&&) & noexcept = default;
  };
  struct __declspec(empty_bases) HolographicFrameRenderingReport
      : winrt::Windows::Graphics::Holographic::
            IHolographicFrameRenderingReport {
    HolographicFrameRenderingReport(std::nullptr_t) noexcept {}
    HolographicFrameRenderingReport(void* ptr,
                                    take_ownership_from_abi_t) noexcept
        : winrt::Windows::Graphics::Holographic::
              IHolographicFrameRenderingReport(ptr, take_ownership_from_abi) {}
    HolographicFrameRenderingReport(
        HolographicFrameRenderingReport const&) noexcept = default;
    HolographicFrameRenderingReport(
        HolographicFrameRenderingReport&&) noexcept = default;
    HolographicFrameRenderingReport& operator=(
        HolographicFrameRenderingReport const&) & noexcept = default;
    HolographicFrameRenderingReport& operator=(
        HolographicFrameRenderingReport&&) & noexcept = default;
  };
  struct __declspec(empty_bases) HolographicFrameScanoutMonitor
      : winrt::Windows::Graphics::Holographic::IHolographicFrameScanoutMonitor {
    HolographicFrameScanoutMonitor(std::nullptr_t) noexcept {}
    HolographicFrameScanoutMonitor(void* ptr,
                                   take_ownership_from_abi_t) noexcept
        : winrt::Windows::Graphics::Holographic::
              IHolographicFrameScanoutMonitor(ptr, take_ownership_from_abi) {}
    HolographicFrameScanoutMonitor(
        HolographicFrameScanoutMonitor const&) noexcept = default;
    HolographicFrameScanoutMonitor(HolographicFrameScanoutMonitor&&) noexcept =
        default;
    HolographicFrameScanoutMonitor& operator=(
        HolographicFrameScanoutMonitor const&) & noexcept = default;
    HolographicFrameScanoutMonitor& operator=(
        HolographicFrameScanoutMonitor&&) & noexcept = default;
  };
  struct __declspec(empty_bases) HolographicFrameScanoutReport
      : winrt::Windows::Graphics::Holographic::IHolographicFrameScanoutReport {
    HolographicFrameScanoutReport(std::nullptr_t) noexcept {}
    HolographicFrameScanoutReport(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Graphics::Holographic::IHolographicFrameScanoutReport(
              ptr, take_ownership_from_abi) {}
    HolographicFrameScanoutReport(
        HolographicFrameScanoutReport const&) noexcept = default;
    HolographicFrameScanoutReport(HolographicFrameScanoutReport&&) noexcept =
        default;
    HolographicFrameScanoutReport& operator=(
        HolographicFrameScanoutReport const&) & noexcept = default;
    HolographicFrameScanoutReport& operator=(
        HolographicFrameScanoutReport&&) & noexcept = default;
  };
  struct __declspec(empty_bases) HolographicQuadLayer
      : winrt::Windows::Graphics::Holographic::IHolographicQuadLayer,
        impl::require<HolographicQuadLayer,
                      winrt::Windows::Foundation::IClosable> {
    HolographicQuadLayer(std::nullptr_t) noexcept {}
    HolographicQuadLayer(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Graphics::Holographic::IHolographicQuadLayer(
              ptr, take_ownership_from_abi) {}
    explicit HolographicQuadLayer(winrt::Windows::Foundation::Size const& size);
    HolographicQuadLayer(
        winrt::Windows::Foundation::Size const& size,
        winrt::Windows::Graphics::DirectX::DirectXPixelFormat const&
            pixelFormat);
    HolographicQuadLayer(HolographicQuadLayer const&) noexcept = default;
    HolographicQuadLayer(HolographicQuadLayer&&) noexcept = default;
    HolographicQuadLayer& operator=(HolographicQuadLayer const&) & noexcept =
        default;
    HolographicQuadLayer& operator=(HolographicQuadLayer&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) HolographicQuadLayerUpdateParameters
      : winrt::Windows::Graphics::Holographic::
            IHolographicQuadLayerUpdateParameters,
        impl::require<HolographicQuadLayerUpdateParameters,
                      winrt::Windows::Graphics::Holographic::
                          IHolographicQuadLayerUpdateParameters2> {
    HolographicQuadLayerUpdateParameters(std::nullptr_t) noexcept {}
    HolographicQuadLayerUpdateParameters(void* ptr,
                                         take_ownership_from_abi_t) noexcept
        : winrt::Windows::Graphics::Holographic::
              IHolographicQuadLayerUpdateParameters(ptr,
                                                    take_ownership_from_abi) {}
    HolographicQuadLayerUpdateParameters(
        HolographicQuadLayerUpdateParameters const&) noexcept = default;
    HolographicQuadLayerUpdateParameters(
        HolographicQuadLayerUpdateParameters&&) noexcept = default;
    HolographicQuadLayerUpdateParameters& operator=(
        HolographicQuadLayerUpdateParameters const&) & noexcept = default;
    HolographicQuadLayerUpdateParameters& operator=(
        HolographicQuadLayerUpdateParameters&&) & noexcept = default;
  };
  struct __declspec(empty_bases) HolographicSpace
      : winrt::Windows::Graphics::Holographic::IHolographicSpace,
        impl::require<
            HolographicSpace,
            winrt::Windows::Graphics::Holographic::IHolographicSpace2,
            winrt::Windows::Graphics::Holographic::IHolographicSpace3> {
    HolographicSpace(std::nullptr_t) noexcept {}
    HolographicSpace(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Graphics::Holographic::IHolographicSpace(
              ptr, take_ownership_from_abi) {}
    HolographicSpace(HolographicSpace const&) noexcept = default;
    HolographicSpace(HolographicSpace&&) noexcept = default;
    HolographicSpace& operator=(HolographicSpace const&) & noexcept = default;
    HolographicSpace& operator=(HolographicSpace&&) & noexcept = default;
    static auto CreateForCoreWindow(
        winrt::Windows::UI::Core::CoreWindow const& window);
    [[nodiscard]] static auto IsSupported();
    [[nodiscard]] static auto IsAvailable();
    static auto IsAvailableChanged(
        winrt::Windows::Foundation::EventHandler<
            winrt::Windows::Foundation::IInspectable> const& handler);
    using IsAvailableChanged_revoker = impl::factory_event_revoker<
        winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics2,
        &impl::abi_t<winrt::Windows::Graphics::Holographic::
                         IHolographicSpaceStatics2>::remove_IsAvailableChanged>;
    [[nodiscard]] static IsAvailableChanged_revoker IsAvailableChanged(
        auto_revoke_t,
        winrt::Windows::Foundation::EventHandler<
            winrt::Windows::Foundation::IInspectable> const& handler);
    static auto IsAvailableChanged(winrt::event_token const& token);
    [[nodiscard]] static auto IsConfigured();
  };
  struct __declspec(empty_bases) HolographicSpaceCameraAddedEventArgs
      : winrt::Windows::Graphics::Holographic::
            IHolographicSpaceCameraAddedEventArgs {
    HolographicSpaceCameraAddedEventArgs(std::nullptr_t) noexcept {}
    HolographicSpaceCameraAddedEventArgs(void* ptr,
                                         take_ownership_from_abi_t) noexcept
        : winrt::Windows::Graphics::Holographic::
              IHolographicSpaceCameraAddedEventArgs(ptr,
                                                    take_ownership_from_abi) {}
    HolographicSpaceCameraAddedEventArgs(
        HolographicSpaceCameraAddedEventArgs const&) noexcept = default;
    HolographicSpaceCameraAddedEventArgs(
        HolographicSpaceCameraAddedEventArgs&&) noexcept = default;
    HolographicSpaceCameraAddedEventArgs& operator=(
        HolographicSpaceCameraAddedEventArgs const&) & noexcept = default;
    HolographicSpaceCameraAddedEventArgs& operator=(
        HolographicSpaceCameraAddedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) HolographicSpaceCameraRemovedEventArgs
      : winrt::Windows::Graphics::Holographic::
            IHolographicSpaceCameraRemovedEventArgs {
    HolographicSpaceCameraRemovedEventArgs(std::nullptr_t) noexcept {}
    HolographicSpaceCameraRemovedEventArgs(void* ptr,
                                           take_ownership_from_abi_t) noexcept
        : winrt::Windows::Graphics::Holographic::
              IHolographicSpaceCameraRemovedEventArgs(
                  ptr, take_ownership_from_abi) {}
    HolographicSpaceCameraRemovedEventArgs(
        HolographicSpaceCameraRemovedEventArgs const&) noexcept = default;
    HolographicSpaceCameraRemovedEventArgs(
        HolographicSpaceCameraRemovedEventArgs&&) noexcept = default;
    HolographicSpaceCameraRemovedEventArgs& operator=(
        HolographicSpaceCameraRemovedEventArgs const&) & noexcept = default;
    HolographicSpaceCameraRemovedEventArgs& operator=(
        HolographicSpaceCameraRemovedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) HolographicViewConfiguration
      : winrt::Windows::Graphics::Holographic::IHolographicViewConfiguration {
    HolographicViewConfiguration(std::nullptr_t) noexcept {}
    HolographicViewConfiguration(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Graphics::Holographic::IHolographicViewConfiguration(
              ptr, take_ownership_from_abi) {}
    HolographicViewConfiguration(HolographicViewConfiguration const&) noexcept =
        default;
    HolographicViewConfiguration(HolographicViewConfiguration&&) noexcept =
        default;
    HolographicViewConfiguration& operator=(
        HolographicViewConfiguration const&) & noexcept = default;
    HolographicViewConfiguration& operator=(
        HolographicViewConfiguration&&) & noexcept = default;
  };
}
#endif
