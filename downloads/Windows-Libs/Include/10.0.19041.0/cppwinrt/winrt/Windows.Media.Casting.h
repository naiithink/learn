// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Casting_H
#define WINRT_Windows_Media_Casting_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Media.h"
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.Popups.2.h"
#include "winrt/impl/Windows.Media.Casting.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Media_Casting_ICastingConnection<D>::State() const
    {
        Windows::Media::Casting::CastingConnectionState value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingConnection)->get_State(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingConnection<D>::Device() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingConnection)->get_Device(&value));
        return Windows::Media::Casting::CastingDevice{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingConnection<D>::Source() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingConnection)->get_Source(&value));
        return Windows::Media::Casting::CastingSource{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingConnection<D>::Source(Windows::Media::Casting::CastingSource const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingConnection)->put_Source(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingConnection<D>::StateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingConnection)->add_StateChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Media_Casting_ICastingConnection<D>::StateChanged_revoker consume_Windows_Media_Casting_ICastingConnection<D>::StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, StateChanged_revoker>(this, StateChanged(handler));
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingConnection<D>::StateChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingConnection)->remove_StateChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingConnection<D>::ErrorOccurred(Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::Media::Casting::CastingConnectionErrorOccurredEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingConnection)->add_ErrorOccurred(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Media_Casting_ICastingConnection<D>::ErrorOccurred_revoker consume_Windows_Media_Casting_ICastingConnection<D>::ErrorOccurred(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::Media::Casting::CastingConnectionErrorOccurredEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, ErrorOccurred_revoker>(this, ErrorOccurred(handler));
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingConnection<D>::ErrorOccurred(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingConnection)->remove_ErrorOccurred(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingConnection<D>::RequestStartCastingAsync(Windows::Media::Casting::CastingSource const& value) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingConnection)->RequestStartCastingAsync(*(void**)(&value), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Media::Casting::CastingConnectionErrorStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingConnection<D>::DisconnectAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingConnection)->DisconnectAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Media::Casting::CastingConnectionErrorStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingConnectionErrorOccurredEventArgs<D>::ErrorStatus() const
    {
        Windows::Media::Casting::CastingConnectionErrorStatus value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingConnectionErrorOccurredEventArgs)->get_ErrorStatus(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingConnectionErrorOccurredEventArgs<D>::Message() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingConnectionErrorOccurredEventArgs)->get_Message(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingDevice<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingDevice)->get_Id(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingDevice<D>::FriendlyName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingDevice)->get_FriendlyName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingDevice<D>::Icon() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingDevice)->get_Icon(&value));
        return Windows::Storage::Streams::IRandomAccessStreamWithContentType{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingDevice<D>::GetSupportedCastingPlaybackTypesAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingDevice)->GetSupportedCastingPlaybackTypesAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Media::Casting::CastingPlaybackTypes>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingDevice<D>::CreateCastingConnection() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingDevice)->CreateCastingConnection(&value));
        return Windows::Media::Casting::CastingConnection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingDevicePicker<D>::Filter() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingDevicePicker)->get_Filter(&value));
        return Windows::Media::Casting::CastingDevicePickerFilter{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingDevicePicker<D>::Appearance() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingDevicePicker)->get_Appearance(&value));
        return Windows::Devices::Enumeration::DevicePickerAppearance{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingDevicePicker<D>::CastingDeviceSelected(Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::Media::Casting::CastingDeviceSelectedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingDevicePicker)->add_CastingDeviceSelected(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Media_Casting_ICastingDevicePicker<D>::CastingDeviceSelected_revoker consume_Windows_Media_Casting_ICastingDevicePicker<D>::CastingDeviceSelected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::Media::Casting::CastingDeviceSelectedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, CastingDeviceSelected_revoker>(this, CastingDeviceSelected(handler));
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingDevicePicker<D>::CastingDeviceSelected(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingDevicePicker)->remove_CastingDeviceSelected(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingDevicePicker<D>::CastingDevicePickerDismissed(Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingDevicePicker)->add_CastingDevicePickerDismissed(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Media_Casting_ICastingDevicePicker<D>::CastingDevicePickerDismissed_revoker consume_Windows_Media_Casting_ICastingDevicePicker<D>::CastingDevicePickerDismissed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, CastingDevicePickerDismissed_revoker>(this, CastingDevicePickerDismissed(handler));
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingDevicePicker<D>::CastingDevicePickerDismissed(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingDevicePicker)->remove_CastingDevicePickerDismissed(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingDevicePicker<D>::Show(Windows::Foundation::Rect const& selection) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingDevicePicker)->Show(impl::bind_in(selection)));
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingDevicePicker<D>::Show(Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingDevicePicker)->ShowWithPlacement(impl::bind_in(selection), static_cast<int32_t>(preferredPlacement)));
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingDevicePicker<D>::Hide() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingDevicePicker)->Hide());
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingDevicePickerFilter<D>::SupportsAudio() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingDevicePickerFilter)->get_SupportsAudio(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingDevicePickerFilter<D>::SupportsAudio(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingDevicePickerFilter)->put_SupportsAudio(value));
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingDevicePickerFilter<D>::SupportsVideo() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingDevicePickerFilter)->get_SupportsVideo(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingDevicePickerFilter<D>::SupportsVideo(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingDevicePickerFilter)->put_SupportsVideo(value));
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingDevicePickerFilter<D>::SupportsPictures() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingDevicePickerFilter)->get_SupportsPictures(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingDevicePickerFilter<D>::SupportsPictures(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingDevicePickerFilter)->put_SupportsPictures(value));
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingDevicePickerFilter<D>::SupportedCastingSources() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingDevicePickerFilter)->get_SupportedCastingSources(&value));
        return Windows::Foundation::Collections::IVector<Windows::Media::Casting::CastingSource>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingDeviceSelectedEventArgs<D>::SelectedCastingDevice() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingDeviceSelectedEventArgs)->get_SelectedCastingDevice(&value));
        return Windows::Media::Casting::CastingDevice{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingDeviceStatics<D>::GetDeviceSelector(Windows::Media::Casting::CastingPlaybackTypes const& type) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingDeviceStatics)->GetDeviceSelector(static_cast<uint32_t>(type), &value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingDeviceStatics<D>::GetDeviceSelectorFromCastingSourceAsync(Windows::Media::Casting::CastingSource const& castingSource) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingDeviceStatics)->GetDeviceSelectorFromCastingSourceAsync(*(void**)(&castingSource), &operation));
        return Windows::Foundation::IAsyncOperation<hstring>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingDeviceStatics<D>::FromIdAsync(param::hstring const& value) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingDeviceStatics)->FromIdAsync(*(void**)(&value), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Media::Casting::CastingDevice>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingDeviceStatics<D>::DeviceInfoSupportsCastingAsync(Windows::Devices::Enumeration::DeviceInformation const& device) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingDeviceStatics)->DeviceInfoSupportsCastingAsync(*(void**)(&device), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingSource<D>::PreferredSourceUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingSource)->get_PreferredSourceUri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Casting_ICastingSource<D>::PreferredSourceUri(Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Casting::ICastingSource)->put_PreferredSourceUri(*(void**)(&value)));
    }
    template <typename D>
    struct produce<D, Windows::Media::Casting::ICastingConnection> : produce_base<D, Windows::Media::Casting::ICastingConnection>
    {
        int32_t __stdcall get_State(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Casting::CastingConnectionState>(this->shim().State());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Device(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Casting::CastingDevice>(this->shim().Device());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Source(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Casting::CastingSource>(this->shim().Source());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Source(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Media::Casting::CastingSource const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_StateChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().StateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_StateChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StateChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_ErrorOccurred(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ErrorOccurred(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::Media::Casting::CastingConnectionErrorOccurredEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ErrorOccurred(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ErrorOccurred(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall RequestStartCastingAsync(void* value, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Casting::CastingConnectionErrorStatus>>(this->shim().RequestStartCastingAsync(*reinterpret_cast<Windows::Media::Casting::CastingSource const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DisconnectAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Casting::CastingConnectionErrorStatus>>(this->shim().DisconnectAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Media::Casting::ICastingConnectionErrorOccurredEventArgs> : produce_base<D, Windows::Media::Casting::ICastingConnectionErrorOccurredEventArgs>
    {
        int32_t __stdcall get_ErrorStatus(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Casting::CastingConnectionErrorStatus>(this->shim().ErrorStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Message(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Message());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Media::Casting::ICastingDevice> : produce_base<D, Windows::Media::Casting::ICastingDevice>
    {
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FriendlyName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FriendlyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Icon(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IRandomAccessStreamWithContentType>(this->shim().Icon());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetSupportedCastingPlaybackTypesAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Casting::CastingPlaybackTypes>>(this->shim().GetSupportedCastingPlaybackTypesAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateCastingConnection(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Casting::CastingConnection>(this->shim().CreateCastingConnection());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Media::Casting::ICastingDevicePicker> : produce_base<D, Windows::Media::Casting::ICastingDevicePicker>
    {
        int32_t __stdcall get_Filter(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Casting::CastingDevicePickerFilter>(this->shim().Filter());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Appearance(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Enumeration::DevicePickerAppearance>(this->shim().Appearance());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_CastingDeviceSelected(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().CastingDeviceSelected(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::Media::Casting::CastingDeviceSelectedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_CastingDeviceSelected(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CastingDeviceSelected(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_CastingDevicePickerDismissed(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().CastingDevicePickerDismissed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_CastingDevicePickerDismissed(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CastingDevicePickerDismissed(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall Show(Windows::Foundation::Rect selection) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Show(*reinterpret_cast<Windows::Foundation::Rect const*>(&selection));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowWithPlacement(Windows::Foundation::Rect selection, int32_t preferredPlacement) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Show(*reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Hide() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Hide();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Media::Casting::ICastingDevicePickerFilter> : produce_base<D, Windows::Media::Casting::ICastingDevicePickerFilter>
    {
        int32_t __stdcall get_SupportsAudio(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().SupportsAudio());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SupportsAudio(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SupportsAudio(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportsVideo(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().SupportsVideo());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SupportsVideo(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SupportsVideo(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportsPictures(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().SupportsPictures());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SupportsPictures(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SupportsPictures(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedCastingSources(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Media::Casting::CastingSource>>(this->shim().SupportedCastingSources());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Media::Casting::ICastingDeviceSelectedEventArgs> : produce_base<D, Windows::Media::Casting::ICastingDeviceSelectedEventArgs>
    {
        int32_t __stdcall get_SelectedCastingDevice(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Casting::CastingDevice>(this->shim().SelectedCastingDevice());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Media::Casting::ICastingDeviceStatics> : produce_base<D, Windows::Media::Casting::ICastingDeviceStatics>
    {
        int32_t __stdcall GetDeviceSelector(uint32_t type, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GetDeviceSelector(*reinterpret_cast<Windows::Media::Casting::CastingPlaybackTypes const*>(&type)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeviceSelectorFromCastingSourceAsync(void* castingSource, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().GetDeviceSelectorFromCastingSourceAsync(*reinterpret_cast<Windows::Media::Casting::CastingSource const*>(&castingSource)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FromIdAsync(void* value, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Casting::CastingDevice>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DeviceInfoSupportsCastingAsync(void* device, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().DeviceInfoSupportsCastingAsync(*reinterpret_cast<Windows::Devices::Enumeration::DeviceInformation const*>(&device)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Media::Casting::ICastingSource> : produce_base<D, Windows::Media::Casting::ICastingSource>
    {
        int32_t __stdcall get_PreferredSourceUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().PreferredSourceUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PreferredSourceUri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PreferredSourceUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Media::Casting
{
    constexpr auto operator|(CastingPlaybackTypes const left, CastingPlaybackTypes const right) noexcept
    {
        return static_cast<CastingPlaybackTypes>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(CastingPlaybackTypes& left, CastingPlaybackTypes const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(CastingPlaybackTypes const left, CastingPlaybackTypes const right) noexcept
    {
        return static_cast<CastingPlaybackTypes>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(CastingPlaybackTypes& left, CastingPlaybackTypes const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(CastingPlaybackTypes const value) noexcept
    {
        return static_cast<CastingPlaybackTypes>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(CastingPlaybackTypes const left, CastingPlaybackTypes const right) noexcept
    {
        return static_cast<CastingPlaybackTypes>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(CastingPlaybackTypes& left, CastingPlaybackTypes const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline auto CastingDevice::GetDeviceSelector(Windows::Media::Casting::CastingPlaybackTypes const& type)
    {
        return impl::call_factory<CastingDevice, Windows::Media::Casting::ICastingDeviceStatics>([&](auto&& f) { return f.GetDeviceSelector(type); });
    }
    inline auto CastingDevice::GetDeviceSelectorFromCastingSourceAsync(Windows::Media::Casting::CastingSource const& castingSource)
    {
        return impl::call_factory<CastingDevice, Windows::Media::Casting::ICastingDeviceStatics>([&](auto&& f) { return f.GetDeviceSelectorFromCastingSourceAsync(castingSource); });
    }
    inline auto CastingDevice::FromIdAsync(param::hstring const& value)
    {
        return impl::call_factory<CastingDevice, Windows::Media::Casting::ICastingDeviceStatics>([&](auto&& f) { return f.FromIdAsync(value); });
    }
    inline auto CastingDevice::DeviceInfoSupportsCastingAsync(Windows::Devices::Enumeration::DeviceInformation const& device)
    {
        return impl::call_factory<CastingDevice, Windows::Media::Casting::ICastingDeviceStatics>([&](auto&& f) { return f.DeviceInfoSupportsCastingAsync(device); });
    }
    inline CastingDevicePicker::CastingDevicePicker() :
        CastingDevicePicker(impl::call_factory<CastingDevicePicker>([](auto&& f) { return f.template ActivateInstance<CastingDevicePicker>(); }))
    {
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Media::Casting::ICastingConnection> : winrt::impl::hash_base<winrt::Windows::Media::Casting::ICastingConnection> {};
    template<> struct hash<winrt::Windows::Media::Casting::ICastingConnectionErrorOccurredEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Casting::ICastingConnectionErrorOccurredEventArgs> {};
    template<> struct hash<winrt::Windows::Media::Casting::ICastingDevice> : winrt::impl::hash_base<winrt::Windows::Media::Casting::ICastingDevice> {};
    template<> struct hash<winrt::Windows::Media::Casting::ICastingDevicePicker> : winrt::impl::hash_base<winrt::Windows::Media::Casting::ICastingDevicePicker> {};
    template<> struct hash<winrt::Windows::Media::Casting::ICastingDevicePickerFilter> : winrt::impl::hash_base<winrt::Windows::Media::Casting::ICastingDevicePickerFilter> {};
    template<> struct hash<winrt::Windows::Media::Casting::ICastingDeviceSelectedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Casting::ICastingDeviceSelectedEventArgs> {};
    template<> struct hash<winrt::Windows::Media::Casting::ICastingDeviceStatics> : winrt::impl::hash_base<winrt::Windows::Media::Casting::ICastingDeviceStatics> {};
    template<> struct hash<winrt::Windows::Media::Casting::ICastingSource> : winrt::impl::hash_base<winrt::Windows::Media::Casting::ICastingSource> {};
    template<> struct hash<winrt::Windows::Media::Casting::CastingConnection> : winrt::impl::hash_base<winrt::Windows::Media::Casting::CastingConnection> {};
    template<> struct hash<winrt::Windows::Media::Casting::CastingConnectionErrorOccurredEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Casting::CastingConnectionErrorOccurredEventArgs> {};
    template<> struct hash<winrt::Windows::Media::Casting::CastingDevice> : winrt::impl::hash_base<winrt::Windows::Media::Casting::CastingDevice> {};
    template<> struct hash<winrt::Windows::Media::Casting::CastingDevicePicker> : winrt::impl::hash_base<winrt::Windows::Media::Casting::CastingDevicePicker> {};
    template<> struct hash<winrt::Windows::Media::Casting::CastingDevicePickerFilter> : winrt::impl::hash_base<winrt::Windows::Media::Casting::CastingDevicePickerFilter> {};
    template<> struct hash<winrt::Windows::Media::Casting::CastingDeviceSelectedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Casting::CastingDeviceSelectedEventArgs> {};
    template<> struct hash<winrt::Windows::Media::Casting::CastingSource> : winrt::impl::hash_base<winrt::Windows::Media::Casting::CastingSource> {};
}
#endif
