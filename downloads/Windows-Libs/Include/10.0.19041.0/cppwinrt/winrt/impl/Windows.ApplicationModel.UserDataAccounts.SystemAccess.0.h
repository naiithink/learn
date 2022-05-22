// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_UserDataAccounts_SystemAccess_0_H
#define WINRT_Windows_ApplicationModel_UserDataAccounts_SystemAccess_0_H
namespace winrt::Windows::Foundation
{
    struct IAsyncAction;
    struct Uri;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::Security::Credentials
{
    struct PasswordCredential;
}
namespace winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess
{
    enum class DeviceAccountAuthenticationType : int32_t
    {
        Basic = 0,
        OAuth = 1,
        SingleSignOn = 2,
    };
    enum class DeviceAccountIconId : int32_t
    {
        Exchange = 0,
        Msa = 1,
        Outlook = 2,
        Generic = 3,
    };
    enum class DeviceAccountMailAgeFilter : int32_t
    {
        All = 0,
        Last1Day = 1,
        Last3Days = 2,
        Last7Days = 3,
        Last14Days = 4,
        Last30Days = 5,
        Last90Days = 6,
    };
    enum class DeviceAccountServerType : int32_t
    {
        Exchange = 0,
        Pop = 1,
        Imap = 2,
    };
    enum class DeviceAccountSyncScheduleKind : int32_t
    {
        Manual = 0,
        Every15Minutes = 1,
        Every30Minutes = 2,
        Every60Minutes = 3,
        Every2Hours = 4,
        Daily = 5,
        AsItemsArrive = 6,
    };
    struct IDeviceAccountConfiguration;
    struct IDeviceAccountConfiguration2;
    struct IUserDataAccountSystemAccessManagerStatics;
    struct IUserDataAccountSystemAccessManagerStatics2;
    struct DeviceAccountConfiguration;
    struct UserDataAccountSystemAccessManager;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::SystemAccess::UserDataAccountSystemAccessManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.IDeviceAccountConfiguration" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.IDeviceAccountConfiguration2" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.IUserDataAccountSystemAccessManagerStatics" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.IUserDataAccountSystemAccessManagerStatics2" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountConfiguration" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::SystemAccess::UserDataAccountSystemAccessManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.UserDataAccountSystemAccessManager" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountAuthenticationType" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountIconId" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountMailAgeFilter" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountServerType" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountSyncScheduleKind" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration>
    {
        static constexpr guid value{ 0xAD0123A3,0xFBDC,0x4D1B,{ 0xBE,0x43,0x5A,0x27,0xEA,0x4A,0x1B,0x63 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2>
    {
        static constexpr guid value{ 0xF2B2E5A6,0x728D,0x4A4A,{ 0x89,0x45,0x2B,0xF8,0x58,0x01,0x36,0xDE } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics>
    {
        static constexpr guid value{ 0x9D6B11B9,0xCBE5,0x45F5,{ 0x82,0x2B,0xC2,0x67,0xB8,0x1D,0xBD,0xB6 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics2>
    {
        static constexpr guid value{ 0x943F854D,0x4B4E,0x439F,{ 0x83,0xD3,0x97,0x9B,0x27,0xC0,0x5A,0xC7 } };
    };
    template <> struct default_interface<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration>
    {
        using type = Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration;
    };
    template <> struct abi<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AccountName(void**) noexcept = 0;
            virtual int32_t __stdcall put_AccountName(void*) noexcept = 0;
            virtual int32_t __stdcall get_DeviceAccountTypeId(void**) noexcept = 0;
            virtual int32_t __stdcall put_DeviceAccountTypeId(void*) noexcept = 0;
            virtual int32_t __stdcall get_ServerType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ServerType(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_EmailAddress(void**) noexcept = 0;
            virtual int32_t __stdcall put_EmailAddress(void*) noexcept = 0;
            virtual int32_t __stdcall get_Domain(void**) noexcept = 0;
            virtual int32_t __stdcall put_Domain(void*) noexcept = 0;
            virtual int32_t __stdcall get_EmailSyncEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_EmailSyncEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_ContactsSyncEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ContactsSyncEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_CalendarSyncEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CalendarSyncEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IncomingServerAddress(void**) noexcept = 0;
            virtual int32_t __stdcall put_IncomingServerAddress(void*) noexcept = 0;
            virtual int32_t __stdcall get_IncomingServerPort(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_IncomingServerPort(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IncomingServerRequiresSsl(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IncomingServerRequiresSsl(bool) noexcept = 0;
            virtual int32_t __stdcall get_IncomingServerUsername(void**) noexcept = 0;
            virtual int32_t __stdcall put_IncomingServerUsername(void*) noexcept = 0;
            virtual int32_t __stdcall get_OutgoingServerAddress(void**) noexcept = 0;
            virtual int32_t __stdcall put_OutgoingServerAddress(void*) noexcept = 0;
            virtual int32_t __stdcall get_OutgoingServerPort(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_OutgoingServerPort(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_OutgoingServerRequiresSsl(bool*) noexcept = 0;
            virtual int32_t __stdcall put_OutgoingServerRequiresSsl(bool) noexcept = 0;
            virtual int32_t __stdcall get_OutgoingServerUsername(void**) noexcept = 0;
            virtual int32_t __stdcall put_OutgoingServerUsername(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IncomingServerCredential(void**) noexcept = 0;
            virtual int32_t __stdcall put_IncomingServerCredential(void*) noexcept = 0;
            virtual int32_t __stdcall get_OutgoingServerCredential(void**) noexcept = 0;
            virtual int32_t __stdcall put_OutgoingServerCredential(void*) noexcept = 0;
            virtual int32_t __stdcall get_OAuthRefreshToken(void**) noexcept = 0;
            virtual int32_t __stdcall put_OAuthRefreshToken(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsExternallyManaged(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsExternallyManaged(bool) noexcept = 0;
            virtual int32_t __stdcall get_AccountIconId(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AccountIconId(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AuthenticationType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AuthenticationType(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsSsoAuthenticationSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SsoAccountId(void**) noexcept = 0;
            virtual int32_t __stdcall put_SsoAccountId(void*) noexcept = 0;
            virtual int32_t __stdcall get_AlwaysDownloadFullMessage(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AlwaysDownloadFullMessage(bool) noexcept = 0;
            virtual int32_t __stdcall get_DoesPolicyAllowMailSync(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SyncScheduleKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SyncScheduleKind(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MailAgeFilter(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MailAgeFilter(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsClientAuthenticationCertificateRequired(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsClientAuthenticationCertificateRequired(bool) noexcept = 0;
            virtual int32_t __stdcall get_AutoSelectAuthenticationCertificate(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AutoSelectAuthenticationCertificate(bool) noexcept = 0;
            virtual int32_t __stdcall get_AuthenticationCertificateId(void**) noexcept = 0;
            virtual int32_t __stdcall put_AuthenticationCertificateId(void*) noexcept = 0;
            virtual int32_t __stdcall get_CardDavSyncScheduleKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CardDavSyncScheduleKind(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_CalDavSyncScheduleKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CalDavSyncScheduleKind(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_CardDavServerUrl(void**) noexcept = 0;
            virtual int32_t __stdcall put_CardDavServerUrl(void*) noexcept = 0;
            virtual int32_t __stdcall get_CardDavRequiresSsl(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CardDavRequiresSsl(bool) noexcept = 0;
            virtual int32_t __stdcall get_CalDavServerUrl(void**) noexcept = 0;
            virtual int32_t __stdcall put_CalDavServerUrl(void*) noexcept = 0;
            virtual int32_t __stdcall get_CalDavRequiresSsl(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CalDavRequiresSsl(bool) noexcept = 0;
            virtual int32_t __stdcall get_WasModifiedByUser(bool*) noexcept = 0;
            virtual int32_t __stdcall put_WasModifiedByUser(bool) noexcept = 0;
            virtual int32_t __stdcall get_WasIncomingServerCertificateHashConfirmed(bool*) noexcept = 0;
            virtual int32_t __stdcall put_WasIncomingServerCertificateHashConfirmed(bool) noexcept = 0;
            virtual int32_t __stdcall get_IncomingServerCertificateHash(void**) noexcept = 0;
            virtual int32_t __stdcall put_IncomingServerCertificateHash(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsOutgoingServerAuthenticationRequired(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsOutgoingServerAuthenticationRequired(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsOutgoingServerAuthenticationEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsOutgoingServerAuthenticationEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_WasOutgoingServerCertificateHashConfirmed(bool*) noexcept = 0;
            virtual int32_t __stdcall put_WasOutgoingServerCertificateHashConfirmed(bool) noexcept = 0;
            virtual int32_t __stdcall get_OutgoingServerCertificateHash(void**) noexcept = 0;
            virtual int32_t __stdcall put_OutgoingServerCertificateHash(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsSyncScheduleManagedBySystem(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsSyncScheduleManagedBySystem(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddAndShowDeviceAccountsAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SuppressLocalAccountWithAccountAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateDeviceAccountAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DeleteDeviceAccountAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceAccountConfigurationAsync(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration
    {
        [[nodiscard]] auto AccountName() const;
        auto AccountName(param::hstring const& value) const;
        [[nodiscard]] auto DeviceAccountTypeId() const;
        auto DeviceAccountTypeId(param::hstring const& value) const;
        [[nodiscard]] auto ServerType() const;
        auto ServerType(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType const& value) const;
        [[nodiscard]] auto EmailAddress() const;
        auto EmailAddress(param::hstring const& value) const;
        [[nodiscard]] auto Domain() const;
        auto Domain(param::hstring const& value) const;
        [[nodiscard]] auto EmailSyncEnabled() const;
        auto EmailSyncEnabled(bool value) const;
        [[nodiscard]] auto ContactsSyncEnabled() const;
        auto ContactsSyncEnabled(bool value) const;
        [[nodiscard]] auto CalendarSyncEnabled() const;
        auto CalendarSyncEnabled(bool value) const;
        [[nodiscard]] auto IncomingServerAddress() const;
        auto IncomingServerAddress(param::hstring const& value) const;
        [[nodiscard]] auto IncomingServerPort() const;
        auto IncomingServerPort(int32_t value) const;
        [[nodiscard]] auto IncomingServerRequiresSsl() const;
        auto IncomingServerRequiresSsl(bool value) const;
        [[nodiscard]] auto IncomingServerUsername() const;
        auto IncomingServerUsername(param::hstring const& value) const;
        [[nodiscard]] auto OutgoingServerAddress() const;
        auto OutgoingServerAddress(param::hstring const& value) const;
        [[nodiscard]] auto OutgoingServerPort() const;
        auto OutgoingServerPort(int32_t value) const;
        [[nodiscard]] auto OutgoingServerRequiresSsl() const;
        auto OutgoingServerRequiresSsl(bool value) const;
        [[nodiscard]] auto OutgoingServerUsername() const;
        auto OutgoingServerUsername(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2
    {
        [[nodiscard]] auto IncomingServerCredential() const;
        auto IncomingServerCredential(Windows::Security::Credentials::PasswordCredential const& value) const;
        [[nodiscard]] auto OutgoingServerCredential() const;
        auto OutgoingServerCredential(Windows::Security::Credentials::PasswordCredential const& value) const;
        [[nodiscard]] auto OAuthRefreshToken() const;
        auto OAuthRefreshToken(param::hstring const& value) const;
        [[nodiscard]] auto IsExternallyManaged() const;
        auto IsExternallyManaged(bool value) const;
        [[nodiscard]] auto AccountIconId() const;
        auto AccountIconId(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId const& value) const;
        [[nodiscard]] auto AuthenticationType() const;
        auto AuthenticationType(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType const& value) const;
        [[nodiscard]] auto IsSsoAuthenticationSupported() const;
        [[nodiscard]] auto SsoAccountId() const;
        auto SsoAccountId(param::hstring const& value) const;
        [[nodiscard]] auto AlwaysDownloadFullMessage() const;
        auto AlwaysDownloadFullMessage(bool value) const;
        [[nodiscard]] auto DoesPolicyAllowMailSync() const;
        [[nodiscard]] auto SyncScheduleKind() const;
        auto SyncScheduleKind(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind const& value) const;
        [[nodiscard]] auto MailAgeFilter() const;
        auto MailAgeFilter(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter const& value) const;
        [[nodiscard]] auto IsClientAuthenticationCertificateRequired() const;
        auto IsClientAuthenticationCertificateRequired(bool value) const;
        [[nodiscard]] auto AutoSelectAuthenticationCertificate() const;
        auto AutoSelectAuthenticationCertificate(bool value) const;
        [[nodiscard]] auto AuthenticationCertificateId() const;
        auto AuthenticationCertificateId(param::hstring const& value) const;
        [[nodiscard]] auto CardDavSyncScheduleKind() const;
        auto CardDavSyncScheduleKind(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind const& value) const;
        [[nodiscard]] auto CalDavSyncScheduleKind() const;
        auto CalDavSyncScheduleKind(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind const& value) const;
        [[nodiscard]] auto CardDavServerUrl() const;
        auto CardDavServerUrl(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto CardDavRequiresSsl() const;
        auto CardDavRequiresSsl(bool value) const;
        [[nodiscard]] auto CalDavServerUrl() const;
        auto CalDavServerUrl(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto CalDavRequiresSsl() const;
        auto CalDavRequiresSsl(bool value) const;
        [[nodiscard]] auto WasModifiedByUser() const;
        auto WasModifiedByUser(bool value) const;
        [[nodiscard]] auto WasIncomingServerCertificateHashConfirmed() const;
        auto WasIncomingServerCertificateHashConfirmed(bool value) const;
        [[nodiscard]] auto IncomingServerCertificateHash() const;
        auto IncomingServerCertificateHash(param::hstring const& value) const;
        [[nodiscard]] auto IsOutgoingServerAuthenticationRequired() const;
        auto IsOutgoingServerAuthenticationRequired(bool value) const;
        [[nodiscard]] auto IsOutgoingServerAuthenticationEnabled() const;
        auto IsOutgoingServerAuthenticationEnabled(bool value) const;
        [[nodiscard]] auto WasOutgoingServerCertificateHashConfirmed() const;
        auto WasOutgoingServerCertificateHashConfirmed(bool value) const;
        [[nodiscard]] auto OutgoingServerCertificateHash() const;
        auto OutgoingServerCertificateHash(param::hstring const& value) const;
        [[nodiscard]] auto IsSyncScheduleManagedBySystem() const;
        auto IsSyncScheduleManagedBySystem(bool value) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IUserDataAccountSystemAccessManagerStatics
    {
        auto AddAndShowDeviceAccountsAsync(param::async_iterable<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration> const& accounts) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IUserDataAccountSystemAccessManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IUserDataAccountSystemAccessManagerStatics2
    {
        auto SuppressLocalAccountWithAccountAsync(param::hstring const& userDataAccountId) const;
        auto CreateDeviceAccountAsync(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration const& account) const;
        auto DeleteDeviceAccountAsync(param::hstring const& accountId) const;
        auto GetDeviceAccountConfigurationAsync(param::hstring const& accountId) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IUserDataAccountSystemAccessManagerStatics2<D>;
    };
}
#endif
