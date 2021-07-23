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

#ifndef WINRT_Windows_Networking_BackgroundTransfer_1_H
#define WINRT_Windows_Networking_BackgroundTransfer_1_H
#include "winrt/impl/Windows.Networking.BackgroundTransfer.0.h"
WINRT_EXPORT namespace winrt::Windows::Networking::BackgroundTransfer {
  struct __declspec(empty_bases) IBackgroundDownloader
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundDownloader>,
        impl::require<winrt::Windows::Networking::BackgroundTransfer::
                          IBackgroundDownloader,
                      winrt::Windows::Networking::BackgroundTransfer::
                          IBackgroundTransferBase> {
    IBackgroundDownloader(std::nullptr_t = nullptr) noexcept {}
    IBackgroundDownloader(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBackgroundDownloader(IBackgroundDownloader const&) noexcept = default;
    IBackgroundDownloader(IBackgroundDownloader&&) noexcept = default;
    IBackgroundDownloader& operator=(IBackgroundDownloader const&) & noexcept =
        default;
    IBackgroundDownloader& operator=(IBackgroundDownloader&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IBackgroundDownloader2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundDownloader2> {
    IBackgroundDownloader2(std::nullptr_t = nullptr) noexcept {}
    IBackgroundDownloader2(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBackgroundDownloader2(IBackgroundDownloader2 const&) noexcept = default;
    IBackgroundDownloader2(IBackgroundDownloader2&&) noexcept = default;
    IBackgroundDownloader2& operator=(
        IBackgroundDownloader2 const&) & noexcept = default;
    IBackgroundDownloader2& operator=(IBackgroundDownloader2&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IBackgroundDownloader3
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundDownloader3> {
    IBackgroundDownloader3(std::nullptr_t = nullptr) noexcept {}
    IBackgroundDownloader3(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBackgroundDownloader3(IBackgroundDownloader3 const&) noexcept = default;
    IBackgroundDownloader3(IBackgroundDownloader3&&) noexcept = default;
    IBackgroundDownloader3& operator=(
        IBackgroundDownloader3 const&) & noexcept = default;
    IBackgroundDownloader3& operator=(IBackgroundDownloader3&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IBackgroundDownloaderFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundDownloaderFactory> {
    IBackgroundDownloaderFactory(std::nullptr_t = nullptr) noexcept {}
    IBackgroundDownloaderFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBackgroundDownloaderFactory(IBackgroundDownloaderFactory const&) noexcept =
        default;
    IBackgroundDownloaderFactory(IBackgroundDownloaderFactory&&) noexcept =
        default;
    IBackgroundDownloaderFactory& operator=(
        IBackgroundDownloaderFactory const&) & noexcept = default;
    IBackgroundDownloaderFactory& operator=(
        IBackgroundDownloaderFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBackgroundDownloaderStaticMethods
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundDownloaderStaticMethods> {
    IBackgroundDownloaderStaticMethods(std::nullptr_t = nullptr) noexcept {}
    IBackgroundDownloaderStaticMethods(void* ptr,
                                       take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBackgroundDownloaderStaticMethods(
        IBackgroundDownloaderStaticMethods const&) noexcept = default;
    IBackgroundDownloaderStaticMethods(
        IBackgroundDownloaderStaticMethods&&) noexcept = default;
    IBackgroundDownloaderStaticMethods& operator=(
        IBackgroundDownloaderStaticMethods const&) & noexcept = default;
    IBackgroundDownloaderStaticMethods& operator=(
        IBackgroundDownloaderStaticMethods&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBackgroundDownloaderStaticMethods2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundDownloaderStaticMethods2> {
    IBackgroundDownloaderStaticMethods2(std::nullptr_t = nullptr) noexcept {}
    IBackgroundDownloaderStaticMethods2(void* ptr,
                                        take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBackgroundDownloaderStaticMethods2(
        IBackgroundDownloaderStaticMethods2 const&) noexcept = default;
    IBackgroundDownloaderStaticMethods2(
        IBackgroundDownloaderStaticMethods2&&) noexcept = default;
    IBackgroundDownloaderStaticMethods2& operator=(
        IBackgroundDownloaderStaticMethods2 const&) & noexcept = default;
    IBackgroundDownloaderStaticMethods2& operator=(
        IBackgroundDownloaderStaticMethods2&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBackgroundDownloaderUserConsent
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundDownloaderUserConsent> {
    IBackgroundDownloaderUserConsent(std::nullptr_t = nullptr) noexcept {}
    IBackgroundDownloaderUserConsent(void* ptr,
                                     take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBackgroundDownloaderUserConsent(
        IBackgroundDownloaderUserConsent const&) noexcept = default;
    IBackgroundDownloaderUserConsent(
        IBackgroundDownloaderUserConsent&&) noexcept = default;
    IBackgroundDownloaderUserConsent& operator=(
        IBackgroundDownloaderUserConsent const&) & noexcept = default;
    IBackgroundDownloaderUserConsent& operator=(
        IBackgroundDownloaderUserConsent&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBackgroundTransferBase
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTransferBase> {
    IBackgroundTransferBase(std::nullptr_t = nullptr) noexcept {}
    IBackgroundTransferBase(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBackgroundTransferBase(IBackgroundTransferBase const&) noexcept = default;
    IBackgroundTransferBase(IBackgroundTransferBase&&) noexcept = default;
    IBackgroundTransferBase& operator=(
        IBackgroundTransferBase const&) & noexcept = default;
    IBackgroundTransferBase& operator=(IBackgroundTransferBase&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IBackgroundTransferCompletionGroup
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTransferCompletionGroup> {
    IBackgroundTransferCompletionGroup(std::nullptr_t = nullptr) noexcept {}
    IBackgroundTransferCompletionGroup(void* ptr,
                                       take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBackgroundTransferCompletionGroup(
        IBackgroundTransferCompletionGroup const&) noexcept = default;
    IBackgroundTransferCompletionGroup(
        IBackgroundTransferCompletionGroup&&) noexcept = default;
    IBackgroundTransferCompletionGroup& operator=(
        IBackgroundTransferCompletionGroup const&) & noexcept = default;
    IBackgroundTransferCompletionGroup& operator=(
        IBackgroundTransferCompletionGroup&&) & noexcept = default;
  };
  struct __declspec(empty_bases)
      IBackgroundTransferCompletionGroupTriggerDetails
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTransferCompletionGroupTriggerDetails> {
    IBackgroundTransferCompletionGroupTriggerDetails(
        std::nullptr_t = nullptr) noexcept {}
    IBackgroundTransferCompletionGroupTriggerDetails(
        void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBackgroundTransferCompletionGroupTriggerDetails(
        IBackgroundTransferCompletionGroupTriggerDetails const&) noexcept =
        default;
    IBackgroundTransferCompletionGroupTriggerDetails(
        IBackgroundTransferCompletionGroupTriggerDetails&&) noexcept = default;
    IBackgroundTransferCompletionGroupTriggerDetails& operator=(
        IBackgroundTransferCompletionGroupTriggerDetails const&) & noexcept =
        default;
    IBackgroundTransferCompletionGroupTriggerDetails& operator=(
        IBackgroundTransferCompletionGroupTriggerDetails&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IBackgroundTransferContentPart
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTransferContentPart> {
    IBackgroundTransferContentPart(std::nullptr_t = nullptr) noexcept {}
    IBackgroundTransferContentPart(void* ptr,
                                   take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBackgroundTransferContentPart(
        IBackgroundTransferContentPart const&) noexcept = default;
    IBackgroundTransferContentPart(IBackgroundTransferContentPart&&) noexcept =
        default;
    IBackgroundTransferContentPart& operator=(
        IBackgroundTransferContentPart const&) & noexcept = default;
    IBackgroundTransferContentPart& operator=(
        IBackgroundTransferContentPart&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBackgroundTransferContentPartFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTransferContentPartFactory> {
    IBackgroundTransferContentPartFactory(std::nullptr_t = nullptr) noexcept {}
    IBackgroundTransferContentPartFactory(void* ptr,
                                          take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBackgroundTransferContentPartFactory(
        IBackgroundTransferContentPartFactory const&) noexcept = default;
    IBackgroundTransferContentPartFactory(
        IBackgroundTransferContentPartFactory&&) noexcept = default;
    IBackgroundTransferContentPartFactory& operator=(
        IBackgroundTransferContentPartFactory const&) & noexcept = default;
    IBackgroundTransferContentPartFactory& operator=(
        IBackgroundTransferContentPartFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBackgroundTransferErrorStaticMethods
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTransferErrorStaticMethods> {
    IBackgroundTransferErrorStaticMethods(std::nullptr_t = nullptr) noexcept {}
    IBackgroundTransferErrorStaticMethods(void* ptr,
                                          take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBackgroundTransferErrorStaticMethods(
        IBackgroundTransferErrorStaticMethods const&) noexcept = default;
    IBackgroundTransferErrorStaticMethods(
        IBackgroundTransferErrorStaticMethods&&) noexcept = default;
    IBackgroundTransferErrorStaticMethods& operator=(
        IBackgroundTransferErrorStaticMethods const&) & noexcept = default;
    IBackgroundTransferErrorStaticMethods& operator=(
        IBackgroundTransferErrorStaticMethods&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBackgroundTransferGroup
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTransferGroup> {
    IBackgroundTransferGroup(std::nullptr_t = nullptr) noexcept {}
    IBackgroundTransferGroup(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBackgroundTransferGroup(IBackgroundTransferGroup const&) noexcept =
        default;
    IBackgroundTransferGroup(IBackgroundTransferGroup&&) noexcept = default;
    IBackgroundTransferGroup& operator=(
        IBackgroundTransferGroup const&) & noexcept = default;
    IBackgroundTransferGroup& operator=(IBackgroundTransferGroup&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IBackgroundTransferGroupStatics
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTransferGroupStatics> {
    IBackgroundTransferGroupStatics(std::nullptr_t = nullptr) noexcept {}
    IBackgroundTransferGroupStatics(void* ptr,
                                    take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBackgroundTransferGroupStatics(
        IBackgroundTransferGroupStatics const&) noexcept = default;
    IBackgroundTransferGroupStatics(
        IBackgroundTransferGroupStatics&&) noexcept = default;
    IBackgroundTransferGroupStatics& operator=(
        IBackgroundTransferGroupStatics const&) & noexcept = default;
    IBackgroundTransferGroupStatics& operator=(
        IBackgroundTransferGroupStatics&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBackgroundTransferOperation
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTransferOperation> {
    IBackgroundTransferOperation(std::nullptr_t = nullptr) noexcept {}
    IBackgroundTransferOperation(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBackgroundTransferOperation(IBackgroundTransferOperation const&) noexcept =
        default;
    IBackgroundTransferOperation(IBackgroundTransferOperation&&) noexcept =
        default;
    IBackgroundTransferOperation& operator=(
        IBackgroundTransferOperation const&) & noexcept = default;
    IBackgroundTransferOperation& operator=(
        IBackgroundTransferOperation&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBackgroundTransferOperationPriority
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTransferOperationPriority> {
    IBackgroundTransferOperationPriority(std::nullptr_t = nullptr) noexcept {}
    IBackgroundTransferOperationPriority(void* ptr,
                                         take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBackgroundTransferOperationPriority(
        IBackgroundTransferOperationPriority const&) noexcept = default;
    IBackgroundTransferOperationPriority(
        IBackgroundTransferOperationPriority&&) noexcept = default;
    IBackgroundTransferOperationPriority& operator=(
        IBackgroundTransferOperationPriority const&) & noexcept = default;
    IBackgroundTransferOperationPriority& operator=(
        IBackgroundTransferOperationPriority&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBackgroundTransferRangesDownloadedEventArgs
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTransferRangesDownloadedEventArgs> {
    IBackgroundTransferRangesDownloadedEventArgs(
        std::nullptr_t = nullptr) noexcept {}
    IBackgroundTransferRangesDownloadedEventArgs(
        void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBackgroundTransferRangesDownloadedEventArgs(
        IBackgroundTransferRangesDownloadedEventArgs const&) noexcept = default;
    IBackgroundTransferRangesDownloadedEventArgs(
        IBackgroundTransferRangesDownloadedEventArgs&&) noexcept = default;
    IBackgroundTransferRangesDownloadedEventArgs& operator=(
        IBackgroundTransferRangesDownloadedEventArgs const&) & noexcept =
        default;
    IBackgroundTransferRangesDownloadedEventArgs& operator=(
        IBackgroundTransferRangesDownloadedEventArgs&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBackgroundUploader
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundUploader>,
        impl::require<
            winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploader,
            winrt::Windows::Networking::BackgroundTransfer::
                IBackgroundTransferBase> {
    IBackgroundUploader(std::nullptr_t = nullptr) noexcept {}
    IBackgroundUploader(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBackgroundUploader(IBackgroundUploader const&) noexcept = default;
    IBackgroundUploader(IBackgroundUploader&&) noexcept = default;
    IBackgroundUploader& operator=(IBackgroundUploader const&) & noexcept =
        default;
    IBackgroundUploader& operator=(IBackgroundUploader&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBackgroundUploader2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundUploader2> {
    IBackgroundUploader2(std::nullptr_t = nullptr) noexcept {}
    IBackgroundUploader2(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBackgroundUploader2(IBackgroundUploader2 const&) noexcept = default;
    IBackgroundUploader2(IBackgroundUploader2&&) noexcept = default;
    IBackgroundUploader2& operator=(IBackgroundUploader2 const&) & noexcept =
        default;
    IBackgroundUploader2& operator=(IBackgroundUploader2&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IBackgroundUploader3
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundUploader3> {
    IBackgroundUploader3(std::nullptr_t = nullptr) noexcept {}
    IBackgroundUploader3(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBackgroundUploader3(IBackgroundUploader3 const&) noexcept = default;
    IBackgroundUploader3(IBackgroundUploader3&&) noexcept = default;
    IBackgroundUploader3& operator=(IBackgroundUploader3 const&) & noexcept =
        default;
    IBackgroundUploader3& operator=(IBackgroundUploader3&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IBackgroundUploaderFactory
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundUploaderFactory> {
    IBackgroundUploaderFactory(std::nullptr_t = nullptr) noexcept {}
    IBackgroundUploaderFactory(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBackgroundUploaderFactory(IBackgroundUploaderFactory const&) noexcept =
        default;
    IBackgroundUploaderFactory(IBackgroundUploaderFactory&&) noexcept = default;
    IBackgroundUploaderFactory& operator=(
        IBackgroundUploaderFactory const&) & noexcept = default;
    IBackgroundUploaderFactory& operator=(
        IBackgroundUploaderFactory&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBackgroundUploaderStaticMethods
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundUploaderStaticMethods> {
    IBackgroundUploaderStaticMethods(std::nullptr_t = nullptr) noexcept {}
    IBackgroundUploaderStaticMethods(void* ptr,
                                     take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBackgroundUploaderStaticMethods(
        IBackgroundUploaderStaticMethods const&) noexcept = default;
    IBackgroundUploaderStaticMethods(
        IBackgroundUploaderStaticMethods&&) noexcept = default;
    IBackgroundUploaderStaticMethods& operator=(
        IBackgroundUploaderStaticMethods const&) & noexcept = default;
    IBackgroundUploaderStaticMethods& operator=(
        IBackgroundUploaderStaticMethods&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBackgroundUploaderStaticMethods2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundUploaderStaticMethods2> {
    IBackgroundUploaderStaticMethods2(std::nullptr_t = nullptr) noexcept {}
    IBackgroundUploaderStaticMethods2(void* ptr,
                                      take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBackgroundUploaderStaticMethods2(
        IBackgroundUploaderStaticMethods2 const&) noexcept = default;
    IBackgroundUploaderStaticMethods2(
        IBackgroundUploaderStaticMethods2&&) noexcept = default;
    IBackgroundUploaderStaticMethods2& operator=(
        IBackgroundUploaderStaticMethods2 const&) & noexcept = default;
    IBackgroundUploaderStaticMethods2& operator=(
        IBackgroundUploaderStaticMethods2&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IBackgroundUploaderUserConsent
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundUploaderUserConsent> {
    IBackgroundUploaderUserConsent(std::nullptr_t = nullptr) noexcept {}
    IBackgroundUploaderUserConsent(void* ptr,
                                   take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IBackgroundUploaderUserConsent(
        IBackgroundUploaderUserConsent const&) noexcept = default;
    IBackgroundUploaderUserConsent(IBackgroundUploaderUserConsent&&) noexcept =
        default;
    IBackgroundUploaderUserConsent& operator=(
        IBackgroundUploaderUserConsent const&) & noexcept = default;
    IBackgroundUploaderUserConsent& operator=(
        IBackgroundUploaderUserConsent&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IContentPrefetcher
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IContentPrefetcher> {
    IContentPrefetcher(std::nullptr_t = nullptr) noexcept {}
    IContentPrefetcher(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IContentPrefetcher(IContentPrefetcher const&) noexcept = default;
    IContentPrefetcher(IContentPrefetcher&&) noexcept = default;
    IContentPrefetcher& operator=(IContentPrefetcher const&) & noexcept =
        default;
    IContentPrefetcher& operator=(IContentPrefetcher&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IContentPrefetcherTime
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IContentPrefetcherTime> {
    IContentPrefetcherTime(std::nullptr_t = nullptr) noexcept {}
    IContentPrefetcherTime(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IContentPrefetcherTime(IContentPrefetcherTime const&) noexcept = default;
    IContentPrefetcherTime(IContentPrefetcherTime&&) noexcept = default;
    IContentPrefetcherTime& operator=(
        IContentPrefetcherTime const&) & noexcept = default;
    IContentPrefetcherTime& operator=(IContentPrefetcherTime&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IDownloadOperation
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDownloadOperation>,
        impl::require<
            winrt::Windows::Networking::BackgroundTransfer::IDownloadOperation,
            winrt::Windows::Networking::BackgroundTransfer::
                IBackgroundTransferOperation> {
    IDownloadOperation(std::nullptr_t = nullptr) noexcept {}
    IDownloadOperation(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IDownloadOperation(IDownloadOperation const&) noexcept = default;
    IDownloadOperation(IDownloadOperation&&) noexcept = default;
    IDownloadOperation& operator=(IDownloadOperation const&) & noexcept =
        default;
    IDownloadOperation& operator=(IDownloadOperation&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IDownloadOperation2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDownloadOperation2> {
    IDownloadOperation2(std::nullptr_t = nullptr) noexcept {}
    IDownloadOperation2(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IDownloadOperation2(IDownloadOperation2 const&) noexcept = default;
    IDownloadOperation2(IDownloadOperation2&&) noexcept = default;
    IDownloadOperation2& operator=(IDownloadOperation2 const&) & noexcept =
        default;
    IDownloadOperation2& operator=(IDownloadOperation2&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IDownloadOperation3
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDownloadOperation3> {
    IDownloadOperation3(std::nullptr_t = nullptr) noexcept {}
    IDownloadOperation3(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IDownloadOperation3(IDownloadOperation3 const&) noexcept = default;
    IDownloadOperation3(IDownloadOperation3&&) noexcept = default;
    IDownloadOperation3& operator=(IDownloadOperation3 const&) & noexcept =
        default;
    IDownloadOperation3& operator=(IDownloadOperation3&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IDownloadOperation4
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDownloadOperation4> {
    IDownloadOperation4(std::nullptr_t = nullptr) noexcept {}
    IDownloadOperation4(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IDownloadOperation4(IDownloadOperation4 const&) noexcept = default;
    IDownloadOperation4(IDownloadOperation4&&) noexcept = default;
    IDownloadOperation4& operator=(IDownloadOperation4 const&) & noexcept =
        default;
    IDownloadOperation4& operator=(IDownloadOperation4&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IDownloadOperation5
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDownloadOperation5> {
    IDownloadOperation5(std::nullptr_t = nullptr) noexcept {}
    IDownloadOperation5(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IDownloadOperation5(IDownloadOperation5 const&) noexcept = default;
    IDownloadOperation5(IDownloadOperation5&&) noexcept = default;
    IDownloadOperation5& operator=(IDownloadOperation5 const&) & noexcept =
        default;
    IDownloadOperation5& operator=(IDownloadOperation5&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IResponseInformation
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IResponseInformation> {
    IResponseInformation(std::nullptr_t = nullptr) noexcept {}
    IResponseInformation(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IResponseInformation(IResponseInformation const&) noexcept = default;
    IResponseInformation(IResponseInformation&&) noexcept = default;
    IResponseInformation& operator=(IResponseInformation const&) & noexcept =
        default;
    IResponseInformation& operator=(IResponseInformation&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) IUnconstrainedTransferRequestResult
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUnconstrainedTransferRequestResult> {
    IUnconstrainedTransferRequestResult(std::nullptr_t = nullptr) noexcept {}
    IUnconstrainedTransferRequestResult(void* ptr,
                                        take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IUnconstrainedTransferRequestResult(
        IUnconstrainedTransferRequestResult const&) noexcept = default;
    IUnconstrainedTransferRequestResult(
        IUnconstrainedTransferRequestResult&&) noexcept = default;
    IUnconstrainedTransferRequestResult& operator=(
        IUnconstrainedTransferRequestResult const&) & noexcept = default;
    IUnconstrainedTransferRequestResult& operator=(
        IUnconstrainedTransferRequestResult&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IUploadOperation
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUploadOperation>,
        impl::require<
            winrt::Windows::Networking::BackgroundTransfer::IUploadOperation,
            winrt::Windows::Networking::BackgroundTransfer::
                IBackgroundTransferOperation> {
    IUploadOperation(std::nullptr_t = nullptr) noexcept {}
    IUploadOperation(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IUploadOperation(IUploadOperation const&) noexcept = default;
    IUploadOperation(IUploadOperation&&) noexcept = default;
    IUploadOperation& operator=(IUploadOperation const&) & noexcept = default;
    IUploadOperation& operator=(IUploadOperation&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IUploadOperation2
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUploadOperation2> {
    IUploadOperation2(std::nullptr_t = nullptr) noexcept {}
    IUploadOperation2(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IUploadOperation2(IUploadOperation2 const&) noexcept = default;
    IUploadOperation2(IUploadOperation2&&) noexcept = default;
    IUploadOperation2& operator=(IUploadOperation2 const&) & noexcept = default;
    IUploadOperation2& operator=(IUploadOperation2&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IUploadOperation3
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUploadOperation3> {
    IUploadOperation3(std::nullptr_t = nullptr) noexcept {}
    IUploadOperation3(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IUploadOperation3(IUploadOperation3 const&) noexcept = default;
    IUploadOperation3(IUploadOperation3&&) noexcept = default;
    IUploadOperation3& operator=(IUploadOperation3 const&) & noexcept = default;
    IUploadOperation3& operator=(IUploadOperation3&&) & noexcept = default;
  };
  struct __declspec(empty_bases) IUploadOperation4
      : winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUploadOperation4> {
    IUploadOperation4(std::nullptr_t = nullptr) noexcept {}
    IUploadOperation4(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Foundation::IInspectable(ptr,
                                                   take_ownership_from_abi) {}
    IUploadOperation4(IUploadOperation4 const&) noexcept = default;
    IUploadOperation4(IUploadOperation4&&) noexcept = default;
    IUploadOperation4& operator=(IUploadOperation4 const&) & noexcept = default;
    IUploadOperation4& operator=(IUploadOperation4&&) & noexcept = default;
  };
}
#endif
