// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_ExtendedExecution_Foreground_H
#define WINRT_Windows_ApplicationModel_ExtendedExecution_Foreground_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.ApplicationModel.ExtendedExecution.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.ApplicationModel.ExtendedExecution.Foreground.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_ApplicationModel_ExtendedExecution_Foreground_IExtendedExecutionForegroundRevokedEventArgs<D>::Reason() const
    {
        Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedReason value;
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundRevokedEventArgs)->get_Reason(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_ApplicationModel_ExtendedExecution_Foreground_IExtendedExecutionForegroundSession<D>::Description() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession)->get_Description(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_ExtendedExecution_Foreground_IExtendedExecutionForegroundSession<D>::Description(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession)->put_Description(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ApplicationModel_ExtendedExecution_Foreground_IExtendedExecutionForegroundSession<D>::Revoked(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession)->add_Revoked(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_ExtendedExecution_Foreground_IExtendedExecutionForegroundSession<D>::Revoked_revoker consume_Windows_ApplicationModel_ExtendedExecution_Foreground_IExtendedExecutionForegroundSession<D>::Revoked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, Revoked_revoker>(this, Revoked(handler));
    }
    template <typename D> auto consume_Windows_ApplicationModel_ExtendedExecution_Foreground_IExtendedExecutionForegroundSession<D>::Revoked(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession)->remove_Revoked(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_ApplicationModel_ExtendedExecution_Foreground_IExtendedExecutionForegroundSession<D>::RequestExtensionAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession)->RequestExtensionAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_ExtendedExecution_Foreground_IExtendedExecutionForegroundSession<D>::Reason() const
    {
        Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundReason value;
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession)->get_Reason(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_ApplicationModel_ExtendedExecution_Foreground_IExtendedExecutionForegroundSession<D>::Reason(Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundReason const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession)->put_Reason(static_cast<int32_t>(value)));
    }
    template <typename D>
    struct produce<D, Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundRevokedEventArgs> : produce_base<D, Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundRevokedEventArgs>
    {
        int32_t __stdcall get_Reason(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedReason>(this->shim().Reason());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession> : produce_base<D, Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession>
    {
        int32_t __stdcall get_Description(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Description(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_Revoked(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Revoked(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Revoked(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Revoked(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall RequestExtensionAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundResult>>(this->shim().RequestExtensionAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Reason(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundReason>(this->shim().Reason());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Reason(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Reason(*reinterpret_cast<Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundReason const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::ApplicationModel::ExtendedExecution::Foreground
{
    inline ExtendedExecutionForegroundSession::ExtendedExecutionForegroundSession() :
        ExtendedExecutionForegroundSession(impl::call_factory<ExtendedExecutionForegroundSession>([](auto&& f) { return f.template ActivateInstance<ExtendedExecutionForegroundSession>(); }))
    {
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundRevokedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundRevokedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession> {};
    template<> struct hash<winrt::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundSession> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundSession> {};
}
#endif