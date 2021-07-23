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

#ifndef WINRT_Windows_AI_MachineLearning_Preview_2_H
#define WINRT_Windows_AI_MachineLearning_Preview_2_H
#include "winrt/impl/Windows.AI.MachineLearning.Preview.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
WINRT_EXPORT namespace winrt::Windows::AI::MachineLearning::Preview {
  struct __declspec(empty_bases) ImageVariableDescriptorPreview
      : winrt::Windows::AI::MachineLearning::Preview::
            IImageVariableDescriptorPreview {
    ImageVariableDescriptorPreview(std::nullptr_t) noexcept {}
    ImageVariableDescriptorPreview(void* ptr,
                                   take_ownership_from_abi_t) noexcept
        : winrt::Windows::AI::MachineLearning::Preview::
              IImageVariableDescriptorPreview(ptr, take_ownership_from_abi) {}
    ImageVariableDescriptorPreview(
        ImageVariableDescriptorPreview const&) noexcept = default;
    ImageVariableDescriptorPreview(ImageVariableDescriptorPreview&&) noexcept =
        default;
    ImageVariableDescriptorPreview& operator=(
        ImageVariableDescriptorPreview const&) & noexcept = default;
    ImageVariableDescriptorPreview& operator=(
        ImageVariableDescriptorPreview&&) & noexcept = default;
  };
  struct __declspec(empty_bases) InferencingOptionsPreview
      : winrt::Windows::AI::MachineLearning::Preview::
            IInferencingOptionsPreview {
    InferencingOptionsPreview(std::nullptr_t) noexcept {}
    InferencingOptionsPreview(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::AI::MachineLearning::Preview::
              IInferencingOptionsPreview(ptr, take_ownership_from_abi) {}
    InferencingOptionsPreview(InferencingOptionsPreview const&) noexcept =
        default;
    InferencingOptionsPreview(InferencingOptionsPreview&&) noexcept = default;
    InferencingOptionsPreview& operator=(
        InferencingOptionsPreview const&) & noexcept = default;
    InferencingOptionsPreview& operator=(
        InferencingOptionsPreview&&) & noexcept = default;
  };
  struct __declspec(empty_bases) LearningModelBindingPreview
      : winrt::Windows::AI::MachineLearning::Preview::
            ILearningModelBindingPreview {
    LearningModelBindingPreview(std::nullptr_t) noexcept {}
    LearningModelBindingPreview(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::AI::MachineLearning::Preview::
              ILearningModelBindingPreview(ptr, take_ownership_from_abi) {}
    explicit LearningModelBindingPreview(
        winrt::Windows::AI::MachineLearning::Preview::
            LearningModelPreview const& model);
    LearningModelBindingPreview(LearningModelBindingPreview const&) noexcept =
        default;
    LearningModelBindingPreview(LearningModelBindingPreview&&) noexcept =
        default;
    LearningModelBindingPreview& operator=(
        LearningModelBindingPreview const&) & noexcept = default;
    LearningModelBindingPreview& operator=(
        LearningModelBindingPreview&&) & noexcept = default;
  };
  struct __declspec(empty_bases) LearningModelDescriptionPreview
      : winrt::Windows::AI::MachineLearning::Preview::
            ILearningModelDescriptionPreview {
    LearningModelDescriptionPreview(std::nullptr_t) noexcept {}
    LearningModelDescriptionPreview(void* ptr,
                                    take_ownership_from_abi_t) noexcept
        : winrt::Windows::AI::MachineLearning::Preview::
              ILearningModelDescriptionPreview(ptr, take_ownership_from_abi) {}
    LearningModelDescriptionPreview(
        LearningModelDescriptionPreview const&) noexcept = default;
    LearningModelDescriptionPreview(
        LearningModelDescriptionPreview&&) noexcept = default;
    LearningModelDescriptionPreview& operator=(
        LearningModelDescriptionPreview const&) & noexcept = default;
    LearningModelDescriptionPreview& operator=(
        LearningModelDescriptionPreview&&) & noexcept = default;
  };
  struct __declspec(empty_bases) LearningModelEvaluationResultPreview
      : winrt::Windows::AI::MachineLearning::Preview::
            ILearningModelEvaluationResultPreview {
    LearningModelEvaluationResultPreview(std::nullptr_t) noexcept {}
    LearningModelEvaluationResultPreview(void* ptr,
                                         take_ownership_from_abi_t) noexcept
        : winrt::Windows::AI::MachineLearning::Preview::
              ILearningModelEvaluationResultPreview(ptr,
                                                    take_ownership_from_abi) {}
    LearningModelEvaluationResultPreview(
        LearningModelEvaluationResultPreview const&) noexcept = default;
    LearningModelEvaluationResultPreview(
        LearningModelEvaluationResultPreview&&) noexcept = default;
    LearningModelEvaluationResultPreview& operator=(
        LearningModelEvaluationResultPreview const&) & noexcept = default;
    LearningModelEvaluationResultPreview& operator=(
        LearningModelEvaluationResultPreview&&) & noexcept = default;
  };
  struct __declspec(empty_bases) LearningModelPreview
      : winrt::Windows::AI::MachineLearning::Preview::ILearningModelPreview {
    LearningModelPreview(std::nullptr_t) noexcept {}
    LearningModelPreview(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::AI::MachineLearning::Preview::ILearningModelPreview(
              ptr, take_ownership_from_abi) {}
    LearningModelPreview(LearningModelPreview const&) noexcept = default;
    LearningModelPreview(LearningModelPreview&&) noexcept = default;
    LearningModelPreview& operator=(LearningModelPreview const&) & noexcept =
        default;
    LearningModelPreview& operator=(LearningModelPreview&&) & noexcept =
        default;
    static auto LoadModelFromStorageFileAsync(
        winrt::Windows::Storage::IStorageFile const& modelFile);
    static auto LoadModelFromStreamAsync(
        winrt::Windows::Storage::Streams::IRandomAccessStreamReference const&
            modelStream);
  };
  struct __declspec(empty_bases) LearningModelVariableDescriptorPreview
      : winrt::Windows::AI::MachineLearning::Preview::
            ILearningModelVariableDescriptorPreview {
    LearningModelVariableDescriptorPreview(std::nullptr_t) noexcept {}
    LearningModelVariableDescriptorPreview(void* ptr,
                                           take_ownership_from_abi_t) noexcept
        : winrt::Windows::AI::MachineLearning::Preview::
              ILearningModelVariableDescriptorPreview(
                  ptr, take_ownership_from_abi) {}
    LearningModelVariableDescriptorPreview(
        LearningModelVariableDescriptorPreview const&) noexcept = default;
    LearningModelVariableDescriptorPreview(
        LearningModelVariableDescriptorPreview&&) noexcept = default;
    LearningModelVariableDescriptorPreview& operator=(
        LearningModelVariableDescriptorPreview const&) & noexcept = default;
    LearningModelVariableDescriptorPreview& operator=(
        LearningModelVariableDescriptorPreview&&) & noexcept = default;
  };
  struct __declspec(empty_bases) MapVariableDescriptorPreview
      : winrt::Windows::AI::MachineLearning::Preview::
            IMapVariableDescriptorPreview {
    MapVariableDescriptorPreview(std::nullptr_t) noexcept {}
    MapVariableDescriptorPreview(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::AI::MachineLearning::Preview::
              IMapVariableDescriptorPreview(ptr, take_ownership_from_abi) {}
    MapVariableDescriptorPreview(MapVariableDescriptorPreview const&) noexcept =
        default;
    MapVariableDescriptorPreview(MapVariableDescriptorPreview&&) noexcept =
        default;
    MapVariableDescriptorPreview& operator=(
        MapVariableDescriptorPreview const&) & noexcept = default;
    MapVariableDescriptorPreview& operator=(
        MapVariableDescriptorPreview&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SequenceVariableDescriptorPreview
      : winrt::Windows::AI::MachineLearning::Preview::
            ISequenceVariableDescriptorPreview {
    SequenceVariableDescriptorPreview(std::nullptr_t) noexcept {}
    SequenceVariableDescriptorPreview(void* ptr,
                                      take_ownership_from_abi_t) noexcept
        : winrt::Windows::AI::MachineLearning::Preview::
              ISequenceVariableDescriptorPreview(ptr, take_ownership_from_abi) {
    }
    SequenceVariableDescriptorPreview(
        SequenceVariableDescriptorPreview const&) noexcept = default;
    SequenceVariableDescriptorPreview(
        SequenceVariableDescriptorPreview&&) noexcept = default;
    SequenceVariableDescriptorPreview& operator=(
        SequenceVariableDescriptorPreview const&) & noexcept = default;
    SequenceVariableDescriptorPreview& operator=(
        SequenceVariableDescriptorPreview&&) & noexcept = default;
  };
  struct __declspec(empty_bases) TensorVariableDescriptorPreview
      : winrt::Windows::AI::MachineLearning::Preview::
            ITensorVariableDescriptorPreview {
    TensorVariableDescriptorPreview(std::nullptr_t) noexcept {}
    TensorVariableDescriptorPreview(void* ptr,
                                    take_ownership_from_abi_t) noexcept
        : winrt::Windows::AI::MachineLearning::Preview::
              ITensorVariableDescriptorPreview(ptr, take_ownership_from_abi) {}
    TensorVariableDescriptorPreview(
        TensorVariableDescriptorPreview const&) noexcept = default;
    TensorVariableDescriptorPreview(
        TensorVariableDescriptorPreview&&) noexcept = default;
    TensorVariableDescriptorPreview& operator=(
        TensorVariableDescriptorPreview const&) & noexcept = default;
    TensorVariableDescriptorPreview& operator=(
        TensorVariableDescriptorPreview&&) & noexcept = default;
  };
}
#endif
