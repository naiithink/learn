// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Gpio_H
#define WINRT_Windows_Devices_Gpio_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Devices.h"
#include "winrt/impl/Windows.Devices.Gpio.Provider.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Devices.Gpio.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioChangeCounter<D>::Polarity(Windows::Devices::Gpio::GpioChangePolarity const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioChangeCounter)->put_Polarity(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioChangeCounter<D>::Polarity() const
    {
        Windows::Devices::Gpio::GpioChangePolarity value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioChangeCounter)->get_Polarity(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioChangeCounter<D>::IsStarted() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioChangeCounter)->get_IsStarted(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioChangeCounter<D>::Start() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioChangeCounter)->Start());
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioChangeCounter<D>::Stop() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioChangeCounter)->Stop());
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioChangeCounter<D>::Read() const
    {
        Windows::Devices::Gpio::GpioChangeCount value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioChangeCounter)->Read(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioChangeCounter<D>::Reset() const
    {
        Windows::Devices::Gpio::GpioChangeCount value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioChangeCounter)->Reset(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioChangeCounterFactory<D>::Create(Windows::Devices::Gpio::GpioPin const& pin) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioChangeCounterFactory)->Create(*(void**)(&pin), &value));
        return Windows::Devices::Gpio::GpioChangeCounter{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioChangeReader<D>::Capacity() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->get_Capacity(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioChangeReader<D>::Length() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->get_Length(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioChangeReader<D>::IsEmpty() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->get_IsEmpty(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioChangeReader<D>::IsOverflowed() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->get_IsOverflowed(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioChangeReader<D>::Polarity(Windows::Devices::Gpio::GpioChangePolarity const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->put_Polarity(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioChangeReader<D>::Polarity() const
    {
        Windows::Devices::Gpio::GpioChangePolarity value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->get_Polarity(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioChangeReader<D>::IsStarted() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->get_IsStarted(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioChangeReader<D>::Start() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->Start());
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioChangeReader<D>::Stop() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->Stop());
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioChangeReader<D>::Clear() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->Clear());
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioChangeReader<D>::GetNextItem() const
    {
        Windows::Devices::Gpio::GpioChangeRecord value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->GetNextItem(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioChangeReader<D>::PeekNextItem() const
    {
        Windows::Devices::Gpio::GpioChangeRecord value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->PeekNextItem(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioChangeReader<D>::GetAllItems() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->GetAllItems(&value));
        return Windows::Foundation::Collections::IVector<Windows::Devices::Gpio::GpioChangeRecord>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioChangeReader<D>::WaitForItemsAsync(int32_t count) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->WaitForItemsAsync(count, &operation));
        return Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioChangeReaderFactory<D>::Create(Windows::Devices::Gpio::GpioPin const& pin) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioChangeReaderFactory)->Create(*(void**)(&pin), &value));
        return Windows::Devices::Gpio::GpioChangeReader{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioChangeReaderFactory<D>::CreateWithCapacity(Windows::Devices::Gpio::GpioPin const& pin, int32_t minCapacity) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioChangeReaderFactory)->CreateWithCapacity(*(void**)(&pin), minCapacity, &value));
        return Windows::Devices::Gpio::GpioChangeReader{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioController<D>::PinCount() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioController)->get_PinCount(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioController<D>::OpenPin(int32_t pinNumber) const
    {
        void* pin{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioController)->OpenPin(pinNumber, &pin));
        return Windows::Devices::Gpio::GpioPin{ pin, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioController<D>::OpenPin(int32_t pinNumber, Windows::Devices::Gpio::GpioSharingMode const& sharingMode) const
    {
        void* pin{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioController)->OpenPinWithSharingMode(pinNumber, static_cast<int32_t>(sharingMode), &pin));
        return Windows::Devices::Gpio::GpioPin{ pin, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioController<D>::TryOpenPin(int32_t pinNumber, Windows::Devices::Gpio::GpioSharingMode const& sharingMode, Windows::Devices::Gpio::GpioPin& pin, Windows::Devices::Gpio::GpioOpenStatus& openStatus) const
    {
        bool succeeded;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioController)->TryOpenPin(pinNumber, static_cast<int32_t>(sharingMode), impl::bind_out(pin), impl::bind_out(openStatus), &succeeded));
        return succeeded;
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioControllerStatics<D>::GetDefault() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioControllerStatics)->GetDefault(&value));
        return Windows::Devices::Gpio::GpioController{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioControllerStatics2<D>::GetControllersAsync(Windows::Devices::Gpio::Provider::IGpioProvider const& provider) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioControllerStatics2)->GetControllersAsync(*(void**)(&provider), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Gpio::GpioController>>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioControllerStatics2<D>::GetDefaultAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioControllerStatics2)->GetDefaultAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Gpio::GpioController>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioPin<D>::ValueChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::GpioPin, Windows::Devices::Gpio::GpioPinValueChangedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioPin)->add_ValueChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Gpio_IGpioPin<D>::ValueChanged_revoker consume_Windows_Devices_Gpio_IGpioPin<D>::ValueChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::GpioPin, Windows::Devices::Gpio::GpioPinValueChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, ValueChanged_revoker>(this, ValueChanged(handler));
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioPin<D>::ValueChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioPin)->remove_ValueChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioPin<D>::DebounceTimeout() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioPin)->get_DebounceTimeout(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioPin<D>::DebounceTimeout(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioPin)->put_DebounceTimeout(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioPin<D>::PinNumber() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioPin)->get_PinNumber(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioPin<D>::SharingMode() const
    {
        Windows::Devices::Gpio::GpioSharingMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioPin)->get_SharingMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioPin<D>::IsDriveModeSupported(Windows::Devices::Gpio::GpioPinDriveMode const& driveMode) const
    {
        bool supported;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioPin)->IsDriveModeSupported(static_cast<int32_t>(driveMode), &supported));
        return supported;
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioPin<D>::GetDriveMode() const
    {
        Windows::Devices::Gpio::GpioPinDriveMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioPin)->GetDriveMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioPin<D>::SetDriveMode(Windows::Devices::Gpio::GpioPinDriveMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioPin)->SetDriveMode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioPin<D>::Write(Windows::Devices::Gpio::GpioPinValue const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioPin)->Write(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioPin<D>::Read() const
    {
        Windows::Devices::Gpio::GpioPinValue value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioPin)->Read(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Gpio_IGpioPinValueChangedEventArgs<D>::Edge() const
    {
        Windows::Devices::Gpio::GpioPinEdge value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Gpio::IGpioPinValueChangedEventArgs)->get_Edge(put_abi(value)));
        return value;
    }
    template <typename D>
    struct produce<D, Windows::Devices::Gpio::IGpioChangeCounter> : produce_base<D, Windows::Devices::Gpio::IGpioChangeCounter>
    {
        int32_t __stdcall put_Polarity(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Polarity(*reinterpret_cast<Windows::Devices::Gpio::GpioChangePolarity const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Polarity(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Gpio::GpioChangePolarity>(this->shim().Polarity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsStarted(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsStarted());
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
        int32_t __stdcall Read(struct struct_Windows_Devices_Gpio_GpioChangeCount* value) noexcept final try
        {
            zero_abi<Windows::Devices::Gpio::GpioChangeCount>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Gpio::GpioChangeCount>(this->shim().Read());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Reset(struct struct_Windows_Devices_Gpio_GpioChangeCount* value) noexcept final try
        {
            zero_abi<Windows::Devices::Gpio::GpioChangeCount>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Gpio::GpioChangeCount>(this->shim().Reset());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Gpio::IGpioChangeCounterFactory> : produce_base<D, Windows::Devices::Gpio::IGpioChangeCounterFactory>
    {
        int32_t __stdcall Create(void* pin, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Gpio::GpioChangeCounter>(this->shim().Create(*reinterpret_cast<Windows::Devices::Gpio::GpioPin const*>(&pin)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Gpio::IGpioChangeReader> : produce_base<D, Windows::Devices::Gpio::IGpioChangeReader>
    {
        int32_t __stdcall get_Capacity(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Capacity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Length(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Length());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsEmpty(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsEmpty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsOverflowed(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsOverflowed());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Polarity(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Polarity(*reinterpret_cast<Windows::Devices::Gpio::GpioChangePolarity const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Polarity(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Gpio::GpioChangePolarity>(this->shim().Polarity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsStarted(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsStarted());
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
        int32_t __stdcall Clear() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clear();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetNextItem(struct struct_Windows_Devices_Gpio_GpioChangeRecord* value) noexcept final try
        {
            zero_abi<Windows::Devices::Gpio::GpioChangeRecord>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Gpio::GpioChangeRecord>(this->shim().GetNextItem());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall PeekNextItem(struct struct_Windows_Devices_Gpio_GpioChangeRecord* value) noexcept final try
        {
            zero_abi<Windows::Devices::Gpio::GpioChangeRecord>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Gpio::GpioChangeRecord>(this->shim().PeekNextItem());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAllItems(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Devices::Gpio::GpioChangeRecord>>(this->shim().GetAllItems());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall WaitForItemsAsync(int32_t count, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().WaitForItemsAsync(count));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Gpio::IGpioChangeReaderFactory> : produce_base<D, Windows::Devices::Gpio::IGpioChangeReaderFactory>
    {
        int32_t __stdcall Create(void* pin, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Gpio::GpioChangeReader>(this->shim().Create(*reinterpret_cast<Windows::Devices::Gpio::GpioPin const*>(&pin)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithCapacity(void* pin, int32_t minCapacity, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Gpio::GpioChangeReader>(this->shim().CreateWithCapacity(*reinterpret_cast<Windows::Devices::Gpio::GpioPin const*>(&pin), minCapacity));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Gpio::IGpioController> : produce_base<D, Windows::Devices::Gpio::IGpioController>
    {
        int32_t __stdcall get_PinCount(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().PinCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall OpenPin(int32_t pinNumber, void** pin) noexcept final try
        {
            clear_abi(pin);
            typename D::abi_guard guard(this->shim());
            *pin = detach_from<Windows::Devices::Gpio::GpioPin>(this->shim().OpenPin(pinNumber));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall OpenPinWithSharingMode(int32_t pinNumber, int32_t sharingMode, void** pin) noexcept final try
        {
            clear_abi(pin);
            typename D::abi_guard guard(this->shim());
            *pin = detach_from<Windows::Devices::Gpio::GpioPin>(this->shim().OpenPin(pinNumber, *reinterpret_cast<Windows::Devices::Gpio::GpioSharingMode const*>(&sharingMode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryOpenPin(int32_t pinNumber, int32_t sharingMode, void** pin, int32_t* openStatus, bool* succeeded) noexcept final try
        {
            clear_abi(pin);
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TryOpenPin(pinNumber, *reinterpret_cast<Windows::Devices::Gpio::GpioSharingMode const*>(&sharingMode), *reinterpret_cast<Windows::Devices::Gpio::GpioPin*>(pin), *reinterpret_cast<Windows::Devices::Gpio::GpioOpenStatus*>(openStatus)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Gpio::IGpioControllerStatics> : produce_base<D, Windows::Devices::Gpio::IGpioControllerStatics>
    {
        int32_t __stdcall GetDefault(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Gpio::GpioController>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Gpio::IGpioControllerStatics2> : produce_base<D, Windows::Devices::Gpio::IGpioControllerStatics2>
    {
        int32_t __stdcall GetControllersAsync(void* provider, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Gpio::GpioController>>>(this->shim().GetControllersAsync(*reinterpret_cast<Windows::Devices::Gpio::Provider::IGpioProvider const*>(&provider)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDefaultAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Gpio::GpioController>>(this->shim().GetDefaultAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Gpio::IGpioPin> : produce_base<D, Windows::Devices::Gpio::IGpioPin>
    {
        int32_t __stdcall add_ValueChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ValueChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::GpioPin, Windows::Devices::Gpio::GpioPinValueChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ValueChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ValueChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_DebounceTimeout(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().DebounceTimeout());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DebounceTimeout(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DebounceTimeout(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PinNumber(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().PinNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SharingMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Gpio::GpioSharingMode>(this->shim().SharingMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsDriveModeSupported(int32_t driveMode, bool* supported) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *supported = detach_from<bool>(this->shim().IsDriveModeSupported(*reinterpret_cast<Windows::Devices::Gpio::GpioPinDriveMode const*>(&driveMode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDriveMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Gpio::GpioPinDriveMode>(this->shim().GetDriveMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetDriveMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDriveMode(*reinterpret_cast<Windows::Devices::Gpio::GpioPinDriveMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Write(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Write(*reinterpret_cast<Windows::Devices::Gpio::GpioPinValue const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Read(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Gpio::GpioPinValue>(this->shim().Read());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Gpio::IGpioPinValueChangedEventArgs> : produce_base<D, Windows::Devices::Gpio::IGpioPinValueChangedEventArgs>
    {
        int32_t __stdcall get_Edge(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Gpio::GpioPinEdge>(this->shim().Edge());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Devices::Gpio
{
    inline GpioChangeCounter::GpioChangeCounter(Windows::Devices::Gpio::GpioPin const& pin) :
        GpioChangeCounter(impl::call_factory<GpioChangeCounter, Windows::Devices::Gpio::IGpioChangeCounterFactory>([&](auto&& f) { return f.Create(pin); }))
    {
    }
    inline GpioChangeReader::GpioChangeReader(Windows::Devices::Gpio::GpioPin const& pin) :
        GpioChangeReader(impl::call_factory<GpioChangeReader, Windows::Devices::Gpio::IGpioChangeReaderFactory>([&](auto&& f) { return f.Create(pin); }))
    {
    }
    inline GpioChangeReader::GpioChangeReader(Windows::Devices::Gpio::GpioPin const& pin, int32_t minCapacity) :
        GpioChangeReader(impl::call_factory<GpioChangeReader, Windows::Devices::Gpio::IGpioChangeReaderFactory>([&](auto&& f) { return f.CreateWithCapacity(pin, minCapacity); }))
    {
    }
    inline auto GpioController::GetDefault()
    {
        return impl::call_factory<GpioController, Windows::Devices::Gpio::IGpioControllerStatics>([&](auto&& f) { return f.GetDefault(); });
    }
    inline auto GpioController::GetControllersAsync(Windows::Devices::Gpio::Provider::IGpioProvider const& provider)
    {
        return impl::call_factory<GpioController, Windows::Devices::Gpio::IGpioControllerStatics2>([&](auto&& f) { return f.GetControllersAsync(provider); });
    }
    inline auto GpioController::GetDefaultAsync()
    {
        return impl::call_factory<GpioController, Windows::Devices::Gpio::IGpioControllerStatics2>([&](auto&& f) { return f.GetDefaultAsync(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Devices::Gpio::IGpioChangeCounter> : winrt::impl::hash_base<winrt::Windows::Devices::Gpio::IGpioChangeCounter> {};
    template<> struct hash<winrt::Windows::Devices::Gpio::IGpioChangeCounterFactory> : winrt::impl::hash_base<winrt::Windows::Devices::Gpio::IGpioChangeCounterFactory> {};
    template<> struct hash<winrt::Windows::Devices::Gpio::IGpioChangeReader> : winrt::impl::hash_base<winrt::Windows::Devices::Gpio::IGpioChangeReader> {};
    template<> struct hash<winrt::Windows::Devices::Gpio::IGpioChangeReaderFactory> : winrt::impl::hash_base<winrt::Windows::Devices::Gpio::IGpioChangeReaderFactory> {};
    template<> struct hash<winrt::Windows::Devices::Gpio::IGpioController> : winrt::impl::hash_base<winrt::Windows::Devices::Gpio::IGpioController> {};
    template<> struct hash<winrt::Windows::Devices::Gpio::IGpioControllerStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Gpio::IGpioControllerStatics> {};
    template<> struct hash<winrt::Windows::Devices::Gpio::IGpioControllerStatics2> : winrt::impl::hash_base<winrt::Windows::Devices::Gpio::IGpioControllerStatics2> {};
    template<> struct hash<winrt::Windows::Devices::Gpio::IGpioPin> : winrt::impl::hash_base<winrt::Windows::Devices::Gpio::IGpioPin> {};
    template<> struct hash<winrt::Windows::Devices::Gpio::IGpioPinValueChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Gpio::IGpioPinValueChangedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Gpio::GpioChangeCounter> : winrt::impl::hash_base<winrt::Windows::Devices::Gpio::GpioChangeCounter> {};
    template<> struct hash<winrt::Windows::Devices::Gpio::GpioChangeReader> : winrt::impl::hash_base<winrt::Windows::Devices::Gpio::GpioChangeReader> {};
    template<> struct hash<winrt::Windows::Devices::Gpio::GpioController> : winrt::impl::hash_base<winrt::Windows::Devices::Gpio::GpioController> {};
    template<> struct hash<winrt::Windows::Devices::Gpio::GpioPin> : winrt::impl::hash_base<winrt::Windows::Devices::Gpio::GpioPin> {};
    template<> struct hash<winrt::Windows::Devices::Gpio::GpioPinValueChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Gpio::GpioPinValueChangedEventArgs> {};
}
#endif
