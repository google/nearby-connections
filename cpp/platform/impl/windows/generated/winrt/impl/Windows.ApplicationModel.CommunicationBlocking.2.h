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

#ifndef WINRT_Windows_ApplicationModel_CommunicationBlocking_2_H
#define WINRT_Windows_ApplicationModel_CommunicationBlocking_2_H
#include "winrt/impl/Windows.ApplicationModel.CommunicationBlocking.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::CommunicationBlocking {
  struct CommunicationBlockingAccessManager {
    CommunicationBlockingAccessManager() = delete;
    [[nodiscard]] static auto IsBlockingActive();
    static auto IsBlockedNumberAsync(param::hstring const& number);
    static auto ShowBlockNumbersUI(
        param::iterable<hstring> const& phoneNumbers);
    static auto ShowUnblockNumbersUI(
        param::iterable<hstring> const& phoneNumbers);
    static auto ShowBlockedCallsUI();
    static auto ShowBlockedMessagesUI();
  };
  struct CommunicationBlockingAppManager {
    CommunicationBlockingAppManager() = delete;
    [[nodiscard]] static auto IsCurrentAppActiveBlockingApp();
    static auto ShowCommunicationBlockingSettingsUI();
    static auto RequestSetAsActiveBlockingAppAsync();
  };
}
#endif
