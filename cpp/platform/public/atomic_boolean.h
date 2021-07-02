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

#ifndef PLATFORM_PUBLIC_ATOMIC_BOOLEAN_H_
#define PLATFORM_PUBLIC_ATOMIC_BOOLEAN_H_

#include <memory>

#include "platform/api/atomic_boolean.h"
#include "platform/api/platform.h"

namespace location {
namespace nearby {

// A boolean value that may be updated atomically.
// See documentation in
// https://github.com/google/nearby-connections/tree/master/cpp/platform/api/atomic_boolean.h
class AtomicBoolean final  : public api::AtomicBoolean {
 public:
  using Platform = api::ImplementationPlatform;
  explicit AtomicBoolean(bool value = false)
      : impl_(Platform::CreateAtomicBoolean(value)) {}
  ~AtomicBoolean() override = default;
  AtomicBoolean(AtomicBoolean&&) = default;
  AtomicBoolean& operator=(AtomicBoolean&&) = default;

  bool Get() const override { return impl_->Get(); }
  bool Set(bool value) override { return impl_->Set(value); }

  explicit operator bool() const { return Get(); }

 private:
  std::unique_ptr<api::AtomicBoolean> impl_;
};

}  // namespace nearby
}  // namespace location

#endif  // PLATFORM_PUBLIC_ATOMIC_BOOLEAN_H_
