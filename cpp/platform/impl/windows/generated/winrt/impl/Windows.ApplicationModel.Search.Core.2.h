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

#ifndef WINRT_Windows_ApplicationModel_Search_Core_2_H
#define WINRT_Windows_ApplicationModel_Search_Core_2_H
#include "winrt/impl/Windows.ApplicationModel.Search.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Search::Core {
  struct __declspec(empty_bases) RequestingFocusOnKeyboardInputEventArgs
      : winrt::Windows::ApplicationModel::Search::Core::
            IRequestingFocusOnKeyboardInputEventArgs {
    RequestingFocusOnKeyboardInputEventArgs(std::nullptr_t) noexcept {}
    RequestingFocusOnKeyboardInputEventArgs(void* ptr,
                                            take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Search::Core::
              IRequestingFocusOnKeyboardInputEventArgs(
                  ptr, take_ownership_from_abi) {}
    RequestingFocusOnKeyboardInputEventArgs(
        RequestingFocusOnKeyboardInputEventArgs const&) noexcept = default;
    RequestingFocusOnKeyboardInputEventArgs(
        RequestingFocusOnKeyboardInputEventArgs&&) noexcept = default;
    RequestingFocusOnKeyboardInputEventArgs& operator=(
        RequestingFocusOnKeyboardInputEventArgs const&) & noexcept = default;
    RequestingFocusOnKeyboardInputEventArgs& operator=(
        RequestingFocusOnKeyboardInputEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SearchSuggestion
      : winrt::Windows::ApplicationModel::Search::Core::ISearchSuggestion {
    SearchSuggestion(std::nullptr_t) noexcept {}
    SearchSuggestion(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Search::Core::ISearchSuggestion(
              ptr, take_ownership_from_abi) {}
    SearchSuggestion(SearchSuggestion const&) noexcept = default;
    SearchSuggestion(SearchSuggestion&&) noexcept = default;
    SearchSuggestion& operator=(SearchSuggestion const&) & noexcept = default;
    SearchSuggestion& operator=(SearchSuggestion&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SearchSuggestionManager
      : winrt::Windows::ApplicationModel::Search::Core::
            ISearchSuggestionManager {
    SearchSuggestionManager(std::nullptr_t) noexcept {}
    SearchSuggestionManager(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Search::Core::
              ISearchSuggestionManager(ptr, take_ownership_from_abi) {}
    SearchSuggestionManager();
    SearchSuggestionManager(SearchSuggestionManager const&) noexcept = default;
    SearchSuggestionManager(SearchSuggestionManager&&) noexcept = default;
    SearchSuggestionManager& operator=(
        SearchSuggestionManager const&) & noexcept = default;
    SearchSuggestionManager& operator=(SearchSuggestionManager&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) SearchSuggestionsRequestedEventArgs
      : winrt::Windows::ApplicationModel::Search::Core::
            ISearchSuggestionsRequestedEventArgs {
    SearchSuggestionsRequestedEventArgs(std::nullptr_t) noexcept {}
    SearchSuggestionsRequestedEventArgs(void* ptr,
                                        take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Search::Core::
              ISearchSuggestionsRequestedEventArgs(ptr,
                                                   take_ownership_from_abi) {}
    SearchSuggestionsRequestedEventArgs(
        SearchSuggestionsRequestedEventArgs const&) noexcept = default;
    SearchSuggestionsRequestedEventArgs(
        SearchSuggestionsRequestedEventArgs&&) noexcept = default;
    SearchSuggestionsRequestedEventArgs& operator=(
        SearchSuggestionsRequestedEventArgs const&) & noexcept = default;
    SearchSuggestionsRequestedEventArgs& operator=(
        SearchSuggestionsRequestedEventArgs&&) & noexcept = default;
  };
}
#endif
