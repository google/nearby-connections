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

#ifndef WINRT_Windows_ApplicationModel_Search_2_H
#define WINRT_Windows_ApplicationModel_Search_2_H
#include "winrt/impl/Windows.ApplicationModel.Search.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Search {
  struct __declspec(empty_bases) LocalContentSuggestionSettings
      : winrt::Windows::ApplicationModel::Search::
            ILocalContentSuggestionSettings {
    LocalContentSuggestionSettings(std::nullptr_t) noexcept {}
    LocalContentSuggestionSettings(void* ptr,
                                   take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Search::
              ILocalContentSuggestionSettings(ptr, take_ownership_from_abi) {}
    LocalContentSuggestionSettings();
    LocalContentSuggestionSettings(
        LocalContentSuggestionSettings const&) noexcept = default;
    LocalContentSuggestionSettings(LocalContentSuggestionSettings&&) noexcept =
        default;
    LocalContentSuggestionSettings& operator=(
        LocalContentSuggestionSettings const&) & noexcept = default;
    LocalContentSuggestionSettings& operator=(
        LocalContentSuggestionSettings&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SearchPane
      : winrt::Windows::ApplicationModel::Search::ISearchPane {
    SearchPane(std::nullptr_t) noexcept {}
    SearchPane(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Search::ISearchPane(
              ptr, take_ownership_from_abi) {}
    SearchPane(SearchPane const&) noexcept = default;
    SearchPane(SearchPane&&) noexcept = default;
    SearchPane& operator=(SearchPane const&) & noexcept = default;
    SearchPane& operator=(SearchPane&&) & noexcept = default;
    static auto GetForCurrentView();
    static auto HideThisApplication();
  };
  struct __declspec(empty_bases) SearchPaneQueryChangedEventArgs
      : winrt::Windows::ApplicationModel::Search::
            ISearchPaneQueryChangedEventArgs {
    SearchPaneQueryChangedEventArgs(std::nullptr_t) noexcept {}
    SearchPaneQueryChangedEventArgs(void* ptr,
                                    take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Search::
              ISearchPaneQueryChangedEventArgs(ptr, take_ownership_from_abi) {}
    SearchPaneQueryChangedEventArgs(
        SearchPaneQueryChangedEventArgs const&) noexcept = default;
    SearchPaneQueryChangedEventArgs(
        SearchPaneQueryChangedEventArgs&&) noexcept = default;
    SearchPaneQueryChangedEventArgs& operator=(
        SearchPaneQueryChangedEventArgs const&) & noexcept = default;
    SearchPaneQueryChangedEventArgs& operator=(
        SearchPaneQueryChangedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SearchPaneQueryLinguisticDetails
      : winrt::Windows::ApplicationModel::Search::
            ISearchPaneQueryLinguisticDetails {
    SearchPaneQueryLinguisticDetails(std::nullptr_t) noexcept {}
    SearchPaneQueryLinguisticDetails(void* ptr,
                                     take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Search::
              ISearchPaneQueryLinguisticDetails(ptr, take_ownership_from_abi) {}
    SearchPaneQueryLinguisticDetails(
        SearchPaneQueryLinguisticDetails const&) noexcept = default;
    SearchPaneQueryLinguisticDetails(
        SearchPaneQueryLinguisticDetails&&) noexcept = default;
    SearchPaneQueryLinguisticDetails& operator=(
        SearchPaneQueryLinguisticDetails const&) & noexcept = default;
    SearchPaneQueryLinguisticDetails& operator=(
        SearchPaneQueryLinguisticDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SearchPaneQuerySubmittedEventArgs
      : winrt::Windows::ApplicationModel::Search::
            ISearchPaneQuerySubmittedEventArgs,
        impl::require<
            SearchPaneQuerySubmittedEventArgs,
            winrt::Windows::ApplicationModel::Search::
                ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails> {
    SearchPaneQuerySubmittedEventArgs(std::nullptr_t) noexcept {}
    SearchPaneQuerySubmittedEventArgs(void* ptr,
                                      take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Search::
              ISearchPaneQuerySubmittedEventArgs(ptr, take_ownership_from_abi) {
    }
    SearchPaneQuerySubmittedEventArgs(
        SearchPaneQuerySubmittedEventArgs const&) noexcept = default;
    SearchPaneQuerySubmittedEventArgs(
        SearchPaneQuerySubmittedEventArgs&&) noexcept = default;
    SearchPaneQuerySubmittedEventArgs& operator=(
        SearchPaneQuerySubmittedEventArgs const&) & noexcept = default;
    SearchPaneQuerySubmittedEventArgs& operator=(
        SearchPaneQuerySubmittedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SearchPaneResultSuggestionChosenEventArgs
      : winrt::Windows::ApplicationModel::Search::
            ISearchPaneResultSuggestionChosenEventArgs {
    SearchPaneResultSuggestionChosenEventArgs(std::nullptr_t) noexcept {}
    SearchPaneResultSuggestionChosenEventArgs(
        void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Search::
              ISearchPaneResultSuggestionChosenEventArgs(
                  ptr, take_ownership_from_abi) {}
    SearchPaneResultSuggestionChosenEventArgs(
        SearchPaneResultSuggestionChosenEventArgs const&) noexcept = default;
    SearchPaneResultSuggestionChosenEventArgs(
        SearchPaneResultSuggestionChosenEventArgs&&) noexcept = default;
    SearchPaneResultSuggestionChosenEventArgs& operator=(
        SearchPaneResultSuggestionChosenEventArgs const&) & noexcept = default;
    SearchPaneResultSuggestionChosenEventArgs& operator=(
        SearchPaneResultSuggestionChosenEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SearchPaneSuggestionsRequest
      : winrt::Windows::ApplicationModel::Search::
            ISearchPaneSuggestionsRequest {
    SearchPaneSuggestionsRequest(std::nullptr_t) noexcept {}
    SearchPaneSuggestionsRequest(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Search::
              ISearchPaneSuggestionsRequest(ptr, take_ownership_from_abi) {}
    SearchPaneSuggestionsRequest(SearchPaneSuggestionsRequest const&) noexcept =
        default;
    SearchPaneSuggestionsRequest(SearchPaneSuggestionsRequest&&) noexcept =
        default;
    SearchPaneSuggestionsRequest& operator=(
        SearchPaneSuggestionsRequest const&) & noexcept = default;
    SearchPaneSuggestionsRequest& operator=(
        SearchPaneSuggestionsRequest&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SearchPaneSuggestionsRequestDeferral
      : winrt::Windows::ApplicationModel::Search::
            ISearchPaneSuggestionsRequestDeferral {
    SearchPaneSuggestionsRequestDeferral(std::nullptr_t) noexcept {}
    SearchPaneSuggestionsRequestDeferral(void* ptr,
                                         take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Search::
              ISearchPaneSuggestionsRequestDeferral(ptr,
                                                    take_ownership_from_abi) {}
    SearchPaneSuggestionsRequestDeferral(
        SearchPaneSuggestionsRequestDeferral const&) noexcept = default;
    SearchPaneSuggestionsRequestDeferral(
        SearchPaneSuggestionsRequestDeferral&&) noexcept = default;
    SearchPaneSuggestionsRequestDeferral& operator=(
        SearchPaneSuggestionsRequestDeferral const&) & noexcept = default;
    SearchPaneSuggestionsRequestDeferral& operator=(
        SearchPaneSuggestionsRequestDeferral&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SearchPaneSuggestionsRequestedEventArgs
      : winrt::Windows::ApplicationModel::Search::
            ISearchPaneSuggestionsRequestedEventArgs {
    SearchPaneSuggestionsRequestedEventArgs(std::nullptr_t) noexcept {}
    SearchPaneSuggestionsRequestedEventArgs(void* ptr,
                                            take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Search::
              ISearchPaneSuggestionsRequestedEventArgs(
                  ptr, take_ownership_from_abi) {}
    SearchPaneSuggestionsRequestedEventArgs(
        SearchPaneSuggestionsRequestedEventArgs const&) noexcept = default;
    SearchPaneSuggestionsRequestedEventArgs(
        SearchPaneSuggestionsRequestedEventArgs&&) noexcept = default;
    SearchPaneSuggestionsRequestedEventArgs& operator=(
        SearchPaneSuggestionsRequestedEventArgs const&) & noexcept = default;
    SearchPaneSuggestionsRequestedEventArgs& operator=(
        SearchPaneSuggestionsRequestedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SearchPaneVisibilityChangedEventArgs
      : winrt::Windows::ApplicationModel::Search::
            ISearchPaneVisibilityChangedEventArgs {
    SearchPaneVisibilityChangedEventArgs(std::nullptr_t) noexcept {}
    SearchPaneVisibilityChangedEventArgs(void* ptr,
                                         take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Search::
              ISearchPaneVisibilityChangedEventArgs(ptr,
                                                    take_ownership_from_abi) {}
    SearchPaneVisibilityChangedEventArgs(
        SearchPaneVisibilityChangedEventArgs const&) noexcept = default;
    SearchPaneVisibilityChangedEventArgs(
        SearchPaneVisibilityChangedEventArgs&&) noexcept = default;
    SearchPaneVisibilityChangedEventArgs& operator=(
        SearchPaneVisibilityChangedEventArgs const&) & noexcept = default;
    SearchPaneVisibilityChangedEventArgs& operator=(
        SearchPaneVisibilityChangedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SearchQueryLinguisticDetails
      : winrt::Windows::ApplicationModel::Search::
            ISearchQueryLinguisticDetails {
    SearchQueryLinguisticDetails(std::nullptr_t) noexcept {}
    SearchQueryLinguisticDetails(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Search::
              ISearchQueryLinguisticDetails(ptr, take_ownership_from_abi) {}
    SearchQueryLinguisticDetails(
        param::iterable<hstring> const& queryTextAlternatives,
        uint32_t queryTextCompositionStart,
        uint32_t queryTextCompositionLength);
    SearchQueryLinguisticDetails(SearchQueryLinguisticDetails const&) noexcept =
        default;
    SearchQueryLinguisticDetails(SearchQueryLinguisticDetails&&) noexcept =
        default;
    SearchQueryLinguisticDetails& operator=(
        SearchQueryLinguisticDetails const&) & noexcept = default;
    SearchQueryLinguisticDetails& operator=(
        SearchQueryLinguisticDetails&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SearchSuggestionCollection
      : winrt::Windows::ApplicationModel::Search::ISearchSuggestionCollection {
    SearchSuggestionCollection(std::nullptr_t) noexcept {}
    SearchSuggestionCollection(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Search::ISearchSuggestionCollection(
              ptr, take_ownership_from_abi) {}
    SearchSuggestionCollection(SearchSuggestionCollection const&) noexcept =
        default;
    SearchSuggestionCollection(SearchSuggestionCollection&&) noexcept = default;
    SearchSuggestionCollection& operator=(
        SearchSuggestionCollection const&) & noexcept = default;
    SearchSuggestionCollection& operator=(
        SearchSuggestionCollection&&) & noexcept = default;
  };
  struct __declspec(empty_bases) SearchSuggestionsRequest
      : winrt::Windows::ApplicationModel::Search::ISearchSuggestionsRequest {
    SearchSuggestionsRequest(std::nullptr_t) noexcept {}
    SearchSuggestionsRequest(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Search::ISearchSuggestionsRequest(
              ptr, take_ownership_from_abi) {}
    SearchSuggestionsRequest(SearchSuggestionsRequest const&) noexcept =
        default;
    SearchSuggestionsRequest(SearchSuggestionsRequest&&) noexcept = default;
    SearchSuggestionsRequest& operator=(
        SearchSuggestionsRequest const&) & noexcept = default;
    SearchSuggestionsRequest& operator=(SearchSuggestionsRequest&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) SearchSuggestionsRequestDeferral
      : winrt::Windows::ApplicationModel::Search::
            ISearchSuggestionsRequestDeferral {
    SearchSuggestionsRequestDeferral(std::nullptr_t) noexcept {}
    SearchSuggestionsRequestDeferral(void* ptr,
                                     take_ownership_from_abi_t) noexcept
        : winrt::Windows::ApplicationModel::Search::
              ISearchSuggestionsRequestDeferral(ptr, take_ownership_from_abi) {}
    SearchSuggestionsRequestDeferral(
        SearchSuggestionsRequestDeferral const&) noexcept = default;
    SearchSuggestionsRequestDeferral(
        SearchSuggestionsRequestDeferral&&) noexcept = default;
    SearchSuggestionsRequestDeferral& operator=(
        SearchSuggestionsRequestDeferral const&) & noexcept = default;
    SearchSuggestionsRequestDeferral& operator=(
        SearchSuggestionsRequestDeferral&&) & noexcept = default;
  };
}
#endif
