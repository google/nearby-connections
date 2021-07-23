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

#ifndef WINRT_Windows_Media_Effects_1_H
#define WINRT_Windows_Media_Effects_1_H
#include "winrt/impl/Windows.Media.0.h"
#include "winrt/impl/Windows.Media.Effects.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::Effects {
  struct __declspec(empty_bases) IAudioCaptureEffectsManager
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAudioCaptureEffectsManager> {
    IAudioCaptureEffectsManager(std::nullptr_t = nullptr) noexcept {}
    IAudioCaptureEffectsManager(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAudioCaptureEffectsManager(IAudioCaptureEffectsManager const&) noexcept =
        default;
    IAudioCaptureEffectsManager(IAudioCaptureEffectsManager&&) noexcept =
        default;
    IAudioCaptureEffectsManager& operator=(
        IAudioCaptureEffectsManager const&) & noexcept = default;
    IAudioCaptureEffectsManager& operator=(
        IAudioCaptureEffectsManager&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IAudioEffect
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAudioEffect> {
    IAudioEffect(std::nullptr_t = nullptr) noexcept {}
    IAudioEffect(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAudioEffect(IAudioEffect const&) noexcept = default;
    IAudioEffect(IAudioEffect&&) noexcept = default;
    IAudioEffect& operator=(IAudioEffect const&) & noexcept = default;
    IAudioEffect& operator=(IAudioEffect&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IAudioEffectDefinition
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAudioEffectDefinition> {
    IAudioEffectDefinition(std::nullptr_t = nullptr) noexcept {}
    IAudioEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAudioEffectDefinition(IAudioEffectDefinition const&) noexcept = default;
    IAudioEffectDefinition(IAudioEffectDefinition&&) noexcept = default;
    IAudioEffectDefinition& operator=(
        IAudioEffectDefinition const&) & noexcept = default;
    IAudioEffectDefinition& operator=(IAudioEffectDefinition&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IAudioEffectDefinitionFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAudioEffectDefinitionFactory> {
    IAudioEffectDefinitionFactory(std::nullptr_t = nullptr) noexcept {}
    IAudioEffectDefinitionFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAudioEffectDefinitionFactory(
        IAudioEffectDefinitionFactory const&) noexcept = default;
    IAudioEffectDefinitionFactory(IAudioEffectDefinitionFactory&&) noexcept =
        default;
    IAudioEffectDefinitionFactory& operator=(
        IAudioEffectDefinitionFactory const&) & noexcept = default;
    IAudioEffectDefinitionFactory& operator=(
        IAudioEffectDefinitionFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IAudioEffectsManagerStatics
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAudioEffectsManagerStatics> {
    IAudioEffectsManagerStatics(std::nullptr_t = nullptr) noexcept {}
    IAudioEffectsManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAudioEffectsManagerStatics(IAudioEffectsManagerStatics const&) noexcept =
        default;
    IAudioEffectsManagerStatics(IAudioEffectsManagerStatics&&) noexcept =
        default;
    IAudioEffectsManagerStatics& operator=(
        IAudioEffectsManagerStatics const&) & noexcept = default;
    IAudioEffectsManagerStatics& operator=(
        IAudioEffectsManagerStatics&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IAudioRenderEffectsManager
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAudioRenderEffectsManager> {
    IAudioRenderEffectsManager(std::nullptr_t = nullptr) noexcept {}
    IAudioRenderEffectsManager(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAudioRenderEffectsManager(IAudioRenderEffectsManager const&) noexcept =
        default;
    IAudioRenderEffectsManager(IAudioRenderEffectsManager&&) noexcept = default;
    IAudioRenderEffectsManager& operator=(
        IAudioRenderEffectsManager const&) & noexcept = default;
    IAudioRenderEffectsManager& operator=(
        IAudioRenderEffectsManager&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IAudioRenderEffectsManager2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAudioRenderEffectsManager2> {
    IAudioRenderEffectsManager2(std::nullptr_t = nullptr) noexcept {}
    IAudioRenderEffectsManager2(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAudioRenderEffectsManager2(IAudioRenderEffectsManager2 const&) noexcept =
        default;
    IAudioRenderEffectsManager2(IAudioRenderEffectsManager2&&) noexcept =
        default;
    IAudioRenderEffectsManager2& operator=(
        IAudioRenderEffectsManager2 const&) & noexcept = default;
    IAudioRenderEffectsManager2& operator=(
        IAudioRenderEffectsManager2&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBasicAudioEffect
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBasicAudioEffect>,
        impl::require<winrt::Windows::Media::Effects::IBasicAudioEffect,
                      winrt::Windows::Media::IMediaExtension> {
    IBasicAudioEffect(std::nullptr_t = nullptr) noexcept {}
    IBasicAudioEffect(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBasicAudioEffect(IBasicAudioEffect const&) noexcept = default;
    IBasicAudioEffect(IBasicAudioEffect&&) noexcept = default;
    IBasicAudioEffect& operator=(IBasicAudioEffect const&) & noexcept = default;
    IBasicAudioEffect& operator=(IBasicAudioEffect&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBasicVideoEffect
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBasicVideoEffect>,
        impl::require<winrt::Windows::Media::Effects::IBasicVideoEffect,
                      winrt::Windows::Media::IMediaExtension> {
    IBasicVideoEffect(std::nullptr_t = nullptr) noexcept {}
    IBasicVideoEffect(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBasicVideoEffect(IBasicVideoEffect const&) noexcept = default;
    IBasicVideoEffect(IBasicVideoEffect&&) noexcept = default;
    IBasicVideoEffect& operator=(IBasicVideoEffect const&) & noexcept = default;
    IBasicVideoEffect& operator=(IBasicVideoEffect&&) & noexcept = default;
  };
  struct __declspec(empty_bases) ICompositeVideoFrameContext
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICompositeVideoFrameContext> {
    ICompositeVideoFrameContext(std::nullptr_t = nullptr) noexcept {}
    ICompositeVideoFrameContext(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ICompositeVideoFrameContext(ICompositeVideoFrameContext const&) noexcept =
        default;
    ICompositeVideoFrameContext(ICompositeVideoFrameContext&&) noexcept =
        default;
    ICompositeVideoFrameContext& operator=(
        ICompositeVideoFrameContext const&) & noexcept = default;
    ICompositeVideoFrameContext& operator=(
        ICompositeVideoFrameContext&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IProcessAudioFrameContext
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IProcessAudioFrameContext> {
    IProcessAudioFrameContext(std::nullptr_t = nullptr) noexcept {}
    IProcessAudioFrameContext(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IProcessAudioFrameContext(IProcessAudioFrameContext const&) noexcept =
        default;
    IProcessAudioFrameContext(IProcessAudioFrameContext&&) noexcept = default;
    IProcessAudioFrameContext& operator=(
        IProcessAudioFrameContext const&) & noexcept = default;
    IProcessAudioFrameContext& operator=(
        IProcessAudioFrameContext&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IProcessVideoFrameContext
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IProcessVideoFrameContext> {
    IProcessVideoFrameContext(std::nullptr_t = nullptr) noexcept {}
    IProcessVideoFrameContext(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IProcessVideoFrameContext(IProcessVideoFrameContext const&) noexcept =
        default;
    IProcessVideoFrameContext(IProcessVideoFrameContext&&) noexcept = default;
    IProcessVideoFrameContext& operator=(
        IProcessVideoFrameContext const&) & noexcept = default;
    IProcessVideoFrameContext& operator=(
        IProcessVideoFrameContext&&) & noexcept = default;
  };
  struct __declspec(empty_bases) ISlowMotionEffectDefinition
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISlowMotionEffectDefinition>,
        impl::require<
            winrt::Windows::Media::Effects::ISlowMotionEffectDefinition,
            winrt::Windows::Media::Effects::IVideoEffectDefinition> {
    ISlowMotionEffectDefinition(std::nullptr_t = nullptr) noexcept {}
    ISlowMotionEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISlowMotionEffectDefinition(ISlowMotionEffectDefinition const&) noexcept =
        default;
    ISlowMotionEffectDefinition(ISlowMotionEffectDefinition&&) noexcept =
        default;
    ISlowMotionEffectDefinition& operator=(
        ISlowMotionEffectDefinition const&) & noexcept = default;
    ISlowMotionEffectDefinition& operator=(
        ISlowMotionEffectDefinition&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IVideoCompositor
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVideoCompositor>,
        impl::require<winrt::Windows::Media::Effects::IVideoCompositor,
                      winrt::Windows::Media::IMediaExtension> {
    IVideoCompositor(std::nullptr_t = nullptr) noexcept {}
    IVideoCompositor(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IVideoCompositor(IVideoCompositor const&) noexcept = default;
    IVideoCompositor(IVideoCompositor&&) noexcept = default;
    IVideoCompositor& operator=(IVideoCompositor const&) & noexcept = default;
    IVideoCompositor& operator=(IVideoCompositor&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IVideoCompositorDefinition
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVideoCompositorDefinition> {
    IVideoCompositorDefinition(std::nullptr_t = nullptr) noexcept {}
    IVideoCompositorDefinition(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IVideoCompositorDefinition(IVideoCompositorDefinition const&) noexcept =
        default;
    IVideoCompositorDefinition(IVideoCompositorDefinition&&) noexcept = default;
    IVideoCompositorDefinition& operator=(
        IVideoCompositorDefinition const&) & noexcept = default;
    IVideoCompositorDefinition& operator=(
        IVideoCompositorDefinition&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IVideoCompositorDefinitionFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVideoCompositorDefinitionFactory> {
    IVideoCompositorDefinitionFactory(std::nullptr_t = nullptr) noexcept {}
    IVideoCompositorDefinitionFactory(void* ptr,
                                      take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IVideoCompositorDefinitionFactory(
        IVideoCompositorDefinitionFactory const&) noexcept = default;
    IVideoCompositorDefinitionFactory(
        IVideoCompositorDefinitionFactory&&) noexcept = default;
    IVideoCompositorDefinitionFactory& operator=(
        IVideoCompositorDefinitionFactory const&) & noexcept = default;
    IVideoCompositorDefinitionFactory& operator=(
        IVideoCompositorDefinitionFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IVideoEffectDefinition
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVideoEffectDefinition> {
    IVideoEffectDefinition(std::nullptr_t = nullptr) noexcept {}
    IVideoEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IVideoEffectDefinition(IVideoEffectDefinition const&) noexcept = default;
    IVideoEffectDefinition(IVideoEffectDefinition&&) noexcept = default;
    IVideoEffectDefinition& operator=(
        IVideoEffectDefinition const&) & noexcept = default;
    IVideoEffectDefinition& operator=(IVideoEffectDefinition&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IVideoEffectDefinitionFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVideoEffectDefinitionFactory> {
    IVideoEffectDefinitionFactory(std::nullptr_t = nullptr) noexcept {}
    IVideoEffectDefinitionFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IVideoEffectDefinitionFactory(
        IVideoEffectDefinitionFactory const&) noexcept = default;
    IVideoEffectDefinitionFactory(IVideoEffectDefinitionFactory&&) noexcept =
        default;
    IVideoEffectDefinitionFactory& operator=(
        IVideoEffectDefinitionFactory const&) & noexcept = default;
    IVideoEffectDefinitionFactory& operator=(
        IVideoEffectDefinitionFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IVideoTransformEffectDefinition
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVideoTransformEffectDefinition>,
        impl::require<
            winrt::Windows::Media::Effects::IVideoTransformEffectDefinition,
            winrt::Windows::Media::Effects::IVideoEffectDefinition> {
    IVideoTransformEffectDefinition(std::nullptr_t = nullptr) noexcept {}
    IVideoTransformEffectDefinition(void* ptr,
                                    take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IVideoTransformEffectDefinition(
        IVideoTransformEffectDefinition const&) noexcept = default;
    IVideoTransformEffectDefinition(
        IVideoTransformEffectDefinition&&) noexcept = default;
    IVideoTransformEffectDefinition& operator=(
        IVideoTransformEffectDefinition const&) & noexcept = default;
    IVideoTransformEffectDefinition& operator=(
        IVideoTransformEffectDefinition&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IVideoTransformEffectDefinition2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVideoTransformEffectDefinition2> {
    IVideoTransformEffectDefinition2(std::nullptr_t = nullptr) noexcept {}
    IVideoTransformEffectDefinition2(void* ptr,
                                     take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IVideoTransformEffectDefinition2(
        IVideoTransformEffectDefinition2 const&) noexcept = default;
    IVideoTransformEffectDefinition2(
        IVideoTransformEffectDefinition2&&) noexcept = default;
    IVideoTransformEffectDefinition2& operator=(
        IVideoTransformEffectDefinition2 const&) & noexcept = default;
    IVideoTransformEffectDefinition2& operator=(
        IVideoTransformEffectDefinition2&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IVideoTransformSphericalProjection
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVideoTransformSphericalProjection> {
    IVideoTransformSphericalProjection(std::nullptr_t = nullptr) noexcept {}
    IVideoTransformSphericalProjection(void* ptr,
                                       take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IVideoTransformSphericalProjection(
        IVideoTransformSphericalProjection const&) noexcept = default;
    IVideoTransformSphericalProjection(
        IVideoTransformSphericalProjection&&) noexcept = default;
    IVideoTransformSphericalProjection& operator=(
        IVideoTransformSphericalProjection const&) & noexcept = default;
    IVideoTransformSphericalProjection& operator=(
        IVideoTransformSphericalProjection&&) & noexcept = default;
  };
}
#endif
