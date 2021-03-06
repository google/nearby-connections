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

#ifndef WINRT_Windows_ApplicationModel_DataTransfer_DragDrop_Core_2_H
#define WINRT_Windows_ApplicationModel_DataTransfer_DragDrop_Core_2_H
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.DragDrop.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer::
    DragDrop::Core {
  struct __declspec(empty_bases) CoreDragDropManager
      : winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::
            ICoreDragDropManager {
    CoreDragDropManager(std::nullptr_t) noexcept {}
    CoreDragDropManager(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::
              ICoreDragDropManager(ptr, take_ownership_from_abi) {}
    CoreDragDropManager(CoreDragDropManager const&) noexcept = default;
    CoreDragDropManager(CoreDragDropManager&&) noexcept = default;
    CoreDragDropManager& operator=(CoreDragDropManager const&) & noexcept =
        default;
    CoreDragDropManager& operator=(CoreDragDropManager&&) & noexcept = default;
    static auto GetForCurrentView();
  };
  struct __declspec(empty_bases) CoreDragInfo
      : winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::
            ICoreDragInfo,
        impl::require<CoreDragInfo,
                      winrt::Windows::ApplicationModel::DataTransfer::DragDrop::
                          Core::ICoreDragInfo2> {
    CoreDragInfo(std::nullptr_t) noexcept {}
    CoreDragInfo(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::
              ICoreDragInfo(ptr, take_ownership_from_abi) {}
    CoreDragInfo(CoreDragInfo const&) noexcept = default;
    CoreDragInfo(CoreDragInfo&&) noexcept = default;
    CoreDragInfo& operator=(CoreDragInfo const&) & noexcept = default;
    CoreDragInfo& operator=(CoreDragInfo&&) & noexcept = default;
  };
  struct __declspec(empty_bases) CoreDragOperation
      : winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::
            ICoreDragOperation,
        impl::require<CoreDragOperation,
                      winrt::Windows::ApplicationModel::DataTransfer::DragDrop::
                          Core::ICoreDragOperation2> {
    CoreDragOperation(std::nullptr_t) noexcept {}
    CoreDragOperation(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::
              ICoreDragOperation(ptr, take_ownership_from_abi) {}
    CoreDragOperation();
    CoreDragOperation(CoreDragOperation const&) noexcept = default;
    CoreDragOperation(CoreDragOperation&&) noexcept = default;
    CoreDragOperation& operator=(CoreDragOperation const&) & noexcept = default;
    CoreDragOperation& operator=(CoreDragOperation&&) & noexcept = default;
  };
  struct __declspec(empty_bases) CoreDragUIOverride
      : winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::
            ICoreDragUIOverride {
    CoreDragUIOverride(std::nullptr_t) noexcept {}
    CoreDragUIOverride(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::
              ICoreDragUIOverride(ptr, take_ownership_from_abi) {}
    CoreDragUIOverride(CoreDragUIOverride const&) noexcept = default;
    CoreDragUIOverride(CoreDragUIOverride&&) noexcept = default;
    CoreDragUIOverride& operator=(CoreDragUIOverride const&) & noexcept =
        default;
    CoreDragUIOverride& operator=(CoreDragUIOverride&&) & noexcept = default;
  };
  struct __declspec(empty_bases) CoreDropOperationTargetRequestedEventArgs
      : winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::
            ICoreDropOperationTargetRequestedEventArgs {
    CoreDropOperationTargetRequestedEventArgs(std::nullptr_t) noexcept {}
    CoreDropOperationTargetRequestedEventArgs(
        void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::
              ICoreDropOperationTargetRequestedEventArgs(
                  ptr, take_ownership_from_abi) {}
    CoreDropOperationTargetRequestedEventArgs(
        CoreDropOperationTargetRequestedEventArgs const&) noexcept = default;
    CoreDropOperationTargetRequestedEventArgs(
        CoreDropOperationTargetRequestedEventArgs&&) noexcept = default;
    CoreDropOperationTargetRequestedEventArgs& operator=(
        CoreDropOperationTargetRequestedEventArgs const&) & noexcept = default;
    CoreDropOperationTargetRequestedEventArgs& operator=(
        CoreDropOperationTargetRequestedEventArgs&&) & noexcept = default;
  };
}
#endif
