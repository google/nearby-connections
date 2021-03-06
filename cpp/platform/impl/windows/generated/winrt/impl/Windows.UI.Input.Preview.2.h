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

#ifndef WINRT_Windows_UI_Input_Preview_2_H
#define WINRT_Windows_UI_Input_Preview_2_H
#include "winrt/impl/Windows.UI.Input.Preview.1.h"
#include "winrt/impl/Windows.UI.WindowManagement.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Input::Preview {
  struct InputActivationListenerPreview {
    InputActivationListenerPreview() = delete;
    static auto CreateForApplicationWindow(
        winrt::Windows::UI::WindowManagement::AppWindow const& window);
  };
}
#endif
