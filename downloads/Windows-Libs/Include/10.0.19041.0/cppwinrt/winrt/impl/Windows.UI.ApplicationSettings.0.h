// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_ApplicationSettings_0_H
#define WINRT_Windows_UI_ApplicationSettings_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Security::Credentials
{
    struct PasswordCredential;
    struct WebAccount;
    struct WebAccountProvider;
}
namespace winrt::Windows::System
{
    struct User;
}
namespace winrt::Windows::UI::Popups
{
    struct IUICommand;
    struct UICommandInvokedHandler;
}
namespace winrt::Windows::UI::ApplicationSettings
{
    enum class SettingsEdgeLocation : int32_t
    {
        Right = 0,
        Left = 1,
    };
    enum class SupportedWebAccountActions : uint32_t
    {
        None = 0,
        Reconnect = 0x1,
        Remove = 0x2,
        ViewDetails = 0x4,
        Manage = 0x8,
        More = 0x10,
    };
    enum class WebAccountAction : int32_t
    {
        Reconnect = 0,
        Remove = 1,
        ViewDetails = 2,
        Manage = 3,
        More = 4,
    };
    struct IAccountsSettingsPane;
    struct IAccountsSettingsPaneCommandsRequestedEventArgs;
    struct IAccountsSettingsPaneCommandsRequestedEventArgs2;
    struct IAccountsSettingsPaneEventDeferral;
    struct IAccountsSettingsPaneStatics;
    struct IAccountsSettingsPaneStatics2;
    struct IAccountsSettingsPaneStatics3;
    struct ICredentialCommand;
    struct ICredentialCommandFactory;
    struct ISettingsCommandFactory;
    struct ISettingsCommandStatics;
    struct ISettingsPane;
    struct ISettingsPaneCommandsRequest;
    struct ISettingsPaneCommandsRequestedEventArgs;
    struct ISettingsPaneStatics;
    struct IWebAccountCommand;
    struct IWebAccountCommandFactory;
    struct IWebAccountInvokedArgs;
    struct IWebAccountProviderCommand;
    struct IWebAccountProviderCommandFactory;
    struct AccountsSettingsPane;
    struct AccountsSettingsPaneCommandsRequestedEventArgs;
    struct AccountsSettingsPaneEventDeferral;
    struct CredentialCommand;
    struct SettingsCommand;
    struct SettingsPane;
    struct SettingsPaneCommandsRequest;
    struct SettingsPaneCommandsRequestedEventArgs;
    struct WebAccountCommand;
    struct WebAccountInvokedArgs;
    struct WebAccountProviderCommand;
    struct CredentialCommandCredentialDeletedHandler;
    struct WebAccountCommandInvokedHandler;
    struct WebAccountProviderCommandInvokedHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::ApplicationSettings::IAccountsSettingsPane>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::ICredentialCommand>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::ICredentialCommandFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::ISettingsCommandFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::ISettingsCommandStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::ISettingsPane>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::ISettingsPaneStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::IWebAccountCommand>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::IWebAccountCommandFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::IWebAccountInvokedArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::IWebAccountProviderCommand>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::AccountsSettingsPane>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::AccountsSettingsPaneEventDeferral>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::CredentialCommand>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::SettingsCommand>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::SettingsPane>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::SettingsPaneCommandsRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::WebAccountCommand>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::WebAccountInvokedArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::WebAccountProviderCommand>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::SettingsEdgeLocation>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::SupportedWebAccountActions>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::WebAccountAction>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler>
    {
        using type = delegate_category;
    };
    template <> struct name<Windows::UI::ApplicationSettings::IAccountsSettingsPane>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.IAccountsSettingsPane" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneCommandsRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneCommandsRequestedEventArgs2" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneEventDeferral" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneStatics" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneStatics2" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics3>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneStatics3" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::ICredentialCommand>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.ICredentialCommand" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::ICredentialCommandFactory>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.ICredentialCommandFactory" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::ISettingsCommandFactory>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.ISettingsCommandFactory" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::ISettingsCommandStatics>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.ISettingsCommandStatics" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::ISettingsPane>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.ISettingsPane" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.ISettingsPaneCommandsRequest" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.ISettingsPaneCommandsRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::ISettingsPaneStatics>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.ISettingsPaneStatics" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::IWebAccountCommand>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.IWebAccountCommand" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::IWebAccountCommandFactory>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.IWebAccountCommandFactory" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::IWebAccountInvokedArgs>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.IWebAccountInvokedArgs" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::IWebAccountProviderCommand>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.IWebAccountProviderCommand" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.IWebAccountProviderCommandFactory" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::AccountsSettingsPane>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.AccountsSettingsPane" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.AccountsSettingsPaneCommandsRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::AccountsSettingsPaneEventDeferral>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.AccountsSettingsPaneEventDeferral" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::CredentialCommand>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.CredentialCommand" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::SettingsCommand>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.SettingsCommand" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::SettingsPane>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.SettingsPane" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::SettingsPaneCommandsRequest>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.SettingsPaneCommandsRequest" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.SettingsPaneCommandsRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::WebAccountCommand>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.WebAccountCommand" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::WebAccountInvokedArgs>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.WebAccountInvokedArgs" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::WebAccountProviderCommand>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.WebAccountProviderCommand" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::SettingsEdgeLocation>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.SettingsEdgeLocation" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::SupportedWebAccountActions>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.SupportedWebAccountActions" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::WebAccountAction>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.WebAccountAction" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.CredentialCommandCredentialDeletedHandler" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.WebAccountCommandInvokedHandler" };
    };
    template <> struct name<Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler>
    {
        static constexpr auto & value{ L"Windows.UI.ApplicationSettings.WebAccountProviderCommandInvokedHandler" };
    };
    template <> struct guid_storage<Windows::UI::ApplicationSettings::IAccountsSettingsPane>
    {
        static constexpr guid value{ 0x81EA942C,0x4F09,0x4406,{ 0xA5,0x38,0x83,0x8D,0x9B,0x14,0xB7,0xE6 } };
    };
    template <> struct guid_storage<Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs>
    {
        static constexpr guid value{ 0x3B68C099,0xDB19,0x45D0,{ 0x9A,0xBF,0x95,0xD3,0x77,0x3C,0x93,0x30 } };
    };
    template <> struct guid_storage<Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs2>
    {
        static constexpr guid value{ 0x362F7BAD,0x4E37,0x4967,{ 0x8C,0x40,0xE7,0x8E,0xE7,0xA1,0xE5,0xBB } };
    };
    template <> struct guid_storage<Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral>
    {
        static constexpr guid value{ 0xCBF25D3F,0xE5BA,0x40EF,{ 0x93,0xDA,0x65,0xE0,0x96,0xE5,0xFB,0x04 } };
    };
    template <> struct guid_storage<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics>
    {
        static constexpr guid value{ 0x561F8B60,0xB0EC,0x4150,{ 0xA8,0xDC,0x20,0x8E,0xE4,0x4B,0x06,0x8A } };
    };
    template <> struct guid_storage<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2>
    {
        static constexpr guid value{ 0xD21DF7C2,0xCE0D,0x484F,{ 0xB8,0xE8,0xE8,0x23,0xC2,0x15,0x76,0x5E } };
    };
    template <> struct guid_storage<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics3>
    {
        static constexpr guid value{ 0x08410458,0xA2BA,0x4C6F,{ 0xB4,0xAC,0x48,0xF5,0x14,0x33,0x12,0x16 } };
    };
    template <> struct guid_storage<Windows::UI::ApplicationSettings::ICredentialCommand>
    {
        static constexpr guid value{ 0xA5F665E6,0x6143,0x4A7A,{ 0xA9,0x71,0xB0,0x17,0xBA,0x97,0x8C,0xE2 } };
    };
    template <> struct guid_storage<Windows::UI::ApplicationSettings::ICredentialCommandFactory>
    {
        static constexpr guid value{ 0x27E88C17,0xBC3E,0x4B80,{ 0x94,0x95,0x4E,0xD7,0x20,0xE4,0x8A,0x91 } };
    };
    template <> struct guid_storage<Windows::UI::ApplicationSettings::ISettingsCommandFactory>
    {
        static constexpr guid value{ 0x68E15B33,0x1C83,0x433A,{ 0xAA,0x5A,0xCE,0xEE,0xA5,0xBD,0x47,0x64 } };
    };
    template <> struct guid_storage<Windows::UI::ApplicationSettings::ISettingsCommandStatics>
    {
        static constexpr guid value{ 0x749AE954,0x2F69,0x4B17,{ 0x8A,0xBA,0xD0,0x5C,0xE5,0x77,0x8E,0x46 } };
    };
    template <> struct guid_storage<Windows::UI::ApplicationSettings::ISettingsPane>
    {
        static constexpr guid value{ 0xB1CD0932,0x4570,0x4C69,{ 0x8D,0x38,0x89,0x44,0x65,0x61,0xAC,0xE0 } };
    };
    template <> struct guid_storage<Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest>
    {
        static constexpr guid value{ 0x44DF23AE,0x5D6E,0x4068,{ 0xA1,0x68,0xF4,0x76,0x43,0x18,0x21,0x14 } };
    };
    template <> struct guid_storage<Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs>
    {
        static constexpr guid value{ 0x205F5D24,0x1B48,0x4629,{ 0xA6,0xCA,0x2F,0xDF,0xED,0xAF,0xB7,0x5D } };
    };
    template <> struct guid_storage<Windows::UI::ApplicationSettings::ISettingsPaneStatics>
    {
        static constexpr guid value{ 0x1C6A52C5,0xFF19,0x471B,{ 0xBA,0x6B,0xF8,0xF3,0x56,0x94,0xAD,0x9A } };
    };
    template <> struct guid_storage<Windows::UI::ApplicationSettings::IWebAccountCommand>
    {
        static constexpr guid value{ 0xCAA39398,0x9CFA,0x4246,{ 0xB0,0xC4,0xA9,0x13,0xA3,0x89,0x65,0x41 } };
    };
    template <> struct guid_storage<Windows::UI::ApplicationSettings::IWebAccountCommandFactory>
    {
        static constexpr guid value{ 0xBFA6CDFF,0x2F2D,0x42F5,{ 0x81,0xDE,0x1D,0x56,0xBA,0xFC,0x49,0x6D } };
    };
    template <> struct guid_storage<Windows::UI::ApplicationSettings::IWebAccountInvokedArgs>
    {
        static constexpr guid value{ 0xE7ABCC40,0xA1D8,0x4C5D,{ 0x9A,0x7F,0x1D,0x34,0xB2,0xF9,0x0A,0xD2 } };
    };
    template <> struct guid_storage<Windows::UI::ApplicationSettings::IWebAccountProviderCommand>
    {
        static constexpr guid value{ 0xD69BDD9A,0xA0A6,0x4E9B,{ 0x88,0xDC,0xC7,0x1E,0x75,0x7A,0x35,0x01 } };
    };
    template <> struct guid_storage<Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory>
    {
        static constexpr guid value{ 0xD5658A1B,0xB176,0x4776,{ 0x84,0x69,0xA9,0xD3,0xFF,0x0B,0x3F,0x59 } };
    };
    template <> struct guid_storage<Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler>
    {
        static constexpr guid value{ 0x61C0E185,0x0977,0x4678,{ 0xB4,0xE2,0x98,0x72,0x7A,0xFB,0xEE,0xD9 } };
    };
    template <> struct guid_storage<Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler>
    {
        static constexpr guid value{ 0x1EE6E459,0x1705,0x4A9A,{ 0xB5,0x99,0xA0,0xC3,0xD6,0x92,0x19,0x73 } };
    };
    template <> struct guid_storage<Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler>
    {
        static constexpr guid value{ 0xB7DE5527,0x4C8F,0x42DD,{ 0x84,0xDA,0x5E,0xC4,0x93,0xAB,0xDB,0x9A } };
    };
    template <> struct default_interface<Windows::UI::ApplicationSettings::AccountsSettingsPane>
    {
        using type = Windows::UI::ApplicationSettings::IAccountsSettingsPane;
    };
    template <> struct default_interface<Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs>
    {
        using type = Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs;
    };
    template <> struct default_interface<Windows::UI::ApplicationSettings::AccountsSettingsPaneEventDeferral>
    {
        using type = Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral;
    };
    template <> struct default_interface<Windows::UI::ApplicationSettings::CredentialCommand>
    {
        using type = Windows::UI::ApplicationSettings::ICredentialCommand;
    };
    template <> struct default_interface<Windows::UI::ApplicationSettings::SettingsCommand>
    {
        using type = Windows::UI::Popups::IUICommand;
    };
    template <> struct default_interface<Windows::UI::ApplicationSettings::SettingsPane>
    {
        using type = Windows::UI::ApplicationSettings::ISettingsPane;
    };
    template <> struct default_interface<Windows::UI::ApplicationSettings::SettingsPaneCommandsRequest>
    {
        using type = Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest;
    };
    template <> struct default_interface<Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs>
    {
        using type = Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs;
    };
    template <> struct default_interface<Windows::UI::ApplicationSettings::WebAccountCommand>
    {
        using type = Windows::UI::ApplicationSettings::IWebAccountCommand;
    };
    template <> struct default_interface<Windows::UI::ApplicationSettings::WebAccountInvokedArgs>
    {
        using type = Windows::UI::ApplicationSettings::IWebAccountInvokedArgs;
    };
    template <> struct default_interface<Windows::UI::ApplicationSettings::WebAccountProviderCommand>
    {
        using type = Windows::UI::ApplicationSettings::IWebAccountProviderCommand;
    };
    template <> struct abi<Windows::UI::ApplicationSettings::IAccountsSettingsPane>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_AccountCommandsRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AccountCommandsRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WebAccountProviderCommands(void**) noexcept = 0;
            virtual int32_t __stdcall get_WebAccountCommands(void**) noexcept = 0;
            virtual int32_t __stdcall get_CredentialCommands(void**) noexcept = 0;
            virtual int32_t __stdcall get_Commands(void**) noexcept = 0;
            virtual int32_t __stdcall get_HeaderText(void**) noexcept = 0;
            virtual int32_t __stdcall put_HeaderText(void*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
            virtual int32_t __stdcall Show() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ShowManageAccountsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ShowAddAccountAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ShowManageAccountsForUserAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ShowAddAccountForUserAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ApplicationSettings::ICredentialCommand>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PasswordCredential(void**) noexcept = 0;
            virtual int32_t __stdcall get_CredentialDeleted(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ApplicationSettings::ICredentialCommandFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateCredentialCommand(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateCredentialCommandWithHandler(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ApplicationSettings::ISettingsCommandFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateSettingsCommand(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ApplicationSettings::ISettingsCommandStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AccountsCommand(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ApplicationSettings::ISettingsPane>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_CommandsRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CommandsRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ApplicationCommands(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ApplicationSettings::ISettingsPaneStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
            virtual int32_t __stdcall Show() noexcept = 0;
            virtual int32_t __stdcall get_Edge(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ApplicationSettings::IWebAccountCommand>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WebAccount(void**) noexcept = 0;
            virtual int32_t __stdcall get_Invoked(void**) noexcept = 0;
            virtual int32_t __stdcall get_Actions(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ApplicationSettings::IWebAccountCommandFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWebAccountCommand(void*, void*, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ApplicationSettings::IWebAccountInvokedArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Action(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ApplicationSettings::IWebAccountProviderCommand>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WebAccountProvider(void**) noexcept = 0;
            virtual int32_t __stdcall get_Invoked(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWebAccountProviderCommand(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_IAccountsSettingsPane
    {
        auto AccountCommandsRequested(Windows::Foundation::TypedEventHandler<Windows::UI::ApplicationSettings::AccountsSettingsPane, Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs> const& handler) const;
        using AccountCommandsRequested_revoker = impl::event_revoker<Windows::UI::ApplicationSettings::IAccountsSettingsPane, &impl::abi_t<Windows::UI::ApplicationSettings::IAccountsSettingsPane>::remove_AccountCommandsRequested>;
        AccountCommandsRequested_revoker AccountCommandsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ApplicationSettings::AccountsSettingsPane, Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs> const& handler) const;
        auto AccountCommandsRequested(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<Windows::UI::ApplicationSettings::IAccountsSettingsPane>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_IAccountsSettingsPane<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs
    {
        [[nodiscard]] auto WebAccountProviderCommands() const;
        [[nodiscard]] auto WebAccountCommands() const;
        [[nodiscard]] auto CredentialCommands() const;
        [[nodiscard]] auto Commands() const;
        [[nodiscard]] auto HeaderText() const;
        auto HeaderText(param::hstring const& value) const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs2
    {
        [[nodiscard]] auto User() const;
    };
    template <> struct consume<Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneEventDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneEventDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics
    {
        auto GetForCurrentView() const;
        auto Show() const;
    };
    template <> struct consume<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics2
    {
        auto ShowManageAccountsAsync() const;
        auto ShowAddAccountAsync() const;
    };
    template <> struct consume<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics3
    {
        auto ShowManageAccountsForUserAsync(Windows::System::User const& user) const;
        auto ShowAddAccountForUserAsync(Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics3>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_ICredentialCommand
    {
        [[nodiscard]] auto PasswordCredential() const;
        [[nodiscard]] auto CredentialDeleted() const;
    };
    template <> struct consume<Windows::UI::ApplicationSettings::ICredentialCommand>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_ICredentialCommand<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_ICredentialCommandFactory
    {
        auto CreateCredentialCommand(Windows::Security::Credentials::PasswordCredential const& passwordCredential) const;
        auto CreateCredentialCommandWithHandler(Windows::Security::Credentials::PasswordCredential const& passwordCredential, Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler const& deleted) const;
    };
    template <> struct consume<Windows::UI::ApplicationSettings::ICredentialCommandFactory>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_ICredentialCommandFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_ISettingsCommandFactory
    {
        auto CreateSettingsCommand(Windows::Foundation::IInspectable const& settingsCommandId, param::hstring const& label, Windows::UI::Popups::UICommandInvokedHandler const& handler) const;
    };
    template <> struct consume<Windows::UI::ApplicationSettings::ISettingsCommandFactory>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_ISettingsCommandFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_ISettingsCommandStatics
    {
        [[nodiscard]] auto AccountsCommand() const;
    };
    template <> struct consume<Windows::UI::ApplicationSettings::ISettingsCommandStatics>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_ISettingsCommandStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_ISettingsPane
    {
        auto CommandsRequested(Windows::Foundation::TypedEventHandler<Windows::UI::ApplicationSettings::SettingsPane, Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs> const& handler) const;
        using CommandsRequested_revoker = impl::event_revoker<Windows::UI::ApplicationSettings::ISettingsPane, &impl::abi_t<Windows::UI::ApplicationSettings::ISettingsPane>::remove_CommandsRequested>;
        CommandsRequested_revoker CommandsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ApplicationSettings::SettingsPane, Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs> const& handler) const;
        auto CommandsRequested(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<Windows::UI::ApplicationSettings::ISettingsPane>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_ISettingsPane<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_ISettingsPaneCommandsRequest
    {
        [[nodiscard]] auto ApplicationCommands() const;
    };
    template <> struct consume<Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_ISettingsPaneCommandsRequest<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_ISettingsPaneCommandsRequestedEventArgs
    {
        [[nodiscard]] auto Request() const;
    };
    template <> struct consume<Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_ISettingsPaneCommandsRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_ISettingsPaneStatics
    {
        auto GetForCurrentView() const;
        auto Show() const;
        [[nodiscard]] auto Edge() const;
    };
    template <> struct consume<Windows::UI::ApplicationSettings::ISettingsPaneStatics>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_ISettingsPaneStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_IWebAccountCommand
    {
        [[nodiscard]] auto WebAccount() const;
        [[nodiscard]] auto Invoked() const;
        [[nodiscard]] auto Actions() const;
    };
    template <> struct consume<Windows::UI::ApplicationSettings::IWebAccountCommand>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_IWebAccountCommand<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_IWebAccountCommandFactory
    {
        auto CreateWebAccountCommand(Windows::Security::Credentials::WebAccount const& webAccount, Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler const& invoked, Windows::UI::ApplicationSettings::SupportedWebAccountActions const& actions) const;
    };
    template <> struct consume<Windows::UI::ApplicationSettings::IWebAccountCommandFactory>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_IWebAccountCommandFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_IWebAccountInvokedArgs
    {
        [[nodiscard]] auto Action() const;
    };
    template <> struct consume<Windows::UI::ApplicationSettings::IWebAccountInvokedArgs>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_IWebAccountInvokedArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_IWebAccountProviderCommand
    {
        [[nodiscard]] auto WebAccountProvider() const;
        [[nodiscard]] auto Invoked() const;
    };
    template <> struct consume<Windows::UI::ApplicationSettings::IWebAccountProviderCommand>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_IWebAccountProviderCommand<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_IWebAccountProviderCommandFactory
    {
        auto CreateWebAccountProviderCommand(Windows::Security::Credentials::WebAccountProvider const& webAccountProvider, Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler const& invoked) const;
    };
    template <> struct consume<Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_IWebAccountProviderCommandFactory<D>;
    };
}
#endif