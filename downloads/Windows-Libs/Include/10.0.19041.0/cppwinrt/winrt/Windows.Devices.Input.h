// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Input_H
#define WINRT_Windows_Devices_Input_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Devices.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Devices.Input.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Devices_Input_IKeyboardCapabilities<D>::KeyboardPresent() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IKeyboardCapabilities)->get_KeyboardPresent(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Input_IMouseCapabilities<D>::MousePresent() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IMouseCapabilities)->get_MousePresent(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Input_IMouseCapabilities<D>::VerticalWheelPresent() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IMouseCapabilities)->get_VerticalWheelPresent(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Input_IMouseCapabilities<D>::HorizontalWheelPresent() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IMouseCapabilities)->get_HorizontalWheelPresent(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Input_IMouseCapabilities<D>::SwapButtons() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IMouseCapabilities)->get_SwapButtons(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Input_IMouseCapabilities<D>::NumberOfButtons() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IMouseCapabilities)->get_NumberOfButtons(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Input_IMouseDevice<D>::MouseMoved(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice, Windows::Devices::Input::MouseEventArgs> const& handler) const
    {
        winrt::event_token cookie;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IMouseDevice)->add_MouseMoved(*(void**)(&handler), put_abi(cookie)));
        return cookie;
    }
    template <typename D> typename consume_Windows_Devices_Input_IMouseDevice<D>::MouseMoved_revoker consume_Windows_Devices_Input_IMouseDevice<D>::MouseMoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice, Windows::Devices::Input::MouseEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, MouseMoved_revoker>(this, MouseMoved(handler));
    }
    template <typename D> auto consume_Windows_Devices_Input_IMouseDevice<D>::MouseMoved(winrt::event_token const& cookie) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Input::IMouseDevice)->remove_MouseMoved(impl::bind_in(cookie)));
    }
    template <typename D> auto consume_Windows_Devices_Input_IMouseDeviceStatics<D>::GetForCurrentView() const
    {
        void* mouseDevice{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IMouseDeviceStatics)->GetForCurrentView(&mouseDevice));
        return Windows::Devices::Input::MouseDevice{ mouseDevice, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Input_IMouseEventArgs<D>::MouseDelta() const
    {
        Windows::Devices::Input::MouseDelta value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IMouseEventArgs)->get_MouseDelta(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Input_IPenButtonListener<D>::IsSupported() const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IPenButtonListener)->IsSupported(&result));
        return result;
    }
    template <typename D> auto consume_Windows_Devices_Input_IPenButtonListener<D>::IsSupportedChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenButtonListener, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IPenButtonListener)->add_IsSupportedChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Input_IPenButtonListener<D>::IsSupportedChanged_revoker consume_Windows_Devices_Input_IPenButtonListener<D>::IsSupportedChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenButtonListener, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, IsSupportedChanged_revoker>(this, IsSupportedChanged(handler));
    }
    template <typename D> auto consume_Windows_Devices_Input_IPenButtonListener<D>::IsSupportedChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Input::IPenButtonListener)->remove_IsSupportedChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Input_IPenButtonListener<D>::TailButtonClicked(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenButtonListener, Windows::Devices::Input::PenTailButtonClickedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IPenButtonListener)->add_TailButtonClicked(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Input_IPenButtonListener<D>::TailButtonClicked_revoker consume_Windows_Devices_Input_IPenButtonListener<D>::TailButtonClicked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenButtonListener, Windows::Devices::Input::PenTailButtonClickedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, TailButtonClicked_revoker>(this, TailButtonClicked(handler));
    }
    template <typename D> auto consume_Windows_Devices_Input_IPenButtonListener<D>::TailButtonClicked(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Input::IPenButtonListener)->remove_TailButtonClicked(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Input_IPenButtonListener<D>::TailButtonDoubleClicked(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenButtonListener, Windows::Devices::Input::PenTailButtonDoubleClickedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IPenButtonListener)->add_TailButtonDoubleClicked(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Input_IPenButtonListener<D>::TailButtonDoubleClicked_revoker consume_Windows_Devices_Input_IPenButtonListener<D>::TailButtonDoubleClicked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenButtonListener, Windows::Devices::Input::PenTailButtonDoubleClickedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, TailButtonDoubleClicked_revoker>(this, TailButtonDoubleClicked(handler));
    }
    template <typename D> auto consume_Windows_Devices_Input_IPenButtonListener<D>::TailButtonDoubleClicked(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Input::IPenButtonListener)->remove_TailButtonDoubleClicked(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Input_IPenButtonListener<D>::TailButtonLongPressed(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenButtonListener, Windows::Devices::Input::PenTailButtonLongPressedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IPenButtonListener)->add_TailButtonLongPressed(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Input_IPenButtonListener<D>::TailButtonLongPressed_revoker consume_Windows_Devices_Input_IPenButtonListener<D>::TailButtonLongPressed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenButtonListener, Windows::Devices::Input::PenTailButtonLongPressedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, TailButtonLongPressed_revoker>(this, TailButtonLongPressed(handler));
    }
    template <typename D> auto consume_Windows_Devices_Input_IPenButtonListener<D>::TailButtonLongPressed(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Input::IPenButtonListener)->remove_TailButtonLongPressed(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Input_IPenButtonListenerStatics<D>::GetDefault() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IPenButtonListenerStatics)->GetDefault(&result));
        return Windows::Devices::Input::PenButtonListener{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Input_IPenDevice<D>::PenId() const
    {
        winrt::guid value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IPenDevice)->get_PenId(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Input_IPenDeviceStatics<D>::GetFromPointerId(uint32_t pointerId) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IPenDeviceStatics)->GetFromPointerId(pointerId, &result));
        return Windows::Devices::Input::PenDevice{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Input_IPenDockListener<D>::IsSupported() const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IPenDockListener)->IsSupported(&result));
        return result;
    }
    template <typename D> auto consume_Windows_Devices_Input_IPenDockListener<D>::IsSupportedChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenDockListener, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IPenDockListener)->add_IsSupportedChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Input_IPenDockListener<D>::IsSupportedChanged_revoker consume_Windows_Devices_Input_IPenDockListener<D>::IsSupportedChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenDockListener, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, IsSupportedChanged_revoker>(this, IsSupportedChanged(handler));
    }
    template <typename D> auto consume_Windows_Devices_Input_IPenDockListener<D>::IsSupportedChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Input::IPenDockListener)->remove_IsSupportedChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Input_IPenDockListener<D>::Docked(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenDockListener, Windows::Devices::Input::PenDockedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IPenDockListener)->add_Docked(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Input_IPenDockListener<D>::Docked_revoker consume_Windows_Devices_Input_IPenDockListener<D>::Docked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenDockListener, Windows::Devices::Input::PenDockedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, Docked_revoker>(this, Docked(handler));
    }
    template <typename D> auto consume_Windows_Devices_Input_IPenDockListener<D>::Docked(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Input::IPenDockListener)->remove_Docked(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Input_IPenDockListener<D>::Undocked(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenDockListener, Windows::Devices::Input::PenUndockedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IPenDockListener)->add_Undocked(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Input_IPenDockListener<D>::Undocked_revoker consume_Windows_Devices_Input_IPenDockListener<D>::Undocked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenDockListener, Windows::Devices::Input::PenUndockedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, Undocked_revoker>(this, Undocked(handler));
    }
    template <typename D> auto consume_Windows_Devices_Input_IPenDockListener<D>::Undocked(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Input::IPenDockListener)->remove_Undocked(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Input_IPenDockListenerStatics<D>::GetDefault() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IPenDockListenerStatics)->GetDefault(&result));
        return Windows::Devices::Input::PenDockListener{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Input_IPointerDevice<D>::PointerDeviceType() const
    {
        Windows::Devices::Input::PointerDeviceType value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IPointerDevice)->get_PointerDeviceType(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Input_IPointerDevice<D>::IsIntegrated() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IPointerDevice)->get_IsIntegrated(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Input_IPointerDevice<D>::MaxContacts() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IPointerDevice)->get_MaxContacts(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Input_IPointerDevice<D>::PhysicalDeviceRect() const
    {
        Windows::Foundation::Rect value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IPointerDevice)->get_PhysicalDeviceRect(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Input_IPointerDevice<D>::ScreenRect() const
    {
        Windows::Foundation::Rect value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IPointerDevice)->get_ScreenRect(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Input_IPointerDevice<D>::SupportedUsages() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IPointerDevice)->get_SupportedUsages(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::Input::PointerDeviceUsage>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Input_IPointerDevice2<D>::MaxPointersWithZDistance() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IPointerDevice2)->get_MaxPointersWithZDistance(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Input_IPointerDeviceStatics<D>::GetPointerDevice(uint32_t pointerId) const
    {
        void* pointerDevice{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IPointerDeviceStatics)->GetPointerDevice(pointerId, &pointerDevice));
        return Windows::Devices::Input::PointerDevice{ pointerDevice, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Input_IPointerDeviceStatics<D>::GetPointerDevices() const
    {
        void* pointerDevices{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::IPointerDeviceStatics)->GetPointerDevices(&pointerDevices));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::Input::PointerDevice>{ pointerDevices, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Input_ITouchCapabilities<D>::TouchPresent() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::ITouchCapabilities)->get_TouchPresent(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Input_ITouchCapabilities<D>::Contacts() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Input::ITouchCapabilities)->get_Contacts(&value));
        return value;
    }
    template <typename D>
    struct produce<D, Windows::Devices::Input::IKeyboardCapabilities> : produce_base<D, Windows::Devices::Input::IKeyboardCapabilities>
    {
        int32_t __stdcall get_KeyboardPresent(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().KeyboardPresent());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Input::IMouseCapabilities> : produce_base<D, Windows::Devices::Input::IMouseCapabilities>
    {
        int32_t __stdcall get_MousePresent(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().MousePresent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VerticalWheelPresent(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().VerticalWheelPresent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HorizontalWheelPresent(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().HorizontalWheelPresent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SwapButtons(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().SwapButtons());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NumberOfButtons(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().NumberOfButtons());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Input::IMouseDevice> : produce_base<D, Windows::Devices::Input::IMouseDevice>
    {
        int32_t __stdcall add_MouseMoved(void* handler, winrt::event_token* cookie) noexcept final try
        {
            zero_abi<winrt::event_token>(cookie);
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<winrt::event_token>(this->shim().MouseMoved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice, Windows::Devices::Input::MouseEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_MouseMoved(winrt::event_token cookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MouseMoved(*reinterpret_cast<winrt::event_token const*>(&cookie));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Input::IMouseDeviceStatics> : produce_base<D, Windows::Devices::Input::IMouseDeviceStatics>
    {
        int32_t __stdcall GetForCurrentView(void** mouseDevice) noexcept final try
        {
            clear_abi(mouseDevice);
            typename D::abi_guard guard(this->shim());
            *mouseDevice = detach_from<Windows::Devices::Input::MouseDevice>(this->shim().GetForCurrentView());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Input::IMouseEventArgs> : produce_base<D, Windows::Devices::Input::IMouseEventArgs>
    {
        int32_t __stdcall get_MouseDelta(struct struct_Windows_Devices_Input_MouseDelta* value) noexcept final try
        {
            zero_abi<Windows::Devices::Input::MouseDelta>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Input::MouseDelta>(this->shim().MouseDelta());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Input::IPenButtonListener> : produce_base<D, Windows::Devices::Input::IPenButtonListener>
    {
        int32_t __stdcall IsSupported(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_IsSupportedChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().IsSupportedChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenButtonListener, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_IsSupportedChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsSupportedChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_TailButtonClicked(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().TailButtonClicked(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenButtonListener, Windows::Devices::Input::PenTailButtonClickedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_TailButtonClicked(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TailButtonClicked(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_TailButtonDoubleClicked(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().TailButtonDoubleClicked(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenButtonListener, Windows::Devices::Input::PenTailButtonDoubleClickedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_TailButtonDoubleClicked(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TailButtonDoubleClicked(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_TailButtonLongPressed(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().TailButtonLongPressed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenButtonListener, Windows::Devices::Input::PenTailButtonLongPressedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_TailButtonLongPressed(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TailButtonLongPressed(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Input::IPenButtonListenerStatics> : produce_base<D, Windows::Devices::Input::IPenButtonListenerStatics>
    {
        int32_t __stdcall GetDefault(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Input::PenButtonListener>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Input::IPenDevice> : produce_base<D, Windows::Devices::Input::IPenDevice>
    {
        int32_t __stdcall get_PenId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().PenId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Input::IPenDeviceStatics> : produce_base<D, Windows::Devices::Input::IPenDeviceStatics>
    {
        int32_t __stdcall GetFromPointerId(uint32_t pointerId, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Input::PenDevice>(this->shim().GetFromPointerId(pointerId));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Input::IPenDockListener> : produce_base<D, Windows::Devices::Input::IPenDockListener>
    {
        int32_t __stdcall IsSupported(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_IsSupportedChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().IsSupportedChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenDockListener, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_IsSupportedChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsSupportedChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_Docked(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Docked(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenDockListener, Windows::Devices::Input::PenDockedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Docked(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Docked(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_Undocked(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Undocked(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenDockListener, Windows::Devices::Input::PenUndockedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Undocked(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Undocked(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Input::IPenDockListenerStatics> : produce_base<D, Windows::Devices::Input::IPenDockListenerStatics>
    {
        int32_t __stdcall GetDefault(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Input::PenDockListener>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Input::IPenDockedEventArgs> : produce_base<D, Windows::Devices::Input::IPenDockedEventArgs>
    {
    };
    template <typename D>
    struct produce<D, Windows::Devices::Input::IPenTailButtonClickedEventArgs> : produce_base<D, Windows::Devices::Input::IPenTailButtonClickedEventArgs>
    {
    };
    template <typename D>
    struct produce<D, Windows::Devices::Input::IPenTailButtonDoubleClickedEventArgs> : produce_base<D, Windows::Devices::Input::IPenTailButtonDoubleClickedEventArgs>
    {
    };
    template <typename D>
    struct produce<D, Windows::Devices::Input::IPenTailButtonLongPressedEventArgs> : produce_base<D, Windows::Devices::Input::IPenTailButtonLongPressedEventArgs>
    {
    };
    template <typename D>
    struct produce<D, Windows::Devices::Input::IPenUndockedEventArgs> : produce_base<D, Windows::Devices::Input::IPenUndockedEventArgs>
    {
    };
    template <typename D>
    struct produce<D, Windows::Devices::Input::IPointerDevice> : produce_base<D, Windows::Devices::Input::IPointerDevice>
    {
        int32_t __stdcall get_PointerDeviceType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Input::PointerDeviceType>(this->shim().PointerDeviceType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsIntegrated(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsIntegrated());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxContacts(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxContacts());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PhysicalDeviceRect(Windows::Foundation::Rect* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Rect>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().PhysicalDeviceRect());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ScreenRect(Windows::Foundation::Rect* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Rect>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().ScreenRect());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedUsages(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Input::PointerDeviceUsage>>(this->shim().SupportedUsages());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Input::IPointerDevice2> : produce_base<D, Windows::Devices::Input::IPointerDevice2>
    {
        int32_t __stdcall get_MaxPointersWithZDistance(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxPointersWithZDistance());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Input::IPointerDeviceStatics> : produce_base<D, Windows::Devices::Input::IPointerDeviceStatics>
    {
        int32_t __stdcall GetPointerDevice(uint32_t pointerId, void** pointerDevice) noexcept final try
        {
            clear_abi(pointerDevice);
            typename D::abi_guard guard(this->shim());
            *pointerDevice = detach_from<Windows::Devices::Input::PointerDevice>(this->shim().GetPointerDevice(pointerId));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPointerDevices(void** pointerDevices) noexcept final try
        {
            clear_abi(pointerDevices);
            typename D::abi_guard guard(this->shim());
            *pointerDevices = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Input::PointerDevice>>(this->shim().GetPointerDevices());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Input::ITouchCapabilities> : produce_base<D, Windows::Devices::Input::ITouchCapabilities>
    {
        int32_t __stdcall get_TouchPresent(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().TouchPresent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Contacts(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Contacts());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Devices::Input
{
    inline KeyboardCapabilities::KeyboardCapabilities() :
        KeyboardCapabilities(impl::call_factory<KeyboardCapabilities>([](auto&& f) { return f.template ActivateInstance<KeyboardCapabilities>(); }))
    {
    }
    inline MouseCapabilities::MouseCapabilities() :
        MouseCapabilities(impl::call_factory<MouseCapabilities>([](auto&& f) { return f.template ActivateInstance<MouseCapabilities>(); }))
    {
    }
    inline auto MouseDevice::GetForCurrentView()
    {
        return impl::call_factory<MouseDevice, Windows::Devices::Input::IMouseDeviceStatics>([&](auto&& f) { return f.GetForCurrentView(); });
    }
    inline auto PenButtonListener::GetDefault()
    {
        return impl::call_factory<PenButtonListener, Windows::Devices::Input::IPenButtonListenerStatics>([&](auto&& f) { return f.GetDefault(); });
    }
    inline auto PenDevice::GetFromPointerId(uint32_t pointerId)
    {
        return impl::call_factory<PenDevice, Windows::Devices::Input::IPenDeviceStatics>([&](auto&& f) { return f.GetFromPointerId(pointerId); });
    }
    inline auto PenDockListener::GetDefault()
    {
        return impl::call_factory<PenDockListener, Windows::Devices::Input::IPenDockListenerStatics>([&](auto&& f) { return f.GetDefault(); });
    }
    inline auto PointerDevice::GetPointerDevice(uint32_t pointerId)
    {
        return impl::call_factory<PointerDevice, Windows::Devices::Input::IPointerDeviceStatics>([&](auto&& f) { return f.GetPointerDevice(pointerId); });
    }
    inline auto PointerDevice::GetPointerDevices()
    {
        return impl::call_factory<PointerDevice, Windows::Devices::Input::IPointerDeviceStatics>([&](auto&& f) { return f.GetPointerDevices(); });
    }
    inline TouchCapabilities::TouchCapabilities() :
        TouchCapabilities(impl::call_factory<TouchCapabilities>([](auto&& f) { return f.template ActivateInstance<TouchCapabilities>(); }))
    {
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Devices::Input::IKeyboardCapabilities> : winrt::impl::hash_base<winrt::Windows::Devices::Input::IKeyboardCapabilities> {};
    template<> struct hash<winrt::Windows::Devices::Input::IMouseCapabilities> : winrt::impl::hash_base<winrt::Windows::Devices::Input::IMouseCapabilities> {};
    template<> struct hash<winrt::Windows::Devices::Input::IMouseDevice> : winrt::impl::hash_base<winrt::Windows::Devices::Input::IMouseDevice> {};
    template<> struct hash<winrt::Windows::Devices::Input::IMouseDeviceStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Input::IMouseDeviceStatics> {};
    template<> struct hash<winrt::Windows::Devices::Input::IMouseEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Input::IMouseEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Input::IPenButtonListener> : winrt::impl::hash_base<winrt::Windows::Devices::Input::IPenButtonListener> {};
    template<> struct hash<winrt::Windows::Devices::Input::IPenButtonListenerStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Input::IPenButtonListenerStatics> {};
    template<> struct hash<winrt::Windows::Devices::Input::IPenDevice> : winrt::impl::hash_base<winrt::Windows::Devices::Input::IPenDevice> {};
    template<> struct hash<winrt::Windows::Devices::Input::IPenDeviceStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Input::IPenDeviceStatics> {};
    template<> struct hash<winrt::Windows::Devices::Input::IPenDockListener> : winrt::impl::hash_base<winrt::Windows::Devices::Input::IPenDockListener> {};
    template<> struct hash<winrt::Windows::Devices::Input::IPenDockListenerStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Input::IPenDockListenerStatics> {};
    template<> struct hash<winrt::Windows::Devices::Input::IPenDockedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Input::IPenDockedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Input::IPenTailButtonClickedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Input::IPenTailButtonClickedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Input::IPenTailButtonDoubleClickedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Input::IPenTailButtonDoubleClickedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Input::IPenTailButtonLongPressedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Input::IPenTailButtonLongPressedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Input::IPenUndockedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Input::IPenUndockedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Input::IPointerDevice> : winrt::impl::hash_base<winrt::Windows::Devices::Input::IPointerDevice> {};
    template<> struct hash<winrt::Windows::Devices::Input::IPointerDevice2> : winrt::impl::hash_base<winrt::Windows::Devices::Input::IPointerDevice2> {};
    template<> struct hash<winrt::Windows::Devices::Input::IPointerDeviceStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Input::IPointerDeviceStatics> {};
    template<> struct hash<winrt::Windows::Devices::Input::ITouchCapabilities> : winrt::impl::hash_base<winrt::Windows::Devices::Input::ITouchCapabilities> {};
    template<> struct hash<winrt::Windows::Devices::Input::KeyboardCapabilities> : winrt::impl::hash_base<winrt::Windows::Devices::Input::KeyboardCapabilities> {};
    template<> struct hash<winrt::Windows::Devices::Input::MouseCapabilities> : winrt::impl::hash_base<winrt::Windows::Devices::Input::MouseCapabilities> {};
    template<> struct hash<winrt::Windows::Devices::Input::MouseDevice> : winrt::impl::hash_base<winrt::Windows::Devices::Input::MouseDevice> {};
    template<> struct hash<winrt::Windows::Devices::Input::MouseEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Input::MouseEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Input::PenButtonListener> : winrt::impl::hash_base<winrt::Windows::Devices::Input::PenButtonListener> {};
    template<> struct hash<winrt::Windows::Devices::Input::PenDevice> : winrt::impl::hash_base<winrt::Windows::Devices::Input::PenDevice> {};
    template<> struct hash<winrt::Windows::Devices::Input::PenDockListener> : winrt::impl::hash_base<winrt::Windows::Devices::Input::PenDockListener> {};
    template<> struct hash<winrt::Windows::Devices::Input::PenDockedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Input::PenDockedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Input::PenTailButtonClickedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Input::PenTailButtonClickedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Input::PenTailButtonDoubleClickedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Input::PenTailButtonDoubleClickedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Input::PenTailButtonLongPressedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Input::PenTailButtonLongPressedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Input::PenUndockedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Input::PenUndockedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Input::PointerDevice> : winrt::impl::hash_base<winrt::Windows::Devices::Input::PointerDevice> {};
    template<> struct hash<winrt::Windows::Devices::Input::TouchCapabilities> : winrt::impl::hash_base<winrt::Windows::Devices::Input::TouchCapabilities> {};
}
#endif
