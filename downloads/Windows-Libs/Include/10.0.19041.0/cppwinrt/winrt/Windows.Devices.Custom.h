// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Custom_H
#define WINRT_Windows_Devices_Custom_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Devices.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Devices.Custom.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Devices_Custom_ICustomDevice<D>::InputStream() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Custom::ICustomDevice)->get_InputStream(&value));
        return Windows::Storage::Streams::IInputStream{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Custom_ICustomDevice<D>::OutputStream() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Custom::ICustomDevice)->get_OutputStream(&value));
        return Windows::Storage::Streams::IOutputStream{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Custom_ICustomDevice<D>::SendIOControlAsync(Windows::Devices::Custom::IIOControlCode const& ioControlCode, Windows::Storage::Streams::IBuffer const& inputBuffer, Windows::Storage::Streams::IBuffer const& outputBuffer) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Custom::ICustomDevice)->SendIOControlAsync(*(void**)(&ioControlCode), *(void**)(&inputBuffer), *(void**)(&outputBuffer), &operation));
        return Windows::Foundation::IAsyncOperation<uint32_t>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Custom_ICustomDevice<D>::TrySendIOControlAsync(Windows::Devices::Custom::IIOControlCode const& ioControlCode, Windows::Storage::Streams::IBuffer const& inputBuffer, Windows::Storage::Streams::IBuffer const& outputBuffer) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Custom::ICustomDevice)->TrySendIOControlAsync(*(void**)(&ioControlCode), *(void**)(&inputBuffer), *(void**)(&outputBuffer), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Custom_ICustomDeviceStatics<D>::GetDeviceSelector(winrt::guid const& classGuid) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Custom::ICustomDeviceStatics)->GetDeviceSelector(impl::bind_in(classGuid), &value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Custom_ICustomDeviceStatics<D>::FromIdAsync(param::hstring const& deviceId, Windows::Devices::Custom::DeviceAccessMode const& desiredAccess, Windows::Devices::Custom::DeviceSharingMode const& sharingMode) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Custom::ICustomDeviceStatics)->FromIdAsync(*(void**)(&deviceId), static_cast<int32_t>(desiredAccess), static_cast<int32_t>(sharingMode), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Custom::CustomDevice>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Custom_IIOControlCode<D>::AccessMode() const
    {
        Windows::Devices::Custom::IOControlAccessMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Custom::IIOControlCode)->get_AccessMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Custom_IIOControlCode<D>::BufferingMethod() const
    {
        Windows::Devices::Custom::IOControlBufferingMethod value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Custom::IIOControlCode)->get_BufferingMethod(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Custom_IIOControlCode<D>::Function() const
    {
        uint16_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Custom::IIOControlCode)->get_Function(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Custom_IIOControlCode<D>::DeviceType() const
    {
        uint16_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Custom::IIOControlCode)->get_DeviceType(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Custom_IIOControlCode<D>::ControlCode() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Custom::IIOControlCode)->get_ControlCode(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Custom_IIOControlCodeFactory<D>::CreateIOControlCode(uint16_t deviceType, uint16_t function, Windows::Devices::Custom::IOControlAccessMode const& accessMode, Windows::Devices::Custom::IOControlBufferingMethod const& bufferingMethod) const
    {
        void* instance{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Custom::IIOControlCodeFactory)->CreateIOControlCode(deviceType, function, static_cast<int32_t>(accessMode), static_cast<int32_t>(bufferingMethod), &instance));
        return Windows::Devices::Custom::IOControlCode{ instance, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Custom_IKnownDeviceTypesStatics<D>::Unknown() const
    {
        uint16_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Custom::IKnownDeviceTypesStatics)->get_Unknown(&value));
        return value;
    }
    template <typename D>
    struct produce<D, Windows::Devices::Custom::ICustomDevice> : produce_base<D, Windows::Devices::Custom::ICustomDevice>
    {
        int32_t __stdcall get_InputStream(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IInputStream>(this->shim().InputStream());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OutputStream(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IOutputStream>(this->shim().OutputStream());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SendIOControlAsync(void* ioControlCode, void* inputBuffer, void* outputBuffer, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<uint32_t>>(this->shim().SendIOControlAsync(*reinterpret_cast<Windows::Devices::Custom::IIOControlCode const*>(&ioControlCode), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&inputBuffer), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&outputBuffer)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TrySendIOControlAsync(void* ioControlCode, void* inputBuffer, void* outputBuffer, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TrySendIOControlAsync(*reinterpret_cast<Windows::Devices::Custom::IIOControlCode const*>(&ioControlCode), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&inputBuffer), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&outputBuffer)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Custom::ICustomDeviceStatics> : produce_base<D, Windows::Devices::Custom::ICustomDeviceStatics>
    {
        int32_t __stdcall GetDeviceSelector(winrt::guid classGuid, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GetDeviceSelector(*reinterpret_cast<winrt::guid const*>(&classGuid)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FromIdAsync(void* deviceId, int32_t desiredAccess, int32_t sharingMode, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Custom::CustomDevice>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<Windows::Devices::Custom::DeviceAccessMode const*>(&desiredAccess), *reinterpret_cast<Windows::Devices::Custom::DeviceSharingMode const*>(&sharingMode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Custom::IIOControlCode> : produce_base<D, Windows::Devices::Custom::IIOControlCode>
    {
        int32_t __stdcall get_AccessMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Custom::IOControlAccessMode>(this->shim().AccessMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BufferingMethod(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Custom::IOControlBufferingMethod>(this->shim().BufferingMethod());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Function(uint16_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().Function());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DeviceType(uint16_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().DeviceType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ControlCode(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ControlCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Custom::IIOControlCodeFactory> : produce_base<D, Windows::Devices::Custom::IIOControlCodeFactory>
    {
        int32_t __stdcall CreateIOControlCode(uint16_t deviceType, uint16_t function, int32_t accessMode, int32_t bufferingMethod, void** instance) noexcept final try
        {
            clear_abi(instance);
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::Devices::Custom::IOControlCode>(this->shim().CreateIOControlCode(deviceType, function, *reinterpret_cast<Windows::Devices::Custom::IOControlAccessMode const*>(&accessMode), *reinterpret_cast<Windows::Devices::Custom::IOControlBufferingMethod const*>(&bufferingMethod)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Custom::IKnownDeviceTypesStatics> : produce_base<D, Windows::Devices::Custom::IKnownDeviceTypesStatics>
    {
        int32_t __stdcall get_Unknown(uint16_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().Unknown());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Devices::Custom
{
    inline auto CustomDevice::GetDeviceSelector(winrt::guid const& classGuid)
    {
        return impl::call_factory<CustomDevice, Windows::Devices::Custom::ICustomDeviceStatics>([&](auto&& f) { return f.GetDeviceSelector(classGuid); });
    }
    inline auto CustomDevice::FromIdAsync(param::hstring const& deviceId, Windows::Devices::Custom::DeviceAccessMode const& desiredAccess, Windows::Devices::Custom::DeviceSharingMode const& sharingMode)
    {
        return impl::call_factory<CustomDevice, Windows::Devices::Custom::ICustomDeviceStatics>([&](auto&& f) { return f.FromIdAsync(deviceId, desiredAccess, sharingMode); });
    }
    inline IOControlCode::IOControlCode(uint16_t deviceType, uint16_t function, Windows::Devices::Custom::IOControlAccessMode const& accessMode, Windows::Devices::Custom::IOControlBufferingMethod const& bufferingMethod) :
        IOControlCode(impl::call_factory<IOControlCode, Windows::Devices::Custom::IIOControlCodeFactory>([&](auto&& f) { return f.CreateIOControlCode(deviceType, function, accessMode, bufferingMethod); }))
    {
    }
    inline auto KnownDeviceTypes::Unknown()
    {
        return impl::call_factory<KnownDeviceTypes, Windows::Devices::Custom::IKnownDeviceTypesStatics>([&](auto&& f) { return f.Unknown(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Devices::Custom::ICustomDevice> : winrt::impl::hash_base<winrt::Windows::Devices::Custom::ICustomDevice> {};
    template<> struct hash<winrt::Windows::Devices::Custom::ICustomDeviceStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Custom::ICustomDeviceStatics> {};
    template<> struct hash<winrt::Windows::Devices::Custom::IIOControlCode> : winrt::impl::hash_base<winrt::Windows::Devices::Custom::IIOControlCode> {};
    template<> struct hash<winrt::Windows::Devices::Custom::IIOControlCodeFactory> : winrt::impl::hash_base<winrt::Windows::Devices::Custom::IIOControlCodeFactory> {};
    template<> struct hash<winrt::Windows::Devices::Custom::IKnownDeviceTypesStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Custom::IKnownDeviceTypesStatics> {};
    template<> struct hash<winrt::Windows::Devices::Custom::CustomDevice> : winrt::impl::hash_base<winrt::Windows::Devices::Custom::CustomDevice> {};
    template<> struct hash<winrt::Windows::Devices::Custom::IOControlCode> : winrt::impl::hash_base<winrt::Windows::Devices::Custom::IOControlCode> {};
    template<> struct hash<winrt::Windows::Devices::Custom::KnownDeviceTypes> : winrt::impl::hash_base<winrt::Windows::Devices::Custom::KnownDeviceTypes> {};
}
#endif
