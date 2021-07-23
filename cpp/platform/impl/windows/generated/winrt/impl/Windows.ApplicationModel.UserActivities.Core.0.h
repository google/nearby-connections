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

#ifndef WINRT_Windows_ApplicationModel_UserActivities_Core_0_H
#define WINRT_Windows_ApplicationModel_UserActivities_Core_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserActivities {
  struct UserActivity;
  struct UserActivityChannel;
  struct UserActivitySession;
}
WINRT_EXPORT namespace winrt::Windows::Foundation { struct IAsyncAction; }
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserActivities::Core {
  struct ICoreUserActivityManagerStatics;
  struct CoreUserActivityManager;
}
namespace winrt::impl {
template <>
struct category<winrt::Windows::ApplicationModel::UserActivities::Core::
                    ICoreUserActivityManagerStatics> {
  using type = interface_category;
};
template <>
struct category<winrt::Windows::ApplicationModel::UserActivities::Core::
                    CoreUserActivityManager> {
  using type = class_category;
};
template <>
inline constexpr auto& name_v<winrt::Windows::ApplicationModel::UserActivities::
                                  Core::CoreUserActivityManager> =
    L"Windows.ApplicationModel.UserActivities.Core.CoreUserActivityManager";
template <>
inline constexpr auto& name_v<winrt::Windows::ApplicationModel::UserActivities::
                                  Core::ICoreUserActivityManagerStatics> =
    L"Windows.ApplicationModel.UserActivities.Core."
    L"ICoreUserActivityManagerStatics";
template <>
inline constexpr guid guid_v<winrt::Windows::ApplicationModel::UserActivities::
                                 Core::ICoreUserActivityManagerStatics>{
    0xCA3ADB02,
    0xA4BE,
    0x4D4D,
    {0xBF, 0xA8, 0x67, 0x95, 0xF4, 0x26, 0x4E,
     0xFB}};  // CA3ADB02-A4BE-4D4D-BFA8-6795F4264EFB
template <>
struct abi<winrt::Windows::ApplicationModel::UserActivities::Core::
               ICoreUserActivityManagerStatics> {
  struct __declspec(novtable) type : inspectable_abi {
    virtual int32_t __stdcall CreateUserActivitySessionInBackground(
        void*, void**) noexcept = 0;
    virtual int32_t __stdcall DeleteUserActivitySessionsInTimeRangeAsync(
        void*, int64_t, int64_t, void**) noexcept = 0;
  };
};
template <typename D>
struct
    consume_Windows_ApplicationModel_UserActivities_Core_ICoreUserActivityManagerStatics {
  WINRT_IMPL_AUTO(
      winrt::Windows::ApplicationModel::UserActivities::UserActivitySession)
  CreateUserActivitySessionInBackground(
      winrt::Windows::ApplicationModel::UserActivities::UserActivity const&
          activity) const;
  WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction)
  DeleteUserActivitySessionsInTimeRangeAsync(
      winrt::Windows::ApplicationModel::UserActivities::
          UserActivityChannel const& channel,
      winrt::Windows::Foundation::DateTime const& startTime,
      winrt::Windows::Foundation::DateTime const& endTime) const;
};
template <>
struct consume<winrt::Windows::ApplicationModel::UserActivities::Core::
                   ICoreUserActivityManagerStatics> {
  template <typename D>
  using type =
      consume_Windows_ApplicationModel_UserActivities_Core_ICoreUserActivityManagerStatics<
          D>;
};
}  // namespace winrt::impl
#endif
