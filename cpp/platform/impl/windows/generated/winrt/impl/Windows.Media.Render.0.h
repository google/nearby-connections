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

#ifndef WINRT_Windows_Media_Render_0_H
#define WINRT_Windows_Media_Render_0_H
WINRT_EXPORT namespace winrt::Windows::Media::Render {
  enum class AudioRenderCategory : int32_t {
    Other = 0,
    ForegroundOnlyMedia = 1,
    BackgroundCapableMedia = 2,
    Communications = 3,
    Alerts = 4,
    SoundEffects = 5,
    GameEffects = 6,
    GameMedia = 7,
    GameChat = 8,
    Speech = 9,
    Movie = 10,
    Media = 11,
  };
}
namespace winrt::impl {
template <>
struct category<winrt::Windows::Media::Render::AudioRenderCategory> {
  using type = enum_category;
};
template <>
inline constexpr auto&
    name_v<winrt::Windows::Media::Render::AudioRenderCategory> =
        L"Windows.Media.Render.AudioRenderCategory";
}  // namespace winrt::impl
#endif
