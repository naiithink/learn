// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Lights_Effects_H
#define WINRT_Windows_Devices_Lights_Effects_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Devices.Lights.h"
#include "winrt/impl/Windows.Devices.Lights.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.Devices.Lights.Effects.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffect<D>::Duration() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBitmapEffect)->get_Duration(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffect<D>::Duration(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBitmapEffect)->put_Duration(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffect<D>::StartDelay() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBitmapEffect)->get_StartDelay(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffect<D>::StartDelay(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBitmapEffect)->put_StartDelay(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffect<D>::UpdateInterval() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBitmapEffect)->get_UpdateInterval(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffect<D>::UpdateInterval(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBitmapEffect)->put_UpdateInterval(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffect<D>::SuggestedBitmapSize() const
    {
        Windows::Foundation::Size value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBitmapEffect)->get_SuggestedBitmapSize(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffect<D>::BitmapRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Lights::Effects::LampArrayBitmapEffect, Windows::Devices::Lights::Effects::LampArrayBitmapRequestedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBitmapEffect)->add_BitmapRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffect<D>::BitmapRequested_revoker consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffect<D>::BitmapRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Lights::Effects::LampArrayBitmapEffect, Windows::Devices::Lights::Effects::LampArrayBitmapRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, BitmapRequested_revoker>(this, BitmapRequested(handler));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffect<D>::BitmapRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBitmapEffect)->remove_BitmapRequested(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffectFactory<D>::CreateInstance(Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBitmapEffectFactory)->CreateInstance(*(void**)(&lampArray), lampIndexes.size(), get_abi(lampIndexes), &value));
        return Windows::Devices::Lights::Effects::LampArrayBitmapEffect{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBitmapRequestedEventArgs<D>::SinceStarted() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBitmapRequestedEventArgs)->get_SinceStarted(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBitmapRequestedEventArgs<D>::UpdateBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& bitmap) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBitmapRequestedEventArgs)->UpdateBitmap(*(void**)(&bitmap)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::Color() const
    {
        Windows::UI::Color value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->get_Color(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::Color(Windows::UI::Color const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->put_Color(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::AttackDuration() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->get_AttackDuration(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::AttackDuration(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->put_AttackDuration(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::SustainDuration() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->get_SustainDuration(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::SustainDuration(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->put_SustainDuration(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::DecayDuration() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->get_DecayDuration(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::DecayDuration(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->put_DecayDuration(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::RepetitionDelay() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->get_RepetitionDelay(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::RepetitionDelay(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->put_RepetitionDelay(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::StartDelay() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->get_StartDelay(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::StartDelay(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->put_StartDelay(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::Occurrences() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->get_Occurrences(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::Occurrences(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->put_Occurrences(value));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::RepetitionMode() const
    {
        Windows::Devices::Lights::Effects::LampArrayRepetitionMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->get_RepetitionMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::RepetitionMode(Windows::Devices::Lights::Effects::LampArrayRepetitionMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->put_RepetitionMode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffectFactory<D>::CreateInstance(Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayBlinkEffectFactory)->CreateInstance(*(void**)(&lampArray), lampIndexes.size(), get_abi(lampIndexes), &value));
        return Windows::Devices::Lights::Effects::LampArrayBlinkEffect{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayColorRampEffect<D>::Color() const
    {
        Windows::UI::Color value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayColorRampEffect)->get_Color(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayColorRampEffect<D>::Color(Windows::UI::Color const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayColorRampEffect)->put_Color(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayColorRampEffect<D>::RampDuration() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayColorRampEffect)->get_RampDuration(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayColorRampEffect<D>::RampDuration(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayColorRampEffect)->put_RampDuration(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayColorRampEffect<D>::StartDelay() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayColorRampEffect)->get_StartDelay(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayColorRampEffect<D>::StartDelay(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayColorRampEffect)->put_StartDelay(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayColorRampEffect<D>::CompletionBehavior() const
    {
        Windows::Devices::Lights::Effects::LampArrayEffectCompletionBehavior value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayColorRampEffect)->get_CompletionBehavior(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayColorRampEffect<D>::CompletionBehavior(Windows::Devices::Lights::Effects::LampArrayEffectCompletionBehavior const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayColorRampEffect)->put_CompletionBehavior(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayColorRampEffectFactory<D>::CreateInstance(Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayColorRampEffectFactory)->CreateInstance(*(void**)(&lampArray), lampIndexes.size(), get_abi(lampIndexes), &value));
        return Windows::Devices::Lights::Effects::LampArrayColorRampEffect{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayCustomEffect<D>::Duration() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayCustomEffect)->get_Duration(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayCustomEffect<D>::Duration(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayCustomEffect)->put_Duration(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayCustomEffect<D>::UpdateInterval() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayCustomEffect)->get_UpdateInterval(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayCustomEffect<D>::UpdateInterval(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayCustomEffect)->put_UpdateInterval(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayCustomEffect<D>::UpdateRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Lights::Effects::LampArrayCustomEffect, Windows::Devices::Lights::Effects::LampArrayUpdateRequestedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayCustomEffect)->add_UpdateRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Lights_Effects_ILampArrayCustomEffect<D>::UpdateRequested_revoker consume_Windows_Devices_Lights_Effects_ILampArrayCustomEffect<D>::UpdateRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Lights::Effects::LampArrayCustomEffect, Windows::Devices::Lights::Effects::LampArrayUpdateRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, UpdateRequested_revoker>(this, UpdateRequested(handler));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayCustomEffect<D>::UpdateRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayCustomEffect)->remove_UpdateRequested(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayCustomEffectFactory<D>::CreateInstance(Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayCustomEffectFactory)->CreateInstance(*(void**)(&lampArray), lampIndexes.size(), get_abi(lampIndexes), &value));
        return Windows::Devices::Lights::Effects::LampArrayCustomEffect{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayEffect<D>::ZIndex() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayEffect)->get_ZIndex(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayEffect<D>::ZIndex(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayEffect)->put_ZIndex(value));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylist<D>::Append(Windows::Devices::Lights::Effects::ILampArrayEffect const& effect) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist)->Append(*(void**)(&effect)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylist<D>::OverrideZIndex(int32_t zIndex) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist)->OverrideZIndex(zIndex));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylist<D>::Start() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist)->Start());
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylist<D>::Stop() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist)->Stop());
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylist<D>::Pause() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist)->Pause());
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylist<D>::EffectStartMode() const
    {
        Windows::Devices::Lights::Effects::LampArrayEffectStartMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist)->get_EffectStartMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylist<D>::EffectStartMode(Windows::Devices::Lights::Effects::LampArrayEffectStartMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist)->put_EffectStartMode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylist<D>::Occurrences() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist)->get_Occurrences(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylist<D>::Occurrences(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist)->put_Occurrences(value));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylist<D>::RepetitionMode() const
    {
        Windows::Devices::Lights::Effects::LampArrayRepetitionMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist)->get_RepetitionMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylist<D>::RepetitionMode(Windows::Devices::Lights::Effects::LampArrayRepetitionMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist)->put_RepetitionMode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylistStatics<D>::StartAll(param::iterable<Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayEffectPlaylistStatics)->StartAll(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylistStatics<D>::StopAll(param::iterable<Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayEffectPlaylistStatics)->StopAll(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylistStatics<D>::PauseAll(param::iterable<Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayEffectPlaylistStatics)->PauseAll(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArraySolidEffect<D>::Color() const
    {
        Windows::UI::Color value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArraySolidEffect)->get_Color(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArraySolidEffect<D>::Color(Windows::UI::Color const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArraySolidEffect)->put_Color(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArraySolidEffect<D>::Duration() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArraySolidEffect)->get_Duration(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArraySolidEffect<D>::Duration(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArraySolidEffect)->put_Duration(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArraySolidEffect<D>::StartDelay() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArraySolidEffect)->get_StartDelay(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArraySolidEffect<D>::StartDelay(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArraySolidEffect)->put_StartDelay(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArraySolidEffect<D>::CompletionBehavior() const
    {
        Windows::Devices::Lights::Effects::LampArrayEffectCompletionBehavior value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArraySolidEffect)->get_CompletionBehavior(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArraySolidEffect<D>::CompletionBehavior(Windows::Devices::Lights::Effects::LampArrayEffectCompletionBehavior const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArraySolidEffect)->put_CompletionBehavior(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArraySolidEffectFactory<D>::CreateInstance(Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArraySolidEffectFactory)->CreateInstance(*(void**)(&lampArray), lampIndexes.size(), get_abi(lampIndexes), &value));
        return Windows::Devices::Lights::Effects::LampArraySolidEffect{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayUpdateRequestedEventArgs<D>::SinceStarted() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayUpdateRequestedEventArgs)->get_SinceStarted(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayUpdateRequestedEventArgs<D>::SetColor(Windows::UI::Color const& desiredColor) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayUpdateRequestedEventArgs)->SetColor(impl::bind_in(desiredColor)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayUpdateRequestedEventArgs<D>::SetColorForIndex(int32_t lampIndex, Windows::UI::Color const& desiredColor) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayUpdateRequestedEventArgs)->SetColorForIndex(lampIndex, impl::bind_in(desiredColor)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayUpdateRequestedEventArgs<D>::SetSingleColorForIndices(Windows::UI::Color const& desiredColor, array_view<int32_t const> lampIndexes) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayUpdateRequestedEventArgs)->SetSingleColorForIndices(impl::bind_in(desiredColor), lampIndexes.size(), get_abi(lampIndexes)));
    }
    template <typename D> auto consume_Windows_Devices_Lights_Effects_ILampArrayUpdateRequestedEventArgs<D>::SetColorsForIndices(array_view<Windows::UI::Color const> desiredColors, array_view<int32_t const> lampIndexes) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Lights::Effects::ILampArrayUpdateRequestedEventArgs)->SetColorsForIndices(desiredColors.size(), get_abi(desiredColors), lampIndexes.size(), get_abi(lampIndexes)));
    }
    template <typename D>
    struct produce<D, Windows::Devices::Lights::Effects::ILampArrayBitmapEffect> : produce_base<D, Windows::Devices::Lights::Effects::ILampArrayBitmapEffect>
    {
        int32_t __stdcall get_Duration(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Duration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Duration(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Duration(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StartDelay(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().StartDelay());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StartDelay(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartDelay(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UpdateInterval(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().UpdateInterval());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_UpdateInterval(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateInterval(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SuggestedBitmapSize(Windows::Foundation::Size* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Size>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Size>(this->shim().SuggestedBitmapSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_BitmapRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().BitmapRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Lights::Effects::LampArrayBitmapEffect, Windows::Devices::Lights::Effects::LampArrayBitmapRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_BitmapRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BitmapRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Lights::Effects::ILampArrayBitmapEffectFactory> : produce_base<D, Windows::Devices::Lights::Effects::ILampArrayBitmapEffectFactory>
    {
        int32_t __stdcall CreateInstance(void* lampArray, uint32_t __lampIndexesSize, int32_t* lampIndexes, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Lights::Effects::LampArrayBitmapEffect>(this->shim().CreateInstance(*reinterpret_cast<Windows::Devices::Lights::LampArray const*>(&lampArray), array_view<int32_t const>(reinterpret_cast<int32_t const *>(lampIndexes), reinterpret_cast<int32_t const *>(lampIndexes) + __lampIndexesSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Lights::Effects::ILampArrayBitmapRequestedEventArgs> : produce_base<D, Windows::Devices::Lights::Effects::ILampArrayBitmapRequestedEventArgs>
    {
        int32_t __stdcall get_SinceStarted(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().SinceStarted());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UpdateBitmap(void* bitmap) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateBitmap(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&bitmap));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Lights::Effects::ILampArrayBlinkEffect> : produce_base<D, Windows::Devices::Lights::Effects::ILampArrayBlinkEffect>
    {
        int32_t __stdcall get_Color(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Color());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Color(struct struct_Windows_UI_Color value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Color(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AttackDuration(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().AttackDuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AttackDuration(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AttackDuration(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SustainDuration(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().SustainDuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SustainDuration(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SustainDuration(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DecayDuration(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().DecayDuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DecayDuration(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DecayDuration(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RepetitionDelay(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().RepetitionDelay());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RepetitionDelay(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RepetitionDelay(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StartDelay(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().StartDelay());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StartDelay(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartDelay(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Occurrences(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Occurrences());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Occurrences(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Occurrences(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RepetitionMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Lights::Effects::LampArrayRepetitionMode>(this->shim().RepetitionMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RepetitionMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RepetitionMode(*reinterpret_cast<Windows::Devices::Lights::Effects::LampArrayRepetitionMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Lights::Effects::ILampArrayBlinkEffectFactory> : produce_base<D, Windows::Devices::Lights::Effects::ILampArrayBlinkEffectFactory>
    {
        int32_t __stdcall CreateInstance(void* lampArray, uint32_t __lampIndexesSize, int32_t* lampIndexes, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Lights::Effects::LampArrayBlinkEffect>(this->shim().CreateInstance(*reinterpret_cast<Windows::Devices::Lights::LampArray const*>(&lampArray), array_view<int32_t const>(reinterpret_cast<int32_t const *>(lampIndexes), reinterpret_cast<int32_t const *>(lampIndexes) + __lampIndexesSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Lights::Effects::ILampArrayColorRampEffect> : produce_base<D, Windows::Devices::Lights::Effects::ILampArrayColorRampEffect>
    {
        int32_t __stdcall get_Color(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Color());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Color(struct struct_Windows_UI_Color value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Color(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RampDuration(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().RampDuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RampDuration(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RampDuration(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StartDelay(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().StartDelay());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StartDelay(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartDelay(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CompletionBehavior(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Lights::Effects::LampArrayEffectCompletionBehavior>(this->shim().CompletionBehavior());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CompletionBehavior(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompletionBehavior(*reinterpret_cast<Windows::Devices::Lights::Effects::LampArrayEffectCompletionBehavior const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Lights::Effects::ILampArrayColorRampEffectFactory> : produce_base<D, Windows::Devices::Lights::Effects::ILampArrayColorRampEffectFactory>
    {
        int32_t __stdcall CreateInstance(void* lampArray, uint32_t __lampIndexesSize, int32_t* lampIndexes, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Lights::Effects::LampArrayColorRampEffect>(this->shim().CreateInstance(*reinterpret_cast<Windows::Devices::Lights::LampArray const*>(&lampArray), array_view<int32_t const>(reinterpret_cast<int32_t const *>(lampIndexes), reinterpret_cast<int32_t const *>(lampIndexes) + __lampIndexesSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Lights::Effects::ILampArrayCustomEffect> : produce_base<D, Windows::Devices::Lights::Effects::ILampArrayCustomEffect>
    {
        int32_t __stdcall get_Duration(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Duration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Duration(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Duration(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UpdateInterval(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().UpdateInterval());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_UpdateInterval(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateInterval(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_UpdateRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().UpdateRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Lights::Effects::LampArrayCustomEffect, Windows::Devices::Lights::Effects::LampArrayUpdateRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_UpdateRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Lights::Effects::ILampArrayCustomEffectFactory> : produce_base<D, Windows::Devices::Lights::Effects::ILampArrayCustomEffectFactory>
    {
        int32_t __stdcall CreateInstance(void* lampArray, uint32_t __lampIndexesSize, int32_t* lampIndexes, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Lights::Effects::LampArrayCustomEffect>(this->shim().CreateInstance(*reinterpret_cast<Windows::Devices::Lights::LampArray const*>(&lampArray), array_view<int32_t const>(reinterpret_cast<int32_t const *>(lampIndexes), reinterpret_cast<int32_t const *>(lampIndexes) + __lampIndexesSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Lights::Effects::ILampArrayEffect> : produce_base<D, Windows::Devices::Lights::Effects::ILampArrayEffect>
    {
        int32_t __stdcall get_ZIndex(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ZIndex());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ZIndex(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ZIndex(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist> : produce_base<D, Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist>
    {
        int32_t __stdcall Append(void* effect) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Append(*reinterpret_cast<Windows::Devices::Lights::Effects::ILampArrayEffect const*>(&effect));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall OverrideZIndex(int32_t zIndex) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OverrideZIndex(zIndex);
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
        int32_t __stdcall Pause() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Pause();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EffectStartMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Lights::Effects::LampArrayEffectStartMode>(this->shim().EffectStartMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_EffectStartMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EffectStartMode(*reinterpret_cast<Windows::Devices::Lights::Effects::LampArrayEffectStartMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Occurrences(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Occurrences());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Occurrences(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Occurrences(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RepetitionMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Lights::Effects::LampArrayRepetitionMode>(this->shim().RepetitionMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RepetitionMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RepetitionMode(*reinterpret_cast<Windows::Devices::Lights::Effects::LampArrayRepetitionMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Lights::Effects::ILampArrayEffectPlaylistStatics> : produce_base<D, Windows::Devices::Lights::Effects::ILampArrayEffectPlaylistStatics>
    {
        int32_t __stdcall StartAll(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartAll(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StopAll(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopAll(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall PauseAll(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PauseAll(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Lights::Effects::ILampArraySolidEffect> : produce_base<D, Windows::Devices::Lights::Effects::ILampArraySolidEffect>
    {
        int32_t __stdcall get_Color(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Color());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Color(struct struct_Windows_UI_Color value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Color(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Duration(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Duration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Duration(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Duration(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StartDelay(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().StartDelay());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StartDelay(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartDelay(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CompletionBehavior(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Lights::Effects::LampArrayEffectCompletionBehavior>(this->shim().CompletionBehavior());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CompletionBehavior(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompletionBehavior(*reinterpret_cast<Windows::Devices::Lights::Effects::LampArrayEffectCompletionBehavior const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Lights::Effects::ILampArraySolidEffectFactory> : produce_base<D, Windows::Devices::Lights::Effects::ILampArraySolidEffectFactory>
    {
        int32_t __stdcall CreateInstance(void* lampArray, uint32_t __lampIndexesSize, int32_t* lampIndexes, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Lights::Effects::LampArraySolidEffect>(this->shim().CreateInstance(*reinterpret_cast<Windows::Devices::Lights::LampArray const*>(&lampArray), array_view<int32_t const>(reinterpret_cast<int32_t const *>(lampIndexes), reinterpret_cast<int32_t const *>(lampIndexes) + __lampIndexesSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Lights::Effects::ILampArrayUpdateRequestedEventArgs> : produce_base<D, Windows::Devices::Lights::Effects::ILampArrayUpdateRequestedEventArgs>
    {
        int32_t __stdcall get_SinceStarted(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().SinceStarted());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetColor(struct struct_Windows_UI_Color desiredColor) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetColor(*reinterpret_cast<Windows::UI::Color const*>(&desiredColor));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetColorForIndex(int32_t lampIndex, struct struct_Windows_UI_Color desiredColor) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetColorForIndex(lampIndex, *reinterpret_cast<Windows::UI::Color const*>(&desiredColor));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetSingleColorForIndices(struct struct_Windows_UI_Color desiredColor, uint32_t __lampIndexesSize, int32_t* lampIndexes) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSingleColorForIndices(*reinterpret_cast<Windows::UI::Color const*>(&desiredColor), array_view<int32_t const>(reinterpret_cast<int32_t const *>(lampIndexes), reinterpret_cast<int32_t const *>(lampIndexes) + __lampIndexesSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetColorsForIndices(uint32_t __desiredColorsSize, struct struct_Windows_UI_Color* desiredColors, uint32_t __lampIndexesSize, int32_t* lampIndexes) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetColorsForIndices(array_view<Windows::UI::Color const>(reinterpret_cast<Windows::UI::Color const *>(desiredColors), reinterpret_cast<Windows::UI::Color const *>(desiredColors) + __desiredColorsSize), array_view<int32_t const>(reinterpret_cast<int32_t const *>(lampIndexes), reinterpret_cast<int32_t const *>(lampIndexes) + __lampIndexesSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Devices::Lights::Effects
{
    inline LampArrayBitmapEffect::LampArrayBitmapEffect(Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes) :
        LampArrayBitmapEffect(impl::call_factory<LampArrayBitmapEffect, Windows::Devices::Lights::Effects::ILampArrayBitmapEffectFactory>([&](auto&& f) { return f.CreateInstance(lampArray, lampIndexes); }))
    {
    }
    inline LampArrayBlinkEffect::LampArrayBlinkEffect(Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes) :
        LampArrayBlinkEffect(impl::call_factory<LampArrayBlinkEffect, Windows::Devices::Lights::Effects::ILampArrayBlinkEffectFactory>([&](auto&& f) { return f.CreateInstance(lampArray, lampIndexes); }))
    {
    }
    inline LampArrayColorRampEffect::LampArrayColorRampEffect(Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes) :
        LampArrayColorRampEffect(impl::call_factory<LampArrayColorRampEffect, Windows::Devices::Lights::Effects::ILampArrayColorRampEffectFactory>([&](auto&& f) { return f.CreateInstance(lampArray, lampIndexes); }))
    {
    }
    inline LampArrayCustomEffect::LampArrayCustomEffect(Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes) :
        LampArrayCustomEffect(impl::call_factory<LampArrayCustomEffect, Windows::Devices::Lights::Effects::ILampArrayCustomEffectFactory>([&](auto&& f) { return f.CreateInstance(lampArray, lampIndexes); }))
    {
    }
    inline LampArrayEffectPlaylist::LampArrayEffectPlaylist() :
        LampArrayEffectPlaylist(impl::call_factory<LampArrayEffectPlaylist>([](auto&& f) { return f.template ActivateInstance<LampArrayEffectPlaylist>(); }))
    {
    }
    inline auto LampArrayEffectPlaylist::StartAll(param::iterable<Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> const& value)
    {
        impl::call_factory<LampArrayEffectPlaylist, Windows::Devices::Lights::Effects::ILampArrayEffectPlaylistStatics>([&](auto&& f) { return f.StartAll(value); });
    }
    inline auto LampArrayEffectPlaylist::StopAll(param::iterable<Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> const& value)
    {
        impl::call_factory<LampArrayEffectPlaylist, Windows::Devices::Lights::Effects::ILampArrayEffectPlaylistStatics>([&](auto&& f) { return f.StopAll(value); });
    }
    inline auto LampArrayEffectPlaylist::PauseAll(param::iterable<Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> const& value)
    {
        impl::call_factory<LampArrayEffectPlaylist, Windows::Devices::Lights::Effects::ILampArrayEffectPlaylistStatics>([&](auto&& f) { return f.PauseAll(value); });
    }
    inline LampArraySolidEffect::LampArraySolidEffect(Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes) :
        LampArraySolidEffect(impl::call_factory<LampArraySolidEffect, Windows::Devices::Lights::Effects::ILampArraySolidEffectFactory>([&](auto&& f) { return f.CreateInstance(lampArray, lampIndexes); }))
    {
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArrayBitmapEffect> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::Effects::ILampArrayBitmapEffect> {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArrayBitmapEffectFactory> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::Effects::ILampArrayBitmapEffectFactory> {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArrayBitmapRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::Effects::ILampArrayBitmapRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArrayBlinkEffect> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::Effects::ILampArrayBlinkEffect> {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArrayBlinkEffectFactory> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::Effects::ILampArrayBlinkEffectFactory> {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArrayColorRampEffect> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::Effects::ILampArrayColorRampEffect> {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArrayColorRampEffectFactory> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::Effects::ILampArrayColorRampEffectFactory> {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArrayCustomEffect> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::Effects::ILampArrayCustomEffect> {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArrayCustomEffectFactory> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::Effects::ILampArrayCustomEffectFactory> {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArrayEffect> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::Effects::ILampArrayEffect> {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist> {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArrayEffectPlaylistStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::Effects::ILampArrayEffectPlaylistStatics> {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArraySolidEffect> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::Effects::ILampArraySolidEffect> {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArraySolidEffectFactory> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::Effects::ILampArraySolidEffectFactory> {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArrayUpdateRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::Effects::ILampArrayUpdateRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::LampArrayBitmapEffect> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::Effects::LampArrayBitmapEffect> {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::LampArrayBitmapRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::Effects::LampArrayBitmapRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::LampArrayBlinkEffect> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::Effects::LampArrayBlinkEffect> {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::LampArrayColorRampEffect> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::Effects::LampArrayColorRampEffect> {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::LampArrayCustomEffect> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::Effects::LampArrayCustomEffect> {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::LampArraySolidEffect> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::Effects::LampArraySolidEffect> {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::LampArrayUpdateRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::Effects::LampArrayUpdateRequestedEventArgs> {};
}
#endif
