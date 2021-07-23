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

#ifndef WINRT_Windows_UI_Input_Spatial_2_H
#define WINRT_Windows_UI_Input_Spatial_2_H
#include "winrt/impl/Windows.Perception.1.h"
#include "winrt/impl/Windows.Perception.Spatial.1.h"
#include "winrt/impl/Windows.UI.Input.Spatial.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Input::Spatial {
  struct __declspec(empty_bases) SpatialGestureRecognizer
      : winrt::Windows::UI::Input::Spatial::ISpatialGestureRecognizer {
    SpatialGestureRecognizer(std::nullptr_t) noexcept {}
    SpatialGestureRecognizer(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::ISpatialGestureRecognizer(
              ptr, take_ownership_from_abi) {}
    explicit SpatialGestureRecognizer(
        winrt::Windows::UI::Input::Spatial::SpatialGestureSettings const&
            settings);
    SpatialGestureRecognizer(SpatialGestureRecognizer const&) noexcept =
        default;
    SpatialGestureRecognizer(SpatialGestureRecognizer&&) noexcept = default;
    SpatialGestureRecognizer& operator=(
        SpatialGestureRecognizer const&) & noexcept = default;
    SpatialGestureRecognizer& operator=(SpatialGestureRecognizer&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) SpatialHoldCanceledEventArgs
      : winrt::Windows::UI::Input::Spatial::ISpatialHoldCanceledEventArgs {
    SpatialHoldCanceledEventArgs(std::nullptr_t) noexcept {}
    SpatialHoldCanceledEventArgs(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::ISpatialHoldCanceledEventArgs(
              ptr, take_ownership_from_abi) {}
    SpatialHoldCanceledEventArgs(SpatialHoldCanceledEventArgs const&) noexcept =
        default;
    SpatialHoldCanceledEventArgs(SpatialHoldCanceledEventArgs&&) noexcept =
        default;
    SpatialHoldCanceledEventArgs& operator=(
        SpatialHoldCanceledEventArgs const&) & noexcept = default;
    SpatialHoldCanceledEventArgs& operator=(
        SpatialHoldCanceledEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SpatialHoldCompletedEventArgs
      : winrt::Windows::UI::Input::Spatial::ISpatialHoldCompletedEventArgs {
    SpatialHoldCompletedEventArgs(std::nullptr_t) noexcept {}
    SpatialHoldCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::ISpatialHoldCompletedEventArgs(
              ptr, take_ownership_from_abi) {}
    SpatialHoldCompletedEventArgs(
        SpatialHoldCompletedEventArgs const&) noexcept = default;
    SpatialHoldCompletedEventArgs(SpatialHoldCompletedEventArgs&&) noexcept =
        default;
    SpatialHoldCompletedEventArgs& operator=(
        SpatialHoldCompletedEventArgs const&) & noexcept = default;
    SpatialHoldCompletedEventArgs& operator=(
        SpatialHoldCompletedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SpatialHoldStartedEventArgs
      : winrt::Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs {
    SpatialHoldStartedEventArgs(std::nullptr_t) noexcept {}
    SpatialHoldStartedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs(
              ptr, take_ownership_from_abi) {}
    SpatialHoldStartedEventArgs(SpatialHoldStartedEventArgs const&) noexcept =
        default;
    SpatialHoldStartedEventArgs(SpatialHoldStartedEventArgs&&) noexcept =
        default;
    SpatialHoldStartedEventArgs& operator=(
        SpatialHoldStartedEventArgs const&) & noexcept = default;
    SpatialHoldStartedEventArgs& operator=(
        SpatialHoldStartedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SpatialInteraction
      : winrt::Windows::UI::Input::Spatial::ISpatialInteraction {
    SpatialInteraction(std::nullptr_t) noexcept {}
    SpatialInteraction(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::ISpatialInteraction(
              ptr, take_ownership_from_abi) {}
    SpatialInteraction(SpatialInteraction const&) noexcept = default;
    SpatialInteraction(SpatialInteraction&&) noexcept = default;
    SpatialInteraction& operator=(SpatialInteraction const&) & noexcept =
        default;
    SpatialInteraction& operator=(SpatialInteraction&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SpatialInteractionController
      : winrt::Windows::UI::Input::Spatial::ISpatialInteractionController,
        impl::require<
            SpatialInteractionController,
            winrt::Windows::UI::Input::Spatial::ISpatialInteractionController2,
            winrt::Windows::UI::Input::Spatial::
                ISpatialInteractionController3> {
    SpatialInteractionController(std::nullptr_t) noexcept {}
    SpatialInteractionController(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::ISpatialInteractionController(
              ptr, take_ownership_from_abi) {}
    SpatialInteractionController(SpatialInteractionController const&) noexcept =
        default;
    SpatialInteractionController(SpatialInteractionController&&) noexcept =
        default;
    SpatialInteractionController& operator=(
        SpatialInteractionController const&) & noexcept = default;
    SpatialInteractionController& operator=(
        SpatialInteractionController&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SpatialInteractionControllerProperties
      : winrt::Windows::UI::Input::Spatial::
            ISpatialInteractionControllerProperties {
    SpatialInteractionControllerProperties(std::nullptr_t) noexcept {}
    SpatialInteractionControllerProperties(void* ptr,
                                           take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::
              ISpatialInteractionControllerProperties(
                  ptr, take_ownership_from_abi) {}
    SpatialInteractionControllerProperties(
        SpatialInteractionControllerProperties const&) noexcept = default;
    SpatialInteractionControllerProperties(
        SpatialInteractionControllerProperties&&) noexcept = default;
    SpatialInteractionControllerProperties& operator=(
        SpatialInteractionControllerProperties const&) & noexcept = default;
    SpatialInteractionControllerProperties& operator=(
        SpatialInteractionControllerProperties&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SpatialInteractionDetectedEventArgs
      : winrt::Windows::UI::Input::Spatial::
            ISpatialInteractionDetectedEventArgs,
        impl::require<SpatialInteractionDetectedEventArgs,
                      winrt::Windows::UI::Input::Spatial::
                          ISpatialInteractionDetectedEventArgs2> {
    SpatialInteractionDetectedEventArgs(std::nullptr_t) noexcept {}
    SpatialInteractionDetectedEventArgs(void* ptr,
                                        take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::
              ISpatialInteractionDetectedEventArgs(ptr,
                                                   take_ownership_from_abi) {}
    SpatialInteractionDetectedEventArgs(
        SpatialInteractionDetectedEventArgs const&) noexcept = default;
    SpatialInteractionDetectedEventArgs(
        SpatialInteractionDetectedEventArgs&&) noexcept = default;
    SpatialInteractionDetectedEventArgs& operator=(
        SpatialInteractionDetectedEventArgs const&) & noexcept = default;
    SpatialInteractionDetectedEventArgs& operator=(
        SpatialInteractionDetectedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SpatialInteractionManager
      : winrt::Windows::UI::Input::Spatial::ISpatialInteractionManager {
    SpatialInteractionManager(std::nullptr_t) noexcept {}
    SpatialInteractionManager(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::ISpatialInteractionManager(
              ptr, take_ownership_from_abi) {}
    SpatialInteractionManager(SpatialInteractionManager const&) noexcept =
        default;
    SpatialInteractionManager(SpatialInteractionManager&&) noexcept = default;
    SpatialInteractionManager& operator=(
        SpatialInteractionManager const&) & noexcept = default;
    SpatialInteractionManager& operator=(
        SpatialInteractionManager&&) & noexcept = default;
    static auto GetForCurrentView();
    static auto IsSourceKindSupported(
        winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceKind const&
            kind);
  };
  struct __declspec(empty_bases) SpatialInteractionSource
      : winrt::Windows::UI::Input::Spatial::ISpatialInteractionSource,
        impl::require<
            SpatialInteractionSource,
            winrt::Windows::UI::Input::Spatial::ISpatialInteractionSource2,
            winrt::Windows::UI::Input::Spatial::ISpatialInteractionSource3,
            winrt::Windows::UI::Input::Spatial::ISpatialInteractionSource4> {
    SpatialInteractionSource(std::nullptr_t) noexcept {}
    SpatialInteractionSource(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::ISpatialInteractionSource(
              ptr, take_ownership_from_abi) {}
    SpatialInteractionSource(SpatialInteractionSource const&) noexcept =
        default;
    SpatialInteractionSource(SpatialInteractionSource&&) noexcept = default;
    SpatialInteractionSource& operator=(
        SpatialInteractionSource const&) & noexcept = default;
    SpatialInteractionSource& operator=(SpatialInteractionSource&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) SpatialInteractionSourceEventArgs
      : winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs,
        impl::require<SpatialInteractionSourceEventArgs,
                      winrt::Windows::UI::Input::Spatial::
                          ISpatialInteractionSourceEventArgs2> {
    SpatialInteractionSourceEventArgs(std::nullptr_t) noexcept {}
    SpatialInteractionSourceEventArgs(void* ptr,
                                      take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::
              ISpatialInteractionSourceEventArgs(ptr, take_ownership_from_abi) {
    }
    SpatialInteractionSourceEventArgs(
        SpatialInteractionSourceEventArgs const&) noexcept = default;
    SpatialInteractionSourceEventArgs(
        SpatialInteractionSourceEventArgs&&) noexcept = default;
    SpatialInteractionSourceEventArgs& operator=(
        SpatialInteractionSourceEventArgs const&) & noexcept = default;
    SpatialInteractionSourceEventArgs& operator=(
        SpatialInteractionSourceEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SpatialInteractionSourceLocation
      : winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation,
        impl::require<SpatialInteractionSourceLocation,
                      winrt::Windows::UI::Input::Spatial::
                          ISpatialInteractionSourceLocation2,
                      winrt::Windows::UI::Input::Spatial::
                          ISpatialInteractionSourceLocation3> {
    SpatialInteractionSourceLocation(std::nullptr_t) noexcept {}
    SpatialInteractionSourceLocation(void* ptr,
                                     take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation(
              ptr, take_ownership_from_abi) {}
    SpatialInteractionSourceLocation(
        SpatialInteractionSourceLocation const&) noexcept = default;
    SpatialInteractionSourceLocation(
        SpatialInteractionSourceLocation&&) noexcept = default;
    SpatialInteractionSourceLocation& operator=(
        SpatialInteractionSourceLocation const&) & noexcept = default;
    SpatialInteractionSourceLocation& operator=(
        SpatialInteractionSourceLocation&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SpatialInteractionSourceProperties
      : winrt::Windows::UI::Input::Spatial::
            ISpatialInteractionSourceProperties {
    SpatialInteractionSourceProperties(std::nullptr_t) noexcept {}
    SpatialInteractionSourceProperties(void* ptr,
                                       take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::
              ISpatialInteractionSourceProperties(ptr,
                                                  take_ownership_from_abi) {}
    SpatialInteractionSourceProperties(
        SpatialInteractionSourceProperties const&) noexcept = default;
    SpatialInteractionSourceProperties(
        SpatialInteractionSourceProperties&&) noexcept = default;
    SpatialInteractionSourceProperties& operator=(
        SpatialInteractionSourceProperties const&) & noexcept = default;
    SpatialInteractionSourceProperties& operator=(
        SpatialInteractionSourceProperties&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SpatialInteractionSourceState
      : winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceState,
        impl::require<
            SpatialInteractionSourceState,
            winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceState2,
            winrt::Windows::UI::Input::Spatial::
                ISpatialInteractionSourceState3> {
    SpatialInteractionSourceState(std::nullptr_t) noexcept {}
    SpatialInteractionSourceState(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceState(
              ptr, take_ownership_from_abi) {}
    SpatialInteractionSourceState(
        SpatialInteractionSourceState const&) noexcept = default;
    SpatialInteractionSourceState(SpatialInteractionSourceState&&) noexcept =
        default;
    SpatialInteractionSourceState& operator=(
        SpatialInteractionSourceState const&) & noexcept = default;
    SpatialInteractionSourceState& operator=(
        SpatialInteractionSourceState&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SpatialManipulationCanceledEventArgs
      : winrt::Windows::UI::Input::Spatial::
            ISpatialManipulationCanceledEventArgs {
    SpatialManipulationCanceledEventArgs(std::nullptr_t) noexcept {}
    SpatialManipulationCanceledEventArgs(void* ptr,
                                         take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::
              ISpatialManipulationCanceledEventArgs(ptr,
                                                    take_ownership_from_abi) {}
    SpatialManipulationCanceledEventArgs(
        SpatialManipulationCanceledEventArgs const&) noexcept = default;
    SpatialManipulationCanceledEventArgs(
        SpatialManipulationCanceledEventArgs&&) noexcept = default;
    SpatialManipulationCanceledEventArgs& operator=(
        SpatialManipulationCanceledEventArgs const&) & noexcept = default;
    SpatialManipulationCanceledEventArgs& operator=(
        SpatialManipulationCanceledEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SpatialManipulationCompletedEventArgs
      : winrt::Windows::UI::Input::Spatial::
            ISpatialManipulationCompletedEventArgs {
    SpatialManipulationCompletedEventArgs(std::nullptr_t) noexcept {}
    SpatialManipulationCompletedEventArgs(void* ptr,
                                          take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::
              ISpatialManipulationCompletedEventArgs(ptr,
                                                     take_ownership_from_abi) {}
    SpatialManipulationCompletedEventArgs(
        SpatialManipulationCompletedEventArgs const&) noexcept = default;
    SpatialManipulationCompletedEventArgs(
        SpatialManipulationCompletedEventArgs&&) noexcept = default;
    SpatialManipulationCompletedEventArgs& operator=(
        SpatialManipulationCompletedEventArgs const&) & noexcept = default;
    SpatialManipulationCompletedEventArgs& operator=(
        SpatialManipulationCompletedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SpatialManipulationDelta
      : winrt::Windows::UI::Input::Spatial::ISpatialManipulationDelta {
    SpatialManipulationDelta(std::nullptr_t) noexcept {}
    SpatialManipulationDelta(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::ISpatialManipulationDelta(
              ptr, take_ownership_from_abi) {}
    SpatialManipulationDelta(SpatialManipulationDelta const&) noexcept =
        default;
    SpatialManipulationDelta(SpatialManipulationDelta&&) noexcept = default;
    SpatialManipulationDelta& operator=(
        SpatialManipulationDelta const&) & noexcept = default;
    SpatialManipulationDelta& operator=(SpatialManipulationDelta&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) SpatialManipulationStartedEventArgs
      : winrt::Windows::UI::Input::Spatial::
            ISpatialManipulationStartedEventArgs {
    SpatialManipulationStartedEventArgs(std::nullptr_t) noexcept {}
    SpatialManipulationStartedEventArgs(void* ptr,
                                        take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::
              ISpatialManipulationStartedEventArgs(ptr,
                                                   take_ownership_from_abi) {}
    SpatialManipulationStartedEventArgs(
        SpatialManipulationStartedEventArgs const&) noexcept = default;
    SpatialManipulationStartedEventArgs(
        SpatialManipulationStartedEventArgs&&) noexcept = default;
    SpatialManipulationStartedEventArgs& operator=(
        SpatialManipulationStartedEventArgs const&) & noexcept = default;
    SpatialManipulationStartedEventArgs& operator=(
        SpatialManipulationStartedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SpatialManipulationUpdatedEventArgs
      : winrt::Windows::UI::Input::Spatial::
            ISpatialManipulationUpdatedEventArgs {
    SpatialManipulationUpdatedEventArgs(std::nullptr_t) noexcept {}
    SpatialManipulationUpdatedEventArgs(void* ptr,
                                        take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::
              ISpatialManipulationUpdatedEventArgs(ptr,
                                                   take_ownership_from_abi) {}
    SpatialManipulationUpdatedEventArgs(
        SpatialManipulationUpdatedEventArgs const&) noexcept = default;
    SpatialManipulationUpdatedEventArgs(
        SpatialManipulationUpdatedEventArgs&&) noexcept = default;
    SpatialManipulationUpdatedEventArgs& operator=(
        SpatialManipulationUpdatedEventArgs const&) & noexcept = default;
    SpatialManipulationUpdatedEventArgs& operator=(
        SpatialManipulationUpdatedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SpatialNavigationCanceledEventArgs
      : winrt::Windows::UI::Input::Spatial::
            ISpatialNavigationCanceledEventArgs {
    SpatialNavigationCanceledEventArgs(std::nullptr_t) noexcept {}
    SpatialNavigationCanceledEventArgs(void* ptr,
                                       take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::
              ISpatialNavigationCanceledEventArgs(ptr,
                                                  take_ownership_from_abi) {}
    SpatialNavigationCanceledEventArgs(
        SpatialNavigationCanceledEventArgs const&) noexcept = default;
    SpatialNavigationCanceledEventArgs(
        SpatialNavigationCanceledEventArgs&&) noexcept = default;
    SpatialNavigationCanceledEventArgs& operator=(
        SpatialNavigationCanceledEventArgs const&) & noexcept = default;
    SpatialNavigationCanceledEventArgs& operator=(
        SpatialNavigationCanceledEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SpatialNavigationCompletedEventArgs
      : winrt::Windows::UI::Input::Spatial::
            ISpatialNavigationCompletedEventArgs {
    SpatialNavigationCompletedEventArgs(std::nullptr_t) noexcept {}
    SpatialNavigationCompletedEventArgs(void* ptr,
                                        take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::
              ISpatialNavigationCompletedEventArgs(ptr,
                                                   take_ownership_from_abi) {}
    SpatialNavigationCompletedEventArgs(
        SpatialNavigationCompletedEventArgs const&) noexcept = default;
    SpatialNavigationCompletedEventArgs(
        SpatialNavigationCompletedEventArgs&&) noexcept = default;
    SpatialNavigationCompletedEventArgs& operator=(
        SpatialNavigationCompletedEventArgs const&) & noexcept = default;
    SpatialNavigationCompletedEventArgs& operator=(
        SpatialNavigationCompletedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SpatialNavigationStartedEventArgs
      : winrt::Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs {
    SpatialNavigationStartedEventArgs(std::nullptr_t) noexcept {}
    SpatialNavigationStartedEventArgs(void* ptr,
                                      take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::
              ISpatialNavigationStartedEventArgs(ptr, take_ownership_from_abi) {
    }
    SpatialNavigationStartedEventArgs(
        SpatialNavigationStartedEventArgs const&) noexcept = default;
    SpatialNavigationStartedEventArgs(
        SpatialNavigationStartedEventArgs&&) noexcept = default;
    SpatialNavigationStartedEventArgs& operator=(
        SpatialNavigationStartedEventArgs const&) & noexcept = default;
    SpatialNavigationStartedEventArgs& operator=(
        SpatialNavigationStartedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SpatialNavigationUpdatedEventArgs
      : winrt::Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs {
    SpatialNavigationUpdatedEventArgs(std::nullptr_t) noexcept {}
    SpatialNavigationUpdatedEventArgs(void* ptr,
                                      take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::
              ISpatialNavigationUpdatedEventArgs(ptr, take_ownership_from_abi) {
    }
    SpatialNavigationUpdatedEventArgs(
        SpatialNavigationUpdatedEventArgs const&) noexcept = default;
    SpatialNavigationUpdatedEventArgs(
        SpatialNavigationUpdatedEventArgs&&) noexcept = default;
    SpatialNavigationUpdatedEventArgs& operator=(
        SpatialNavigationUpdatedEventArgs const&) & noexcept = default;
    SpatialNavigationUpdatedEventArgs& operator=(
        SpatialNavigationUpdatedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SpatialPointerInteractionSourcePose
      : winrt::Windows::UI::Input::Spatial::
            ISpatialPointerInteractionSourcePose,
        impl::require<SpatialPointerInteractionSourcePose,
                      winrt::Windows::UI::Input::Spatial::
                          ISpatialPointerInteractionSourcePose2> {
    SpatialPointerInteractionSourcePose(std::nullptr_t) noexcept {}
    SpatialPointerInteractionSourcePose(void* ptr,
                                        take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::
              ISpatialPointerInteractionSourcePose(ptr,
                                                   take_ownership_from_abi) {}
    SpatialPointerInteractionSourcePose(
        SpatialPointerInteractionSourcePose const&) noexcept = default;
    SpatialPointerInteractionSourcePose(
        SpatialPointerInteractionSourcePose&&) noexcept = default;
    SpatialPointerInteractionSourcePose& operator=(
        SpatialPointerInteractionSourcePose const&) & noexcept = default;
    SpatialPointerInteractionSourcePose& operator=(
        SpatialPointerInteractionSourcePose&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SpatialPointerPose
      : winrt::Windows::UI::Input::Spatial::ISpatialPointerPose,
        impl::require<
            SpatialPointerPose,
            winrt::Windows::UI::Input::Spatial::ISpatialPointerPose2,
            winrt::Windows::UI::Input::Spatial::ISpatialPointerPose3> {
    SpatialPointerPose(std::nullptr_t) noexcept {}
    SpatialPointerPose(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::ISpatialPointerPose(
              ptr, take_ownership_from_abi) {}
    SpatialPointerPose(SpatialPointerPose const&) noexcept = default;
    SpatialPointerPose(SpatialPointerPose&&) noexcept = default;
    SpatialPointerPose& operator=(SpatialPointerPose const&) & noexcept =
        default;
    SpatialPointerPose& operator=(SpatialPointerPose&&) & noexcept = default;
    static auto TryGetAtTimestamp(
        winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const&
            coordinateSystem,
        winrt::Windows::Perception::PerceptionTimestamp const& timestamp);
  };
  struct __declspec(empty_bases) SpatialRecognitionEndedEventArgs
      : winrt::Windows::UI::Input::Spatial::ISpatialRecognitionEndedEventArgs {
    SpatialRecognitionEndedEventArgs(std::nullptr_t) noexcept {}
    SpatialRecognitionEndedEventArgs(void* ptr,
                                     take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::ISpatialRecognitionEndedEventArgs(
              ptr, take_ownership_from_abi) {}
    SpatialRecognitionEndedEventArgs(
        SpatialRecognitionEndedEventArgs const&) noexcept = default;
    SpatialRecognitionEndedEventArgs(
        SpatialRecognitionEndedEventArgs&&) noexcept = default;
    SpatialRecognitionEndedEventArgs& operator=(
        SpatialRecognitionEndedEventArgs const&) & noexcept = default;
    SpatialRecognitionEndedEventArgs& operator=(
        SpatialRecognitionEndedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SpatialRecognitionStartedEventArgs
      : winrt::Windows::UI::Input::Spatial::
            ISpatialRecognitionStartedEventArgs {
    SpatialRecognitionStartedEventArgs(std::nullptr_t) noexcept {}
    SpatialRecognitionStartedEventArgs(void* ptr,
                                       take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::
              ISpatialRecognitionStartedEventArgs(ptr,
                                                  take_ownership_from_abi) {}
    SpatialRecognitionStartedEventArgs(
        SpatialRecognitionStartedEventArgs const&) noexcept = default;
    SpatialRecognitionStartedEventArgs(
        SpatialRecognitionStartedEventArgs&&) noexcept = default;
    SpatialRecognitionStartedEventArgs& operator=(
        SpatialRecognitionStartedEventArgs const&) & noexcept = default;
    SpatialRecognitionStartedEventArgs& operator=(
        SpatialRecognitionStartedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SpatialTappedEventArgs
      : winrt::Windows::UI::Input::Spatial::ISpatialTappedEventArgs {
    SpatialTappedEventArgs(std::nullptr_t) noexcept {}
    SpatialTappedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::UI::Input::Spatial::ISpatialTappedEventArgs(
              ptr, take_ownership_from_abi) {}
    SpatialTappedEventArgs(SpatialTappedEventArgs const&) noexcept = default;
    SpatialTappedEventArgs(SpatialTappedEventArgs&&) noexcept = default;
    SpatialTappedEventArgs& operator=(
        SpatialTappedEventArgs const&) & noexcept = default;
    SpatialTappedEventArgs& operator=(SpatialTappedEventArgs&&) & noexcept =
        default;
  };
}
#endif
