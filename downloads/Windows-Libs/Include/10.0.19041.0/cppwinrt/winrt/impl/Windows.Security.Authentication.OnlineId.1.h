// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Authentication_OnlineId_1_H
#define WINRT_Windows_Security_Authentication_OnlineId_1_H
#include "winrt/impl/Windows.Security.Authentication.OnlineId.0.h"
namespace winrt::Windows::Security::Authentication::OnlineId
{
    struct __declspec(empty_bases) IOnlineIdAuthenticator :
        Windows::Foundation::IInspectable,
        impl::consume_t<IOnlineIdAuthenticator>
    {
        IOnlineIdAuthenticator(std::nullptr_t = nullptr) noexcept {}
        IOnlineIdAuthenticator(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IOnlineIdServiceTicket :
        Windows::Foundation::IInspectable,
        impl::consume_t<IOnlineIdServiceTicket>
    {
        IOnlineIdServiceTicket(std::nullptr_t = nullptr) noexcept {}
        IOnlineIdServiceTicket(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IOnlineIdServiceTicketRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IOnlineIdServiceTicketRequest>
    {
        IOnlineIdServiceTicketRequest(std::nullptr_t = nullptr) noexcept {}
        IOnlineIdServiceTicketRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IOnlineIdServiceTicketRequestFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IOnlineIdServiceTicketRequestFactory>
    {
        IOnlineIdServiceTicketRequestFactory(std::nullptr_t = nullptr) noexcept {}
        IOnlineIdServiceTicketRequestFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IOnlineIdSystemAuthenticatorForUser :
        Windows::Foundation::IInspectable,
        impl::consume_t<IOnlineIdSystemAuthenticatorForUser>
    {
        IOnlineIdSystemAuthenticatorForUser(std::nullptr_t = nullptr) noexcept {}
        IOnlineIdSystemAuthenticatorForUser(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IOnlineIdSystemAuthenticatorStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IOnlineIdSystemAuthenticatorStatics>
    {
        IOnlineIdSystemAuthenticatorStatics(std::nullptr_t = nullptr) noexcept {}
        IOnlineIdSystemAuthenticatorStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IOnlineIdSystemIdentity :
        Windows::Foundation::IInspectable,
        impl::consume_t<IOnlineIdSystemIdentity>
    {
        IOnlineIdSystemIdentity(std::nullptr_t = nullptr) noexcept {}
        IOnlineIdSystemIdentity(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IOnlineIdSystemTicketResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IOnlineIdSystemTicketResult>
    {
        IOnlineIdSystemTicketResult(std::nullptr_t = nullptr) noexcept {}
        IOnlineIdSystemTicketResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserIdentity :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserIdentity>
    {
        IUserIdentity(std::nullptr_t = nullptr) noexcept {}
        IUserIdentity(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
