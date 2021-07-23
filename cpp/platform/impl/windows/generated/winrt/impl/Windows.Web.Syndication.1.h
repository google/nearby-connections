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

#ifndef WINRT_Windows_Web_Syndication_1_H
#define WINRT_Windows_Web_Syndication_1_H
#include "winrt/impl/Windows.Web.Syndication.0.h"
WINRT_EXPORT namespace winrt::Windows::Web::Syndication {
  struct __declspec(empty_bases) ISyndicationAttribute
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationAttribute> {
    ISyndicationAttribute(std::nullptr_t = nullptr) noexcept {}
    ISyndicationAttribute(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISyndicationAttribute(ISyndicationAttribute const&) noexcept = default;
    ISyndicationAttribute(ISyndicationAttribute&&) noexcept = default;
    ISyndicationAttribute& operator=(ISyndicationAttribute const&) & noexcept =
        default;
    ISyndicationAttribute& operator=(ISyndicationAttribute&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) ISyndicationAttributeFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationAttributeFactory> {
    ISyndicationAttributeFactory(std::nullptr_t = nullptr) noexcept {}
    ISyndicationAttributeFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISyndicationAttributeFactory(ISyndicationAttributeFactory const&) noexcept =
        default;
    ISyndicationAttributeFactory(ISyndicationAttributeFactory&&) noexcept =
        default;
    ISyndicationAttributeFactory& operator=(
        ISyndicationAttributeFactory const&) & noexcept = default;
    ISyndicationAttributeFactory& operator=(
        ISyndicationAttributeFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases) ISyndicationCategory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationCategory>,
        impl::require<winrt::Windows::Web::Syndication::ISyndicationCategory,
                      winrt::Windows::Web::Syndication::ISyndicationNode> {
    ISyndicationCategory(std::nullptr_t = nullptr) noexcept {}
    ISyndicationCategory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISyndicationCategory(ISyndicationCategory const&) noexcept = default;
    ISyndicationCategory(ISyndicationCategory&&) noexcept = default;
    ISyndicationCategory& operator=(ISyndicationCategory const&) & noexcept =
        default;
    ISyndicationCategory& operator=(ISyndicationCategory&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) ISyndicationCategoryFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationCategoryFactory> {
    ISyndicationCategoryFactory(std::nullptr_t = nullptr) noexcept {}
    ISyndicationCategoryFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISyndicationCategoryFactory(ISyndicationCategoryFactory const&) noexcept =
        default;
    ISyndicationCategoryFactory(ISyndicationCategoryFactory&&) noexcept =
        default;
    ISyndicationCategoryFactory& operator=(
        ISyndicationCategoryFactory const&) & noexcept = default;
    ISyndicationCategoryFactory& operator=(
        ISyndicationCategoryFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases) ISyndicationClient
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationClient> {
    ISyndicationClient(std::nullptr_t = nullptr) noexcept {}
    ISyndicationClient(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISyndicationClient(ISyndicationClient const&) noexcept = default;
    ISyndicationClient(ISyndicationClient&&) noexcept = default;
    ISyndicationClient& operator=(ISyndicationClient const&) & noexcept =
        default;
    ISyndicationClient& operator=(ISyndicationClient&&) & noexcept = default;
  };
  struct __declspec(empty_bases) ISyndicationClientFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationClientFactory> {
    ISyndicationClientFactory(std::nullptr_t = nullptr) noexcept {}
    ISyndicationClientFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISyndicationClientFactory(ISyndicationClientFactory const&) noexcept =
        default;
    ISyndicationClientFactory(ISyndicationClientFactory&&) noexcept = default;
    ISyndicationClientFactory& operator=(
        ISyndicationClientFactory const&) & noexcept = default;
    ISyndicationClientFactory& operator=(
        ISyndicationClientFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases) ISyndicationContent
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationContent>,
        impl::require<winrt::Windows::Web::Syndication::ISyndicationContent,
                      winrt::Windows::Web::Syndication::ISyndicationNode,
                      winrt::Windows::Web::Syndication::ISyndicationText> {
    ISyndicationContent(std::nullptr_t = nullptr) noexcept {}
    ISyndicationContent(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISyndicationContent(ISyndicationContent const&) noexcept = default;
    ISyndicationContent(ISyndicationContent&&) noexcept = default;
    ISyndicationContent& operator=(ISyndicationContent const&) & noexcept =
        default;
    ISyndicationContent& operator=(ISyndicationContent&&) & noexcept = default;
  };
  struct __declspec(empty_bases) ISyndicationContentFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationContentFactory> {
    ISyndicationContentFactory(std::nullptr_t = nullptr) noexcept {}
    ISyndicationContentFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISyndicationContentFactory(ISyndicationContentFactory const&) noexcept =
        default;
    ISyndicationContentFactory(ISyndicationContentFactory&&) noexcept = default;
    ISyndicationContentFactory& operator=(
        ISyndicationContentFactory const&) & noexcept = default;
    ISyndicationContentFactory& operator=(
        ISyndicationContentFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases) ISyndicationErrorStatics
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationErrorStatics> {
    ISyndicationErrorStatics(std::nullptr_t = nullptr) noexcept {}
    ISyndicationErrorStatics(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISyndicationErrorStatics(ISyndicationErrorStatics const&) noexcept =
        default;
    ISyndicationErrorStatics(ISyndicationErrorStatics&&) noexcept = default;
    ISyndicationErrorStatics& operator=(
        ISyndicationErrorStatics const&) & noexcept = default;
    ISyndicationErrorStatics& operator=(ISyndicationErrorStatics&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) ISyndicationFeed
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationFeed>,
        impl::require<winrt::Windows::Web::Syndication::ISyndicationFeed,
                      winrt::Windows::Web::Syndication::ISyndicationNode> {
    ISyndicationFeed(std::nullptr_t = nullptr) noexcept {}
    ISyndicationFeed(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISyndicationFeed(ISyndicationFeed const&) noexcept = default;
    ISyndicationFeed(ISyndicationFeed&&) noexcept = default;
    ISyndicationFeed& operator=(ISyndicationFeed const&) & noexcept = default;
    ISyndicationFeed& operator=(ISyndicationFeed&&) & noexcept = default;
  };
  struct __declspec(empty_bases) ISyndicationFeedFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationFeedFactory> {
    ISyndicationFeedFactory(std::nullptr_t = nullptr) noexcept {}
    ISyndicationFeedFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISyndicationFeedFactory(ISyndicationFeedFactory const&) noexcept = default;
    ISyndicationFeedFactory(ISyndicationFeedFactory&&) noexcept = default;
    ISyndicationFeedFactory& operator=(
        ISyndicationFeedFactory const&) & noexcept = default;
    ISyndicationFeedFactory& operator=(ISyndicationFeedFactory&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) ISyndicationGenerator
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationGenerator> {
    ISyndicationGenerator(std::nullptr_t = nullptr) noexcept {}
    ISyndicationGenerator(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISyndicationGenerator(ISyndicationGenerator const&) noexcept = default;
    ISyndicationGenerator(ISyndicationGenerator&&) noexcept = default;
    ISyndicationGenerator& operator=(ISyndicationGenerator const&) & noexcept =
        default;
    ISyndicationGenerator& operator=(ISyndicationGenerator&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) ISyndicationGeneratorFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationGeneratorFactory> {
    ISyndicationGeneratorFactory(std::nullptr_t = nullptr) noexcept {}
    ISyndicationGeneratorFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISyndicationGeneratorFactory(ISyndicationGeneratorFactory const&) noexcept =
        default;
    ISyndicationGeneratorFactory(ISyndicationGeneratorFactory&&) noexcept =
        default;
    ISyndicationGeneratorFactory& operator=(
        ISyndicationGeneratorFactory const&) & noexcept = default;
    ISyndicationGeneratorFactory& operator=(
        ISyndicationGeneratorFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases) ISyndicationItem
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationItem>,
        impl::require<winrt::Windows::Web::Syndication::ISyndicationItem,
                      winrt::Windows::Web::Syndication::ISyndicationNode> {
    ISyndicationItem(std::nullptr_t = nullptr) noexcept {}
    ISyndicationItem(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISyndicationItem(ISyndicationItem const&) noexcept = default;
    ISyndicationItem(ISyndicationItem&&) noexcept = default;
    ISyndicationItem& operator=(ISyndicationItem const&) & noexcept = default;
    ISyndicationItem& operator=(ISyndicationItem&&) & noexcept = default;
  };
  struct __declspec(empty_bases) ISyndicationItemFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationItemFactory> {
    ISyndicationItemFactory(std::nullptr_t = nullptr) noexcept {}
    ISyndicationItemFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISyndicationItemFactory(ISyndicationItemFactory const&) noexcept = default;
    ISyndicationItemFactory(ISyndicationItemFactory&&) noexcept = default;
    ISyndicationItemFactory& operator=(
        ISyndicationItemFactory const&) & noexcept = default;
    ISyndicationItemFactory& operator=(ISyndicationItemFactory&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) ISyndicationLink
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationLink>,
        impl::require<winrt::Windows::Web::Syndication::ISyndicationLink,
                      winrt::Windows::Web::Syndication::ISyndicationNode> {
    ISyndicationLink(std::nullptr_t = nullptr) noexcept {}
    ISyndicationLink(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISyndicationLink(ISyndicationLink const&) noexcept = default;
    ISyndicationLink(ISyndicationLink&&) noexcept = default;
    ISyndicationLink& operator=(ISyndicationLink const&) & noexcept = default;
    ISyndicationLink& operator=(ISyndicationLink&&) & noexcept = default;
  };
  struct __declspec(empty_bases) ISyndicationLinkFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationLinkFactory> {
    ISyndicationLinkFactory(std::nullptr_t = nullptr) noexcept {}
    ISyndicationLinkFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISyndicationLinkFactory(ISyndicationLinkFactory const&) noexcept = default;
    ISyndicationLinkFactory(ISyndicationLinkFactory&&) noexcept = default;
    ISyndicationLinkFactory& operator=(
        ISyndicationLinkFactory const&) & noexcept = default;
    ISyndicationLinkFactory& operator=(ISyndicationLinkFactory&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) ISyndicationNode
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationNode> {
    ISyndicationNode(std::nullptr_t = nullptr) noexcept {}
    ISyndicationNode(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISyndicationNode(ISyndicationNode const&) noexcept = default;
    ISyndicationNode(ISyndicationNode&&) noexcept = default;
    ISyndicationNode& operator=(ISyndicationNode const&) & noexcept = default;
    ISyndicationNode& operator=(ISyndicationNode&&) & noexcept = default;
  };
  struct __declspec(empty_bases) ISyndicationNodeFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationNodeFactory> {
    ISyndicationNodeFactory(std::nullptr_t = nullptr) noexcept {}
    ISyndicationNodeFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISyndicationNodeFactory(ISyndicationNodeFactory const&) noexcept = default;
    ISyndicationNodeFactory(ISyndicationNodeFactory&&) noexcept = default;
    ISyndicationNodeFactory& operator=(
        ISyndicationNodeFactory const&) & noexcept = default;
    ISyndicationNodeFactory& operator=(ISyndicationNodeFactory&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) ISyndicationPerson
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationPerson>,
        impl::require<winrt::Windows::Web::Syndication::ISyndicationPerson,
                      winrt::Windows::Web::Syndication::ISyndicationNode> {
    ISyndicationPerson(std::nullptr_t = nullptr) noexcept {}
    ISyndicationPerson(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISyndicationPerson(ISyndicationPerson const&) noexcept = default;
    ISyndicationPerson(ISyndicationPerson&&) noexcept = default;
    ISyndicationPerson& operator=(ISyndicationPerson const&) & noexcept =
        default;
    ISyndicationPerson& operator=(ISyndicationPerson&&) & noexcept = default;
  };
  struct __declspec(empty_bases) ISyndicationPersonFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationPersonFactory> {
    ISyndicationPersonFactory(std::nullptr_t = nullptr) noexcept {}
    ISyndicationPersonFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISyndicationPersonFactory(ISyndicationPersonFactory const&) noexcept =
        default;
    ISyndicationPersonFactory(ISyndicationPersonFactory&&) noexcept = default;
    ISyndicationPersonFactory& operator=(
        ISyndicationPersonFactory const&) & noexcept = default;
    ISyndicationPersonFactory& operator=(
        ISyndicationPersonFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases) ISyndicationText
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationText>,
        impl::require<winrt::Windows::Web::Syndication::ISyndicationText,
                      winrt::Windows::Web::Syndication::ISyndicationNode> {
    ISyndicationText(std::nullptr_t = nullptr) noexcept {}
    ISyndicationText(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISyndicationText(ISyndicationText const&) noexcept = default;
    ISyndicationText(ISyndicationText&&) noexcept = default;
    ISyndicationText& operator=(ISyndicationText const&) & noexcept = default;
    ISyndicationText& operator=(ISyndicationText&&) & noexcept = default;
  };
  struct __declspec(empty_bases) ISyndicationTextFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationTextFactory> {
    ISyndicationTextFactory(std::nullptr_t = nullptr) noexcept {}
    ISyndicationTextFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    ISyndicationTextFactory(ISyndicationTextFactory const&) noexcept = default;
    ISyndicationTextFactory(ISyndicationTextFactory&&) noexcept = default;
    ISyndicationTextFactory& operator=(
        ISyndicationTextFactory const&) & noexcept = default;
    ISyndicationTextFactory& operator=(ISyndicationTextFactory&&) & noexcept =
        default;
  };
}
#endif
