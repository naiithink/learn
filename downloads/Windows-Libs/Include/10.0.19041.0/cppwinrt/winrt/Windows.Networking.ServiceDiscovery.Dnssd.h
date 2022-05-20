// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Networking_ServiceDiscovery_Dnssd_H
#define WINRT_Windows_Networking_ServiceDiscovery_Dnssd_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Networking.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Networking.2.h"
#include "winrt/impl/Windows.Networking.Connectivity.2.h"
#include "winrt/impl/Windows.Networking.Sockets.2.h"
#include "winrt/impl/Windows.Networking.ServiceDiscovery.Dnssd.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdRegistrationResult<D>::Status() const
    {
        Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationStatus value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult)->get_Status(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdRegistrationResult<D>::IPAddress() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult)->get_IPAddress(&value));
        return Windows::Networking::HostName{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdRegistrationResult<D>::HasInstanceNameChanged() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult)->get_HasInstanceNameChanged(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::DnssdServiceInstanceName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->get_DnssdServiceInstanceName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::DnssdServiceInstanceName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->put_DnssdServiceInstanceName(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::HostName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->get_HostName(&value));
        return Windows::Networking::HostName{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::HostName(Windows::Networking::HostName const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->put_HostName(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::Port() const
    {
        uint16_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->get_Port(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::Port(uint16_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->put_Port(value));
    }
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::Priority() const
    {
        uint16_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->get_Priority(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::Priority(uint16_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->put_Priority(value));
    }
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::Weight() const
    {
        uint16_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->get_Weight(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::Weight(uint16_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->put_Weight(value));
    }
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::TextAttributes() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->get_TextAttributes(&value));
        return Windows::Foundation::Collections::IMap<hstring, hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::RegisterStreamSocketListenerAsync(Windows::Networking::Sockets::StreamSocketListener const& socket) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->RegisterStreamSocketListenerAsync1(*(void**)(&socket), &result));
        return Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::RegisterStreamSocketListenerAsync(Windows::Networking::Sockets::StreamSocketListener const& socket, Windows::Networking::Connectivity::NetworkAdapter const& adapter) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->RegisterStreamSocketListenerAsync2(*(void**)(&socket), *(void**)(&adapter), &result));
        return Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::RegisterDatagramSocketAsync(Windows::Networking::Sockets::DatagramSocket const& socket) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->RegisterDatagramSocketAsync1(*(void**)(&socket), &result));
        return Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::RegisterDatagramSocketAsync(Windows::Networking::Sockets::DatagramSocket const& socket, Windows::Networking::Connectivity::NetworkAdapter const& adapter) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->RegisterDatagramSocketAsync2(*(void**)(&socket), *(void**)(&adapter), &result));
        return Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstanceFactory<D>::Create(param::hstring const& dnssdServiceInstanceName, Windows::Networking::HostName const& hostName, uint16_t port) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory)->Create(*(void**)(&dnssdServiceInstanceName), *(void**)(&hostName), port, &result));
        return Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>::Added(Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher)->add_Added(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>::Added_revoker consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>::Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> const& handler) const
    {
        return impl::make_event_revoker<D, Added_revoker>(this, Added(handler));
    }
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>::Added(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher)->remove_Added(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>::EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher)->add_EnumerationCompleted(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>::EnumerationCompleted_revoker consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>::EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, EnumerationCompleted_revoker>(this, EnumerationCompleted(handler));
    }
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>::EnumerationCompleted(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher)->remove_EnumerationCompleted(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>::Stopped(Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher)->add_Stopped(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>::Stopped_revoker consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>::Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, Stopped_revoker>(this, Stopped(handler));
    }
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>::Stopped(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher)->remove_Stopped(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>::Status() const
    {
        Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcherStatus status;
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher)->get_Status(put_abi(status)));
        return status;
    }
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>::Start() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher)->Start());
    }
    template <typename D> auto consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>::Stop() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher)->Stop());
    }
    template <typename D>
    struct produce<D, Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult> : produce_base<D, Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IPAddress(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::HostName>(this->shim().IPAddress());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HasInstanceNameChanged(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasInstanceNameChanged());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance> : produce_base<D, Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance>
    {
        int32_t __stdcall get_DnssdServiceInstanceName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DnssdServiceInstanceName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DnssdServiceInstanceName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DnssdServiceInstanceName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HostName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::HostName>(this->shim().HostName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_HostName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HostName(*reinterpret_cast<Windows::Networking::HostName const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Port(uint16_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().Port());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Port(uint16_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Port(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Priority(uint16_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().Priority());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Priority(uint16_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Priority(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Weight(uint16_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().Weight());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Weight(uint16_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Weight(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TextAttributes(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMap<hstring, hstring>>(this->shim().TextAttributes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RegisterStreamSocketListenerAsync1(void* socket, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult>>(this->shim().RegisterStreamSocketListenerAsync(*reinterpret_cast<Windows::Networking::Sockets::StreamSocketListener const*>(&socket)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RegisterStreamSocketListenerAsync2(void* socket, void* adapter, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult>>(this->shim().RegisterStreamSocketListenerAsync(*reinterpret_cast<Windows::Networking::Sockets::StreamSocketListener const*>(&socket), *reinterpret_cast<Windows::Networking::Connectivity::NetworkAdapter const*>(&adapter)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RegisterDatagramSocketAsync1(void* socket, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult>>(this->shim().RegisterDatagramSocketAsync(*reinterpret_cast<Windows::Networking::Sockets::DatagramSocket const*>(&socket)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RegisterDatagramSocketAsync2(void* socket, void* adapter, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult>>(this->shim().RegisterDatagramSocketAsync(*reinterpret_cast<Windows::Networking::Sockets::DatagramSocket const*>(&socket), *reinterpret_cast<Windows::Networking::Connectivity::NetworkAdapter const*>(&adapter)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory> : produce_base<D, Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory>
    {
        int32_t __stdcall Create(void* dnssdServiceInstanceName, void* hostName, uint16_t port, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance>(this->shim().Create(*reinterpret_cast<hstring const*>(&dnssdServiceInstanceName), *reinterpret_cast<Windows::Networking::HostName const*>(&hostName), port));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher> : produce_base<D, Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>
    {
        int32_t __stdcall add_Added(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Added(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Added(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Added(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_EnumerationCompleted(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().EnumerationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_EnumerationCompleted(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnumerationCompleted(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_Stopped(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Stopped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Stopped(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stopped(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_Status(int32_t* status) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_from<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcherStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Start() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Stop() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Networking::ServiceDiscovery::Dnssd
{
    inline DnssdRegistrationResult::DnssdRegistrationResult() :
        DnssdRegistrationResult(impl::call_factory<DnssdRegistrationResult>([](auto&& f) { return f.template ActivateInstance<DnssdRegistrationResult>(); }))
    {
    }
    inline DnssdServiceInstance::DnssdServiceInstance(param::hstring const& dnssdServiceInstanceName, Windows::Networking::HostName const& hostName, uint16_t port) :
        DnssdServiceInstance(impl::call_factory<DnssdServiceInstance, Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory>([&](auto&& f) { return f.Create(dnssdServiceInstanceName, hostName, port); }))
    {
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult> : winrt::impl::hash_base<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult> {};
    template<> struct hash<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance> : winrt::impl::hash_base<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance> {};
    template<> struct hash<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory> : winrt::impl::hash_base<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory> {};
    template<> struct hash<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher> : winrt::impl::hash_base<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher> {};
    template<> struct hash<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> : winrt::impl::hash_base<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> {};
    template<> struct hash<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> : winrt::impl::hash_base<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> {};
    template<> struct hash<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection> : winrt::impl::hash_base<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection> {};
    template<> struct hash<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher> : winrt::impl::hash_base<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher> {};
}
#endif
