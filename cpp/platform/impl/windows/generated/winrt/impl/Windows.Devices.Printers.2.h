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

#ifndef WINRT_Windows_Devices_Printers_2_H
#define WINRT_Windows_Devices_Printers_2_H
#include "winrt/impl/Windows.Devices.Printers.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Printers {
  struct __declspec(empty_bases) Print3DDevice
      : winrt::Windows::Devices::Printers::IPrint3DDevice {
    Print3DDevice(std::nullptr_t) noexcept {}
    Print3DDevice(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Devices::Printers::IPrint3DDevice(
              ptr, take_ownership_from_abi) {}
    Print3DDevice(Print3DDevice const&) noexcept = default;
    Print3DDevice(Print3DDevice&&) noexcept = default;
    Print3DDevice& operator=(Print3DDevice const&) & noexcept = default;
    Print3DDevice& operator=(Print3DDevice&&) & noexcept = default;
    static auto FromIdAsync(param::hstring const& deviceId);
    static auto GetDeviceSelector();
  };
  struct __declspec(empty_bases) PrintSchema
      : winrt::Windows::Devices::Printers::IPrintSchema {
    PrintSchema(std::nullptr_t) noexcept {}
    PrintSchema(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Devices::Printers::IPrintSchema(
              ptr, take_ownership_from_abi) {}
    PrintSchema(PrintSchema const&) noexcept = default;
    PrintSchema(PrintSchema&&) noexcept = default;
    PrintSchema& operator=(PrintSchema const&) & noexcept = default;
    PrintSchema& operator=(PrintSchema&&) & noexcept = default;
  };
}
#endif
