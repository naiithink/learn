// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Search_2_H
#define WINRT_Windows_ApplicationModel_Search_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.ApplicationModel.Search.1.h"
namespace winrt::Windows::ApplicationModel::Search
{
    struct __declspec(empty_bases) LocalContentSuggestionSettings : Windows::ApplicationModel::Search::ILocalContentSuggestionSettings
    {
        LocalContentSuggestionSettings(std::nullptr_t) noexcept {}
        LocalContentSuggestionSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Search::ILocalContentSuggestionSettings(ptr, take_ownership_from_abi) {}
        LocalContentSuggestionSettings();
    };
    struct __declspec(empty_bases) SearchPane : Windows::ApplicationModel::Search::ISearchPane
    {
        SearchPane(std::nullptr_t) noexcept {}
        SearchPane(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Search::ISearchPane(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
        static auto HideThisApplication();
    };
    struct __declspec(empty_bases) SearchPaneQueryChangedEventArgs : Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs
    {
        SearchPaneQueryChangedEventArgs(std::nullptr_t) noexcept {}
        SearchPaneQueryChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SearchPaneQueryLinguisticDetails : Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails
    {
        SearchPaneQueryLinguisticDetails(std::nullptr_t) noexcept {}
        SearchPaneQueryLinguisticDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SearchPaneQuerySubmittedEventArgs : Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs,
        impl::require<SearchPaneQuerySubmittedEventArgs, Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails>
    {
        SearchPaneQuerySubmittedEventArgs(std::nullptr_t) noexcept {}
        SearchPaneQuerySubmittedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SearchPaneResultSuggestionChosenEventArgs : Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs
    {
        SearchPaneResultSuggestionChosenEventArgs(std::nullptr_t) noexcept {}
        SearchPaneResultSuggestionChosenEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SearchPaneSuggestionsRequest : Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest
    {
        SearchPaneSuggestionsRequest(std::nullptr_t) noexcept {}
        SearchPaneSuggestionsRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SearchPaneSuggestionsRequestDeferral : Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral
    {
        SearchPaneSuggestionsRequestDeferral(std::nullptr_t) noexcept {}
        SearchPaneSuggestionsRequestDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SearchPaneSuggestionsRequestedEventArgs : Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs
    {
        SearchPaneSuggestionsRequestedEventArgs(std::nullptr_t) noexcept {}
        SearchPaneSuggestionsRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SearchPaneVisibilityChangedEventArgs : Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs
    {
        SearchPaneVisibilityChangedEventArgs(std::nullptr_t) noexcept {}
        SearchPaneVisibilityChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SearchQueryLinguisticDetails : Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails
    {
        SearchQueryLinguisticDetails(std::nullptr_t) noexcept {}
        SearchQueryLinguisticDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails(ptr, take_ownership_from_abi) {}
        SearchQueryLinguisticDetails(param::iterable<hstring> const& queryTextAlternatives, uint32_t queryTextCompositionStart, uint32_t queryTextCompositionLength);
    };
    struct __declspec(empty_bases) SearchSuggestionCollection : Windows::ApplicationModel::Search::ISearchSuggestionCollection
    {
        SearchSuggestionCollection(std::nullptr_t) noexcept {}
        SearchSuggestionCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Search::ISearchSuggestionCollection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SearchSuggestionsRequest : Windows::ApplicationModel::Search::ISearchSuggestionsRequest
    {
        SearchSuggestionsRequest(std::nullptr_t) noexcept {}
        SearchSuggestionsRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Search::ISearchSuggestionsRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SearchSuggestionsRequestDeferral : Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral
    {
        SearchSuggestionsRequestDeferral(std::nullptr_t) noexcept {}
        SearchSuggestionsRequestDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral(ptr, take_ownership_from_abi) {}
    };
}
#endif
