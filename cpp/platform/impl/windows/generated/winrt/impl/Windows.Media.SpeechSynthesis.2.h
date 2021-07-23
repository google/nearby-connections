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

#ifndef WINRT_Windows_Media_SpeechSynthesis_2_H
#define WINRT_Windows_Media_SpeechSynthesis_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Media.Core.1.h"
#include "winrt/impl/Windows.Media.SpeechSynthesis.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::SpeechSynthesis {
  struct __declspec(empty_bases) SpeechSynthesisStream
      : winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesisStream,
        impl::require<
            SpeechSynthesisStream,
            winrt::Windows::Media::Core::ITimedMetadataTrackProvider> {
    SpeechSynthesisStream(std::nullptr_t) noexcept {}
    SpeechSynthesisStream(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesisStream(
              ptr, take_ownership_from_abi) {}
    SpeechSynthesisStream(SpeechSynthesisStream const&) noexcept = default;
    SpeechSynthesisStream(SpeechSynthesisStream&&) noexcept = default;
    SpeechSynthesisStream& operator=(SpeechSynthesisStream const&) & noexcept =
        default;
    SpeechSynthesisStream& operator=(SpeechSynthesisStream&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) SpeechSynthesizer
      : winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizer,
        impl::require<
            SpeechSynthesizer, winrt::Windows::Foundation::IClosable,
            winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizer2> {
    SpeechSynthesizer(std::nullptr_t) noexcept {}
    SpeechSynthesizer(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizer(
              ptr, take_ownership_from_abi) {}
    SpeechSynthesizer();
    SpeechSynthesizer(SpeechSynthesizer const&) noexcept = default;
    SpeechSynthesizer(SpeechSynthesizer&&) noexcept = default;
    SpeechSynthesizer& operator=(SpeechSynthesizer const&) & noexcept = default;
    SpeechSynthesizer& operator=(SpeechSynthesizer&&) & noexcept = default;
    [[nodiscard]] static auto AllVoices();
    [[nodiscard]] static auto DefaultVoice();
    static auto TrySetDefaultVoiceAsync(
        winrt::Windows::Media::SpeechSynthesis::VoiceInformation const& voice);
  };
  struct __declspec(empty_bases) SpeechSynthesizerOptions
      : winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions,
        impl::require<
            SpeechSynthesizerOptions,
            winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions2,
            winrt::Windows::Media::SpeechSynthesis::
                ISpeechSynthesizerOptions3> {
    SpeechSynthesizerOptions(std::nullptr_t) noexcept {}
    SpeechSynthesizerOptions(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions(
              ptr, take_ownership_from_abi) {}
    SpeechSynthesizerOptions(SpeechSynthesizerOptions const&) noexcept =
        default;
    SpeechSynthesizerOptions(SpeechSynthesizerOptions&&) noexcept = default;
    SpeechSynthesizerOptions& operator=(
        SpeechSynthesizerOptions const&) & noexcept = default;
    SpeechSynthesizerOptions& operator=(SpeechSynthesizerOptions&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) VoiceInformation
      : winrt::Windows::Media::SpeechSynthesis::IVoiceInformation {
    VoiceInformation(std::nullptr_t) noexcept {}
    VoiceInformation(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Media::SpeechSynthesis::IVoiceInformation(
              ptr, take_ownership_from_abi) {}
    VoiceInformation(VoiceInformation const&) noexcept = default;
    VoiceInformation(VoiceInformation&&) noexcept = default;
    VoiceInformation& operator=(VoiceInformation const&) & noexcept = default;
    VoiceInformation& operator=(VoiceInformation&&) & noexcept = default;
  };
}
#endif
