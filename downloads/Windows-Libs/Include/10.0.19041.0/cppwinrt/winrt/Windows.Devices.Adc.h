// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Adc_H
#define WINRT_Windows_Devices_Adc_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Devices.h"
#include "winrt/impl/Windows.Devices.Adc.Provider.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Devices.Adc.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Devices_Adc_IAdcChannel<D>::Controller() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Adc::IAdcChannel)->get_Controller(&value));
        return Windows::Devices::Adc::AdcController{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Adc_IAdcChannel<D>::ReadValue() const
    {
        int32_t result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Adc::IAdcChannel)->ReadValue(&result));
        return result;
    }
    template <typename D> auto consume_Windows_Devices_Adc_IAdcChannel<D>::ReadRatio() const
    {
        double result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Adc::IAdcChannel)->ReadRatio(&result));
        return result;
    }
    template <typename D> auto consume_Windows_Devices_Adc_IAdcController<D>::ChannelCount() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Adc::IAdcController)->get_ChannelCount(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Adc_IAdcController<D>::ResolutionInBits() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Adc::IAdcController)->get_ResolutionInBits(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Adc_IAdcController<D>::MinValue() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Adc::IAdcController)->get_MinValue(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Adc_IAdcController<D>::MaxValue() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Adc::IAdcController)->get_MaxValue(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Adc_IAdcController<D>::ChannelMode() const
    {
        Windows::Devices::Adc::AdcChannelMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Adc::IAdcController)->get_ChannelMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Adc_IAdcController<D>::ChannelMode(Windows::Devices::Adc::AdcChannelMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Adc::IAdcController)->put_ChannelMode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Devices_Adc_IAdcController<D>::IsChannelModeSupported(Windows::Devices::Adc::AdcChannelMode const& channelMode) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Adc::IAdcController)->IsChannelModeSupported(static_cast<int32_t>(channelMode), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Devices_Adc_IAdcController<D>::OpenChannel(int32_t channelNumber) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Adc::IAdcController)->OpenChannel(channelNumber, &result));
        return Windows::Devices::Adc::AdcChannel{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Adc_IAdcControllerStatics<D>::GetControllersAsync(Windows::Devices::Adc::Provider::IAdcProvider const& provider) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Adc::IAdcControllerStatics)->GetControllersAsync(*(void**)(&provider), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Adc::AdcController>>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Adc_IAdcControllerStatics2<D>::GetDefaultAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Adc::IAdcControllerStatics2)->GetDefaultAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Adc::AdcController>{ operation, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::Devices::Adc::IAdcChannel> : produce_base<D, Windows::Devices::Adc::IAdcChannel>
    {
        int32_t __stdcall get_Controller(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Adc::AdcController>(this->shim().Controller());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ReadValue(int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().ReadValue());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ReadRatio(double* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<double>(this->shim().ReadRatio());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Adc::IAdcController> : produce_base<D, Windows::Devices::Adc::IAdcController>
    {
        int32_t __stdcall get_ChannelCount(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ChannelCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ResolutionInBits(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ResolutionInBits());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MinValue(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().MinValue());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxValue(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().MaxValue());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ChannelMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Adc::AdcChannelMode>(this->shim().ChannelMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ChannelMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ChannelMode(*reinterpret_cast<Windows::Devices::Adc::AdcChannelMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsChannelModeSupported(int32_t channelMode, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsChannelModeSupported(*reinterpret_cast<Windows::Devices::Adc::AdcChannelMode const*>(&channelMode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall OpenChannel(int32_t channelNumber, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Adc::AdcChannel>(this->shim().OpenChannel(channelNumber));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Adc::IAdcControllerStatics> : produce_base<D, Windows::Devices::Adc::IAdcControllerStatics>
    {
        int32_t __stdcall GetControllersAsync(void* provider, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Adc::AdcController>>>(this->shim().GetControllersAsync(*reinterpret_cast<Windows::Devices::Adc::Provider::IAdcProvider const*>(&provider)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Adc::IAdcControllerStatics2> : produce_base<D, Windows::Devices::Adc::IAdcControllerStatics2>
    {
        int32_t __stdcall GetDefaultAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Adc::AdcController>>(this->shim().GetDefaultAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Devices::Adc
{
    inline auto AdcController::GetControllersAsync(Windows::Devices::Adc::Provider::IAdcProvider const& provider)
    {
        return impl::call_factory<AdcController, Windows::Devices::Adc::IAdcControllerStatics>([&](auto&& f) { return f.GetControllersAsync(provider); });
    }
    inline auto AdcController::GetDefaultAsync()
    {
        return impl::call_factory<AdcController, Windows::Devices::Adc::IAdcControllerStatics2>([&](auto&& f) { return f.GetDefaultAsync(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Devices::Adc::IAdcChannel> : winrt::impl::hash_base<winrt::Windows::Devices::Adc::IAdcChannel> {};
    template<> struct hash<winrt::Windows::Devices::Adc::IAdcController> : winrt::impl::hash_base<winrt::Windows::Devices::Adc::IAdcController> {};
    template<> struct hash<winrt::Windows::Devices::Adc::IAdcControllerStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Adc::IAdcControllerStatics> {};
    template<> struct hash<winrt::Windows::Devices::Adc::IAdcControllerStatics2> : winrt::impl::hash_base<winrt::Windows::Devices::Adc::IAdcControllerStatics2> {};
    template<> struct hash<winrt::Windows::Devices::Adc::AdcChannel> : winrt::impl::hash_base<winrt::Windows::Devices::Adc::AdcChannel> {};
    template<> struct hash<winrt::Windows::Devices::Adc::AdcController> : winrt::impl::hash_base<winrt::Windows::Devices::Adc::AdcController> {};
}
#endif
