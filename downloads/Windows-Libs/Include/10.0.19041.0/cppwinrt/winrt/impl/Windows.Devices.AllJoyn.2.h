// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_AllJoyn_2_H
#define WINRT_Windows_Devices_AllJoyn_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Globalization.1.h"
#include "winrt/impl/Windows.Devices.AllJoyn.1.h"
namespace winrt::Windows::Devices::AllJoyn
{
    struct __declspec(empty_bases) AllJoynAboutData : Windows::Devices::AllJoyn::IAllJoynAboutData
    {
        AllJoynAboutData(std::nullptr_t) noexcept {}
        AllJoynAboutData(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynAboutData(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AllJoynAboutDataView : Windows::Devices::AllJoyn::IAllJoynAboutDataView
    {
        AllJoynAboutDataView(std::nullptr_t) noexcept {}
        AllJoynAboutDataView(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynAboutDataView(ptr, take_ownership_from_abi) {}
        static auto GetDataBySessionPortAsync(param::hstring const& uniqueName, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment, uint16_t sessionPort);
        static auto GetDataBySessionPortAsync(param::hstring const& uniqueName, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment, uint16_t sessionPort, Windows::Globalization::Language const& language);
    };
    struct __declspec(empty_bases) AllJoynAcceptSessionJoinerEventArgs : Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs
    {
        AllJoynAcceptSessionJoinerEventArgs(std::nullptr_t) noexcept {}
        AllJoynAcceptSessionJoinerEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs(ptr, take_ownership_from_abi) {}
        AllJoynAcceptSessionJoinerEventArgs(param::hstring const& uniqueName, uint16_t sessionPort, Windows::Devices::AllJoyn::AllJoynTrafficType const& trafficType, uint8_t proximity, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner const& acceptSessionJoiner);
    };
    struct __declspec(empty_bases) AllJoynAuthenticationCompleteEventArgs : Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs
    {
        AllJoynAuthenticationCompleteEventArgs(std::nullptr_t) noexcept {}
        AllJoynAuthenticationCompleteEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AllJoynBusAttachment : Windows::Devices::AllJoyn::IAllJoynBusAttachment,
        impl::require<AllJoynBusAttachment, Windows::Devices::AllJoyn::IAllJoynBusAttachment2>
    {
        AllJoynBusAttachment(std::nullptr_t) noexcept {}
        AllJoynBusAttachment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynBusAttachment(ptr, take_ownership_from_abi) {}
        AllJoynBusAttachment();
        AllJoynBusAttachment(param::hstring const& connectionSpecification);
        static auto GetDefault();
        static auto GetWatcher(param::iterable<hstring> const& requiredInterfaces);
    };
    struct __declspec(empty_bases) AllJoynBusAttachmentStateChangedEventArgs : Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs
    {
        AllJoynBusAttachmentStateChangedEventArgs(std::nullptr_t) noexcept {}
        AllJoynBusAttachmentStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AllJoynBusObject : Windows::Devices::AllJoyn::IAllJoynBusObject
    {
        AllJoynBusObject(std::nullptr_t) noexcept {}
        AllJoynBusObject(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynBusObject(ptr, take_ownership_from_abi) {}
        AllJoynBusObject();
        AllJoynBusObject(param::hstring const& objectPath);
        AllJoynBusObject(param::hstring const& objectPath, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment);
    };
    struct __declspec(empty_bases) AllJoynBusObjectStoppedEventArgs : Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs
    {
        AllJoynBusObjectStoppedEventArgs(std::nullptr_t) noexcept {}
        AllJoynBusObjectStoppedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs(ptr, take_ownership_from_abi) {}
        AllJoynBusObjectStoppedEventArgs(int32_t status);
    };
    struct __declspec(empty_bases) AllJoynCredentials : Windows::Devices::AllJoyn::IAllJoynCredentials
    {
        AllJoynCredentials(std::nullptr_t) noexcept {}
        AllJoynCredentials(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynCredentials(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AllJoynCredentialsRequestedEventArgs : Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs
    {
        AllJoynCredentialsRequestedEventArgs(std::nullptr_t) noexcept {}
        AllJoynCredentialsRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AllJoynCredentialsVerificationRequestedEventArgs : Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs
    {
        AllJoynCredentialsVerificationRequestedEventArgs(std::nullptr_t) noexcept {}
        AllJoynCredentialsVerificationRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AllJoynMessageInfo : Windows::Devices::AllJoyn::IAllJoynMessageInfo
    {
        AllJoynMessageInfo(std::nullptr_t) noexcept {}
        AllJoynMessageInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynMessageInfo(ptr, take_ownership_from_abi) {}
        AllJoynMessageInfo(param::hstring const& senderUniqueName);
    };
    struct __declspec(empty_bases) AllJoynProducerStoppedEventArgs : Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs
    {
        AllJoynProducerStoppedEventArgs(std::nullptr_t) noexcept {}
        AllJoynProducerStoppedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs(ptr, take_ownership_from_abi) {}
        AllJoynProducerStoppedEventArgs(int32_t status);
    };
    struct __declspec(empty_bases) AllJoynServiceInfo : Windows::Devices::AllJoyn::IAllJoynServiceInfo
    {
        AllJoynServiceInfo(std::nullptr_t) noexcept {}
        AllJoynServiceInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynServiceInfo(ptr, take_ownership_from_abi) {}
        AllJoynServiceInfo(param::hstring const& uniqueName, param::hstring const& objectPath, uint16_t sessionPort);
        static auto FromIdAsync(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) AllJoynServiceInfoRemovedEventArgs : Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs
    {
        AllJoynServiceInfoRemovedEventArgs(std::nullptr_t) noexcept {}
        AllJoynServiceInfoRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs(ptr, take_ownership_from_abi) {}
        AllJoynServiceInfoRemovedEventArgs(param::hstring const& uniqueName);
    };
    struct __declspec(empty_bases) AllJoynSession : Windows::Devices::AllJoyn::IAllJoynSession
    {
        AllJoynSession(std::nullptr_t) noexcept {}
        AllJoynSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynSession(ptr, take_ownership_from_abi) {}
        static auto GetFromServiceInfoAsync(Windows::Devices::AllJoyn::AllJoynServiceInfo const& serviceInfo);
        static auto GetFromServiceInfoAsync(Windows::Devices::AllJoyn::AllJoynServiceInfo const& serviceInfo, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment);
    };
    struct __declspec(empty_bases) AllJoynSessionJoinedEventArgs : Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs
    {
        AllJoynSessionJoinedEventArgs(std::nullptr_t) noexcept {}
        AllJoynSessionJoinedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs(ptr, take_ownership_from_abi) {}
        AllJoynSessionJoinedEventArgs(Windows::Devices::AllJoyn::AllJoynSession const& session);
    };
    struct __declspec(empty_bases) AllJoynSessionLostEventArgs : Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs
    {
        AllJoynSessionLostEventArgs(std::nullptr_t) noexcept {}
        AllJoynSessionLostEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs(ptr, take_ownership_from_abi) {}
        AllJoynSessionLostEventArgs(Windows::Devices::AllJoyn::AllJoynSessionLostReason const& reason);
    };
    struct __declspec(empty_bases) AllJoynSessionMemberAddedEventArgs : Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs
    {
        AllJoynSessionMemberAddedEventArgs(std::nullptr_t) noexcept {}
        AllJoynSessionMemberAddedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs(ptr, take_ownership_from_abi) {}
        AllJoynSessionMemberAddedEventArgs(param::hstring const& uniqueName);
    };
    struct __declspec(empty_bases) AllJoynSessionMemberRemovedEventArgs : Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs
    {
        AllJoynSessionMemberRemovedEventArgs(std::nullptr_t) noexcept {}
        AllJoynSessionMemberRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs(ptr, take_ownership_from_abi) {}
        AllJoynSessionMemberRemovedEventArgs(param::hstring const& uniqueName);
    };
    struct AllJoynStatus
    {
        AllJoynStatus() = delete;
        [[nodiscard]] static auto Ok();
        [[nodiscard]] static auto Fail();
        [[nodiscard]] static auto OperationTimedOut();
        [[nodiscard]] static auto OtherEndClosed();
        [[nodiscard]] static auto ConnectionRefused();
        [[nodiscard]] static auto AuthenticationFailed();
        [[nodiscard]] static auto AuthenticationRejectedByUser();
        [[nodiscard]] static auto SslConnectFailed();
        [[nodiscard]] static auto SslIdentityVerificationFailed();
        [[nodiscard]] static auto InsufficientSecurity();
        [[nodiscard]] static auto InvalidArgument1();
        [[nodiscard]] static auto InvalidArgument2();
        [[nodiscard]] static auto InvalidArgument3();
        [[nodiscard]] static auto InvalidArgument4();
        [[nodiscard]] static auto InvalidArgument5();
        [[nodiscard]] static auto InvalidArgument6();
        [[nodiscard]] static auto InvalidArgument7();
        [[nodiscard]] static auto InvalidArgument8();
    };
    struct __declspec(empty_bases) AllJoynWatcherStoppedEventArgs : Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs
    {
        AllJoynWatcherStoppedEventArgs(std::nullptr_t) noexcept {}
        AllJoynWatcherStoppedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs(ptr, take_ownership_from_abi) {}
        AllJoynWatcherStoppedEventArgs(int32_t status);
    };
}
#endif
