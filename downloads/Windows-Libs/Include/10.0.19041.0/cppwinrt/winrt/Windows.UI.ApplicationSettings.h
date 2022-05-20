// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_ApplicationSettings_H
#define WINRT_Windows_UI_ApplicationSettings_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.UI.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Security.Credentials.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.UI.Popups.2.h"
#include "winrt/impl/Windows.UI.ApplicationSettings.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_UI_ApplicationSettings_IAccountsSettingsPane<D>::AccountCommandsRequested(Windows::Foundation::TypedEventHandler<Windows::UI::ApplicationSettings::AccountsSettingsPane, Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs> const& handler) const
    {
        winrt::event_token cookie;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPane)->add_AccountCommandsRequested(*(void**)(&handler), put_abi(cookie)));
        return cookie;
    }
    template <typename D> typename consume_Windows_UI_ApplicationSettings_IAccountsSettingsPane<D>::AccountCommandsRequested_revoker consume_Windows_UI_ApplicationSettings_IAccountsSettingsPane<D>::AccountCommandsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ApplicationSettings::AccountsSettingsPane, Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, AccountCommandsRequested_revoker>(this, AccountCommandsRequested(handler));
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_IAccountsSettingsPane<D>::AccountCommandsRequested(winrt::event_token const& cookie) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPane)->remove_AccountCommandsRequested(impl::bind_in(cookie)));
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs<D>::WebAccountProviderCommands() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs)->get_WebAccountProviderCommands(&value));
        return Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::WebAccountProviderCommand>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs<D>::WebAccountCommands() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs)->get_WebAccountCommands(&value));
        return Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::WebAccountCommand>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs<D>::CredentialCommands() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs)->get_CredentialCommands(&value));
        return Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::CredentialCommand>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs<D>::Commands() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs)->get_Commands(&value));
        return Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::SettingsCommand>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs<D>::HeaderText() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs)->get_HeaderText(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs<D>::HeaderText(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs)->put_HeaderText(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs<D>::GetDeferral() const
    {
        void* deferral{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs)->GetDeferral(&deferral));
        return Windows::UI::ApplicationSettings::AccountsSettingsPaneEventDeferral{ deferral, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs2<D>::User() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs2)->get_User(&value));
        return Windows::System::User{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneEventDeferral<D>::Complete() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral)->Complete());
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics<D>::GetForCurrentView() const
    {
        void* current{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics)->GetForCurrentView(&current));
        return Windows::UI::ApplicationSettings::AccountsSettingsPane{ current, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics<D>::Show() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics)->Show());
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics2<D>::ShowManageAccountsAsync() const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2)->ShowManageAccountsAsync(&asyncInfo));
        return Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics2<D>::ShowAddAccountAsync() const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2)->ShowAddAccountAsync(&asyncInfo));
        return Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics3<D>::ShowManageAccountsForUserAsync(Windows::System::User const& user) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics3)->ShowManageAccountsForUserAsync(*(void**)(&user), &operation));
        return Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics3<D>::ShowAddAccountForUserAsync(Windows::System::User const& user) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics3)->ShowAddAccountForUserAsync(*(void**)(&user), &operation));
        return Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_ICredentialCommand<D>::PasswordCredential() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::ICredentialCommand)->get_PasswordCredential(&value));
        return Windows::Security::Credentials::PasswordCredential{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_ICredentialCommand<D>::CredentialDeleted() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::ICredentialCommand)->get_CredentialDeleted(&value));
        return Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_ICredentialCommandFactory<D>::CreateCredentialCommand(Windows::Security::Credentials::PasswordCredential const& passwordCredential) const
    {
        void* instance{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::ICredentialCommandFactory)->CreateCredentialCommand(*(void**)(&passwordCredential), &instance));
        return Windows::UI::ApplicationSettings::CredentialCommand{ instance, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_ICredentialCommandFactory<D>::CreateCredentialCommandWithHandler(Windows::Security::Credentials::PasswordCredential const& passwordCredential, Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler const& deleted) const
    {
        void* instance{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::ICredentialCommandFactory)->CreateCredentialCommandWithHandler(*(void**)(&passwordCredential), *(void**)(&deleted), &instance));
        return Windows::UI::ApplicationSettings::CredentialCommand{ instance, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_ISettingsCommandFactory<D>::CreateSettingsCommand(Windows::Foundation::IInspectable const& settingsCommandId, param::hstring const& label, Windows::UI::Popups::UICommandInvokedHandler const& handler) const
    {
        void* instance{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::ISettingsCommandFactory)->CreateSettingsCommand(*(void**)(&settingsCommandId), *(void**)(&label), *(void**)(&handler), &instance));
        return Windows::UI::ApplicationSettings::SettingsCommand{ instance, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_ISettingsCommandStatics<D>::AccountsCommand() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::ISettingsCommandStatics)->get_AccountsCommand(&value));
        return Windows::UI::ApplicationSettings::SettingsCommand{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_ISettingsPane<D>::CommandsRequested(Windows::Foundation::TypedEventHandler<Windows::UI::ApplicationSettings::SettingsPane, Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs> const& handler) const
    {
        winrt::event_token cookie;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::ISettingsPane)->add_CommandsRequested(*(void**)(&handler), put_abi(cookie)));
        return cookie;
    }
    template <typename D> typename consume_Windows_UI_ApplicationSettings_ISettingsPane<D>::CommandsRequested_revoker consume_Windows_UI_ApplicationSettings_ISettingsPane<D>::CommandsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ApplicationSettings::SettingsPane, Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, CommandsRequested_revoker>(this, CommandsRequested(handler));
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_ISettingsPane<D>::CommandsRequested(winrt::event_token const& cookie) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::ISettingsPane)->remove_CommandsRequested(impl::bind_in(cookie)));
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_ISettingsPaneCommandsRequest<D>::ApplicationCommands() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest)->get_ApplicationCommands(&value));
        return Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::SettingsCommand>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_ISettingsPaneCommandsRequestedEventArgs<D>::Request() const
    {
        void* request{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs)->get_Request(&request));
        return Windows::UI::ApplicationSettings::SettingsPaneCommandsRequest{ request, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_ISettingsPaneStatics<D>::GetForCurrentView() const
    {
        void* current{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::ISettingsPaneStatics)->GetForCurrentView(&current));
        return Windows::UI::ApplicationSettings::SettingsPane{ current, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_ISettingsPaneStatics<D>::Show() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::ISettingsPaneStatics)->Show());
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_ISettingsPaneStatics<D>::Edge() const
    {
        Windows::UI::ApplicationSettings::SettingsEdgeLocation value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::ISettingsPaneStatics)->get_Edge(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_IWebAccountCommand<D>::WebAccount() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::IWebAccountCommand)->get_WebAccount(&value));
        return Windows::Security::Credentials::WebAccount{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_IWebAccountCommand<D>::Invoked() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::IWebAccountCommand)->get_Invoked(&value));
        return Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_IWebAccountCommand<D>::Actions() const
    {
        Windows::UI::ApplicationSettings::SupportedWebAccountActions value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::IWebAccountCommand)->get_Actions(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_IWebAccountCommandFactory<D>::CreateWebAccountCommand(Windows::Security::Credentials::WebAccount const& webAccount, Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler const& invoked, Windows::UI::ApplicationSettings::SupportedWebAccountActions const& actions) const
    {
        void* instance{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::IWebAccountCommandFactory)->CreateWebAccountCommand(*(void**)(&webAccount), *(void**)(&invoked), static_cast<uint32_t>(actions), &instance));
        return Windows::UI::ApplicationSettings::WebAccountCommand{ instance, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_IWebAccountInvokedArgs<D>::Action() const
    {
        Windows::UI::ApplicationSettings::WebAccountAction action;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::IWebAccountInvokedArgs)->get_Action(put_abi(action)));
        return action;
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_IWebAccountProviderCommand<D>::WebAccountProvider() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::IWebAccountProviderCommand)->get_WebAccountProvider(&value));
        return Windows::Security::Credentials::WebAccountProvider{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_IWebAccountProviderCommand<D>::Invoked() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::IWebAccountProviderCommand)->get_Invoked(&value));
        return Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_ApplicationSettings_IWebAccountProviderCommandFactory<D>::CreateWebAccountProviderCommand(Windows::Security::Credentials::WebAccountProvider const& webAccountProvider, Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler const& invoked) const
    {
        void* instance{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory)->CreateWebAccountProviderCommand(*(void**)(&webAccountProvider), *(void**)(&invoked), &instance));
        return Windows::UI::ApplicationSettings::WebAccountProviderCommand{ instance, take_ownership_from_abi };
    }
    template <typename H> struct delegate<Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler, H> : implements_delegate<Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler, H>
    {
        delegate(H&& handler) : implements_delegate<Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* command) noexcept final try
        {
            (*this)(*reinterpret_cast<Windows::UI::ApplicationSettings::CredentialCommand const*>(&command));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename H> struct delegate<Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler, H> : implements_delegate<Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler, H>
    {
        delegate(H&& handler) : implements_delegate<Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* command, void* args) noexcept final try
        {
            (*this)(*reinterpret_cast<Windows::UI::ApplicationSettings::WebAccountCommand const*>(&command), *reinterpret_cast<Windows::UI::ApplicationSettings::WebAccountInvokedArgs const*>(&args));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename H> struct delegate<Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler, H> : implements_delegate<Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler, H>
    {
        delegate(H&& handler) : implements_delegate<Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* command) noexcept final try
        {
            (*this)(*reinterpret_cast<Windows::UI::ApplicationSettings::WebAccountProviderCommand const*>(&command));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::ApplicationSettings::IAccountsSettingsPane> : produce_base<D, Windows::UI::ApplicationSettings::IAccountsSettingsPane>
    {
        int32_t __stdcall add_AccountCommandsRequested(void* handler, winrt::event_token* cookie) noexcept final try
        {
            zero_abi<winrt::event_token>(cookie);
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<winrt::event_token>(this->shim().AccountCommandsRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::ApplicationSettings::AccountsSettingsPane, Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_AccountCommandsRequested(winrt::event_token cookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AccountCommandsRequested(*reinterpret_cast<winrt::event_token const*>(&cookie));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs> : produce_base<D, Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs>
    {
        int32_t __stdcall get_WebAccountProviderCommands(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::WebAccountProviderCommand>>(this->shim().WebAccountProviderCommands());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WebAccountCommands(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::WebAccountCommand>>(this->shim().WebAccountCommands());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CredentialCommands(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::CredentialCommand>>(this->shim().CredentialCommands());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Commands(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::SettingsCommand>>(this->shim().Commands());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HeaderText(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HeaderText());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_HeaderText(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeaderText(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** deferral) noexcept final try
        {
            clear_abi(deferral);
            typename D::abi_guard guard(this->shim());
            *deferral = detach_from<Windows::UI::ApplicationSettings::AccountsSettingsPaneEventDeferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs2> : produce_base<D, Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs2>
    {
        int32_t __stdcall get_User(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::User>(this->shim().User());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral> : produce_base<D, Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral>
    {
        int32_t __stdcall Complete() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics> : produce_base<D, Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics>
    {
        int32_t __stdcall GetForCurrentView(void** current) noexcept final try
        {
            clear_abi(current);
            typename D::abi_guard guard(this->shim());
            *current = detach_from<Windows::UI::ApplicationSettings::AccountsSettingsPane>(this->shim().GetForCurrentView());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Show() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Show();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2> : produce_base<D, Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2>
    {
        int32_t __stdcall ShowManageAccountsAsync(void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShowManageAccountsAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowAddAccountAsync(void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShowAddAccountAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics3> : produce_base<D, Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics3>
    {
        int32_t __stdcall ShowManageAccountsForUserAsync(void* user, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShowManageAccountsForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowAddAccountForUserAsync(void* user, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShowAddAccountForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::ApplicationSettings::ICredentialCommand> : produce_base<D, Windows::UI::ApplicationSettings::ICredentialCommand>
    {
        int32_t __stdcall get_PasswordCredential(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Credentials::PasswordCredential>(this->shim().PasswordCredential());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CredentialDeleted(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler>(this->shim().CredentialDeleted());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::ApplicationSettings::ICredentialCommandFactory> : produce_base<D, Windows::UI::ApplicationSettings::ICredentialCommandFactory>
    {
        int32_t __stdcall CreateCredentialCommand(void* passwordCredential, void** instance) noexcept final try
        {
            clear_abi(instance);
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::UI::ApplicationSettings::CredentialCommand>(this->shim().CreateCredentialCommand(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&passwordCredential)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateCredentialCommandWithHandler(void* passwordCredential, void* deleted, void** instance) noexcept final try
        {
            clear_abi(instance);
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::UI::ApplicationSettings::CredentialCommand>(this->shim().CreateCredentialCommandWithHandler(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&passwordCredential), *reinterpret_cast<Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler const*>(&deleted)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::ApplicationSettings::ISettingsCommandFactory> : produce_base<D, Windows::UI::ApplicationSettings::ISettingsCommandFactory>
    {
        int32_t __stdcall CreateSettingsCommand(void* settingsCommandId, void* label, void* handler, void** instance) noexcept final try
        {
            clear_abi(instance);
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::UI::ApplicationSettings::SettingsCommand>(this->shim().CreateSettingsCommand(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&settingsCommandId), *reinterpret_cast<hstring const*>(&label), *reinterpret_cast<Windows::UI::Popups::UICommandInvokedHandler const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::ApplicationSettings::ISettingsCommandStatics> : produce_base<D, Windows::UI::ApplicationSettings::ISettingsCommandStatics>
    {
        int32_t __stdcall get_AccountsCommand(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::ApplicationSettings::SettingsCommand>(this->shim().AccountsCommand());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::ApplicationSettings::ISettingsPane> : produce_base<D, Windows::UI::ApplicationSettings::ISettingsPane>
    {
        int32_t __stdcall add_CommandsRequested(void* handler, winrt::event_token* cookie) noexcept final try
        {
            zero_abi<winrt::event_token>(cookie);
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<winrt::event_token>(this->shim().CommandsRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::ApplicationSettings::SettingsPane, Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_CommandsRequested(winrt::event_token cookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CommandsRequested(*reinterpret_cast<winrt::event_token const*>(&cookie));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest> : produce_base<D, Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest>
    {
        int32_t __stdcall get_ApplicationCommands(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::SettingsCommand>>(this->shim().ApplicationCommands());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs> : produce_base<D, Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs>
    {
        int32_t __stdcall get_Request(void** request) noexcept final try
        {
            clear_abi(request);
            typename D::abi_guard guard(this->shim());
            *request = detach_from<Windows::UI::ApplicationSettings::SettingsPaneCommandsRequest>(this->shim().Request());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::ApplicationSettings::ISettingsPaneStatics> : produce_base<D, Windows::UI::ApplicationSettings::ISettingsPaneStatics>
    {
        int32_t __stdcall GetForCurrentView(void** current) noexcept final try
        {
            clear_abi(current);
            typename D::abi_guard guard(this->shim());
            *current = detach_from<Windows::UI::ApplicationSettings::SettingsPane>(this->shim().GetForCurrentView());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Show() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Show();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Edge(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::ApplicationSettings::SettingsEdgeLocation>(this->shim().Edge());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::ApplicationSettings::IWebAccountCommand> : produce_base<D, Windows::UI::ApplicationSettings::IWebAccountCommand>
    {
        int32_t __stdcall get_WebAccount(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Credentials::WebAccount>(this->shim().WebAccount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Invoked(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler>(this->shim().Invoked());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Actions(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::ApplicationSettings::SupportedWebAccountActions>(this->shim().Actions());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::ApplicationSettings::IWebAccountCommandFactory> : produce_base<D, Windows::UI::ApplicationSettings::IWebAccountCommandFactory>
    {
        int32_t __stdcall CreateWebAccountCommand(void* webAccount, void* invoked, uint32_t actions, void** instance) noexcept final try
        {
            clear_abi(instance);
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::UI::ApplicationSettings::WebAccountCommand>(this->shim().CreateWebAccountCommand(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount), *reinterpret_cast<Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler const*>(&invoked), *reinterpret_cast<Windows::UI::ApplicationSettings::SupportedWebAccountActions const*>(&actions)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::ApplicationSettings::IWebAccountInvokedArgs> : produce_base<D, Windows::UI::ApplicationSettings::IWebAccountInvokedArgs>
    {
        int32_t __stdcall get_Action(int32_t* action) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_from<Windows::UI::ApplicationSettings::WebAccountAction>(this->shim().Action());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::ApplicationSettings::IWebAccountProviderCommand> : produce_base<D, Windows::UI::ApplicationSettings::IWebAccountProviderCommand>
    {
        int32_t __stdcall get_WebAccountProvider(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Credentials::WebAccountProvider>(this->shim().WebAccountProvider());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Invoked(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler>(this->shim().Invoked());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory> : produce_base<D, Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory>
    {
        int32_t __stdcall CreateWebAccountProviderCommand(void* webAccountProvider, void* invoked, void** instance) noexcept final try
        {
            clear_abi(instance);
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::UI::ApplicationSettings::WebAccountProviderCommand>(this->shim().CreateWebAccountProviderCommand(*reinterpret_cast<Windows::Security::Credentials::WebAccountProvider const*>(&webAccountProvider), *reinterpret_cast<Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler const*>(&invoked)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::UI::ApplicationSettings
{
    constexpr auto operator|(SupportedWebAccountActions const left, SupportedWebAccountActions const right) noexcept
    {
        return static_cast<SupportedWebAccountActions>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(SupportedWebAccountActions& left, SupportedWebAccountActions const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(SupportedWebAccountActions const left, SupportedWebAccountActions const right) noexcept
    {
        return static_cast<SupportedWebAccountActions>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(SupportedWebAccountActions& left, SupportedWebAccountActions const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(SupportedWebAccountActions const value) noexcept
    {
        return static_cast<SupportedWebAccountActions>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(SupportedWebAccountActions const left, SupportedWebAccountActions const right) noexcept
    {
        return static_cast<SupportedWebAccountActions>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(SupportedWebAccountActions& left, SupportedWebAccountActions const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline auto AccountsSettingsPane::GetForCurrentView()
    {
        return impl::call_factory<AccountsSettingsPane, Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics>([&](auto&& f) { return f.GetForCurrentView(); });
    }
    inline auto AccountsSettingsPane::Show()
    {
        impl::call_factory<AccountsSettingsPane, Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics>([&](auto&& f) { return f.Show(); });
    }
    inline auto AccountsSettingsPane::ShowManageAccountsAsync()
    {
        return impl::call_factory<AccountsSettingsPane, Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2>([&](auto&& f) { return f.ShowManageAccountsAsync(); });
    }
    inline auto AccountsSettingsPane::ShowAddAccountAsync()
    {
        return impl::call_factory<AccountsSettingsPane, Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2>([&](auto&& f) { return f.ShowAddAccountAsync(); });
    }
    inline auto AccountsSettingsPane::ShowManageAccountsForUserAsync(Windows::System::User const& user)
    {
        return impl::call_factory<AccountsSettingsPane, Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics3>([&](auto&& f) { return f.ShowManageAccountsForUserAsync(user); });
    }
    inline auto AccountsSettingsPane::ShowAddAccountForUserAsync(Windows::System::User const& user)
    {
        return impl::call_factory<AccountsSettingsPane, Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics3>([&](auto&& f) { return f.ShowAddAccountForUserAsync(user); });
    }
    inline CredentialCommand::CredentialCommand(Windows::Security::Credentials::PasswordCredential const& passwordCredential) :
        CredentialCommand(impl::call_factory<CredentialCommand, Windows::UI::ApplicationSettings::ICredentialCommandFactory>([&](auto&& f) { return f.CreateCredentialCommand(passwordCredential); }))
    {
    }
    inline CredentialCommand::CredentialCommand(Windows::Security::Credentials::PasswordCredential const& passwordCredential, Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler const& deleted) :
        CredentialCommand(impl::call_factory<CredentialCommand, Windows::UI::ApplicationSettings::ICredentialCommandFactory>([&](auto&& f) { return f.CreateCredentialCommandWithHandler(passwordCredential, deleted); }))
    {
    }
    inline SettingsCommand::SettingsCommand(Windows::Foundation::IInspectable const& settingsCommandId, param::hstring const& label, Windows::UI::Popups::UICommandInvokedHandler const& handler) :
        SettingsCommand(impl::call_factory<SettingsCommand, Windows::UI::ApplicationSettings::ISettingsCommandFactory>([&](auto&& f) { return f.CreateSettingsCommand(settingsCommandId, label, handler); }))
    {
    }
    inline auto SettingsCommand::AccountsCommand()
    {
        return impl::call_factory<SettingsCommand, Windows::UI::ApplicationSettings::ISettingsCommandStatics>([&](auto&& f) { return f.AccountsCommand(); });
    }
    inline auto SettingsPane::GetForCurrentView()
    {
        return impl::call_factory<SettingsPane, Windows::UI::ApplicationSettings::ISettingsPaneStatics>([&](auto&& f) { return f.GetForCurrentView(); });
    }
    inline auto SettingsPane::Show()
    {
        impl::call_factory<SettingsPane, Windows::UI::ApplicationSettings::ISettingsPaneStatics>([&](auto&& f) { return f.Show(); });
    }
    inline auto SettingsPane::Edge()
    {
        return impl::call_factory<SettingsPane, Windows::UI::ApplicationSettings::ISettingsPaneStatics>([&](auto&& f) { return f.Edge(); });
    }
    inline WebAccountCommand::WebAccountCommand(Windows::Security::Credentials::WebAccount const& webAccount, Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler const& invoked, Windows::UI::ApplicationSettings::SupportedWebAccountActions const& actions) :
        WebAccountCommand(impl::call_factory<WebAccountCommand, Windows::UI::ApplicationSettings::IWebAccountCommandFactory>([&](auto&& f) { return f.CreateWebAccountCommand(webAccount, invoked, actions); }))
    {
    }
    inline WebAccountProviderCommand::WebAccountProviderCommand(Windows::Security::Credentials::WebAccountProvider const& webAccountProvider, Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler const& invoked) :
        WebAccountProviderCommand(impl::call_factory<WebAccountProviderCommand, Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory>([&](auto&& f) { return f.CreateWebAccountProviderCommand(webAccountProvider, invoked); }))
    {
    }
    template <typename L> CredentialCommandCredentialDeletedHandler::CredentialCommandCredentialDeletedHandler(L handler) :
        CredentialCommandCredentialDeletedHandler(impl::make_delegate<CredentialCommandCredentialDeletedHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> CredentialCommandCredentialDeletedHandler::CredentialCommandCredentialDeletedHandler(F* handler) :
        CredentialCommandCredentialDeletedHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> CredentialCommandCredentialDeletedHandler::CredentialCommandCredentialDeletedHandler(O* object, M method) :
        CredentialCommandCredentialDeletedHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> CredentialCommandCredentialDeletedHandler::CredentialCommandCredentialDeletedHandler(com_ptr<O>&& object, M method) :
        CredentialCommandCredentialDeletedHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> CredentialCommandCredentialDeletedHandler::CredentialCommandCredentialDeletedHandler(weak_ref<O>&& object, M method) :
        CredentialCommandCredentialDeletedHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto CredentialCommandCredentialDeletedHandler::operator()(Windows::UI::ApplicationSettings::CredentialCommand const& command) const
    {
        check_hresult((*(impl::abi_t<CredentialCommandCredentialDeletedHandler>**)this)->Invoke(*(void**)(&command)));
    }
    template <typename L> WebAccountCommandInvokedHandler::WebAccountCommandInvokedHandler(L handler) :
        WebAccountCommandInvokedHandler(impl::make_delegate<WebAccountCommandInvokedHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> WebAccountCommandInvokedHandler::WebAccountCommandInvokedHandler(F* handler) :
        WebAccountCommandInvokedHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> WebAccountCommandInvokedHandler::WebAccountCommandInvokedHandler(O* object, M method) :
        WebAccountCommandInvokedHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> WebAccountCommandInvokedHandler::WebAccountCommandInvokedHandler(com_ptr<O>&& object, M method) :
        WebAccountCommandInvokedHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> WebAccountCommandInvokedHandler::WebAccountCommandInvokedHandler(weak_ref<O>&& object, M method) :
        WebAccountCommandInvokedHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto WebAccountCommandInvokedHandler::operator()(Windows::UI::ApplicationSettings::WebAccountCommand const& command, Windows::UI::ApplicationSettings::WebAccountInvokedArgs const& args) const
    {
        check_hresult((*(impl::abi_t<WebAccountCommandInvokedHandler>**)this)->Invoke(*(void**)(&command), *(void**)(&args)));
    }
    template <typename L> WebAccountProviderCommandInvokedHandler::WebAccountProviderCommandInvokedHandler(L handler) :
        WebAccountProviderCommandInvokedHandler(impl::make_delegate<WebAccountProviderCommandInvokedHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> WebAccountProviderCommandInvokedHandler::WebAccountProviderCommandInvokedHandler(F* handler) :
        WebAccountProviderCommandInvokedHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> WebAccountProviderCommandInvokedHandler::WebAccountProviderCommandInvokedHandler(O* object, M method) :
        WebAccountProviderCommandInvokedHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> WebAccountProviderCommandInvokedHandler::WebAccountProviderCommandInvokedHandler(com_ptr<O>&& object, M method) :
        WebAccountProviderCommandInvokedHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> WebAccountProviderCommandInvokedHandler::WebAccountProviderCommandInvokedHandler(weak_ref<O>&& object, M method) :
        WebAccountProviderCommandInvokedHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto WebAccountProviderCommandInvokedHandler::operator()(Windows::UI::ApplicationSettings::WebAccountProviderCommand const& command) const
    {
        check_hresult((*(impl::abi_t<WebAccountProviderCommandInvokedHandler>**)this)->Invoke(*(void**)(&command)));
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPane> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPane> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs2> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs2> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics3> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics3> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::ICredentialCommand> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::ICredentialCommand> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::ICredentialCommandFactory> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::ICredentialCommandFactory> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::ISettingsCommandFactory> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::ISettingsCommandFactory> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::ISettingsCommandStatics> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::ISettingsCommandStatics> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::ISettingsPane> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::ISettingsPane> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::ISettingsPaneStatics> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::ISettingsPaneStatics> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::IWebAccountCommand> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::IWebAccountCommand> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::IWebAccountCommandFactory> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::IWebAccountCommandFactory> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::IWebAccountInvokedArgs> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::IWebAccountInvokedArgs> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::IWebAccountProviderCommand> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::IWebAccountProviderCommand> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPane> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPane> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPaneEventDeferral> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPaneEventDeferral> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::CredentialCommand> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::CredentialCommand> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::SettingsCommand> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::SettingsCommand> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::SettingsPane> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::SettingsPane> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::SettingsPaneCommandsRequest> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::SettingsPaneCommandsRequest> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::WebAccountCommand> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::WebAccountCommand> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::WebAccountInvokedArgs> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::WebAccountInvokedArgs> {};
    template<> struct hash<winrt::Windows::UI::ApplicationSettings::WebAccountProviderCommand> : winrt::impl::hash_base<winrt::Windows::UI::ApplicationSettings::WebAccountProviderCommand> {};
}
#endif
