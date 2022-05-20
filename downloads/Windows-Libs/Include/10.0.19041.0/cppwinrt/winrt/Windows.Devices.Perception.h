// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Perception_H
#define WINRT_Windows_Devices_Perception_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Devices.h"
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Foundation.Numerics.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.Media.2.h"
#include "winrt/impl/Windows.Media.Devices.Core.2.h"
#include "winrt/impl/Windows.Devices.Perception.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Devices_Perception_IKnownCameraIntrinsicsPropertiesStatics<D>::FocalLength() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics)->get_FocalLength(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownCameraIntrinsicsPropertiesStatics<D>::PrincipalPoint() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics)->get_PrincipalPoint(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownCameraIntrinsicsPropertiesStatics<D>::RadialDistortion() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics)->get_RadialDistortion(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownCameraIntrinsicsPropertiesStatics<D>::TangentialDistortion() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics)->get_TangentialDistortion(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionColorFrameSourcePropertiesStatics<D>::Exposure() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics)->get_Exposure(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionColorFrameSourcePropertiesStatics<D>::AutoExposureEnabled() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics)->get_AutoExposureEnabled(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionColorFrameSourcePropertiesStatics<D>::ExposureCompensation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics)->get_ExposureCompensation(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionDepthFrameSourcePropertiesStatics<D>::MinDepth() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics)->get_MinDepth(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionDepthFrameSourcePropertiesStatics<D>::MaxDepth() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics)->get_MaxDepth(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics)->get_Id(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics<D>::PhysicalDeviceIds() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics)->get_PhysicalDeviceIds(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics<D>::FrameKind() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics)->get_FrameKind(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics<D>::DeviceModelVersion() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics)->get_DeviceModelVersion(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics<D>::EnclosureLocation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics)->get_EnclosureLocation(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics2<D>::DeviceId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2)->get_DeviceId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::Exposure() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics)->get_Exposure(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::AutoExposureEnabled() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics)->get_AutoExposureEnabled(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::ExposureCompensation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics)->get_ExposureCompensation(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::ActiveIlluminationEnabled() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics)->get_ActiveIlluminationEnabled(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::AmbientSubtractionEnabled() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics)->get_AmbientSubtractionEnabled(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::StructureLightPatternEnabled() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics)->get_StructureLightPatternEnabled(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::InterleavedIlluminationEnabled() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics)->get_InterleavedIlluminationEnabled(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionVideoFrameSourcePropertiesStatics<D>::VideoProfile() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics)->get_VideoProfile(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionVideoFrameSourcePropertiesStatics<D>::SupportedVideoProfiles() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics)->get_SupportedVideoProfiles(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionVideoFrameSourcePropertiesStatics<D>::AvailableVideoProfiles() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics)->get_AvailableVideoProfiles(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionVideoFrameSourcePropertiesStatics<D>::IsMirrored() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics)->get_IsMirrored(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionVideoFrameSourcePropertiesStatics<D>::CameraIntrinsics() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics)->get_CameraIntrinsics(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionVideoProfilePropertiesStatics<D>::BitmapPixelFormat() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics)->get_BitmapPixelFormat(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionVideoProfilePropertiesStatics<D>::BitmapAlphaMode() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics)->get_BitmapAlphaMode(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionVideoProfilePropertiesStatics<D>::Width() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics)->get_Width(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionVideoProfilePropertiesStatics<D>::Height() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics)->get_Height(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IKnownPerceptionVideoProfilePropertiesStatics<D>::FrameDuration() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics)->get_FrameDuration(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrame<D>::VideoFrame() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrame)->get_VideoFrame(&value));
        return Windows::Media::VideoFrame{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameArrivedEventArgs<D>::RelativeTime() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs)->get_RelativeTime(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameArrivedEventArgs<D>::TryOpenFrame() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs)->TryOpenFrame(&result));
        return Windows::Devices::Perception::PerceptionColorFrame{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameReader<D>::FrameArrived(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameReader, Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameReader)->add_FrameArrived(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionColorFrameReader<D>::FrameArrived_revoker consume_Windows_Devices_Perception_IPerceptionColorFrameReader<D>::FrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameReader, Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, FrameArrived_revoker>(this, FrameArrived(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameReader<D>::FrameArrived(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameReader)->remove_FrameArrived(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameReader<D>::Source() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameReader)->get_Source(&value));
        return Windows::Devices::Perception::PerceptionColorFrameSource{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameReader<D>::IsPaused() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameReader)->get_IsPaused(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameReader<D>::IsPaused(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameReader)->put_IsPaused(value));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameReader<D>::TryReadLatestFrame() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameReader)->TryReadLatestFrame(&result));
        return Windows::Devices::Perception::PerceptionColorFrame{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::AvailableChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->add_AvailableChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::AvailableChanged_revoker consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::AvailableChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, AvailableChanged_revoker>(this, AvailableChanged(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::AvailableChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->remove_AvailableChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::ActiveChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->add_ActiveChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::ActiveChanged_revoker consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::ActiveChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, ActiveChanged_revoker>(this, ActiveChanged(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::ActiveChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->remove_ActiveChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::PropertiesChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->add_PropertiesChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::PropertiesChanged_revoker consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::PropertiesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, PropertiesChanged_revoker>(this, PropertiesChanged(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::PropertiesChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->remove_PropertiesChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::VideoProfileChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->add_VideoProfileChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::VideoProfileChanged_revoker consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::VideoProfileChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, VideoProfileChanged_revoker>(this, VideoProfileChanged(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::VideoProfileChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->remove_VideoProfileChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::CameraIntrinsicsChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->add_CameraIntrinsicsChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::CameraIntrinsicsChanged_revoker consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::CameraIntrinsicsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, CameraIntrinsicsChanged_revoker>(this, CameraIntrinsicsChanged(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::CameraIntrinsicsChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->remove_CameraIntrinsicsChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_Id(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::DisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_DisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::DeviceKind() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_DeviceKind(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::Available() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_Available(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::Active() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_Active(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::IsControlled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_IsControlled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::Properties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_Properties(&value));
        return Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::SupportedVideoProfiles() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_SupportedVideoProfiles(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::AvailableVideoProfiles() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_AvailableVideoProfiles(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::VideoProfile() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_VideoProfile(&value));
        return Windows::Devices::Perception::PerceptionVideoProfile{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::CameraIntrinsics() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_CameraIntrinsics(&value));
        return Windows::Media::Devices::Core::CameraIntrinsics{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::AcquireControlSession() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->AcquireControlSession(&value));
        return Windows::Devices::Perception::PerceptionControlSession{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::CanControlIndependentlyFrom(param::hstring const& targetId) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->CanControlIndependentlyFrom(*(void**)(&targetId), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::IsCorrelatedWith(param::hstring const& targetId) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->IsCorrelatedWith(*(void**)(&targetId), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::TryGetTransformTo(param::hstring const& targetId, Windows::Foundation::Numerics::float4x4& result) const
    {
        bool hasResult;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->TryGetTransformTo(*(void**)(&targetId), impl::bind_out(result), &hasResult));
        return hasResult;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::TryGetDepthCorrelatedCameraIntrinsicsAsync(Windows::Devices::Perception::PerceptionDepthFrameSource const& correlatedDepthFrameSource) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->TryGetDepthCorrelatedCameraIntrinsicsAsync(*(void**)(&correlatedDepthFrameSource), &result));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::TryGetDepthCorrelatedCoordinateMapperAsync(param::hstring const& targetSourceId, Windows::Devices::Perception::PerceptionDepthFrameSource const& correlatedDepthFrameSource) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->TryGetDepthCorrelatedCoordinateMapperAsync(*(void**)(&targetSourceId), *(void**)(&correlatedDepthFrameSource), &result));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::TrySetVideoProfileAsync(Windows::Devices::Perception::PerceptionControlSession const& controlSession, Windows::Devices::Perception::PerceptionVideoProfile const& profile) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->TrySetVideoProfileAsync(*(void**)(&controlSession), *(void**)(&profile), &result));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::OpenReader() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->OpenReader(&result));
        return Windows::Devices::Perception::PerceptionColorFrameReader{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSource2<D>::DeviceId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource2)->get_DeviceId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSourceAddedEventArgs<D>::FrameSource() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs)->get_FrameSource(&value));
        return Windows::Devices::Perception::PerceptionColorFrameSource{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSourceRemovedEventArgs<D>::FrameSource() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs)->get_FrameSource(&value));
        return Windows::Devices::Perception::PerceptionColorFrameSource{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSourceStatics<D>::CreateWatcher() const
    {
        void* watcher{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceStatics)->CreateWatcher(&watcher));
        return Windows::Devices::Perception::PerceptionColorFrameSourceWatcher{ watcher, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSourceStatics<D>::FindAllAsync() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceStatics)->FindAllAsync(&result));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionColorFrameSource>>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSourceStatics<D>::FromIdAsync(param::hstring const& id) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceStatics)->FromIdAsync(*(void**)(&id), &result));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionColorFrameSource>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSourceStatics<D>::RequestAccessAsync() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceStatics)->RequestAccessAsync(&result));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::SourceAdded(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->add_SourceAdded(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::SourceAdded_revoker consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::SourceAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, SourceAdded_revoker>(this, SourceAdded(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::SourceAdded(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->remove_SourceAdded(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::SourceRemoved(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->add_SourceRemoved(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::SourceRemoved_revoker consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::SourceRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, SourceRemoved_revoker>(this, SourceRemoved(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::SourceRemoved(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->remove_SourceRemoved(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->add_Stopped(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::Stopped_revoker consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, Stopped_revoker>(this, Stopped(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::Stopped(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->remove_Stopped(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->add_EnumerationCompleted(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::EnumerationCompleted_revoker consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, EnumerationCompleted_revoker>(this, EnumerationCompleted(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::EnumerationCompleted(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->remove_EnumerationCompleted(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::Status() const
    {
        Windows::Devices::Enumeration::DeviceWatcherStatus value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->get_Status(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::Start() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->Start());
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::Stop() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->Stop());
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionControlSession<D>::ControlLost(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionControlSession, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionControlSession)->add_ControlLost(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionControlSession<D>::ControlLost_revoker consume_Windows_Devices_Perception_IPerceptionControlSession<D>::ControlLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionControlSession, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, ControlLost_revoker>(this, ControlLost(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionControlSession<D>::ControlLost(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionControlSession)->remove_ControlLost(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionControlSession<D>::TrySetPropertyAsync(param::hstring const& name, Windows::Foundation::IInspectable const& value) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionControlSession)->TrySetPropertyAsync(*(void**)(&name), *(void**)(&value), &result));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCameraIntrinsics<D>::UnprojectPixelAtCorrelatedDepth(Windows::Foundation::Point const& pixelCoordinate, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame) const
    {
        Windows::Foundation::Numerics::float3 result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics)->UnprojectPixelAtCorrelatedDepth(impl::bind_in(pixelCoordinate), *(void**)(&depthFrame), put_abi(result)));
        return result;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCameraIntrinsics<D>::UnprojectPixelsAtCorrelatedDepth(array_view<Windows::Foundation::Point const> sourceCoordinates, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Numerics::float3> results) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics)->UnprojectPixelsAtCorrelatedDepth(sourceCoordinates.size(), get_abi(sourceCoordinates), *(void**)(&depthFrame), results.size(), put_abi(results)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCameraIntrinsics<D>::UnprojectRegionPixelsAtCorrelatedDepthAsync(Windows::Foundation::Rect const& region, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Numerics::float3> results) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics)->UnprojectRegionPixelsAtCorrelatedDepthAsync(impl::bind_in(region), *(void**)(&depthFrame), results.size(), put_abi(results), &result));
        return Windows::Foundation::IAsyncAction{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCameraIntrinsics<D>::UnprojectAllPixelsAtCorrelatedDepthAsync(Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Numerics::float3> results) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics)->UnprojectAllPixelsAtCorrelatedDepthAsync(*(void**)(&depthFrame), results.size(), put_abi(results), &result));
        return Windows::Foundation::IAsyncAction{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCoordinateMapper<D>::MapPixelToTarget(Windows::Foundation::Point const& sourcePixelCoordinate, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame) const
    {
        Windows::Foundation::Point result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper)->MapPixelToTarget(impl::bind_in(sourcePixelCoordinate), *(void**)(&depthFrame), put_abi(result)));
        return result;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCoordinateMapper<D>::MapPixelsToTarget(array_view<Windows::Foundation::Point const> sourceCoordinates, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Point> results) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper)->MapPixelsToTarget(sourceCoordinates.size(), get_abi(sourceCoordinates), *(void**)(&depthFrame), results.size(), put_abi(results)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCoordinateMapper<D>::MapRegionOfPixelsToTargetAsync(Windows::Foundation::Rect const& region, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Point> targetCoordinates) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper)->MapRegionOfPixelsToTargetAsync(impl::bind_in(region), *(void**)(&depthFrame), targetCoordinates.size(), put_abi(targetCoordinates), &result));
        return Windows::Foundation::IAsyncAction{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCoordinateMapper<D>::MapAllPixelsToTargetAsync(Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Point> targetCoordinates) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper)->MapAllPixelsToTargetAsync(*(void**)(&depthFrame), targetCoordinates.size(), put_abi(targetCoordinates), &result));
        return Windows::Foundation::IAsyncAction{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrame<D>::VideoFrame() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrame)->get_VideoFrame(&value));
        return Windows::Media::VideoFrame{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameArrivedEventArgs<D>::RelativeTime() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs)->get_RelativeTime(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameArrivedEventArgs<D>::TryOpenFrame() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs)->TryOpenFrame(&result));
        return Windows::Devices::Perception::PerceptionDepthFrame{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameReader<D>::FrameArrived(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameReader, Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameReader)->add_FrameArrived(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionDepthFrameReader<D>::FrameArrived_revoker consume_Windows_Devices_Perception_IPerceptionDepthFrameReader<D>::FrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameReader, Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, FrameArrived_revoker>(this, FrameArrived(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameReader<D>::FrameArrived(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameReader)->remove_FrameArrived(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameReader<D>::Source() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameReader)->get_Source(&value));
        return Windows::Devices::Perception::PerceptionDepthFrameSource{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameReader<D>::IsPaused() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameReader)->get_IsPaused(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameReader<D>::IsPaused(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameReader)->put_IsPaused(value));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameReader<D>::TryReadLatestFrame() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameReader)->TryReadLatestFrame(&result));
        return Windows::Devices::Perception::PerceptionDepthFrame{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::AvailableChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->add_AvailableChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::AvailableChanged_revoker consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::AvailableChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, AvailableChanged_revoker>(this, AvailableChanged(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::AvailableChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->remove_AvailableChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::ActiveChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->add_ActiveChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::ActiveChanged_revoker consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::ActiveChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, ActiveChanged_revoker>(this, ActiveChanged(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::ActiveChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->remove_ActiveChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::PropertiesChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->add_PropertiesChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::PropertiesChanged_revoker consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::PropertiesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, PropertiesChanged_revoker>(this, PropertiesChanged(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::PropertiesChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->remove_PropertiesChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::VideoProfileChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->add_VideoProfileChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::VideoProfileChanged_revoker consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::VideoProfileChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, VideoProfileChanged_revoker>(this, VideoProfileChanged(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::VideoProfileChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->remove_VideoProfileChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::CameraIntrinsicsChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->add_CameraIntrinsicsChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::CameraIntrinsicsChanged_revoker consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::CameraIntrinsicsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, CameraIntrinsicsChanged_revoker>(this, CameraIntrinsicsChanged(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::CameraIntrinsicsChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->remove_CameraIntrinsicsChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_Id(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::DisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_DisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::DeviceKind() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_DeviceKind(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::Available() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_Available(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::Active() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_Active(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::IsControlled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_IsControlled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::Properties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_Properties(&value));
        return Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::SupportedVideoProfiles() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_SupportedVideoProfiles(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::AvailableVideoProfiles() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_AvailableVideoProfiles(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::VideoProfile() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_VideoProfile(&value));
        return Windows::Devices::Perception::PerceptionVideoProfile{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::CameraIntrinsics() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_CameraIntrinsics(&value));
        return Windows::Media::Devices::Core::CameraIntrinsics{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::AcquireControlSession() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->AcquireControlSession(&result));
        return Windows::Devices::Perception::PerceptionControlSession{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::CanControlIndependentlyFrom(param::hstring const& targetId) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->CanControlIndependentlyFrom(*(void**)(&targetId), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::IsCorrelatedWith(param::hstring const& targetId) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->IsCorrelatedWith(*(void**)(&targetId), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::TryGetTransformTo(param::hstring const& targetId, Windows::Foundation::Numerics::float4x4& result) const
    {
        bool hasResult;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->TryGetTransformTo(*(void**)(&targetId), impl::bind_out(result), &hasResult));
        return hasResult;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::TryGetDepthCorrelatedCameraIntrinsicsAsync(Windows::Devices::Perception::PerceptionDepthFrameSource const& target) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->TryGetDepthCorrelatedCameraIntrinsicsAsync(*(void**)(&target), &result));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::TryGetDepthCorrelatedCoordinateMapperAsync(param::hstring const& targetId, Windows::Devices::Perception::PerceptionDepthFrameSource const& depthFrameSourceToMapWith) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->TryGetDepthCorrelatedCoordinateMapperAsync(*(void**)(&targetId), *(void**)(&depthFrameSourceToMapWith), &result));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::TrySetVideoProfileAsync(Windows::Devices::Perception::PerceptionControlSession const& controlSession, Windows::Devices::Perception::PerceptionVideoProfile const& profile) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->TrySetVideoProfileAsync(*(void**)(&controlSession), *(void**)(&profile), &result));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::OpenReader() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->OpenReader(&result));
        return Windows::Devices::Perception::PerceptionDepthFrameReader{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSource2<D>::DeviceId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource2)->get_DeviceId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceAddedEventArgs<D>::FrameSource() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs)->get_FrameSource(&value));
        return Windows::Devices::Perception::PerceptionDepthFrameSource{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceRemovedEventArgs<D>::FrameSource() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs)->get_FrameSource(&value));
        return Windows::Devices::Perception::PerceptionDepthFrameSource{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceStatics<D>::CreateWatcher() const
    {
        void* watcher{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics)->CreateWatcher(&watcher));
        return Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher{ watcher, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceStatics<D>::FindAllAsync() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics)->FindAllAsync(&result));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionDepthFrameSource>>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceStatics<D>::FromIdAsync(param::hstring const& id) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics)->FromIdAsync(*(void**)(&id), &result));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthFrameSource>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceStatics<D>::RequestAccessAsync() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics)->RequestAccessAsync(&result));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::SourceAdded(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->add_SourceAdded(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::SourceAdded_revoker consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::SourceAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, SourceAdded_revoker>(this, SourceAdded(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::SourceAdded(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->remove_SourceAdded(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::SourceRemoved(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->add_SourceRemoved(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::SourceRemoved_revoker consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::SourceRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, SourceRemoved_revoker>(this, SourceRemoved(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::SourceRemoved(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->remove_SourceRemoved(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->add_Stopped(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::Stopped_revoker consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, Stopped_revoker>(this, Stopped(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::Stopped(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->remove_Stopped(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->add_EnumerationCompleted(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::EnumerationCompleted_revoker consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, EnumerationCompleted_revoker>(this, EnumerationCompleted(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::EnumerationCompleted(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->remove_EnumerationCompleted(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::Status() const
    {
        Windows::Devices::Enumeration::DeviceWatcherStatus value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->get_Status(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::Start() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->Start());
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::Stop() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->Stop());
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionFrameSourcePropertiesChangedEventArgs<D>::CollectionChange() const
    {
        Windows::Foundation::Collections::CollectionChange value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs)->get_CollectionChange(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionFrameSourcePropertiesChangedEventArgs<D>::Key() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs)->get_Key(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionFrameSourcePropertyChangeResult<D>::Status() const
    {
        Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult)->get_Status(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionFrameSourcePropertyChangeResult<D>::NewValue() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult)->get_NewValue(&value));
        return Windows::Foundation::IInspectable{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrame<D>::VideoFrame() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrame)->get_VideoFrame(&value));
        return Windows::Media::VideoFrame{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameArrivedEventArgs<D>::RelativeTime() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs)->get_RelativeTime(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameArrivedEventArgs<D>::TryOpenFrame() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs)->TryOpenFrame(&result));
        return Windows::Devices::Perception::PerceptionInfraredFrame{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameReader<D>::FrameArrived(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameReader, Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameReader)->add_FrameArrived(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionInfraredFrameReader<D>::FrameArrived_revoker consume_Windows_Devices_Perception_IPerceptionInfraredFrameReader<D>::FrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameReader, Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, FrameArrived_revoker>(this, FrameArrived(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameReader<D>::FrameArrived(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameReader)->remove_FrameArrived(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameReader<D>::Source() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameReader)->get_Source(&value));
        return Windows::Devices::Perception::PerceptionInfraredFrameSource{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameReader<D>::IsPaused() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameReader)->get_IsPaused(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameReader<D>::IsPaused(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameReader)->put_IsPaused(value));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameReader<D>::TryReadLatestFrame() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameReader)->TryReadLatestFrame(&result));
        return Windows::Devices::Perception::PerceptionInfraredFrame{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::AvailableChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->add_AvailableChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::AvailableChanged_revoker consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::AvailableChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, AvailableChanged_revoker>(this, AvailableChanged(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::AvailableChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->remove_AvailableChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::ActiveChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->add_ActiveChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::ActiveChanged_revoker consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::ActiveChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, ActiveChanged_revoker>(this, ActiveChanged(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::ActiveChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->remove_ActiveChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::PropertiesChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->add_PropertiesChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::PropertiesChanged_revoker consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::PropertiesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, PropertiesChanged_revoker>(this, PropertiesChanged(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::PropertiesChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->remove_PropertiesChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::VideoProfileChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->add_VideoProfileChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::VideoProfileChanged_revoker consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::VideoProfileChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, VideoProfileChanged_revoker>(this, VideoProfileChanged(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::VideoProfileChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->remove_VideoProfileChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::CameraIntrinsicsChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->add_CameraIntrinsicsChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::CameraIntrinsicsChanged_revoker consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::CameraIntrinsicsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, CameraIntrinsicsChanged_revoker>(this, CameraIntrinsicsChanged(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::CameraIntrinsicsChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->remove_CameraIntrinsicsChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_Id(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::DisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_DisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::DeviceKind() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_DeviceKind(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::Available() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_Available(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::Active() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_Active(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::IsControlled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_IsControlled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::Properties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_Properties(&value));
        return Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::SupportedVideoProfiles() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_SupportedVideoProfiles(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::AvailableVideoProfiles() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_AvailableVideoProfiles(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::VideoProfile() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_VideoProfile(&value));
        return Windows::Devices::Perception::PerceptionVideoProfile{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::CameraIntrinsics() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_CameraIntrinsics(&value));
        return Windows::Media::Devices::Core::CameraIntrinsics{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::AcquireControlSession() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->AcquireControlSession(&result));
        return Windows::Devices::Perception::PerceptionControlSession{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::CanControlIndependentlyFrom(param::hstring const& targetId) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->CanControlIndependentlyFrom(*(void**)(&targetId), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::IsCorrelatedWith(param::hstring const& targetId) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->IsCorrelatedWith(*(void**)(&targetId), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::TryGetTransformTo(param::hstring const& targetId, Windows::Foundation::Numerics::float4x4& result) const
    {
        bool hasResult;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->TryGetTransformTo(*(void**)(&targetId), impl::bind_out(result), &hasResult));
        return hasResult;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::TryGetDepthCorrelatedCameraIntrinsicsAsync(Windows::Devices::Perception::PerceptionDepthFrameSource const& target) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->TryGetDepthCorrelatedCameraIntrinsicsAsync(*(void**)(&target), &result));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::TryGetDepthCorrelatedCoordinateMapperAsync(param::hstring const& targetId, Windows::Devices::Perception::PerceptionDepthFrameSource const& depthFrameSourceToMapWith) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->TryGetDepthCorrelatedCoordinateMapperAsync(*(void**)(&targetId), *(void**)(&depthFrameSourceToMapWith), &result));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::TrySetVideoProfileAsync(Windows::Devices::Perception::PerceptionControlSession const& controlSession, Windows::Devices::Perception::PerceptionVideoProfile const& profile) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->TrySetVideoProfileAsync(*(void**)(&controlSession), *(void**)(&profile), &result));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::OpenReader() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->OpenReader(&result));
        return Windows::Devices::Perception::PerceptionInfraredFrameReader{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource2<D>::DeviceId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource2)->get_DeviceId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceAddedEventArgs<D>::FrameSource() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs)->get_FrameSource(&value));
        return Windows::Devices::Perception::PerceptionInfraredFrameSource{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceRemovedEventArgs<D>::FrameSource() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs)->get_FrameSource(&value));
        return Windows::Devices::Perception::PerceptionInfraredFrameSource{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceStatics<D>::CreateWatcher() const
    {
        void* watcher{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics)->CreateWatcher(&watcher));
        return Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher{ watcher, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceStatics<D>::FindAllAsync() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics)->FindAllAsync(&result));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionInfraredFrameSource>>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceStatics<D>::FromIdAsync(param::hstring const& id) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics)->FromIdAsync(*(void**)(&id), &result));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionInfraredFrameSource>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceStatics<D>::RequestAccessAsync() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics)->RequestAccessAsync(&result));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::SourceAdded(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->add_SourceAdded(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::SourceAdded_revoker consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::SourceAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, SourceAdded_revoker>(this, SourceAdded(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::SourceAdded(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->remove_SourceAdded(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::SourceRemoved(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->add_SourceRemoved(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::SourceRemoved_revoker consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::SourceRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, SourceRemoved_revoker>(this, SourceRemoved(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::SourceRemoved(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->remove_SourceRemoved(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->add_Stopped(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::Stopped_revoker consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, Stopped_revoker>(this, Stopped(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::Stopped(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->remove_Stopped(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->add_EnumerationCompleted(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::EnumerationCompleted_revoker consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, EnumerationCompleted_revoker>(this, EnumerationCompleted(handler));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::EnumerationCompleted(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->remove_EnumerationCompleted(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::Status() const
    {
        Windows::Devices::Enumeration::DeviceWatcherStatus value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->get_Status(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::Start() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->Start());
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::Stop() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->Stop());
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionVideoProfile<D>::BitmapPixelFormat() const
    {
        Windows::Graphics::Imaging::BitmapPixelFormat value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionVideoProfile)->get_BitmapPixelFormat(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionVideoProfile<D>::BitmapAlphaMode() const
    {
        Windows::Graphics::Imaging::BitmapAlphaMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionVideoProfile)->get_BitmapAlphaMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionVideoProfile<D>::Width() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionVideoProfile)->get_Width(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionVideoProfile<D>::Height() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionVideoProfile)->get_Height(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionVideoProfile<D>::FrameDuration() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionVideoProfile)->get_FrameDuration(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Perception_IPerceptionVideoProfile<D>::IsEqual(Windows::Devices::Perception::PerceptionVideoProfile const& other) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Perception::IPerceptionVideoProfile)->IsEqual(*(void**)(&other), &result));
        return result;
    }
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics> : produce_base<D, Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics>
    {
        int32_t __stdcall get_FocalLength(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FocalLength());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PrincipalPoint(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PrincipalPoint());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RadialDistortion(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RadialDistortion());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TangentialDistortion(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TangentialDistortion());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics> : produce_base<D, Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics>
    {
        int32_t __stdcall get_Exposure(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Exposure());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AutoExposureEnabled(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AutoExposureEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExposureCompensation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ExposureCompensation());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics> : produce_base<D, Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics>
    {
        int32_t __stdcall get_MinDepth(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().MinDepth());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxDepth(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().MaxDepth());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics> : produce_base<D, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics>
    {
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PhysicalDeviceIds(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PhysicalDeviceIds());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FrameKind(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FrameKind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DeviceModelVersion(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceModelVersion());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EnclosureLocation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EnclosureLocation());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2> : produce_base<D, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2>
    {
        int32_t __stdcall get_DeviceId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics> : produce_base<D, Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>
    {
        int32_t __stdcall get_Exposure(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Exposure());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AutoExposureEnabled(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AutoExposureEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExposureCompensation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ExposureCompensation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ActiveIlluminationEnabled(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ActiveIlluminationEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AmbientSubtractionEnabled(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AmbientSubtractionEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StructureLightPatternEnabled(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().StructureLightPatternEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InterleavedIlluminationEnabled(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().InterleavedIlluminationEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics> : produce_base<D, Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics>
    {
        int32_t __stdcall get_VideoProfile(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoProfile());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedVideoProfiles(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SupportedVideoProfiles());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AvailableVideoProfiles(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AvailableVideoProfiles());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsMirrored(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().IsMirrored());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CameraIntrinsics(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CameraIntrinsics());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics> : produce_base<D, Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics>
    {
        int32_t __stdcall get_BitmapPixelFormat(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BitmapPixelFormat());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BitmapAlphaMode(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BitmapAlphaMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Width(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Width());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Height(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Height());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FrameDuration(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FrameDuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionColorFrame> : produce_base<D, Windows::Devices::Perception::IPerceptionColorFrame>
    {
        int32_t __stdcall get_VideoFrame(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::VideoFrame>(this->shim().VideoFrame());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs>
    {
        int32_t __stdcall get_RelativeTime(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().RelativeTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryOpenFrame(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Perception::PerceptionColorFrame>(this->shim().TryOpenFrame());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionColorFrameReader> : produce_base<D, Windows::Devices::Perception::IPerceptionColorFrameReader>
    {
        int32_t __stdcall add_FrameArrived(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().FrameArrived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameReader, Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_FrameArrived(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FrameArrived(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_Source(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionColorFrameSource>(this->shim().Source());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsPaused(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPaused());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsPaused(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsPaused(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryReadLatestFrame(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Perception::PerceptionColorFrame>(this->shim().TryReadLatestFrame());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionColorFrameSource> : produce_base<D, Windows::Devices::Perception::IPerceptionColorFrameSource>
    {
        int32_t __stdcall add_AvailableChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().AvailableChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_AvailableChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AvailableChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_ActiveChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ActiveChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ActiveChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ActiveChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_PropertiesChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().PropertiesChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_PropertiesChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PropertiesChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_VideoProfileChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().VideoProfileChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_VideoProfileChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoProfileChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_CameraIntrinsicsChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().CameraIntrinsicsChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_CameraIntrinsicsChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraIntrinsicsChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DeviceKind(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceKind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Available(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Available());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Active(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Active());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsControlled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsControlled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Properties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>(this->shim().Properties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedVideoProfiles(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>>(this->shim().SupportedVideoProfiles());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AvailableVideoProfiles(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>>(this->shim().AvailableVideoProfiles());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VideoProfile(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionVideoProfile>(this->shim().VideoProfile());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CameraIntrinsics(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Devices::Core::CameraIntrinsics>(this->shim().CameraIntrinsics());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AcquireControlSession(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionControlSession>(this->shim().AcquireControlSession());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CanControlIndependentlyFrom(void* targetId, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().CanControlIndependentlyFrom(*reinterpret_cast<hstring const*>(&targetId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsCorrelatedWith(void* targetId, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsCorrelatedWith(*reinterpret_cast<hstring const*>(&targetId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetTransformTo(void* targetId, Windows::Foundation::Numerics::float4x4* result, bool* hasResult) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float4x4>(result);
            typename D::abi_guard guard(this->shim());
            *hasResult = detach_from<bool>(this->shim().TryGetTransformTo(*reinterpret_cast<hstring const*>(&targetId), *reinterpret_cast<Windows::Foundation::Numerics::float4x4*>(result)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetDepthCorrelatedCameraIntrinsicsAsync(void* correlatedDepthFrameSource, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics>>(this->shim().TryGetDepthCorrelatedCameraIntrinsicsAsync(*reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrameSource const*>(&correlatedDepthFrameSource)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetDepthCorrelatedCoordinateMapperAsync(void* targetSourceId, void* correlatedDepthFrameSource, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper>>(this->shim().TryGetDepthCorrelatedCoordinateMapperAsync(*reinterpret_cast<hstring const*>(&targetSourceId), *reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrameSource const*>(&correlatedDepthFrameSource)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TrySetVideoProfileAsync(void* controlSession, void* profile, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult>>(this->shim().TrySetVideoProfileAsync(*reinterpret_cast<Windows::Devices::Perception::PerceptionControlSession const*>(&controlSession), *reinterpret_cast<Windows::Devices::Perception::PerceptionVideoProfile const*>(&profile)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall OpenReader(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Perception::PerceptionColorFrameReader>(this->shim().OpenReader());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionColorFrameSource2> : produce_base<D, Windows::Devices::Perception::IPerceptionColorFrameSource2>
    {
        int32_t __stdcall get_DeviceId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs>
    {
        int32_t __stdcall get_FrameSource(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionColorFrameSource>(this->shim().FrameSource());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs>
    {
        int32_t __stdcall get_FrameSource(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionColorFrameSource>(this->shim().FrameSource());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionColorFrameSourceStatics> : produce_base<D, Windows::Devices::Perception::IPerceptionColorFrameSourceStatics>
    {
        int32_t __stdcall CreateWatcher(void** watcher) noexcept final try
        {
            clear_abi(watcher);
            typename D::abi_guard guard(this->shim());
            *watcher = detach_from<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher>(this->shim().CreateWatcher());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindAllAsync(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionColorFrameSource>>>(this->shim().FindAllAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FromIdAsync(void* id, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionColorFrameSource>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&id)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestAccessAsync(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus>>(this->shim().RequestAccessAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher> : produce_base<D, Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>
    {
        int32_t __stdcall add_SourceAdded(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().SourceAdded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_SourceAdded(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceAdded(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_SourceRemoved(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().SourceRemoved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_SourceRemoved(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceRemoved(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_Stopped(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Stopped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Stopped(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stopped(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_EnumerationCompleted(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().EnumerationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_EnumerationCompleted(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnumerationCompleted(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Enumeration::DeviceWatcherStatus>(this->shim().Status());
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
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionControlSession> : produce_base<D, Windows::Devices::Perception::IPerceptionControlSession>
    {
        int32_t __stdcall add_ControlLost(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ControlLost(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionControlSession, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ControlLost(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ControlLost(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall TrySetPropertyAsync(void* name, void* value, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult>>(this->shim().TrySetPropertyAsync(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics>
    {
        int32_t __stdcall UnprojectPixelAtCorrelatedDepth(Windows::Foundation::Point pixelCoordinate, void* depthFrame, Windows::Foundation::Numerics::float3* result) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float3>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Numerics::float3>(this->shim().UnprojectPixelAtCorrelatedDepth(*reinterpret_cast<Windows::Foundation::Point const*>(&pixelCoordinate), *reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrame const*>(&depthFrame)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UnprojectPixelsAtCorrelatedDepth(uint32_t __sourceCoordinatesSize, Windows::Foundation::Point* sourceCoordinates, void* depthFrame, uint32_t __resultsSize, Windows::Foundation::Numerics::float3* results) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float3>(results, __resultsSize);
            typename D::abi_guard guard(this->shim());
            this->shim().UnprojectPixelsAtCorrelatedDepth(array_view<Windows::Foundation::Point const>(reinterpret_cast<Windows::Foundation::Point const *>(sourceCoordinates), reinterpret_cast<Windows::Foundation::Point const *>(sourceCoordinates) + __sourceCoordinatesSize), *reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrame const*>(&depthFrame), array_view<Windows::Foundation::Numerics::float3>(reinterpret_cast<Windows::Foundation::Numerics::float3*>(results), reinterpret_cast<Windows::Foundation::Numerics::float3*>(results) + __resultsSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UnprojectRegionPixelsAtCorrelatedDepthAsync(Windows::Foundation::Rect region, void* depthFrame, uint32_t __resultsSize, Windows::Foundation::Numerics::float3* results, void** result) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float3>(results, __resultsSize);
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().UnprojectRegionPixelsAtCorrelatedDepthAsync(*reinterpret_cast<Windows::Foundation::Rect const*>(&region), *reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrame const*>(&depthFrame), array_view<Windows::Foundation::Numerics::float3>(reinterpret_cast<Windows::Foundation::Numerics::float3*>(results), reinterpret_cast<Windows::Foundation::Numerics::float3*>(results) + __resultsSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UnprojectAllPixelsAtCorrelatedDepthAsync(void* depthFrame, uint32_t __resultsSize, Windows::Foundation::Numerics::float3* results, void** result) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float3>(results, __resultsSize);
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().UnprojectAllPixelsAtCorrelatedDepthAsync(*reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrame const*>(&depthFrame), array_view<Windows::Foundation::Numerics::float3>(reinterpret_cast<Windows::Foundation::Numerics::float3*>(results), reinterpret_cast<Windows::Foundation::Numerics::float3*>(results) + __resultsSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper>
    {
        int32_t __stdcall MapPixelToTarget(Windows::Foundation::Point sourcePixelCoordinate, void* depthFrame, Windows::Foundation::Point* result) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Point>(this->shim().MapPixelToTarget(*reinterpret_cast<Windows::Foundation::Point const*>(&sourcePixelCoordinate), *reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrame const*>(&depthFrame)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall MapPixelsToTarget(uint32_t __sourceCoordinatesSize, Windows::Foundation::Point* sourceCoordinates, void* depthFrame, uint32_t __resultsSize, Windows::Foundation::Point* results) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(results, __resultsSize);
            typename D::abi_guard guard(this->shim());
            this->shim().MapPixelsToTarget(array_view<Windows::Foundation::Point const>(reinterpret_cast<Windows::Foundation::Point const *>(sourceCoordinates), reinterpret_cast<Windows::Foundation::Point const *>(sourceCoordinates) + __sourceCoordinatesSize), *reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrame const*>(&depthFrame), array_view<Windows::Foundation::Point>(reinterpret_cast<Windows::Foundation::Point*>(results), reinterpret_cast<Windows::Foundation::Point*>(results) + __resultsSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall MapRegionOfPixelsToTargetAsync(Windows::Foundation::Rect region, void* depthFrame, uint32_t __targetCoordinatesSize, Windows::Foundation::Point* targetCoordinates, void** result) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(targetCoordinates, __targetCoordinatesSize);
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().MapRegionOfPixelsToTargetAsync(*reinterpret_cast<Windows::Foundation::Rect const*>(&region), *reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrame const*>(&depthFrame), array_view<Windows::Foundation::Point>(reinterpret_cast<Windows::Foundation::Point*>(targetCoordinates), reinterpret_cast<Windows::Foundation::Point*>(targetCoordinates) + __targetCoordinatesSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall MapAllPixelsToTargetAsync(void* depthFrame, uint32_t __targetCoordinatesSize, Windows::Foundation::Point* targetCoordinates, void** result) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(targetCoordinates, __targetCoordinatesSize);
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().MapAllPixelsToTargetAsync(*reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrame const*>(&depthFrame), array_view<Windows::Foundation::Point>(reinterpret_cast<Windows::Foundation::Point*>(targetCoordinates), reinterpret_cast<Windows::Foundation::Point*>(targetCoordinates) + __targetCoordinatesSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionDepthFrame> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthFrame>
    {
        int32_t __stdcall get_VideoFrame(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::VideoFrame>(this->shim().VideoFrame());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs>
    {
        int32_t __stdcall get_RelativeTime(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().RelativeTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryOpenFrame(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Perception::PerceptionDepthFrame>(this->shim().TryOpenFrame());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionDepthFrameReader> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthFrameReader>
    {
        int32_t __stdcall add_FrameArrived(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().FrameArrived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameReader, Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_FrameArrived(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FrameArrived(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_Source(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionDepthFrameSource>(this->shim().Source());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsPaused(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPaused());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsPaused(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsPaused(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryReadLatestFrame(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Perception::PerceptionDepthFrame>(this->shim().TryReadLatestFrame());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionDepthFrameSource> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthFrameSource>
    {
        int32_t __stdcall add_AvailableChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().AvailableChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_AvailableChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AvailableChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_ActiveChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ActiveChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ActiveChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ActiveChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_PropertiesChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().PropertiesChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_PropertiesChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PropertiesChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_VideoProfileChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().VideoProfileChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_VideoProfileChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoProfileChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_CameraIntrinsicsChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().CameraIntrinsicsChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_CameraIntrinsicsChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraIntrinsicsChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DeviceKind(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceKind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Available(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Available());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Active(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Active());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsControlled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsControlled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Properties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>(this->shim().Properties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedVideoProfiles(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>>(this->shim().SupportedVideoProfiles());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AvailableVideoProfiles(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>>(this->shim().AvailableVideoProfiles());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VideoProfile(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionVideoProfile>(this->shim().VideoProfile());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CameraIntrinsics(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Devices::Core::CameraIntrinsics>(this->shim().CameraIntrinsics());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AcquireControlSession(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Perception::PerceptionControlSession>(this->shim().AcquireControlSession());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CanControlIndependentlyFrom(void* targetId, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().CanControlIndependentlyFrom(*reinterpret_cast<hstring const*>(&targetId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsCorrelatedWith(void* targetId, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsCorrelatedWith(*reinterpret_cast<hstring const*>(&targetId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetTransformTo(void* targetId, Windows::Foundation::Numerics::float4x4* result, bool* hasResult) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float4x4>(result);
            typename D::abi_guard guard(this->shim());
            *hasResult = detach_from<bool>(this->shim().TryGetTransformTo(*reinterpret_cast<hstring const*>(&targetId), *reinterpret_cast<Windows::Foundation::Numerics::float4x4*>(result)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetDepthCorrelatedCameraIntrinsicsAsync(void* target, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics>>(this->shim().TryGetDepthCorrelatedCameraIntrinsicsAsync(*reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrameSource const*>(&target)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetDepthCorrelatedCoordinateMapperAsync(void* targetId, void* depthFrameSourceToMapWith, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper>>(this->shim().TryGetDepthCorrelatedCoordinateMapperAsync(*reinterpret_cast<hstring const*>(&targetId), *reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrameSource const*>(&depthFrameSourceToMapWith)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TrySetVideoProfileAsync(void* controlSession, void* profile, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult>>(this->shim().TrySetVideoProfileAsync(*reinterpret_cast<Windows::Devices::Perception::PerceptionControlSession const*>(&controlSession), *reinterpret_cast<Windows::Devices::Perception::PerceptionVideoProfile const*>(&profile)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall OpenReader(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Perception::PerceptionDepthFrameReader>(this->shim().OpenReader());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionDepthFrameSource2> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthFrameSource2>
    {
        int32_t __stdcall get_DeviceId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs>
    {
        int32_t __stdcall get_FrameSource(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionDepthFrameSource>(this->shim().FrameSource());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs>
    {
        int32_t __stdcall get_FrameSource(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionDepthFrameSource>(this->shim().FrameSource());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics>
    {
        int32_t __stdcall CreateWatcher(void** watcher) noexcept final try
        {
            clear_abi(watcher);
            typename D::abi_guard guard(this->shim());
            *watcher = detach_from<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher>(this->shim().CreateWatcher());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindAllAsync(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionDepthFrameSource>>>(this->shim().FindAllAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FromIdAsync(void* id, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthFrameSource>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&id)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestAccessAsync(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus>>(this->shim().RequestAccessAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>
    {
        int32_t __stdcall add_SourceAdded(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().SourceAdded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_SourceAdded(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceAdded(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_SourceRemoved(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().SourceRemoved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_SourceRemoved(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceRemoved(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_Stopped(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Stopped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Stopped(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stopped(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_EnumerationCompleted(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().EnumerationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_EnumerationCompleted(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnumerationCompleted(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Enumeration::DeviceWatcherStatus>(this->shim().Status());
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
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs>
    {
        int32_t __stdcall get_CollectionChange(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::CollectionChange>(this->shim().CollectionChange());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Key(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Key());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult> : produce_base<D, Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NewValue(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().NewValue());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionInfraredFrame> : produce_base<D, Windows::Devices::Perception::IPerceptionInfraredFrame>
    {
        int32_t __stdcall get_VideoFrame(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::VideoFrame>(this->shim().VideoFrame());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs>
    {
        int32_t __stdcall get_RelativeTime(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().RelativeTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryOpenFrame(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Perception::PerceptionInfraredFrame>(this->shim().TryOpenFrame());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionInfraredFrameReader> : produce_base<D, Windows::Devices::Perception::IPerceptionInfraredFrameReader>
    {
        int32_t __stdcall add_FrameArrived(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().FrameArrived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameReader, Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_FrameArrived(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FrameArrived(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_Source(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionInfraredFrameSource>(this->shim().Source());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsPaused(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPaused());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsPaused(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsPaused(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryReadLatestFrame(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Perception::PerceptionInfraredFrame>(this->shim().TryReadLatestFrame());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionInfraredFrameSource> : produce_base<D, Windows::Devices::Perception::IPerceptionInfraredFrameSource>
    {
        int32_t __stdcall add_AvailableChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().AvailableChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_AvailableChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AvailableChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_ActiveChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ActiveChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ActiveChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ActiveChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_PropertiesChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().PropertiesChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_PropertiesChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PropertiesChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_VideoProfileChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().VideoProfileChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_VideoProfileChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoProfileChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_CameraIntrinsicsChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().CameraIntrinsicsChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_CameraIntrinsicsChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraIntrinsicsChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DeviceKind(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceKind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Available(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Available());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Active(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Active());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsControlled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsControlled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Properties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>(this->shim().Properties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedVideoProfiles(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>>(this->shim().SupportedVideoProfiles());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AvailableVideoProfiles(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>>(this->shim().AvailableVideoProfiles());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VideoProfile(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionVideoProfile>(this->shim().VideoProfile());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CameraIntrinsics(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Devices::Core::CameraIntrinsics>(this->shim().CameraIntrinsics());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AcquireControlSession(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Perception::PerceptionControlSession>(this->shim().AcquireControlSession());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CanControlIndependentlyFrom(void* targetId, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().CanControlIndependentlyFrom(*reinterpret_cast<hstring const*>(&targetId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsCorrelatedWith(void* targetId, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsCorrelatedWith(*reinterpret_cast<hstring const*>(&targetId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetTransformTo(void* targetId, Windows::Foundation::Numerics::float4x4* result, bool* hasResult) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float4x4>(result);
            typename D::abi_guard guard(this->shim());
            *hasResult = detach_from<bool>(this->shim().TryGetTransformTo(*reinterpret_cast<hstring const*>(&targetId), *reinterpret_cast<Windows::Foundation::Numerics::float4x4*>(result)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetDepthCorrelatedCameraIntrinsicsAsync(void* target, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics>>(this->shim().TryGetDepthCorrelatedCameraIntrinsicsAsync(*reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrameSource const*>(&target)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetDepthCorrelatedCoordinateMapperAsync(void* targetId, void* depthFrameSourceToMapWith, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper>>(this->shim().TryGetDepthCorrelatedCoordinateMapperAsync(*reinterpret_cast<hstring const*>(&targetId), *reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrameSource const*>(&depthFrameSourceToMapWith)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TrySetVideoProfileAsync(void* controlSession, void* profile, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult>>(this->shim().TrySetVideoProfileAsync(*reinterpret_cast<Windows::Devices::Perception::PerceptionControlSession const*>(&controlSession), *reinterpret_cast<Windows::Devices::Perception::PerceptionVideoProfile const*>(&profile)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall OpenReader(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Perception::PerceptionInfraredFrameReader>(this->shim().OpenReader());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionInfraredFrameSource2> : produce_base<D, Windows::Devices::Perception::IPerceptionInfraredFrameSource2>
    {
        int32_t __stdcall get_DeviceId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs>
    {
        int32_t __stdcall get_FrameSource(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionInfraredFrameSource>(this->shim().FrameSource());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs>
    {
        int32_t __stdcall get_FrameSource(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionInfraredFrameSource>(this->shim().FrameSource());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics> : produce_base<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics>
    {
        int32_t __stdcall CreateWatcher(void** watcher) noexcept final try
        {
            clear_abi(watcher);
            typename D::abi_guard guard(this->shim());
            *watcher = detach_from<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher>(this->shim().CreateWatcher());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindAllAsync(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionInfraredFrameSource>>>(this->shim().FindAllAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FromIdAsync(void* id, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionInfraredFrameSource>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&id)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestAccessAsync(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus>>(this->shim().RequestAccessAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher> : produce_base<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>
    {
        int32_t __stdcall add_SourceAdded(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().SourceAdded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_SourceAdded(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceAdded(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_SourceRemoved(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().SourceRemoved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_SourceRemoved(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceRemoved(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_Stopped(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Stopped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Stopped(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stopped(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_EnumerationCompleted(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().EnumerationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_EnumerationCompleted(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnumerationCompleted(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Enumeration::DeviceWatcherStatus>(this->shim().Status());
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
    template <typename D>
    struct produce<D, Windows::Devices::Perception::IPerceptionVideoProfile> : produce_base<D, Windows::Devices::Perception::IPerceptionVideoProfile>
    {
        int32_t __stdcall get_BitmapPixelFormat(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapPixelFormat>(this->shim().BitmapPixelFormat());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BitmapAlphaMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapAlphaMode>(this->shim().BitmapAlphaMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Width(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Width());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Height(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Height());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FrameDuration(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().FrameDuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsEqual(void* other, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsEqual(*reinterpret_cast<Windows::Devices::Perception::PerceptionVideoProfile const*>(&other)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Devices::Perception
{
    inline auto KnownCameraIntrinsicsProperties::FocalLength()
    {
        return impl::call_factory<KnownCameraIntrinsicsProperties, Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics>([&](auto&& f) { return f.FocalLength(); });
    }
    inline auto KnownCameraIntrinsicsProperties::PrincipalPoint()
    {
        return impl::call_factory<KnownCameraIntrinsicsProperties, Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics>([&](auto&& f) { return f.PrincipalPoint(); });
    }
    inline auto KnownCameraIntrinsicsProperties::RadialDistortion()
    {
        return impl::call_factory<KnownCameraIntrinsicsProperties, Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics>([&](auto&& f) { return f.RadialDistortion(); });
    }
    inline auto KnownCameraIntrinsicsProperties::TangentialDistortion()
    {
        return impl::call_factory<KnownCameraIntrinsicsProperties, Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics>([&](auto&& f) { return f.TangentialDistortion(); });
    }
    inline auto KnownPerceptionColorFrameSourceProperties::Exposure()
    {
        return impl::call_factory<KnownPerceptionColorFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics>([&](auto&& f) { return f.Exposure(); });
    }
    inline auto KnownPerceptionColorFrameSourceProperties::AutoExposureEnabled()
    {
        return impl::call_factory<KnownPerceptionColorFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics>([&](auto&& f) { return f.AutoExposureEnabled(); });
    }
    inline auto KnownPerceptionColorFrameSourceProperties::ExposureCompensation()
    {
        return impl::call_factory<KnownPerceptionColorFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics>([&](auto&& f) { return f.ExposureCompensation(); });
    }
    inline auto KnownPerceptionDepthFrameSourceProperties::MinDepth()
    {
        return impl::call_factory<KnownPerceptionDepthFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics>([&](auto&& f) { return f.MinDepth(); });
    }
    inline auto KnownPerceptionDepthFrameSourceProperties::MaxDepth()
    {
        return impl::call_factory<KnownPerceptionDepthFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics>([&](auto&& f) { return f.MaxDepth(); });
    }
    inline auto KnownPerceptionFrameSourceProperties::Id()
    {
        return impl::call_factory<KnownPerceptionFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics>([&](auto&& f) { return f.Id(); });
    }
    inline auto KnownPerceptionFrameSourceProperties::PhysicalDeviceIds()
    {
        return impl::call_factory<KnownPerceptionFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics>([&](auto&& f) { return f.PhysicalDeviceIds(); });
    }
    inline auto KnownPerceptionFrameSourceProperties::FrameKind()
    {
        return impl::call_factory<KnownPerceptionFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics>([&](auto&& f) { return f.FrameKind(); });
    }
    inline auto KnownPerceptionFrameSourceProperties::DeviceModelVersion()
    {
        return impl::call_factory<KnownPerceptionFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics>([&](auto&& f) { return f.DeviceModelVersion(); });
    }
    inline auto KnownPerceptionFrameSourceProperties::EnclosureLocation()
    {
        return impl::call_factory<KnownPerceptionFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics>([&](auto&& f) { return f.EnclosureLocation(); });
    }
    inline auto KnownPerceptionFrameSourceProperties::DeviceId()
    {
        return impl::call_factory<KnownPerceptionFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2>([&](auto&& f) { return f.DeviceId(); });
    }
    inline auto KnownPerceptionInfraredFrameSourceProperties::Exposure()
    {
        return impl::call_factory<KnownPerceptionInfraredFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>([&](auto&& f) { return f.Exposure(); });
    }
    inline auto KnownPerceptionInfraredFrameSourceProperties::AutoExposureEnabled()
    {
        return impl::call_factory<KnownPerceptionInfraredFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>([&](auto&& f) { return f.AutoExposureEnabled(); });
    }
    inline auto KnownPerceptionInfraredFrameSourceProperties::ExposureCompensation()
    {
        return impl::call_factory<KnownPerceptionInfraredFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>([&](auto&& f) { return f.ExposureCompensation(); });
    }
    inline auto KnownPerceptionInfraredFrameSourceProperties::ActiveIlluminationEnabled()
    {
        return impl::call_factory<KnownPerceptionInfraredFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>([&](auto&& f) { return f.ActiveIlluminationEnabled(); });
    }
    inline auto KnownPerceptionInfraredFrameSourceProperties::AmbientSubtractionEnabled()
    {
        return impl::call_factory<KnownPerceptionInfraredFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>([&](auto&& f) { return f.AmbientSubtractionEnabled(); });
    }
    inline auto KnownPerceptionInfraredFrameSourceProperties::StructureLightPatternEnabled()
    {
        return impl::call_factory<KnownPerceptionInfraredFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>([&](auto&& f) { return f.StructureLightPatternEnabled(); });
    }
    inline auto KnownPerceptionInfraredFrameSourceProperties::InterleavedIlluminationEnabled()
    {
        return impl::call_factory<KnownPerceptionInfraredFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>([&](auto&& f) { return f.InterleavedIlluminationEnabled(); });
    }
    inline auto KnownPerceptionVideoFrameSourceProperties::VideoProfile()
    {
        return impl::call_factory<KnownPerceptionVideoFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics>([&](auto&& f) { return f.VideoProfile(); });
    }
    inline auto KnownPerceptionVideoFrameSourceProperties::SupportedVideoProfiles()
    {
        return impl::call_factory<KnownPerceptionVideoFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics>([&](auto&& f) { return f.SupportedVideoProfiles(); });
    }
    inline auto KnownPerceptionVideoFrameSourceProperties::AvailableVideoProfiles()
    {
        return impl::call_factory<KnownPerceptionVideoFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics>([&](auto&& f) { return f.AvailableVideoProfiles(); });
    }
    inline auto KnownPerceptionVideoFrameSourceProperties::IsMirrored()
    {
        return impl::call_factory<KnownPerceptionVideoFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics>([&](auto&& f) { return f.IsMirrored(); });
    }
    inline auto KnownPerceptionVideoFrameSourceProperties::CameraIntrinsics()
    {
        return impl::call_factory<KnownPerceptionVideoFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics>([&](auto&& f) { return f.CameraIntrinsics(); });
    }
    inline auto KnownPerceptionVideoProfileProperties::BitmapPixelFormat()
    {
        return impl::call_factory<KnownPerceptionVideoProfileProperties, Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics>([&](auto&& f) { return f.BitmapPixelFormat(); });
    }
    inline auto KnownPerceptionVideoProfileProperties::BitmapAlphaMode()
    {
        return impl::call_factory<KnownPerceptionVideoProfileProperties, Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics>([&](auto&& f) { return f.BitmapAlphaMode(); });
    }
    inline auto KnownPerceptionVideoProfileProperties::Width()
    {
        return impl::call_factory<KnownPerceptionVideoProfileProperties, Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics>([&](auto&& f) { return f.Width(); });
    }
    inline auto KnownPerceptionVideoProfileProperties::Height()
    {
        return impl::call_factory<KnownPerceptionVideoProfileProperties, Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics>([&](auto&& f) { return f.Height(); });
    }
    inline auto KnownPerceptionVideoProfileProperties::FrameDuration()
    {
        return impl::call_factory<KnownPerceptionVideoProfileProperties, Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics>([&](auto&& f) { return f.FrameDuration(); });
    }
    inline auto PerceptionColorFrameSource::CreateWatcher()
    {
        return impl::call_factory<PerceptionColorFrameSource, Windows::Devices::Perception::IPerceptionColorFrameSourceStatics>([&](auto&& f) { return f.CreateWatcher(); });
    }
    inline auto PerceptionColorFrameSource::FindAllAsync()
    {
        return impl::call_factory<PerceptionColorFrameSource, Windows::Devices::Perception::IPerceptionColorFrameSourceStatics>([&](auto&& f) { return f.FindAllAsync(); });
    }
    inline auto PerceptionColorFrameSource::FromIdAsync(param::hstring const& id)
    {
        return impl::call_factory<PerceptionColorFrameSource, Windows::Devices::Perception::IPerceptionColorFrameSourceStatics>([&](auto&& f) { return f.FromIdAsync(id); });
    }
    inline auto PerceptionColorFrameSource::RequestAccessAsync()
    {
        return impl::call_factory<PerceptionColorFrameSource, Windows::Devices::Perception::IPerceptionColorFrameSourceStatics>([&](auto&& f) { return f.RequestAccessAsync(); });
    }
    inline auto PerceptionDepthFrameSource::CreateWatcher()
    {
        return impl::call_factory<PerceptionDepthFrameSource, Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics>([&](auto&& f) { return f.CreateWatcher(); });
    }
    inline auto PerceptionDepthFrameSource::FindAllAsync()
    {
        return impl::call_factory<PerceptionDepthFrameSource, Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics>([&](auto&& f) { return f.FindAllAsync(); });
    }
    inline auto PerceptionDepthFrameSource::FromIdAsync(param::hstring const& id)
    {
        return impl::call_factory<PerceptionDepthFrameSource, Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics>([&](auto&& f) { return f.FromIdAsync(id); });
    }
    inline auto PerceptionDepthFrameSource::RequestAccessAsync()
    {
        return impl::call_factory<PerceptionDepthFrameSource, Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics>([&](auto&& f) { return f.RequestAccessAsync(); });
    }
    inline auto PerceptionInfraredFrameSource::CreateWatcher()
    {
        return impl::call_factory<PerceptionInfraredFrameSource, Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics>([&](auto&& f) { return f.CreateWatcher(); });
    }
    inline auto PerceptionInfraredFrameSource::FindAllAsync()
    {
        return impl::call_factory<PerceptionInfraredFrameSource, Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics>([&](auto&& f) { return f.FindAllAsync(); });
    }
    inline auto PerceptionInfraredFrameSource::FromIdAsync(param::hstring const& id)
    {
        return impl::call_factory<PerceptionInfraredFrameSource, Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics>([&](auto&& f) { return f.FromIdAsync(id); });
    }
    inline auto PerceptionInfraredFrameSource::RequestAccessAsync()
    {
        return impl::call_factory<PerceptionInfraredFrameSource, Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics>([&](auto&& f) { return f.RequestAccessAsync(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionColorFrame> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionColorFrame> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionColorFrameReader> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionColorFrameReader> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionColorFrameSource> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionColorFrameSource> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionColorFrameSource2> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionColorFrameSource2> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionColorFrameSourceStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionColorFrameSourceStatics> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionControlSession> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionControlSession> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthFrame> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionDepthFrame> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthFrameReader> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionDepthFrameReader> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSource> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSource> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSource2> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSource2> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionInfraredFrame> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionInfraredFrame> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameReader> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameReader> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSource> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSource> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSource2> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSource2> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher> {};
    template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionVideoProfile> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionVideoProfile> {};
    template<> struct hash<winrt::Windows::Devices::Perception::KnownCameraIntrinsicsProperties> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::KnownCameraIntrinsicsProperties> {};
    template<> struct hash<winrt::Windows::Devices::Perception::KnownPerceptionColorFrameSourceProperties> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::KnownPerceptionColorFrameSourceProperties> {};
    template<> struct hash<winrt::Windows::Devices::Perception::KnownPerceptionDepthFrameSourceProperties> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::KnownPerceptionDepthFrameSourceProperties> {};
    template<> struct hash<winrt::Windows::Devices::Perception::KnownPerceptionFrameSourceProperties> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::KnownPerceptionFrameSourceProperties> {};
    template<> struct hash<winrt::Windows::Devices::Perception::KnownPerceptionInfraredFrameSourceProperties> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::KnownPerceptionInfraredFrameSourceProperties> {};
    template<> struct hash<winrt::Windows::Devices::Perception::KnownPerceptionVideoFrameSourceProperties> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::KnownPerceptionVideoFrameSourceProperties> {};
    template<> struct hash<winrt::Windows::Devices::Perception::KnownPerceptionVideoProfileProperties> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::KnownPerceptionVideoProfileProperties> {};
    template<> struct hash<winrt::Windows::Devices::Perception::PerceptionColorFrame> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionColorFrame> {};
    template<> struct hash<winrt::Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Perception::PerceptionColorFrameReader> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionColorFrameReader> {};
    template<> struct hash<winrt::Windows::Devices::Perception::PerceptionColorFrameSource> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionColorFrameSource> {};
    template<> struct hash<winrt::Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Perception::PerceptionColorFrameSourceWatcher> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionColorFrameSourceWatcher> {};
    template<> struct hash<winrt::Windows::Devices::Perception::PerceptionControlSession> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionControlSession> {};
    template<> struct hash<winrt::Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> {};
    template<> struct hash<winrt::Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> {};
    template<> struct hash<winrt::Windows::Devices::Perception::PerceptionDepthFrame> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionDepthFrame> {};
    template<> struct hash<winrt::Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Perception::PerceptionDepthFrameReader> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionDepthFrameReader> {};
    template<> struct hash<winrt::Windows::Devices::Perception::PerceptionDepthFrameSource> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionDepthFrameSource> {};
    template<> struct hash<winrt::Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher> {};
    template<> struct hash<winrt::Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> {};
    template<> struct hash<winrt::Windows::Devices::Perception::PerceptionInfraredFrame> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionInfraredFrame> {};
    template<> struct hash<winrt::Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Perception::PerceptionInfraredFrameReader> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionInfraredFrameReader> {};
    template<> struct hash<winrt::Windows::Devices::Perception::PerceptionInfraredFrameSource> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionInfraredFrameSource> {};
    template<> struct hash<winrt::Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher> {};
    template<> struct hash<winrt::Windows::Devices::Perception::PerceptionVideoProfile> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionVideoProfile> {};
}
#endif
