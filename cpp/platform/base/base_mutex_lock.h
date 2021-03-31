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

#ifndef LOCATION_NEARBY_CPP_PLATFORM_BASE_BASE_MUTEX_LOCK_H_
#define LOCATION_NEARBY_CPP_PLATFORM_BASE_BASE_MUTEX_LOCK_H_

#include "platform/api/mutex.h"
#include "third_party/absl/base/thread_annotations.h"

namespace location {
namespace nearby {

// An RAII mechanism to acquire a Lock over a block of code.
class ABSL_SCOPED_LOCKABLE BaseMutexLock final {
 public:
  explicit BaseMutexLock(api::Mutex* mutex) ABSL_EXCLUSIVE_LOCK_FUNCTION(mutex)
      : mutex_(mutex) {
    mutex_->Lock();
  }
  ~BaseMutexLock() ABSL_UNLOCK_FUNCTION() { mutex_->Unlock(); }

 private:
  api::Mutex* mutex_;
};

}  // namespace nearby
}  // namespace location

#endif  // LOCATION_NEARBY_CPP_PLATFORM_BASE_BASE_MUTEX_LOCK_H_
