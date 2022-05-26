// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Web_UI_2_H
#define WINRT_Windows_Web_UI_2_H
#include "winrt/impl/Windows.Web.UI.1.h"
namespace winrt::Windows::Web::UI
{
    struct __declspec(empty_bases) WebViewControlContentLoadingEventArgs : Windows::Web::UI::IWebViewControlContentLoadingEventArgs
    {
        WebViewControlContentLoadingEventArgs(std::nullptr_t) noexcept {}
        WebViewControlContentLoadingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlContentLoadingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebViewControlDOMContentLoadedEventArgs : Windows::Web::UI::IWebViewControlDOMContentLoadedEventArgs
    {
        WebViewControlDOMContentLoadedEventArgs(std::nullptr_t) noexcept {}
        WebViewControlDOMContentLoadedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlDOMContentLoadedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebViewControlDeferredPermissionRequest : Windows::Web::UI::IWebViewControlDeferredPermissionRequest
    {
        WebViewControlDeferredPermissionRequest(std::nullptr_t) noexcept {}
        WebViewControlDeferredPermissionRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlDeferredPermissionRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebViewControlLongRunningScriptDetectedEventArgs : Windows::Web::UI::IWebViewControlLongRunningScriptDetectedEventArgs
    {
        WebViewControlLongRunningScriptDetectedEventArgs(std::nullptr_t) noexcept {}
        WebViewControlLongRunningScriptDetectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlLongRunningScriptDetectedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebViewControlNavigationCompletedEventArgs : Windows::Web::UI::IWebViewControlNavigationCompletedEventArgs
    {
        WebViewControlNavigationCompletedEventArgs(std::nullptr_t) noexcept {}
        WebViewControlNavigationCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlNavigationCompletedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebViewControlNavigationStartingEventArgs : Windows::Web::UI::IWebViewControlNavigationStartingEventArgs
    {
        WebViewControlNavigationStartingEventArgs(std::nullptr_t) noexcept {}
        WebViewControlNavigationStartingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlNavigationStartingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebViewControlNewWindowRequestedEventArgs : Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs,
        impl::require<WebViewControlNewWindowRequestedEventArgs, Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs2>
    {
        WebViewControlNewWindowRequestedEventArgs(std::nullptr_t) noexcept {}
        WebViewControlNewWindowRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebViewControlPermissionRequest : Windows::Web::UI::IWebViewControlPermissionRequest
    {
        WebViewControlPermissionRequest(std::nullptr_t) noexcept {}
        WebViewControlPermissionRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlPermissionRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebViewControlPermissionRequestedEventArgs : Windows::Web::UI::IWebViewControlPermissionRequestedEventArgs
    {
        WebViewControlPermissionRequestedEventArgs(std::nullptr_t) noexcept {}
        WebViewControlPermissionRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlPermissionRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebViewControlScriptNotifyEventArgs : Windows::Web::UI::IWebViewControlScriptNotifyEventArgs
    {
        WebViewControlScriptNotifyEventArgs(std::nullptr_t) noexcept {}
        WebViewControlScriptNotifyEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlScriptNotifyEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebViewControlSettings : Windows::Web::UI::IWebViewControlSettings
    {
        WebViewControlSettings(std::nullptr_t) noexcept {}
        WebViewControlSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebViewControlUnsupportedUriSchemeIdentifiedEventArgs : Windows::Web::UI::IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs
    {
        WebViewControlUnsupportedUriSchemeIdentifiedEventArgs(std::nullptr_t) noexcept {}
        WebViewControlUnsupportedUriSchemeIdentifiedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebViewControlUnviewableContentIdentifiedEventArgs : Windows::Web::UI::IWebViewControlUnviewableContentIdentifiedEventArgs
    {
        WebViewControlUnviewableContentIdentifiedEventArgs(std::nullptr_t) noexcept {}
        WebViewControlUnviewableContentIdentifiedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlUnviewableContentIdentifiedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebViewControlWebResourceRequestedEventArgs : Windows::Web::UI::IWebViewControlWebResourceRequestedEventArgs
    {
        WebViewControlWebResourceRequestedEventArgs(std::nullptr_t) noexcept {}
        WebViewControlWebResourceRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlWebResourceRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
