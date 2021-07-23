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

#ifndef WINRT_Windows_ApplicationModel_Appointments_1_H
#define WINRT_Windows_ApplicationModel_Appointments_1_H
#include "winrt/impl/Windows.ApplicationModel.Appointments.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Appointments {
  struct __declspec(empty_bases) IAppointment
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointment> {
    IAppointment(std::nullptr_t = nullptr) noexcept {}
    IAppointment(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointment(IAppointment const&) noexcept = default;
    IAppointment(IAppointment&&) noexcept = default;
    IAppointment& operator=(IAppointment const&) & noexcept = default;
    IAppointment& operator=(IAppointment&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IAppointment2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointment2>,
        impl::require<
            winrt::Windows::ApplicationModel::Appointments::IAppointment2,
            winrt::Windows::ApplicationModel::Appointments::IAppointment> {
    IAppointment2(std::nullptr_t = nullptr) noexcept {}
    IAppointment2(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointment2(IAppointment2 const&) noexcept = default;
    IAppointment2(IAppointment2&&) noexcept = default;
    IAppointment2& operator=(IAppointment2 const&) & noexcept = default;
    IAppointment2& operator=(IAppointment2&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IAppointment3
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointment3>,
        impl::require<
            winrt::Windows::ApplicationModel::Appointments::IAppointment3,
            winrt::Windows::ApplicationModel::Appointments::IAppointment,
            winrt::Windows::ApplicationModel::Appointments::IAppointment2> {
    IAppointment3(std::nullptr_t = nullptr) noexcept {}
    IAppointment3(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointment3(IAppointment3 const&) noexcept = default;
    IAppointment3(IAppointment3&&) noexcept = default;
    IAppointment3& operator=(IAppointment3 const&) & noexcept = default;
    IAppointment3& operator=(IAppointment3&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IAppointmentCalendar
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentCalendar> {
    IAppointmentCalendar(std::nullptr_t = nullptr) noexcept {}
    IAppointmentCalendar(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentCalendar(IAppointmentCalendar const&) noexcept = default;
    IAppointmentCalendar(IAppointmentCalendar&&) noexcept = default;
    IAppointmentCalendar& operator=(IAppointmentCalendar const&) & noexcept =
        default;
    IAppointmentCalendar& operator=(IAppointmentCalendar&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IAppointmentCalendar2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentCalendar2>,
        impl::require<winrt::Windows::ApplicationModel::Appointments::
                          IAppointmentCalendar2,
                      winrt::Windows::ApplicationModel::Appointments::
                          IAppointmentCalendar> {
    IAppointmentCalendar2(std::nullptr_t = nullptr) noexcept {}
    IAppointmentCalendar2(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentCalendar2(IAppointmentCalendar2 const&) noexcept = default;
    IAppointmentCalendar2(IAppointmentCalendar2&&) noexcept = default;
    IAppointmentCalendar2& operator=(IAppointmentCalendar2 const&) & noexcept =
        default;
    IAppointmentCalendar2& operator=(IAppointmentCalendar2&&) & noexcept =
        default;
    using impl::consume_t<IAppointmentCalendar2,
                          IAppointmentCalendar2>::DisplayColor;
    using impl::consume_t<IAppointmentCalendar2,
                          winrt::Windows::ApplicationModel::Appointments::
                              IAppointmentCalendar>::DisplayColor;
    using impl::consume_t<IAppointmentCalendar2,
                          IAppointmentCalendar2>::IsHidden;
    using impl::consume_t<IAppointmentCalendar2,
                          winrt::Windows::ApplicationModel::Appointments::
                              IAppointmentCalendar>::IsHidden;
  };
  struct __declspec(empty_bases) IAppointmentCalendar3
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentCalendar3> {
    IAppointmentCalendar3(std::nullptr_t = nullptr) noexcept {}
    IAppointmentCalendar3(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentCalendar3(IAppointmentCalendar3 const&) noexcept = default;
    IAppointmentCalendar3(IAppointmentCalendar3&&) noexcept = default;
    IAppointmentCalendar3& operator=(IAppointmentCalendar3 const&) & noexcept =
        default;
    IAppointmentCalendar3& operator=(IAppointmentCalendar3&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IAppointmentCalendarSyncManager
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentCalendarSyncManager> {
    IAppointmentCalendarSyncManager(std::nullptr_t = nullptr) noexcept {}
    IAppointmentCalendarSyncManager(void* ptr,
                                    take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentCalendarSyncManager(
        IAppointmentCalendarSyncManager const&) noexcept = default;
    IAppointmentCalendarSyncManager(
        IAppointmentCalendarSyncManager&&) noexcept = default;
    IAppointmentCalendarSyncManager& operator=(
        IAppointmentCalendarSyncManager const&) & noexcept = default;
    IAppointmentCalendarSyncManager& operator=(
        IAppointmentCalendarSyncManager&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IAppointmentCalendarSyncManager2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentCalendarSyncManager2> {
    IAppointmentCalendarSyncManager2(std::nullptr_t = nullptr) noexcept {}
    IAppointmentCalendarSyncManager2(void* ptr,
                                     take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentCalendarSyncManager2(
        IAppointmentCalendarSyncManager2 const&) noexcept = default;
    IAppointmentCalendarSyncManager2(
        IAppointmentCalendarSyncManager2&&) noexcept = default;
    IAppointmentCalendarSyncManager2& operator=(
        IAppointmentCalendarSyncManager2 const&) & noexcept = default;
    IAppointmentCalendarSyncManager2& operator=(
        IAppointmentCalendarSyncManager2&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IAppointmentConflictResult
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentConflictResult> {
    IAppointmentConflictResult(std::nullptr_t = nullptr) noexcept {}
    IAppointmentConflictResult(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentConflictResult(IAppointmentConflictResult const&) noexcept =
        default;
    IAppointmentConflictResult(IAppointmentConflictResult&&) noexcept = default;
    IAppointmentConflictResult& operator=(
        IAppointmentConflictResult const&) & noexcept = default;
    IAppointmentConflictResult& operator=(
        IAppointmentConflictResult&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IAppointmentException
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentException> {
    IAppointmentException(std::nullptr_t = nullptr) noexcept {}
    IAppointmentException(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentException(IAppointmentException const&) noexcept = default;
    IAppointmentException(IAppointmentException&&) noexcept = default;
    IAppointmentException& operator=(IAppointmentException const&) & noexcept =
        default;
    IAppointmentException& operator=(IAppointmentException&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IAppointmentInvitee
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentInvitee>,
        impl::require<
            winrt::Windows::ApplicationModel::Appointments::IAppointmentInvitee,
            winrt::Windows::ApplicationModel::Appointments::
                IAppointmentParticipant> {
    IAppointmentInvitee(std::nullptr_t = nullptr) noexcept {}
    IAppointmentInvitee(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentInvitee(IAppointmentInvitee const&) noexcept = default;
    IAppointmentInvitee(IAppointmentInvitee&&) noexcept = default;
    IAppointmentInvitee& operator=(IAppointmentInvitee const&) & noexcept =
        default;
    IAppointmentInvitee& operator=(IAppointmentInvitee&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IAppointmentManagerForUser
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentManagerForUser> {
    IAppointmentManagerForUser(std::nullptr_t = nullptr) noexcept {}
    IAppointmentManagerForUser(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentManagerForUser(IAppointmentManagerForUser const&) noexcept =
        default;
    IAppointmentManagerForUser(IAppointmentManagerForUser&&) noexcept = default;
    IAppointmentManagerForUser& operator=(
        IAppointmentManagerForUser const&) & noexcept = default;
    IAppointmentManagerForUser& operator=(
        IAppointmentManagerForUser&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IAppointmentManagerStatics
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentManagerStatics> {
    IAppointmentManagerStatics(std::nullptr_t = nullptr) noexcept {}
    IAppointmentManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentManagerStatics(IAppointmentManagerStatics const&) noexcept =
        default;
    IAppointmentManagerStatics(IAppointmentManagerStatics&&) noexcept = default;
    IAppointmentManagerStatics& operator=(
        IAppointmentManagerStatics const&) & noexcept = default;
    IAppointmentManagerStatics& operator=(
        IAppointmentManagerStatics&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IAppointmentManagerStatics2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentManagerStatics2> {
    IAppointmentManagerStatics2(std::nullptr_t = nullptr) noexcept {}
    IAppointmentManagerStatics2(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentManagerStatics2(IAppointmentManagerStatics2 const&) noexcept =
        default;
    IAppointmentManagerStatics2(IAppointmentManagerStatics2&&) noexcept =
        default;
    IAppointmentManagerStatics2& operator=(
        IAppointmentManagerStatics2 const&) & noexcept = default;
    IAppointmentManagerStatics2& operator=(
        IAppointmentManagerStatics2&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IAppointmentManagerStatics3
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentManagerStatics3> {
    IAppointmentManagerStatics3(std::nullptr_t = nullptr) noexcept {}
    IAppointmentManagerStatics3(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentManagerStatics3(IAppointmentManagerStatics3 const&) noexcept =
        default;
    IAppointmentManagerStatics3(IAppointmentManagerStatics3&&) noexcept =
        default;
    IAppointmentManagerStatics3& operator=(
        IAppointmentManagerStatics3 const&) & noexcept = default;
    IAppointmentManagerStatics3& operator=(
        IAppointmentManagerStatics3&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IAppointmentParticipant
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentParticipant> {
    IAppointmentParticipant(std::nullptr_t = nullptr) noexcept {}
    IAppointmentParticipant(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentParticipant(IAppointmentParticipant const&) noexcept = default;
    IAppointmentParticipant(IAppointmentParticipant&&) noexcept = default;
    IAppointmentParticipant& operator=(
        IAppointmentParticipant const&) & noexcept = default;
    IAppointmentParticipant& operator=(IAppointmentParticipant&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IAppointmentPropertiesStatics
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentPropertiesStatics> {
    IAppointmentPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
    IAppointmentPropertiesStatics(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentPropertiesStatics(
        IAppointmentPropertiesStatics const&) noexcept = default;
    IAppointmentPropertiesStatics(IAppointmentPropertiesStatics&&) noexcept =
        default;
    IAppointmentPropertiesStatics& operator=(
        IAppointmentPropertiesStatics const&) & noexcept = default;
    IAppointmentPropertiesStatics& operator=(
        IAppointmentPropertiesStatics&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IAppointmentPropertiesStatics2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentPropertiesStatics2>,
        impl::require<winrt::Windows::ApplicationModel::Appointments::
                          IAppointmentPropertiesStatics2,
                      winrt::Windows::ApplicationModel::Appointments::
                          IAppointmentPropertiesStatics> {
    IAppointmentPropertiesStatics2(std::nullptr_t = nullptr) noexcept {}
    IAppointmentPropertiesStatics2(void* ptr,
                                   take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentPropertiesStatics2(
        IAppointmentPropertiesStatics2 const&) noexcept = default;
    IAppointmentPropertiesStatics2(IAppointmentPropertiesStatics2&&) noexcept =
        default;
    IAppointmentPropertiesStatics2& operator=(
        IAppointmentPropertiesStatics2 const&) & noexcept = default;
    IAppointmentPropertiesStatics2& operator=(
        IAppointmentPropertiesStatics2&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IAppointmentRecurrence
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentRecurrence> {
    IAppointmentRecurrence(std::nullptr_t = nullptr) noexcept {}
    IAppointmentRecurrence(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentRecurrence(IAppointmentRecurrence const&) noexcept = default;
    IAppointmentRecurrence(IAppointmentRecurrence&&) noexcept = default;
    IAppointmentRecurrence& operator=(
        IAppointmentRecurrence const&) & noexcept = default;
    IAppointmentRecurrence& operator=(IAppointmentRecurrence&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IAppointmentRecurrence2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentRecurrence2>,
        impl::require<winrt::Windows::ApplicationModel::Appointments::
                          IAppointmentRecurrence2,
                      winrt::Windows::ApplicationModel::Appointments::
                          IAppointmentRecurrence> {
    IAppointmentRecurrence2(std::nullptr_t = nullptr) noexcept {}
    IAppointmentRecurrence2(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentRecurrence2(IAppointmentRecurrence2 const&) noexcept = default;
    IAppointmentRecurrence2(IAppointmentRecurrence2&&) noexcept = default;
    IAppointmentRecurrence2& operator=(
        IAppointmentRecurrence2 const&) & noexcept = default;
    IAppointmentRecurrence2& operator=(IAppointmentRecurrence2&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IAppointmentRecurrence3
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentRecurrence3>,
        impl::require<winrt::Windows::ApplicationModel::Appointments::
                          IAppointmentRecurrence3,
                      winrt::Windows::ApplicationModel::Appointments::
                          IAppointmentRecurrence,
                      winrt::Windows::ApplicationModel::Appointments::
                          IAppointmentRecurrence2> {
    IAppointmentRecurrence3(std::nullptr_t = nullptr) noexcept {}
    IAppointmentRecurrence3(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentRecurrence3(IAppointmentRecurrence3 const&) noexcept = default;
    IAppointmentRecurrence3(IAppointmentRecurrence3&&) noexcept = default;
    IAppointmentRecurrence3& operator=(
        IAppointmentRecurrence3 const&) & noexcept = default;
    IAppointmentRecurrence3& operator=(IAppointmentRecurrence3&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IAppointmentStore
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentStore> {
    IAppointmentStore(std::nullptr_t = nullptr) noexcept {}
    IAppointmentStore(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentStore(IAppointmentStore const&) noexcept = default;
    IAppointmentStore(IAppointmentStore&&) noexcept = default;
    IAppointmentStore& operator=(IAppointmentStore const&) & noexcept = default;
    IAppointmentStore& operator=(IAppointmentStore&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IAppointmentStore2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentStore2>,
        impl::require<
            winrt::Windows::ApplicationModel::Appointments::IAppointmentStore2,
            winrt::Windows::ApplicationModel::Appointments::IAppointmentStore> {
    IAppointmentStore2(std::nullptr_t = nullptr) noexcept {}
    IAppointmentStore2(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentStore2(IAppointmentStore2 const&) noexcept = default;
    IAppointmentStore2(IAppointmentStore2&&) noexcept = default;
    IAppointmentStore2& operator=(IAppointmentStore2 const&) & noexcept =
        default;
    IAppointmentStore2& operator=(IAppointmentStore2&&) & noexcept = default;
    using impl::consume_t<IAppointmentStore2,
                          IAppointmentStore2>::CreateAppointmentCalendarAsync;
    using impl::consume_t<
        IAppointmentStore2,
        winrt::Windows::ApplicationModel::Appointments::IAppointmentStore>::
        CreateAppointmentCalendarAsync;
  };
  struct __declspec(empty_bases) IAppointmentStore3
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentStore3> {
    IAppointmentStore3(std::nullptr_t = nullptr) noexcept {}
    IAppointmentStore3(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentStore3(IAppointmentStore3 const&) noexcept = default;
    IAppointmentStore3(IAppointmentStore3&&) noexcept = default;
    IAppointmentStore3& operator=(IAppointmentStore3 const&) & noexcept =
        default;
    IAppointmentStore3& operator=(IAppointmentStore3&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IAppointmentStoreChange
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentStoreChange> {
    IAppointmentStoreChange(std::nullptr_t = nullptr) noexcept {}
    IAppointmentStoreChange(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentStoreChange(IAppointmentStoreChange const&) noexcept = default;
    IAppointmentStoreChange(IAppointmentStoreChange&&) noexcept = default;
    IAppointmentStoreChange& operator=(
        IAppointmentStoreChange const&) & noexcept = default;
    IAppointmentStoreChange& operator=(IAppointmentStoreChange&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IAppointmentStoreChange2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentStoreChange2>,
        impl::require<winrt::Windows::ApplicationModel::Appointments::
                          IAppointmentStoreChange2,
                      winrt::Windows::ApplicationModel::Appointments::
                          IAppointmentStoreChange> {
    IAppointmentStoreChange2(std::nullptr_t = nullptr) noexcept {}
    IAppointmentStoreChange2(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentStoreChange2(IAppointmentStoreChange2 const&) noexcept =
        default;
    IAppointmentStoreChange2(IAppointmentStoreChange2&&) noexcept = default;
    IAppointmentStoreChange2& operator=(
        IAppointmentStoreChange2 const&) & noexcept = default;
    IAppointmentStoreChange2& operator=(IAppointmentStoreChange2&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IAppointmentStoreChangeReader
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentStoreChangeReader> {
    IAppointmentStoreChangeReader(std::nullptr_t = nullptr) noexcept {}
    IAppointmentStoreChangeReader(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentStoreChangeReader(
        IAppointmentStoreChangeReader const&) noexcept = default;
    IAppointmentStoreChangeReader(IAppointmentStoreChangeReader&&) noexcept =
        default;
    IAppointmentStoreChangeReader& operator=(
        IAppointmentStoreChangeReader const&) & noexcept = default;
    IAppointmentStoreChangeReader& operator=(
        IAppointmentStoreChangeReader&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IAppointmentStoreChangeTracker
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentStoreChangeTracker> {
    IAppointmentStoreChangeTracker(std::nullptr_t = nullptr) noexcept {}
    IAppointmentStoreChangeTracker(void* ptr,
                                   take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentStoreChangeTracker(
        IAppointmentStoreChangeTracker const&) noexcept = default;
    IAppointmentStoreChangeTracker(IAppointmentStoreChangeTracker&&) noexcept =
        default;
    IAppointmentStoreChangeTracker& operator=(
        IAppointmentStoreChangeTracker const&) & noexcept = default;
    IAppointmentStoreChangeTracker& operator=(
        IAppointmentStoreChangeTracker&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IAppointmentStoreChangeTracker2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentStoreChangeTracker2> {
    IAppointmentStoreChangeTracker2(std::nullptr_t = nullptr) noexcept {}
    IAppointmentStoreChangeTracker2(void* ptr,
                                    take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentStoreChangeTracker2(
        IAppointmentStoreChangeTracker2 const&) noexcept = default;
    IAppointmentStoreChangeTracker2(
        IAppointmentStoreChangeTracker2&&) noexcept = default;
    IAppointmentStoreChangeTracker2& operator=(
        IAppointmentStoreChangeTracker2 const&) & noexcept = default;
    IAppointmentStoreChangeTracker2& operator=(
        IAppointmentStoreChangeTracker2&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IAppointmentStoreChangedDeferral
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentStoreChangedDeferral> {
    IAppointmentStoreChangedDeferral(std::nullptr_t = nullptr) noexcept {}
    IAppointmentStoreChangedDeferral(void* ptr,
                                     take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentStoreChangedDeferral(
        IAppointmentStoreChangedDeferral const&) noexcept = default;
    IAppointmentStoreChangedDeferral(
        IAppointmentStoreChangedDeferral&&) noexcept = default;
    IAppointmentStoreChangedDeferral& operator=(
        IAppointmentStoreChangedDeferral const&) & noexcept = default;
    IAppointmentStoreChangedDeferral& operator=(
        IAppointmentStoreChangedDeferral&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IAppointmentStoreChangedEventArgs
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentStoreChangedEventArgs> {
    IAppointmentStoreChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    IAppointmentStoreChangedEventArgs(void* ptr,
                                      take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentStoreChangedEventArgs(
        IAppointmentStoreChangedEventArgs const&) noexcept = default;
    IAppointmentStoreChangedEventArgs(
        IAppointmentStoreChangedEventArgs&&) noexcept = default;
    IAppointmentStoreChangedEventArgs& operator=(
        IAppointmentStoreChangedEventArgs const&) & noexcept = default;
    IAppointmentStoreChangedEventArgs& operator=(
        IAppointmentStoreChangedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IAppointmentStoreNotificationTriggerDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentStoreNotificationTriggerDetails> {
    IAppointmentStoreNotificationTriggerDetails(
        std::nullptr_t = nullptr) noexcept {}
    IAppointmentStoreNotificationTriggerDetails(
        void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IAppointmentStoreNotificationTriggerDetails(
        IAppointmentStoreNotificationTriggerDetails const&) noexcept = default;
    IAppointmentStoreNotificationTriggerDetails(
        IAppointmentStoreNotificationTriggerDetails&&) noexcept = default;
    IAppointmentStoreNotificationTriggerDetails& operator=(
        IAppointmentStoreNotificationTriggerDetails const&) & noexcept =
        default;
    IAppointmentStoreNotificationTriggerDetails& operator=(
        IAppointmentStoreNotificationTriggerDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IFindAppointmentsOptions
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFindAppointmentsOptions> {
    IFindAppointmentsOptions(std::nullptr_t = nullptr) noexcept {}
    IFindAppointmentsOptions(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IFindAppointmentsOptions(IFindAppointmentsOptions const&) noexcept =
        default;
    IFindAppointmentsOptions(IFindAppointmentsOptions&&) noexcept = default;
    IFindAppointmentsOptions& operator=(
        IFindAppointmentsOptions const&) & noexcept = default;
    IFindAppointmentsOptions& operator=(IFindAppointmentsOptions&&) & noexcept =
        default;
  };
}
#endif
