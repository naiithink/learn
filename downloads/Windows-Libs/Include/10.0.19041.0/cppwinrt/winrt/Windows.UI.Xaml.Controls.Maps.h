// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Controls_Maps_H
#define WINRT_Windows_UI_Xaml_Controls_Maps_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.UI.Xaml.Controls.h"
#include "winrt/impl/Windows.Devices.Geolocation.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Foundation.Numerics.2.h"
#include "winrt/impl/Windows.Services.Maps.2.h"
#include "winrt/impl/Windows.Services.Maps.LocalSearch.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Composition.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.2.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.Maps.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_ICustomMapTileDataSource<D>::BitmapRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource)->add_BitmapRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_ICustomMapTileDataSource<D>::BitmapRequested_revoker consume_Windows_UI_Xaml_Controls_Maps_ICustomMapTileDataSource<D>::BitmapRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, BitmapRequested_revoker>(this, BitmapRequested(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_ICustomMapTileDataSource<D>::BitmapRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource)->remove_BitmapRequested(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_ICustomMapTileDataSourceFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory)->CreateInstance(*(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSource<D>::UriFormatString() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource)->get_UriFormatString(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSource<D>::UriFormatString(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource)->put_UriFormatString(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSource<D>::AdditionalRequestHeaders() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource)->get_AdditionalRequestHeaders(&value));
        return Windows::Foundation::Collections::IMap<hstring, hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSource<D>::AllowCaching() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource)->get_AllowCaching(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSource<D>::AllowCaching(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource)->put_AllowCaching(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSource<D>::UriRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource)->add_UriRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSource<D>::UriRequested_revoker consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSource<D>::UriRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, UriRequested_revoker>(this, UriRequested(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSource<D>::UriRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource)->remove_UriRequested(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSourceFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory)->CreateInstance(*(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSourceFactory<D>::CreateInstanceWithUriFormatString(param::hstring const& uriFormatString, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory)->CreateInstanceWithUriFormatString(*(void**)(&uriFormatString), *(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSource<D>::UriFormatString() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource)->get_UriFormatString(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSource<D>::UriFormatString(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource)->put_UriFormatString(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSource<D>::UriRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource)->add_UriRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSource<D>::UriRequested_revoker consume_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSource<D>::UriRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, UriRequested_revoker>(this, UriRequested(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSource<D>::UriRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource)->remove_UriRequested(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSourceFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory)->CreateInstance(*(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSourceFactory<D>::CreateInstanceWithUriFormatString(param::hstring const& uriFormatString, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory)->CreateInstanceWithUriFormatString(*(void**)(&uriFormatString), *(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangedEventArgs<D>::Camera() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs)->get_Camera(&value));
        return Windows::UI::Xaml::Controls::Maps::MapCamera{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangedEventArgs2<D>::ChangeReason() const
    {
        Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs2)->get_ChangeReason(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangingEventArgs<D>::Camera() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs)->get_Camera(&value));
        return Windows::UI::Xaml::Controls::Maps::MapCamera{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangingEventArgs2<D>::ChangeReason() const
    {
        Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs2)->get_ChangeReason(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapBillboard<D>::Location() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapBillboard)->get_Location(&value));
        return Windows::Devices::Geolocation::Geopoint{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapBillboard<D>::Location(Windows::Devices::Geolocation::Geopoint const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapBillboard)->put_Location(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapBillboard<D>::NormalizedAnchorPoint() const
    {
        Windows::Foundation::Point value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapBillboard)->get_NormalizedAnchorPoint(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapBillboard<D>::NormalizedAnchorPoint(Windows::Foundation::Point const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapBillboard)->put_NormalizedAnchorPoint(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapBillboard<D>::Image() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapBillboard)->get_Image(&value));
        return Windows::Storage::Streams::IRandomAccessStreamReference{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapBillboard<D>::Image(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapBillboard)->put_Image(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapBillboard<D>::CollisionBehaviorDesired() const
    {
        Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapBillboard)->get_CollisionBehaviorDesired(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapBillboard<D>::CollisionBehaviorDesired(Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapBillboard)->put_CollisionBehaviorDesired(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapBillboard<D>::ReferenceCamera() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapBillboard)->get_ReferenceCamera(&value));
        return Windows::UI::Xaml::Controls::Maps::MapCamera{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapBillboardFactory<D>::CreateInstanceFromCamera(Windows::UI::Xaml::Controls::Maps::MapCamera const& camera) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapBillboardFactory)->CreateInstanceFromCamera(*(void**)(&camera), &value));
        return Windows::UI::Xaml::Controls::Maps::MapBillboard{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapBillboardStatics<D>::LocationProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics)->get_LocationProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapBillboardStatics<D>::NormalizedAnchorPointProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics)->get_NormalizedAnchorPointProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapBillboardStatics<D>::CollisionBehaviorDesiredProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics)->get_CollisionBehaviorDesiredProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapCamera<D>::Location() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCamera)->get_Location(&value));
        return Windows::Devices::Geolocation::Geopoint{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapCamera<D>::Location(Windows::Devices::Geolocation::Geopoint const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCamera)->put_Location(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapCamera<D>::Heading() const
    {
        double value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCamera)->get_Heading(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapCamera<D>::Heading(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCamera)->put_Heading(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapCamera<D>::Pitch() const
    {
        double value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCamera)->get_Pitch(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapCamera<D>::Pitch(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCamera)->put_Pitch(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapCamera<D>::Roll() const
    {
        double value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCamera)->get_Roll(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapCamera<D>::Roll(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCamera)->put_Roll(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapCamera<D>::FieldOfView() const
    {
        double value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCamera)->get_FieldOfView(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapCamera<D>::FieldOfView(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCamera)->put_FieldOfView(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapCameraFactory<D>::CreateInstanceWithLocation(Windows::Devices::Geolocation::Geopoint const& location) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCameraFactory)->CreateInstanceWithLocation(*(void**)(&location), &value));
        return Windows::UI::Xaml::Controls::Maps::MapCamera{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapCameraFactory<D>::CreateInstanceWithLocationAndHeading(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCameraFactory)->CreateInstanceWithLocationAndHeading(*(void**)(&location), headingInDegrees, &value));
        return Windows::UI::Xaml::Controls::Maps::MapCamera{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapCameraFactory<D>::CreateInstanceWithLocationHeadingAndPitch(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees, double pitchInDegrees) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCameraFactory)->CreateInstanceWithLocationHeadingAndPitch(*(void**)(&location), headingInDegrees, pitchInDegrees, &value));
        return Windows::UI::Xaml::Controls::Maps::MapCamera{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapCameraFactory<D>::CreateInstanceWithLocationHeadingPitchRollAndFieldOfView(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees, double pitchInDegrees, double rollInDegrees, double fieldOfViewInDegrees) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCameraFactory)->CreateInstanceWithLocationHeadingPitchRollAndFieldOfView(*(void**)(&location), headingInDegrees, pitchInDegrees, rollInDegrees, fieldOfViewInDegrees, &value));
        return Windows::UI::Xaml::Controls::Maps::MapCamera{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapContextRequestedEventArgs<D>::Position() const
    {
        Windows::Foundation::Point value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs)->get_Position(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapContextRequestedEventArgs<D>::Location() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs)->get_Location(&value));
        return Windows::Devices::Geolocation::Geopoint{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapContextRequestedEventArgs<D>::MapElements() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs)->get_MapElements(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Maps::MapElement>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::Center() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_Center(&value));
        return Windows::Devices::Geolocation::Geopoint{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::Center(Windows::Devices::Geolocation::Geopoint const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->put_Center(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::Children() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_Children(&value));
        return Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::ColorScheme() const
    {
        Windows::UI::Xaml::Controls::Maps::MapColorScheme value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_ColorScheme(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::ColorScheme(Windows::UI::Xaml::Controls::Maps::MapColorScheme const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->put_ColorScheme(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::DesiredPitch() const
    {
        double value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_DesiredPitch(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::DesiredPitch(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->put_DesiredPitch(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::Heading() const
    {
        double value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_Heading(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::Heading(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->put_Heading(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::LandmarksVisible() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_LandmarksVisible(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::LandmarksVisible(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->put_LandmarksVisible(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::LoadingStatus() const
    {
        Windows::UI::Xaml::Controls::Maps::MapLoadingStatus value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_LoadingStatus(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MapServiceToken() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_MapServiceToken(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MapServiceToken(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->put_MapServiceToken(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MaxZoomLevel() const
    {
        double value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_MaxZoomLevel(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MinZoomLevel() const
    {
        double value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_MinZoomLevel(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::PedestrianFeaturesVisible() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_PedestrianFeaturesVisible(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::PedestrianFeaturesVisible(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->put_PedestrianFeaturesVisible(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::Pitch() const
    {
        double value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_Pitch(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::Style() const
    {
        Windows::UI::Xaml::Controls::Maps::MapStyle value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_Style(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::Style(Windows::UI::Xaml::Controls::Maps::MapStyle const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->put_Style(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::TrafficFlowVisible() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_TrafficFlowVisible(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::TrafficFlowVisible(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->put_TrafficFlowVisible(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::TransformOrigin() const
    {
        Windows::Foundation::Point value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_TransformOrigin(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::TransformOrigin(Windows::Foundation::Point const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->put_TransformOrigin(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::WatermarkMode() const
    {
        Windows::UI::Xaml::Controls::Maps::MapWatermarkMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_WatermarkMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::WatermarkMode(Windows::UI::Xaml::Controls::Maps::MapWatermarkMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->put_WatermarkMode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::ZoomLevel() const
    {
        double value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_ZoomLevel(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::ZoomLevel(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->put_ZoomLevel(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MapElements() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_MapElements(&value));
        return Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapElement>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::Routes() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_Routes(&value));
        return Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapRouteView>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::TileSources() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_TileSources(&value));
        return Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapTileSource>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::CenterChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->add_CenterChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::CenterChanged_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::CenterChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, CenterChanged_revoker>(this, CenterChanged(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::CenterChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->remove_CenterChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::HeadingChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->add_HeadingChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::HeadingChanged_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::HeadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, HeadingChanged_revoker>(this, HeadingChanged(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::HeadingChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->remove_HeadingChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::LoadingStatusChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->add_LoadingStatusChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::LoadingStatusChanged_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::LoadingStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, LoadingStatusChanged_revoker>(this, LoadingStatusChanged(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::LoadingStatusChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->remove_LoadingStatusChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MapDoubleTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->add_MapDoubleTapped(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MapDoubleTapped_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MapDoubleTapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, MapDoubleTapped_revoker>(this, MapDoubleTapped(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MapDoubleTapped(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->remove_MapDoubleTapped(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MapHolding(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->add_MapHolding(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MapHolding_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MapHolding(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, MapHolding_revoker>(this, MapHolding(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MapHolding(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->remove_MapHolding(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MapTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->add_MapTapped(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MapTapped_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MapTapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, MapTapped_revoker>(this, MapTapped(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MapTapped(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->remove_MapTapped(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::PitchChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->add_PitchChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::PitchChanged_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::PitchChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, PitchChanged_revoker>(this, PitchChanged(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::PitchChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->remove_PitchChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::TransformOriginChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->add_TransformOriginChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::TransformOriginChanged_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::TransformOriginChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, TransformOriginChanged_revoker>(this, TransformOriginChanged(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::TransformOriginChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->remove_TransformOriginChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::ZoomLevelChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->add_ZoomLevelChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::ZoomLevelChanged_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::ZoomLevelChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, ZoomLevelChanged_revoker>(this, ZoomLevelChanged(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::ZoomLevelChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->remove_ZoomLevelChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::FindMapElementsAtOffset(Windows::Foundation::Point const& offset) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->FindMapElementsAtOffset(impl::bind_in(offset), &result));
        return Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Maps::MapElement>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::GetLocationFromOffset(Windows::Foundation::Point const& offset, Windows::Devices::Geolocation::Geopoint& location) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->GetLocationFromOffset(impl::bind_in(offset), impl::bind_out(location)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::GetOffsetFromLocation(Windows::Devices::Geolocation::Geopoint const& location, Windows::Foundation::Point& offset) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->GetOffsetFromLocation(*(void**)(&location), impl::bind_out(offset)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::IsLocationInView(Windows::Devices::Geolocation::Geopoint const& location, bool& isInView) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->IsLocationInView(*(void**)(&location), &isInView));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::TrySetViewBoundsAsync(Windows::Devices::Geolocation::GeoboundingBox const& bounds, Windows::Foundation::IReference<Windows::UI::Xaml::Thickness> const& margin, Windows::UI::Xaml::Controls::Maps::MapAnimationKind const& animation) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->TrySetViewBoundsAsync(*(void**)(&bounds), *(void**)(&margin), static_cast<int32_t>(animation), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::TrySetViewAsync(Windows::Devices::Geolocation::Geopoint const& center) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->TrySetViewWithCenterAsync(*(void**)(&center), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::TrySetViewAsync(Windows::Devices::Geolocation::Geopoint const& center, Windows::Foundation::IReference<double> const& zoomLevel) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->TrySetViewWithCenterAndZoomAsync(*(void**)(&center), *(void**)(&zoomLevel), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::TrySetViewAsync(Windows::Devices::Geolocation::Geopoint const& center, Windows::Foundation::IReference<double> const& zoomLevel, Windows::Foundation::IReference<double> const& heading, Windows::Foundation::IReference<double> const& desiredPitch) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->TrySetViewWithCenterZoomHeadingAndPitchAsync(*(void**)(&center), *(void**)(&zoomLevel), *(void**)(&heading), *(void**)(&desiredPitch), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::TrySetViewAsync(Windows::Devices::Geolocation::Geopoint const& center, Windows::Foundation::IReference<double> const& zoomLevel, Windows::Foundation::IReference<double> const& heading, Windows::Foundation::IReference<double> const& desiredPitch, Windows::UI::Xaml::Controls::Maps::MapAnimationKind const& animation) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->TrySetViewWithCenterZoomHeadingPitchAndAnimationAsync(*(void**)(&center), *(void**)(&zoomLevel), *(void**)(&heading), *(void**)(&desiredPitch), static_cast<int32_t>(animation), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::BusinessLandmarksVisible() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->get_BusinessLandmarksVisible(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::BusinessLandmarksVisible(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->put_BusinessLandmarksVisible(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TransitFeaturesVisible() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->get_TransitFeaturesVisible(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TransitFeaturesVisible(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->put_TransitFeaturesVisible(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::PanInteractionMode() const
    {
        Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->get_PanInteractionMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::PanInteractionMode(Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->put_PanInteractionMode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::RotateInteractionMode() const
    {
        Windows::UI::Xaml::Controls::Maps::MapInteractionMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->get_RotateInteractionMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::RotateInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->put_RotateInteractionMode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TiltInteractionMode() const
    {
        Windows::UI::Xaml::Controls::Maps::MapInteractionMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->get_TiltInteractionMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TiltInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->put_TiltInteractionMode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::ZoomInteractionMode() const
    {
        Windows::UI::Xaml::Controls::Maps::MapInteractionMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->get_ZoomInteractionMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::ZoomInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->put_ZoomInteractionMode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::Is3DSupported() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->get_Is3DSupported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::IsStreetsideSupported() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->get_IsStreetsideSupported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::Scene() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->get_Scene(&value));
        return Windows::UI::Xaml::Controls::Maps::MapScene{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::Scene(Windows::UI::Xaml::Controls::Maps::MapScene const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->put_Scene(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::ActualCamera() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->get_ActualCamera(&value));
        return Windows::UI::Xaml::Controls::Maps::MapCamera{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TargetCamera() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->get_TargetCamera(&value));
        return Windows::UI::Xaml::Controls::Maps::MapCamera{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::CustomExperience() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->get_CustomExperience(&value));
        return Windows::UI::Xaml::Controls::Maps::MapCustomExperience{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::CustomExperience(Windows::UI::Xaml::Controls::Maps::MapCustomExperience const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->put_CustomExperience(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::MapElementClick(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->add_MapElementClick(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::MapElementClick_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::MapElementClick(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, MapElementClick_revoker>(this, MapElementClick(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::MapElementClick(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->remove_MapElementClick(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::MapElementPointerEntered(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->add_MapElementPointerEntered(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::MapElementPointerEntered_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::MapElementPointerEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, MapElementPointerEntered_revoker>(this, MapElementPointerEntered(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::MapElementPointerEntered(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->remove_MapElementPointerEntered(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::MapElementPointerExited(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->add_MapElementPointerExited(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::MapElementPointerExited_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::MapElementPointerExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, MapElementPointerExited_revoker>(this, MapElementPointerExited(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::MapElementPointerExited(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->remove_MapElementPointerExited(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::ActualCameraChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->add_ActualCameraChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::ActualCameraChanged_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::ActualCameraChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, ActualCameraChanged_revoker>(this, ActualCameraChanged(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::ActualCameraChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->remove_ActualCameraChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::ActualCameraChanging(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->add_ActualCameraChanging(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::ActualCameraChanging_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::ActualCameraChanging(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, ActualCameraChanging_revoker>(this, ActualCameraChanging(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::ActualCameraChanging(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->remove_ActualCameraChanging(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TargetCameraChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->add_TargetCameraChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TargetCameraChanged_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TargetCameraChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, TargetCameraChanged_revoker>(this, TargetCameraChanged(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TargetCameraChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->remove_TargetCameraChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::CustomExperienceChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->add_CustomExperienceChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::CustomExperienceChanged_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::CustomExperienceChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, CustomExperienceChanged_revoker>(this, CustomExperienceChanged(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::CustomExperienceChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->remove_CustomExperienceChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::StartContinuousRotate(double rateInDegreesPerSecond) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->StartContinuousRotate(rateInDegreesPerSecond));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::StopContinuousRotate() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->StopContinuousRotate());
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::StartContinuousTilt(double rateInDegreesPerSecond) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->StartContinuousTilt(rateInDegreesPerSecond));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::StopContinuousTilt() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->StopContinuousTilt());
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::StartContinuousZoom(double rateOfChangePerSecond) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->StartContinuousZoom(rateOfChangePerSecond));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::StopContinuousZoom() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->StopContinuousZoom());
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TryRotateAsync(double degrees) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->TryRotateAsync(degrees, &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TryRotateToAsync(double angleInDegrees) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->TryRotateToAsync(angleInDegrees, &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TryTiltAsync(double degrees) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->TryTiltAsync(degrees, &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TryTiltToAsync(double angleInDegrees) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->TryTiltToAsync(angleInDegrees, &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TryZoomInAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->TryZoomInAsync(&operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TryZoomOutAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->TryZoomOutAsync(&operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TryZoomToAsync(double zoomLevel) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->TryZoomToAsync(zoomLevel, &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TrySetSceneAsync(Windows::UI::Xaml::Controls::Maps::MapScene const& scene) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->TrySetSceneAsync(*(void**)(&scene), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TrySetSceneAsync(Windows::UI::Xaml::Controls::Maps::MapScene const& scene, Windows::UI::Xaml::Controls::Maps::MapAnimationKind const& animationKind) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->TrySetSceneWithAnimationAsync(*(void**)(&scene), static_cast<int32_t>(animationKind), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl3<D>::MapRightTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl3)->add_MapRightTapped(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapControl3<D>::MapRightTapped_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapControl3<D>::MapRightTapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, MapRightTapped_revoker>(this, MapRightTapped(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl3<D>::MapRightTapped(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl3)->remove_MapRightTapped(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl4<D>::BusinessLandmarksEnabled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl4)->get_BusinessLandmarksEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl4<D>::BusinessLandmarksEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl4)->put_BusinessLandmarksEnabled(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl4<D>::TransitFeaturesEnabled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl4)->get_TransitFeaturesEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl4<D>::TransitFeaturesEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl4)->put_TransitFeaturesEnabled(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl4<D>::GetVisibleRegion(Windows::UI::Xaml::Controls::Maps::MapVisibleRegionKind const& region) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl4)->GetVisibleRegion(static_cast<int32_t>(region), &result));
        return Windows::Devices::Geolocation::Geopath{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::MapProjection() const
    {
        Windows::UI::Xaml::Controls::Maps::MapProjection value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->get_MapProjection(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::MapProjection(Windows::UI::Xaml::Controls::Maps::MapProjection const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->put_MapProjection(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::StyleSheet() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->get_StyleSheet(&value));
        return Windows::UI::Xaml::Controls::Maps::MapStyleSheet{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::StyleSheet(Windows::UI::Xaml::Controls::Maps::MapStyleSheet const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->put_StyleSheet(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::ViewPadding() const
    {
        Windows::UI::Xaml::Thickness value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->get_ViewPadding(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::ViewPadding(Windows::UI::Xaml::Thickness const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->put_ViewPadding(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::MapContextRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->add_MapContextRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::MapContextRequested_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::MapContextRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, MapContextRequested_revoker>(this, MapContextRequested(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::MapContextRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->remove_MapContextRequested(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::FindMapElementsAtOffset(Windows::Foundation::Point const& offset, double radius) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->FindMapElementsAtOffsetWithRadius(impl::bind_in(offset), radius, &result));
        return Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Maps::MapElement>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::GetLocationFromOffset(Windows::Foundation::Point const& offset, Windows::Devices::Geolocation::AltitudeReferenceSystem const& desiredReferenceSystem, Windows::Devices::Geolocation::Geopoint& location) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->GetLocationFromOffsetWithReferenceSystem(impl::bind_in(offset), static_cast<int32_t>(desiredReferenceSystem), impl::bind_out(location)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::StartContinuousPan(double horizontalPixelsPerSecond, double verticalPixelsPerSecond) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->StartContinuousPan(horizontalPixelsPerSecond, verticalPixelsPerSecond));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::StopContinuousPan() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->StopContinuousPan());
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::TryPanAsync(double horizontalPixels, double verticalPixels) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->TryPanAsync(horizontalPixels, verticalPixels, &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::TryPanToAsync(Windows::Devices::Geolocation::Geopoint const& location) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->TryPanToAsync(*(void**)(&location), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl6<D>::Layers() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl6)->get_Layers(&value));
        return Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapLayer>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl6<D>::Layers(param::vector<Windows::UI::Xaml::Controls::Maps::MapLayer> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl6)->put_Layers(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl6<D>::TryGetLocationFromOffset(Windows::Foundation::Point const& offset, Windows::Devices::Geolocation::Geopoint& location) const
    {
        bool returnValue;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl6)->TryGetLocationFromOffset(impl::bind_in(offset), impl::bind_out(location), &returnValue));
        return returnValue;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl6<D>::TryGetLocationFromOffset(Windows::Foundation::Point const& offset, Windows::Devices::Geolocation::AltitudeReferenceSystem const& desiredReferenceSystem, Windows::Devices::Geolocation::Geopoint& location) const
    {
        bool returnValue;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl6)->TryGetLocationFromOffsetWithReferenceSystem(impl::bind_in(offset), static_cast<int32_t>(desiredReferenceSystem), impl::bind_out(location), &returnValue));
        return returnValue;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl7<D>::Region() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl7)->get_Region(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl7<D>::Region(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl7)->put_Region(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl8<D>::CanTiltDown() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl8)->get_CanTiltDown(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl8<D>::CanTiltUp() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl8)->get_CanTiltUp(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl8<D>::CanZoomIn() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl8)->get_CanZoomIn(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControl8<D>::CanZoomOut() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl8)->get_CanZoomOut(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkClickEventArgs<D>::LocalLocations() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkClickEventArgs)->get_LocalLocations(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkPointerEnteredEventArgs<D>::LocalLocations() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerEnteredEventArgs)->get_LocalLocations(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkPointerExitedEventArgs<D>::LocalLocations() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerExitedEventArgs)->get_LocalLocations(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkRightTappedEventArgs<D>::LocalLocations() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkRightTappedEventArgs)->get_LocalLocations(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::BusinessLandmarkClick(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkClickEventArgs> const& value) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper)->add_BusinessLandmarkClick(*(void**)(&value), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::BusinessLandmarkClick_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::BusinessLandmarkClick(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkClickEventArgs> const& value) const
    {
        return impl::make_event_revoker<D, BusinessLandmarkClick_revoker>(this, BusinessLandmarkClick(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::BusinessLandmarkClick(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper)->remove_BusinessLandmarkClick(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::TransitFeatureClick(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureClickEventArgs> const& value) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper)->add_TransitFeatureClick(*(void**)(&value), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::TransitFeatureClick_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::TransitFeatureClick(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureClickEventArgs> const& value) const
    {
        return impl::make_event_revoker<D, TransitFeatureClick_revoker>(this, TransitFeatureClick(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::TransitFeatureClick(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper)->remove_TransitFeatureClick(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::BusinessLandmarkRightTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkRightTappedEventArgs> const& value) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper)->add_BusinessLandmarkRightTapped(*(void**)(&value), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::BusinessLandmarkRightTapped_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::BusinessLandmarkRightTapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkRightTappedEventArgs> const& value) const
    {
        return impl::make_event_revoker<D, BusinessLandmarkRightTapped_revoker>(this, BusinessLandmarkRightTapped(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::BusinessLandmarkRightTapped(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper)->remove_BusinessLandmarkRightTapped(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::TransitFeatureRightTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureRightTappedEventArgs> const& value) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper)->add_TransitFeatureRightTapped(*(void**)(&value), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::TransitFeatureRightTapped_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::TransitFeatureRightTapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureRightTappedEventArgs> const& value) const
    {
        return impl::make_event_revoker<D, TransitFeatureRightTapped_revoker>(this, TransitFeatureRightTapped(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::TransitFeatureRightTapped(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper)->remove_TransitFeatureRightTapped(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::BusinessLandmarkPointerEntered(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerEnteredEventArgs> const& value) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2)->add_BusinessLandmarkPointerEntered(*(void**)(&value), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::BusinessLandmarkPointerEntered_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::BusinessLandmarkPointerEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerEnteredEventArgs> const& value) const
    {
        return impl::make_event_revoker<D, BusinessLandmarkPointerEntered_revoker>(this, BusinessLandmarkPointerEntered(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::BusinessLandmarkPointerEntered(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2)->remove_BusinessLandmarkPointerEntered(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::TransitFeaturePointerEntered(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerEnteredEventArgs> const& value) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2)->add_TransitFeaturePointerEntered(*(void**)(&value), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::TransitFeaturePointerEntered_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::TransitFeaturePointerEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerEnteredEventArgs> const& value) const
    {
        return impl::make_event_revoker<D, TransitFeaturePointerEntered_revoker>(this, TransitFeaturePointerEntered(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::TransitFeaturePointerEntered(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2)->remove_TransitFeaturePointerEntered(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::BusinessLandmarkPointerExited(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerExitedEventArgs> const& value) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2)->add_BusinessLandmarkPointerExited(*(void**)(&value), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::BusinessLandmarkPointerExited_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::BusinessLandmarkPointerExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerExitedEventArgs> const& value) const
    {
        return impl::make_event_revoker<D, BusinessLandmarkPointerExited_revoker>(this, BusinessLandmarkPointerExited(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::BusinessLandmarkPointerExited(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2)->remove_BusinessLandmarkPointerExited(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::TransitFeaturePointerExited(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerExitedEventArgs> const& value) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2)->add_TransitFeaturePointerExited(*(void**)(&value), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::TransitFeaturePointerExited_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::TransitFeaturePointerExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerExitedEventArgs> const& value) const
    {
        return impl::make_event_revoker<D, TransitFeaturePointerExited_revoker>(this, TransitFeaturePointerExited(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::TransitFeaturePointerExited(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2)->remove_TransitFeaturePointerExited(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelperFactory<D>::CreateInstance(Windows::UI::Xaml::Controls::Maps::MapControl const& map) const
    {
        void* instance{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperFactory)->CreateInstance(*(void**)(&map), &instance));
        return Windows::UI::Xaml::Controls::Maps::MapControlDataHelper{ instance, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelperStatics<D>::CreateMapControl(bool rasterRenderMode) const
    {
        void* returnValue{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperStatics)->CreateMapControl(rasterRenderMode, &returnValue));
        return Windows::UI::Xaml::Controls::Maps::MapControl{ returnValue, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::CenterProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_CenterProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::ChildrenProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_ChildrenProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::ColorSchemeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_ColorSchemeProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::DesiredPitchProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_DesiredPitchProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::HeadingProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_HeadingProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::LandmarksVisibleProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_LandmarksVisibleProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::LoadingStatusProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_LoadingStatusProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::MapServiceTokenProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_MapServiceTokenProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::PedestrianFeaturesVisibleProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_PedestrianFeaturesVisibleProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::PitchProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_PitchProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::StyleProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_StyleProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::TrafficFlowVisibleProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_TrafficFlowVisibleProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::TransformOriginProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_TransformOriginProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::WatermarkModeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_WatermarkModeProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::ZoomLevelProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_ZoomLevelProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::MapElementsProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_MapElementsProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::RoutesProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_RoutesProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::TileSourcesProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_TileSourcesProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::LocationProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_LocationProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::GetLocation(Windows::UI::Xaml::DependencyObject const& element) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->GetLocation(*(void**)(&element), &result));
        return Windows::Devices::Geolocation::Geopoint{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::SetLocation(Windows::UI::Xaml::DependencyObject const& element, Windows::Devices::Geolocation::Geopoint const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->SetLocation(*(void**)(&element), *(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::NormalizedAnchorPointProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_NormalizedAnchorPointProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::GetNormalizedAnchorPoint(Windows::UI::Xaml::DependencyObject const& element) const
    {
        Windows::Foundation::Point result;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->GetNormalizedAnchorPoint(*(void**)(&element), put_abi(result)));
        return result;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::SetNormalizedAnchorPoint(Windows::UI::Xaml::DependencyObject const& element, Windows::Foundation::Point const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->SetNormalizedAnchorPoint(*(void**)(&element), impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics2<D>::BusinessLandmarksVisibleProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics2)->get_BusinessLandmarksVisibleProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics2<D>::TransitFeaturesVisibleProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics2)->get_TransitFeaturesVisibleProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics2<D>::PanInteractionModeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics2)->get_PanInteractionModeProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics2<D>::RotateInteractionModeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics2)->get_RotateInteractionModeProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics2<D>::TiltInteractionModeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics2)->get_TiltInteractionModeProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics2<D>::ZoomInteractionModeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics2)->get_ZoomInteractionModeProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics2<D>::Is3DSupportedProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics2)->get_Is3DSupportedProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics2<D>::IsStreetsideSupportedProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics2)->get_IsStreetsideSupportedProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics2<D>::SceneProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics2)->get_SceneProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics4<D>::BusinessLandmarksEnabledProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics4)->get_BusinessLandmarksEnabledProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics4<D>::TransitFeaturesEnabledProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics4)->get_TransitFeaturesEnabledProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics5<D>::MapProjectionProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics5)->get_MapProjectionProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics5<D>::StyleSheetProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics5)->get_StyleSheetProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics5<D>::ViewPaddingProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics5)->get_ViewPaddingProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics6<D>::LayersProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics6)->get_LayersProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics7<D>::RegionProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics7)->get_RegionProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics8<D>::CanTiltDownProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics8)->get_CanTiltDownProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics8<D>::CanTiltUpProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics8)->get_CanTiltUpProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics8<D>::CanZoomInProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics8)->get_CanZoomInProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics8<D>::CanZoomOutProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics8)->get_CanZoomOutProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeatureClickEventArgs<D>::DisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs)->get_DisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeatureClickEventArgs<D>::Location() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs)->get_Location(&value));
        return Windows::Devices::Geolocation::Geopoint{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeatureClickEventArgs<D>::TransitProperties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs)->get_TransitProperties(&value));
        return Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeaturePointerEnteredEventArgs<D>::DisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs)->get_DisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeaturePointerEnteredEventArgs<D>::Location() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs)->get_Location(&value));
        return Windows::Devices::Geolocation::Geopoint{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeaturePointerEnteredEventArgs<D>::TransitProperties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs)->get_TransitProperties(&value));
        return Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeaturePointerExitedEventArgs<D>::DisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs)->get_DisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeaturePointerExitedEventArgs<D>::Location() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs)->get_Location(&value));
        return Windows::Devices::Geolocation::Geopoint{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeaturePointerExitedEventArgs<D>::TransitProperties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs)->get_TransitProperties(&value));
        return Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeatureRightTappedEventArgs<D>::DisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs)->get_DisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeatureRightTappedEventArgs<D>::Location() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs)->get_Location(&value));
        return Windows::Devices::Geolocation::Geopoint{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeatureRightTappedEventArgs<D>::TransitProperties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs)->get_TransitProperties(&value));
        return Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapCustomExperienceFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory)->CreateInstance(*(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return Windows::UI::Xaml::Controls::Maps::MapCustomExperience{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement<D>::ZIndex() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement)->get_ZIndex(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement<D>::ZIndex(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement)->put_ZIndex(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement<D>::Visible() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement)->get_Visible(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement<D>::Visible(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement)->put_Visible(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement2<D>::MapTabIndex() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement2)->get_MapTabIndex(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement2<D>::MapTabIndex(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement2)->put_MapTabIndex(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement3<D>::MapStyleSheetEntry() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement3)->get_MapStyleSheetEntry(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement3<D>::MapStyleSheetEntry(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement3)->put_MapStyleSheetEntry(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement3<D>::MapStyleSheetEntryState() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement3)->get_MapStyleSheetEntryState(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement3<D>::MapStyleSheetEntryState(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement3)->put_MapStyleSheetEntryState(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement3<D>::Tag() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement3)->get_Tag(&value));
        return Windows::Foundation::IInspectable{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement3<D>::Tag(Windows::Foundation::IInspectable const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement3)->put_Tag(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement3D<D>::Location() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement3D)->get_Location(&value));
        return Windows::Devices::Geolocation::Geopoint{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement3D<D>::Location(Windows::Devices::Geolocation::Geopoint const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement3D)->put_Location(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement3D<D>::Model() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement3D)->get_Model(&value));
        return Windows::UI::Xaml::Controls::Maps::MapModel3D{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement3D<D>::Model(Windows::UI::Xaml::Controls::Maps::MapModel3D const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement3D)->put_Model(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement3D<D>::Heading() const
    {
        double value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement3D)->get_Heading(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement3D<D>::Heading(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement3D)->put_Heading(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement3D<D>::Pitch() const
    {
        double value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement3D)->get_Pitch(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement3D<D>::Pitch(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement3D)->put_Pitch(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement3D<D>::Roll() const
    {
        double value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement3D)->get_Roll(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement3D<D>::Roll(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement3D)->put_Roll(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement3D<D>::Scale() const
    {
        Windows::Foundation::Numerics::float3 value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement3D)->get_Scale(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement3D<D>::Scale(Windows::Foundation::Numerics::float3 const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement3D)->put_Scale(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement3DStatics<D>::LocationProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics)->get_LocationProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement3DStatics<D>::HeadingProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics)->get_HeadingProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement3DStatics<D>::PitchProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics)->get_PitchProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement3DStatics<D>::RollProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics)->get_RollProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement3DStatics<D>::ScaleProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics)->get_ScaleProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement4<D>::IsEnabled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement4)->get_IsEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElement4<D>::IsEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement4)->put_IsEnabled(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementClickEventArgs<D>::Position() const
    {
        Windows::Foundation::Point value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs)->get_Position(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementClickEventArgs<D>::Location() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs)->get_Location(&value));
        return Windows::Devices::Geolocation::Geopoint{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementClickEventArgs<D>::MapElements() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs)->get_MapElements(&value));
        return Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapElement>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementFactory)->CreateInstance(*(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return Windows::UI::Xaml::Controls::Maps::MapElement{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementPointerEnteredEventArgs<D>::Position() const
    {
        Windows::Foundation::Point value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs)->get_Position(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementPointerEnteredEventArgs<D>::Location() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs)->get_Location(&value));
        return Windows::Devices::Geolocation::Geopoint{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementPointerEnteredEventArgs<D>::MapElement() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs)->get_MapElement(&value));
        return Windows::UI::Xaml::Controls::Maps::MapElement{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementPointerExitedEventArgs<D>::Position() const
    {
        Windows::Foundation::Point value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs)->get_Position(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementPointerExitedEventArgs<D>::Location() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs)->get_Location(&value));
        return Windows::Devices::Geolocation::Geopoint{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementPointerExitedEventArgs<D>::MapElement() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs)->get_MapElement(&value));
        return Windows::UI::Xaml::Controls::Maps::MapElement{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics<D>::ZIndexProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementStatics)->get_ZIndexProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics<D>::VisibleProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementStatics)->get_VisibleProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics2<D>::MapTabIndexProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementStatics2)->get_MapTabIndexProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics3<D>::MapStyleSheetEntryProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementStatics3)->get_MapStyleSheetEntryProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics3<D>::MapStyleSheetEntryStateProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementStatics3)->get_MapStyleSheetEntryStateProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics3<D>::TagProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementStatics3)->get_TagProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics4<D>::IsEnabledProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementStatics4)->get_IsEnabledProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayer<D>::MapElements() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementsLayer)->get_MapElements(&value));
        return Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapElement>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayer<D>::MapElements(param::vector<Windows::UI::Xaml::Controls::Maps::MapElement> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementsLayer)->put_MapElements(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayer<D>::MapElementClick(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerClickEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementsLayer)->add_MapElementClick(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayer<D>::MapElementClick_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayer<D>::MapElementClick(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerClickEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, MapElementClick_revoker>(this, MapElementClick(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayer<D>::MapElementClick(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementsLayer)->remove_MapElementClick(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayer<D>::MapElementPointerEntered(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerEnteredEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementsLayer)->add_MapElementPointerEntered(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayer<D>::MapElementPointerEntered_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayer<D>::MapElementPointerEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerEnteredEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, MapElementPointerEntered_revoker>(this, MapElementPointerEntered(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayer<D>::MapElementPointerEntered(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementsLayer)->remove_MapElementPointerEntered(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayer<D>::MapElementPointerExited(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerExitedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementsLayer)->add_MapElementPointerExited(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayer<D>::MapElementPointerExited_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayer<D>::MapElementPointerExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerExitedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, MapElementPointerExited_revoker>(this, MapElementPointerExited(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayer<D>::MapElementPointerExited(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementsLayer)->remove_MapElementPointerExited(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayer<D>::MapContextRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerContextRequestedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementsLayer)->add_MapContextRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayer<D>::MapContextRequested_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayer<D>::MapContextRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerContextRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, MapContextRequested_revoker>(this, MapContextRequested(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayer<D>::MapContextRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementsLayer)->remove_MapContextRequested(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerClickEventArgs<D>::Position() const
    {
        Windows::Foundation::Point value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementsLayerClickEventArgs)->get_Position(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerClickEventArgs<D>::Location() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementsLayerClickEventArgs)->get_Location(&value));
        return Windows::Devices::Geolocation::Geopoint{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerClickEventArgs<D>::MapElements() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementsLayerClickEventArgs)->get_MapElements(&value));
        return Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapElement>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerContextRequestedEventArgs<D>::Position() const
    {
        Windows::Foundation::Point value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementsLayerContextRequestedEventArgs)->get_Position(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerContextRequestedEventArgs<D>::Location() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementsLayerContextRequestedEventArgs)->get_Location(&value));
        return Windows::Devices::Geolocation::Geopoint{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerContextRequestedEventArgs<D>::MapElements() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementsLayerContextRequestedEventArgs)->get_MapElements(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Maps::MapElement>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerPointerEnteredEventArgs<D>::Position() const
    {
        Windows::Foundation::Point value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerEnteredEventArgs)->get_Position(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerPointerEnteredEventArgs<D>::Location() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerEnteredEventArgs)->get_Location(&value));
        return Windows::Devices::Geolocation::Geopoint{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerPointerEnteredEventArgs<D>::MapElement() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerEnteredEventArgs)->get_MapElement(&value));
        return Windows::UI::Xaml::Controls::Maps::MapElement{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerPointerExitedEventArgs<D>::Position() const
    {
        Windows::Foundation::Point value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerExitedEventArgs)->get_Position(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerPointerExitedEventArgs<D>::Location() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerExitedEventArgs)->get_Location(&value));
        return Windows::Devices::Geolocation::Geopoint{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerPointerExitedEventArgs<D>::MapElement() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerExitedEventArgs)->get_MapElement(&value));
        return Windows::UI::Xaml::Controls::Maps::MapElement{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerStatics<D>::MapElementsProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementsLayerStatics)->get_MapElementsProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapIcon<D>::Location() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIcon)->get_Location(&value));
        return Windows::Devices::Geolocation::Geopoint{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapIcon<D>::Location(Windows::Devices::Geolocation::Geopoint const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIcon)->put_Location(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapIcon<D>::Title() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIcon)->get_Title(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapIcon<D>::Title(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIcon)->put_Title(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapIcon<D>::NormalizedAnchorPoint() const
    {
        Windows::Foundation::Point value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIcon)->get_NormalizedAnchorPoint(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapIcon<D>::NormalizedAnchorPoint(Windows::Foundation::Point const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIcon)->put_NormalizedAnchorPoint(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapIcon<D>::Image() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIcon)->get_Image(&value));
        return Windows::Storage::Streams::IRandomAccessStreamReference{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapIcon<D>::Image(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIcon)->put_Image(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapIcon2<D>::CollisionBehaviorDesired() const
    {
        Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIcon2)->get_CollisionBehaviorDesired(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapIcon2<D>::CollisionBehaviorDesired(Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIcon2)->put_CollisionBehaviorDesired(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapIconStatics<D>::LocationProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIconStatics)->get_LocationProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapIconStatics<D>::TitleProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIconStatics)->get_TitleProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapIconStatics<D>::NormalizedAnchorPointProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIconStatics)->get_NormalizedAnchorPointProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapIconStatics2<D>::CollisionBehaviorDesiredProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIconStatics2)->get_CollisionBehaviorDesiredProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapInputEventArgs<D>::Position() const
    {
        Windows::Foundation::Point value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs)->get_Position(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapInputEventArgs<D>::Location() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs)->get_Location(&value));
        return Windows::Devices::Geolocation::Geopoint{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControl<D>::ItemsSource() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapItemsControl)->get_ItemsSource(&value));
        return Windows::Foundation::IInspectable{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControl<D>::ItemsSource(Windows::Foundation::IInspectable const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapItemsControl)->put_ItemsSource(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControl<D>::Items() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapItemsControl)->get_Items(&value));
        return Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControl<D>::ItemTemplate() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapItemsControl)->get_ItemTemplate(&value));
        return Windows::UI::Xaml::DataTemplate{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControl<D>::ItemTemplate(Windows::UI::Xaml::DataTemplate const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapItemsControl)->put_ItemTemplate(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControlStatics<D>::ItemsSourceProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics)->get_ItemsSourceProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControlStatics<D>::ItemsProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics)->get_ItemsProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControlStatics<D>::ItemTemplateProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics)->get_ItemTemplateProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapLayer<D>::MapTabIndex() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapLayer)->get_MapTabIndex(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapLayer<D>::MapTabIndex(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapLayer)->put_MapTabIndex(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapLayer<D>::Visible() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapLayer)->get_Visible(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapLayer<D>::Visible(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapLayer)->put_Visible(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapLayer<D>::ZIndex() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapLayer)->get_ZIndex(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapLayer<D>::ZIndex(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapLayer)->put_ZIndex(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapLayerFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapLayerFactory)->CreateInstance(*(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return Windows::UI::Xaml::Controls::Maps::MapLayer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapLayerStatics<D>::MapTabIndexProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapLayerStatics)->get_MapTabIndexProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapLayerStatics<D>::VisibleProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapLayerStatics)->get_VisibleProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapLayerStatics<D>::ZIndexProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapLayerStatics)->get_ZIndexProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapModel3DFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapModel3DFactory)->CreateInstance(*(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return Windows::UI::Xaml::Controls::Maps::MapModel3D{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapModel3DStatics<D>::CreateFrom3MFAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& source) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapModel3DStatics)->CreateFrom3MFAsync(*(void**)(&source), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::MapModel3D>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapModel3DStatics<D>::CreateFrom3MFAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& source, Windows::UI::Xaml::Controls::Maps::MapModel3DShadingOption const& shadingOption) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapModel3DStatics)->CreateFrom3MFWithShadingOptionAsync(*(void**)(&source), static_cast<int32_t>(shadingOption), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::MapModel3D>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon<D>::Path() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygon)->get_Path(&value));
        return Windows::Devices::Geolocation::Geopath{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon<D>::Path(Windows::Devices::Geolocation::Geopath const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygon)->put_Path(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon<D>::StrokeColor() const
    {
        Windows::UI::Color value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygon)->get_StrokeColor(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon<D>::StrokeColor(Windows::UI::Color const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygon)->put_StrokeColor(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon<D>::StrokeThickness() const
    {
        double value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygon)->get_StrokeThickness(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon<D>::StrokeThickness(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygon)->put_StrokeThickness(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon<D>::StrokeDashed() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygon)->get_StrokeDashed(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon<D>::StrokeDashed(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygon)->put_StrokeDashed(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon<D>::FillColor() const
    {
        Windows::UI::Color value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygon)->get_FillColor(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon<D>::FillColor(Windows::UI::Color const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygon)->put_FillColor(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon2<D>::Paths() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygon2)->get_Paths(&value));
        return Windows::Foundation::Collections::IVector<Windows::Devices::Geolocation::Geopath>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapPolygonStatics<D>::PathProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics)->get_PathProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapPolygonStatics<D>::StrokeThicknessProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics)->get_StrokeThicknessProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapPolygonStatics<D>::StrokeDashedProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics)->get_StrokeDashedProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapPolyline<D>::Path() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolyline)->get_Path(&value));
        return Windows::Devices::Geolocation::Geopath{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapPolyline<D>::Path(Windows::Devices::Geolocation::Geopath const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolyline)->put_Path(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapPolyline<D>::StrokeColor() const
    {
        Windows::UI::Color value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolyline)->get_StrokeColor(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapPolyline<D>::StrokeColor(Windows::UI::Color const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolyline)->put_StrokeColor(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapPolyline<D>::StrokeThickness() const
    {
        double value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolyline)->get_StrokeThickness(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapPolyline<D>::StrokeThickness(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolyline)->put_StrokeThickness(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapPolyline<D>::StrokeDashed() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolyline)->get_StrokeDashed(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapPolyline<D>::StrokeDashed(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolyline)->put_StrokeDashed(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapPolylineStatics<D>::PathProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics)->get_PathProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapPolylineStatics<D>::StrokeDashedProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics)->get_StrokeDashedProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapRightTappedEventArgs<D>::Position() const
    {
        Windows::Foundation::Point value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs)->get_Position(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapRightTappedEventArgs<D>::Location() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs)->get_Location(&value));
        return Windows::Devices::Geolocation::Geopoint{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapRouteView<D>::RouteColor() const
    {
        Windows::UI::Color value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapRouteView)->get_RouteColor(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapRouteView<D>::RouteColor(Windows::UI::Color const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapRouteView)->put_RouteColor(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapRouteView<D>::OutlineColor() const
    {
        Windows::UI::Color value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapRouteView)->get_OutlineColor(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapRouteView<D>::OutlineColor(Windows::UI::Color const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapRouteView)->put_OutlineColor(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapRouteView<D>::Route() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapRouteView)->get_Route(&value));
        return Windows::Services::Maps::MapRoute{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapRouteViewFactory<D>::CreateInstanceWithMapRoute(Windows::Services::Maps::MapRoute const& route, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory)->CreateInstanceWithMapRoute(*(void**)(&route), *(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return Windows::UI::Xaml::Controls::Maps::MapRouteView{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapScene<D>::TargetCamera() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapScene)->get_TargetCamera(&value));
        return Windows::UI::Xaml::Controls::Maps::MapCamera{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapScene<D>::TargetCameraChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapScene, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapScene)->add_TargetCameraChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Controls_Maps_IMapScene<D>::TargetCameraChanged_revoker consume_Windows_UI_Xaml_Controls_Maps_IMapScene<D>::TargetCameraChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapScene, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, TargetCameraChanged_revoker>(this, TargetCameraChanged(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapScene<D>::TargetCameraChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapScene)->remove_TargetCameraChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapSceneStatics<D>::CreateFromBoundingBox(Windows::Devices::Geolocation::GeoboundingBox const& bounds) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapSceneStatics)->CreateFromBoundingBox(*(void**)(&bounds), &result));
        return Windows::UI::Xaml::Controls::Maps::MapScene{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapSceneStatics<D>::CreateFromBoundingBox(Windows::Devices::Geolocation::GeoboundingBox const& bounds, double headingInDegrees, double pitchInDegrees) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapSceneStatics)->CreateFromBoundingBoxWithHeadingAndPitch(*(void**)(&bounds), headingInDegrees, pitchInDegrees, &result));
        return Windows::UI::Xaml::Controls::Maps::MapScene{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapSceneStatics<D>::CreateFromCamera(Windows::UI::Xaml::Controls::Maps::MapCamera const& camera) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapSceneStatics)->CreateFromCamera(*(void**)(&camera), &result));
        return Windows::UI::Xaml::Controls::Maps::MapScene{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapSceneStatics<D>::CreateFromLocation(Windows::Devices::Geolocation::Geopoint const& location) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapSceneStatics)->CreateFromLocation(*(void**)(&location), &result));
        return Windows::UI::Xaml::Controls::Maps::MapScene{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapSceneStatics<D>::CreateFromLocation(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees, double pitchInDegrees) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapSceneStatics)->CreateFromLocationWithHeadingAndPitch(*(void**)(&location), headingInDegrees, pitchInDegrees, &result));
        return Windows::UI::Xaml::Controls::Maps::MapScene{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapSceneStatics<D>::CreateFromLocationAndRadius(Windows::Devices::Geolocation::Geopoint const& location, double radiusInMeters) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapSceneStatics)->CreateFromLocationAndRadius(*(void**)(&location), radiusInMeters, &result));
        return Windows::UI::Xaml::Controls::Maps::MapScene{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapSceneStatics<D>::CreateFromLocationAndRadius(Windows::Devices::Geolocation::Geopoint const& location, double radiusInMeters, double headingInDegrees, double pitchInDegrees) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapSceneStatics)->CreateFromLocationAndRadiusWithHeadingAndPitch(*(void**)(&location), radiusInMeters, headingInDegrees, pitchInDegrees, &result));
        return Windows::UI::Xaml::Controls::Maps::MapScene{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapSceneStatics<D>::CreateFromLocations(param::iterable<Windows::Devices::Geolocation::Geopoint> const& locations) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapSceneStatics)->CreateFromLocations(*(void**)(&locations), &result));
        return Windows::UI::Xaml::Controls::Maps::MapScene{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapSceneStatics<D>::CreateFromLocations(param::iterable<Windows::Devices::Geolocation::Geopoint> const& locations, double headingInDegrees, double pitchInDegrees) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapSceneStatics)->CreateFromLocationsWithHeadingAndPitch(*(void**)(&locations), headingInDegrees, pitchInDegrees, &result));
        return Windows::UI::Xaml::Controls::Maps::MapScene{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Area() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Area(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Airport() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Airport(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Cemetery() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Cemetery(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Continent() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Continent(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Education() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Education(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::IndigenousPeoplesReserve() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_IndigenousPeoplesReserve(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Island() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Island(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Medical() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Medical(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Military() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Military(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Nautical() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Nautical(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Neighborhood() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Neighborhood(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Runway() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Runway(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Sand() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Sand(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::ShoppingCenter() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_ShoppingCenter(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Stadium() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Stadium(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Vegetation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Vegetation(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Forest() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Forest(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::GolfCourse() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_GolfCourse(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Park() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Park(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::PlayingField() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_PlayingField(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Reserve() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Reserve(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Point() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Point(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::NaturalPoint() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_NaturalPoint(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Peak() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Peak(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::VolcanicPeak() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_VolcanicPeak(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::WaterPoint() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_WaterPoint(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::PointOfInterest() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_PointOfInterest(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Business() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Business(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::FoodPoint() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_FoodPoint(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::PopulatedPlace() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_PopulatedPlace(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Capital() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Capital(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::AdminDistrictCapital() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_AdminDistrictCapital(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::CountryRegionCapital() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_CountryRegionCapital(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::RoadShield() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_RoadShield(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::RoadExit() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_RoadExit(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Transit() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Transit(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Political() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Political(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::CountryRegion() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_CountryRegion(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::AdminDistrict() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_AdminDistrict(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::District() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_District(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Structure() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Structure(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Building() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Building(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::EducationBuilding() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_EducationBuilding(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::MedicalBuilding() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_MedicalBuilding(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::TransitBuilding() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_TransitBuilding(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Transportation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Transportation(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Road() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Road(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::ControlledAccessHighway() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_ControlledAccessHighway(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::HighSpeedRamp() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_HighSpeedRamp(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Highway() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Highway(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::MajorRoad() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_MajorRoad(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::ArterialRoad() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_ArterialRoad(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Street() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Street(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Ramp() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Ramp(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::UnpavedStreet() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_UnpavedStreet(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::TollRoad() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_TollRoad(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Railway() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Railway(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Trail() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Trail(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::WaterRoute() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_WaterRoute(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::Water() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_Water(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::River() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_River(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::RouteLine() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_RouteLine(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::WalkingRoute() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_WalkingRoute(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>::DrivingRoute() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics)->get_DrivingRoute(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntryStatesStatics<D>::Disabled() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntryStatesStatics)->get_Disabled(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntryStatesStatics<D>::Hover() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntryStatesStatics)->get_Hover(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntryStatesStatics<D>::Selected() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntryStatesStatics)->get_Selected(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetStatics<D>::Aerial() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics)->Aerial(&result));
        return Windows::UI::Xaml::Controls::Maps::MapStyleSheet{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetStatics<D>::AerialWithOverlay() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics)->AerialWithOverlay(&result));
        return Windows::UI::Xaml::Controls::Maps::MapStyleSheet{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetStatics<D>::RoadLight() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics)->RoadLight(&result));
        return Windows::UI::Xaml::Controls::Maps::MapStyleSheet{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetStatics<D>::RoadDark() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics)->RoadDark(&result));
        return Windows::UI::Xaml::Controls::Maps::MapStyleSheet{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetStatics<D>::RoadHighContrastLight() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics)->RoadHighContrastLight(&result));
        return Windows::UI::Xaml::Controls::Maps::MapStyleSheet{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetStatics<D>::RoadHighContrastDark() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics)->RoadHighContrastDark(&result));
        return Windows::UI::Xaml::Controls::Maps::MapStyleSheet{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetStatics<D>::Combine(param::iterable<Windows::UI::Xaml::Controls::Maps::MapStyleSheet> const& styleSheets) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics)->Combine(*(void**)(&styleSheets), &result));
        return Windows::UI::Xaml::Controls::Maps::MapStyleSheet{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetStatics<D>::ParseFromJson(param::hstring const& styleAsJson) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics)->ParseFromJson(*(void**)(&styleAsJson), &result));
        return Windows::UI::Xaml::Controls::Maps::MapStyleSheet{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetStatics<D>::TryParseFromJson(param::hstring const& styleAsJson, Windows::UI::Xaml::Controls::Maps::MapStyleSheet& styleSheet) const
    {
        bool returnValue;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics)->TryParseFromJson(*(void**)(&styleAsJson), impl::bind_out(styleSheet), &returnValue));
        return returnValue;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTargetCameraChangedEventArgs<D>::Camera() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs)->get_Camera(&value));
        return Windows::UI::Xaml::Controls::Maps::MapCamera{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTargetCameraChangedEventArgs2<D>::ChangeReason() const
    {
        Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs2)->get_ChangeReason(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequest<D>::PixelData() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest)->get_PixelData(&value));
        return Windows::Storage::Streams::IRandomAccessStreamReference{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequest<D>::PixelData(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest)->put_PixelData(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequest<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest)->GetDeferral(&result));
        return Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestDeferral{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestDeferral<D>::Complete() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral)->Complete());
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestedEventArgs<D>::X() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs)->get_X(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestedEventArgs<D>::Y() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs)->get_Y(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestedEventArgs<D>::ZoomLevel() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs)->get_ZoomLevel(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestedEventArgs<D>::Request() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs)->get_Request(&value));
        return Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequest{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestedEventArgs2<D>::FrameIndex() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs2)->get_FrameIndex(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileDataSourceFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory)->CreateInstance(*(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return Windows::UI::Xaml::Controls::Maps::MapTileDataSource{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::DataSource() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->get_DataSource(&value));
        return Windows::UI::Xaml::Controls::Maps::MapTileDataSource{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::DataSource(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->put_DataSource(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::Layer() const
    {
        Windows::UI::Xaml::Controls::Maps::MapTileLayer value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->get_Layer(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::Layer(Windows::UI::Xaml::Controls::Maps::MapTileLayer const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->put_Layer(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::ZoomLevelRange() const
    {
        Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->get_ZoomLevelRange(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::ZoomLevelRange(Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->put_ZoomLevelRange(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::Bounds() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->get_Bounds(&value));
        return Windows::Devices::Geolocation::GeoboundingBox{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::Bounds(Windows::Devices::Geolocation::GeoboundingBox const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->put_Bounds(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::AllowOverstretch() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->get_AllowOverstretch(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::AllowOverstretch(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->put_AllowOverstretch(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::IsFadingEnabled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->get_IsFadingEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::IsFadingEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->put_IsFadingEnabled(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::IsTransparencyEnabled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->get_IsTransparencyEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::IsTransparencyEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->put_IsTransparencyEnabled(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::IsRetryEnabled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->get_IsRetryEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::IsRetryEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->put_IsRetryEnabled(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::ZIndex() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->get_ZIndex(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::ZIndex(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->put_ZIndex(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::TilePixelSize() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->get_TilePixelSize(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::TilePixelSize(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->put_TilePixelSize(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::Visible() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->get_Visible(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::Visible(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->put_Visible(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource2<D>::AnimationState() const
    {
        Windows::UI::Xaml::Controls::Maps::MapTileAnimationState value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource2)->get_AnimationState(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource2<D>::AutoPlay() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource2)->get_AutoPlay(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource2<D>::AutoPlay(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource2)->put_AutoPlay(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource2<D>::FrameCount() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource2)->get_FrameCount(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource2<D>::FrameCount(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource2)->put_FrameCount(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource2<D>::FrameDuration() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource2)->get_FrameDuration(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource2<D>::FrameDuration(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource2)->put_FrameDuration(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource2<D>::Pause() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource2)->Pause());
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource2<D>::Play() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource2)->Play());
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource2<D>::Stop() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource2)->Stop());
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory)->CreateInstance(*(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return Windows::UI::Xaml::Controls::Maps::MapTileSource{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceFactory<D>::CreateInstanceWithDataSource(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory)->CreateInstanceWithDataSource(*(void**)(&dataSource), *(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return Windows::UI::Xaml::Controls::Maps::MapTileSource{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceFactory<D>::CreateInstanceWithDataSourceAndZoomRange(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory)->CreateInstanceWithDataSourceAndZoomRange(*(void**)(&dataSource), impl::bind_in(zoomLevelRange), *(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return Windows::UI::Xaml::Controls::Maps::MapTileSource{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceFactory<D>::CreateInstanceWithDataSourceZoomRangeAndBounds(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange, Windows::Devices::Geolocation::GeoboundingBox const& bounds, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory)->CreateInstanceWithDataSourceZoomRangeAndBounds(*(void**)(&dataSource), impl::bind_in(zoomLevelRange), *(void**)(&bounds), *(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return Windows::UI::Xaml::Controls::Maps::MapTileSource{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceFactory<D>::CreateInstanceWithDataSourceZoomRangeBoundsAndTileSize(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange, Windows::Devices::Geolocation::GeoboundingBox const& bounds, int32_t tileSizeInPixels, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory)->CreateInstanceWithDataSourceZoomRangeBoundsAndTileSize(*(void**)(&dataSource), impl::bind_in(zoomLevelRange), *(void**)(&bounds), tileSizeInPixels, *(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return Windows::UI::Xaml::Controls::Maps::MapTileSource{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics<D>::DataSourceProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics)->get_DataSourceProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics<D>::LayerProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics)->get_LayerProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics<D>::ZoomLevelRangeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics)->get_ZoomLevelRangeProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics<D>::BoundsProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics)->get_BoundsProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics<D>::AllowOverstretchProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics)->get_AllowOverstretchProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics<D>::IsFadingEnabledProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics)->get_IsFadingEnabledProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics<D>::IsTransparencyEnabledProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics)->get_IsTransparencyEnabledProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics<D>::IsRetryEnabledProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics)->get_IsRetryEnabledProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics<D>::ZIndexProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics)->get_ZIndexProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics<D>::TilePixelSizeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics)->get_TilePixelSizeProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics<D>::VisibleProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics)->get_VisibleProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics2<D>::AnimationStateProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics2)->get_AnimationStateProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics2<D>::AutoPlayProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics2)->get_AutoPlayProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics2<D>::FrameCountProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics2)->get_FrameCountProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics2<D>::FrameDurationProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics2)->get_FrameDurationProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequest<D>::Uri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest)->get_Uri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequest<D>::Uri(Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest)->put_Uri(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequest<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest)->GetDeferral(&result));
        return Windows::UI::Xaml::Controls::Maps::MapTileUriRequestDeferral{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestDeferral<D>::Complete() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral)->Complete());
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestedEventArgs<D>::X() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs)->get_X(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestedEventArgs<D>::Y() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs)->get_Y(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestedEventArgs<D>::ZoomLevel() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs)->get_ZoomLevel(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestedEventArgs<D>::Request() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs)->get_Request(&value));
        return Windows::UI::Xaml::Controls::Maps::MapTileUriRequest{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestedEventArgs2<D>::FrameIndex() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs2)->get_FrameIndex(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience<D>::AddressTextVisible() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperience)->get_AddressTextVisible(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience<D>::AddressTextVisible(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperience)->put_AddressTextVisible(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience<D>::CursorVisible() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperience)->get_CursorVisible(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience<D>::CursorVisible(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperience)->put_CursorVisible(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience<D>::OverviewMapVisible() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperience)->get_OverviewMapVisible(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience<D>::OverviewMapVisible(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperience)->put_OverviewMapVisible(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience<D>::StreetLabelsVisible() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperience)->get_StreetLabelsVisible(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience<D>::StreetLabelsVisible(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperience)->put_StreetLabelsVisible(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience<D>::ExitButtonVisible() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperience)->get_ExitButtonVisible(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience<D>::ExitButtonVisible(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperience)->put_ExitButtonVisible(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience<D>::ZoomButtonsVisible() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperience)->get_ZoomButtonsVisible(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience<D>::ZoomButtonsVisible(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperience)->put_ZoomButtonsVisible(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperienceFactory<D>::CreateInstanceWithPanorama(Windows::UI::Xaml::Controls::Maps::StreetsidePanorama const& panorama) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory)->CreateInstanceWithPanorama(*(void**)(&panorama), &value));
        return Windows::UI::Xaml::Controls::Maps::StreetsideExperience{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperienceFactory<D>::CreateInstanceWithPanoramaHeadingPitchAndFieldOfView(Windows::UI::Xaml::Controls::Maps::StreetsidePanorama const& panorama, double headingInDegrees, double pitchInDegrees, double fieldOfViewInDegrees) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory)->CreateInstanceWithPanoramaHeadingPitchAndFieldOfView(*(void**)(&panorama), headingInDegrees, pitchInDegrees, fieldOfViewInDegrees, &value));
        return Windows::UI::Xaml::Controls::Maps::StreetsideExperience{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IStreetsidePanorama<D>::Location() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama)->get_Location(&value));
        return Windows::Devices::Geolocation::Geopoint{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IStreetsidePanoramaStatics<D>::FindNearbyAsync(Windows::Devices::Geolocation::Geopoint const& location) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics)->FindNearbyWithLocationAsync(*(void**)(&location), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Controls_Maps_IStreetsidePanoramaStatics<D>::FindNearbyAsync(Windows::Devices::Geolocation::Geopoint const& location, double radiusInMeters) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics)->FindNearbyWithLocationAndRadiusAsync(*(void**)(&location), radiusInMeters, &operation));
        return Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama>{ operation, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource> : produce_base<D, Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource>
    {
        int32_t __stdcall add_BitmapRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().BitmapRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs> const*>(&handler)));
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
    struct produce<D, Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory> : produce_base<D, Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory>
    {
        int32_t __stdcall CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource>
    {
        int32_t __stdcall get_UriFormatString(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UriFormatString());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_UriFormatString(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UriFormatString(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AdditionalRequestHeaders(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMap<hstring, hstring>>(this->shim().AdditionalRequestHeaders());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AllowCaching(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowCaching());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AllowCaching(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowCaching(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_UriRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().UriRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_UriRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UriRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory>
    {
        int32_t __stdcall CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateInstanceWithUriFormatString(void* uriFormatString, void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource>(this->shim().CreateInstanceWithUriFormatString(*reinterpret_cast<hstring const*>(&uriFormatString), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource> : produce_base<D, Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource>
    {
        int32_t __stdcall get_UriFormatString(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UriFormatString());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_UriFormatString(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UriFormatString(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_UriRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().UriRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_UriRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UriRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory> : produce_base<D, Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory>
    {
        int32_t __stdcall CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateInstanceWithUriFormatString(void* uriFormatString, void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource>(this->shim().CreateInstanceWithUriFormatString(*reinterpret_cast<hstring const*>(&uriFormatString), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs>
    {
        int32_t __stdcall get_Camera(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapCamera>(this->shim().Camera());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs2> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs2>
    {
        int32_t __stdcall get_ChangeReason(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason>(this->shim().ChangeReason());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs>
    {
        int32_t __stdcall get_Camera(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapCamera>(this->shim().Camera());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs2> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs2>
    {
        int32_t __stdcall get_ChangeReason(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason>(this->shim().ChangeReason());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapBillboard> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapBillboard>
    {
        int32_t __stdcall get_Location(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geopoint>(this->shim().Location());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Location(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Location(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NormalizedAnchorPoint(Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().NormalizedAnchorPoint());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_NormalizedAnchorPoint(Windows::Foundation::Point value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NormalizedAnchorPoint(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Image(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IRandomAccessStreamReference>(this->shim().Image());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Image(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Image(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CollisionBehaviorDesired(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior>(this->shim().CollisionBehaviorDesired());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CollisionBehaviorDesired(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CollisionBehaviorDesired(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ReferenceCamera(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapCamera>(this->shim().ReferenceCamera());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapBillboardFactory> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapBillboardFactory>
    {
        int32_t __stdcall CreateInstanceFromCamera(void* camera, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapBillboard>(this->shim().CreateInstanceFromCamera(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapCamera const*>(&camera)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics>
    {
        int32_t __stdcall get_LocationProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().LocationProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NormalizedAnchorPointProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().NormalizedAnchorPointProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CollisionBehaviorDesiredProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CollisionBehaviorDesiredProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapCamera> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapCamera>
    {
        int32_t __stdcall get_Location(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geopoint>(this->shim().Location());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Location(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Location(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Heading(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Heading());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Heading(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Heading(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Pitch(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Pitch());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Pitch(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Pitch(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Roll(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Roll());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Roll(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Roll(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FieldOfView(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().FieldOfView());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_FieldOfView(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FieldOfView(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapCameraFactory> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapCameraFactory>
    {
        int32_t __stdcall CreateInstanceWithLocation(void* location, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapCamera>(this->shim().CreateInstanceWithLocation(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&location)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateInstanceWithLocationAndHeading(void* location, double headingInDegrees, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapCamera>(this->shim().CreateInstanceWithLocationAndHeading(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&location), headingInDegrees));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateInstanceWithLocationHeadingAndPitch(void* location, double headingInDegrees, double pitchInDegrees, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapCamera>(this->shim().CreateInstanceWithLocationHeadingAndPitch(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&location), headingInDegrees, pitchInDegrees));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateInstanceWithLocationHeadingPitchRollAndFieldOfView(void* location, double headingInDegrees, double pitchInDegrees, double rollInDegrees, double fieldOfViewInDegrees, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapCamera>(this->shim().CreateInstanceWithLocationHeadingPitchRollAndFieldOfView(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&location), headingInDegrees, pitchInDegrees, rollInDegrees, fieldOfViewInDegrees));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs>
    {
        int32_t __stdcall get_Position(Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().Position());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Location(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geopoint>(this->shim().Location());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MapElements(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Maps::MapElement>>(this->shim().MapElements());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControl> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControl>
    {
        int32_t __stdcall get_Center(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geopoint>(this->shim().Center());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Center(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Center(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Children(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject>>(this->shim().Children());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ColorScheme(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapColorScheme>(this->shim().ColorScheme());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ColorScheme(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ColorScheme(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapColorScheme const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DesiredPitch(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DesiredPitch());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DesiredPitch(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredPitch(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Heading(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Heading());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Heading(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Heading(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LandmarksVisible(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().LandmarksVisible());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_LandmarksVisible(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LandmarksVisible(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LoadingStatus(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapLoadingStatus>(this->shim().LoadingStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MapServiceToken(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().MapServiceToken());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MapServiceToken(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapServiceToken(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxZoomLevel(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().MaxZoomLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MinZoomLevel(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().MinZoomLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PedestrianFeaturesVisible(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().PedestrianFeaturesVisible());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PedestrianFeaturesVisible(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PedestrianFeaturesVisible(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Pitch(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Pitch());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Style(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapStyle>(this->shim().Style());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Style(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Style(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapStyle const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TrafficFlowVisible(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().TrafficFlowVisible());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TrafficFlowVisible(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrafficFlowVisible(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TransformOrigin(Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().TransformOrigin());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TransformOrigin(Windows::Foundation::Point value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransformOrigin(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WatermarkMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapWatermarkMode>(this->shim().WatermarkMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_WatermarkMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WatermarkMode(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapWatermarkMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ZoomLevel(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ZoomLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ZoomLevel(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ZoomLevel(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MapElements(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapElement>>(this->shim().MapElements());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Routes(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapRouteView>>(this->shim().Routes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TileSources(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapTileSource>>(this->shim().TileSources());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_CenterChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().CenterChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_CenterChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_HeadingChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().HeadingChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_HeadingChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeadingChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_LoadingStatusChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().LoadingStatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_LoadingStatusChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LoadingStatusChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_MapDoubleTapped(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().MapDoubleTapped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_MapDoubleTapped(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapDoubleTapped(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_MapHolding(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().MapHolding(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_MapHolding(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapHolding(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_MapTapped(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().MapTapped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_MapTapped(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapTapped(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_PitchChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().PitchChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_PitchChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PitchChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_TransformOriginChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().TransformOriginChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_TransformOriginChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransformOriginChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_ZoomLevelChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ZoomLevelChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ZoomLevelChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ZoomLevelChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall FindMapElementsAtOffset(Windows::Foundation::Point offset, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Maps::MapElement>>(this->shim().FindMapElementsAtOffset(*reinterpret_cast<Windows::Foundation::Point const*>(&offset)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetLocationFromOffset(Windows::Foundation::Point offset, void** location) noexcept final try
        {
            clear_abi(location);
            typename D::abi_guard guard(this->shim());
            this->shim().GetLocationFromOffset(*reinterpret_cast<Windows::Foundation::Point const*>(&offset), *reinterpret_cast<Windows::Devices::Geolocation::Geopoint*>(location));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetOffsetFromLocation(void* location, Windows::Foundation::Point* offset) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(offset);
            typename D::abi_guard guard(this->shim());
            this->shim().GetOffsetFromLocation(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&location), *reinterpret_cast<Windows::Foundation::Point*>(offset));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsLocationInView(void* location, bool* isInView) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsLocationInView(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&location), *isInView);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TrySetViewBoundsAsync(void* bounds, void* margin, int32_t animation, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TrySetViewBoundsAsync(*reinterpret_cast<Windows::Devices::Geolocation::GeoboundingBox const*>(&bounds), *reinterpret_cast<Windows::Foundation::IReference<Windows::UI::Xaml::Thickness> const*>(&margin), *reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapAnimationKind const*>(&animation)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TrySetViewWithCenterAsync(void* center, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TrySetViewAsync(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&center)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TrySetViewWithCenterAndZoomAsync(void* center, void* zoomLevel, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TrySetViewAsync(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&center), *reinterpret_cast<Windows::Foundation::IReference<double> const*>(&zoomLevel)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TrySetViewWithCenterZoomHeadingAndPitchAsync(void* center, void* zoomLevel, void* heading, void* desiredPitch, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TrySetViewAsync(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&center), *reinterpret_cast<Windows::Foundation::IReference<double> const*>(&zoomLevel), *reinterpret_cast<Windows::Foundation::IReference<double> const*>(&heading), *reinterpret_cast<Windows::Foundation::IReference<double> const*>(&desiredPitch)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TrySetViewWithCenterZoomHeadingPitchAndAnimationAsync(void* center, void* zoomLevel, void* heading, void* desiredPitch, int32_t animation, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TrySetViewAsync(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&center), *reinterpret_cast<Windows::Foundation::IReference<double> const*>(&zoomLevel), *reinterpret_cast<Windows::Foundation::IReference<double> const*>(&heading), *reinterpret_cast<Windows::Foundation::IReference<double> const*>(&desiredPitch), *reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapAnimationKind const*>(&animation)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControl2> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControl2>
    {
        int32_t __stdcall get_BusinessLandmarksVisible(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().BusinessLandmarksVisible());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_BusinessLandmarksVisible(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BusinessLandmarksVisible(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TransitFeaturesVisible(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().TransitFeaturesVisible());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TransitFeaturesVisible(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransitFeaturesVisible(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PanInteractionMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode>(this->shim().PanInteractionMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PanInteractionMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PanInteractionMode(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RotateInteractionMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapInteractionMode>(this->shim().RotateInteractionMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RotateInteractionMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotateInteractionMode(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapInteractionMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TiltInteractionMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapInteractionMode>(this->shim().TiltInteractionMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TiltInteractionMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TiltInteractionMode(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapInteractionMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ZoomInteractionMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapInteractionMode>(this->shim().ZoomInteractionMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ZoomInteractionMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ZoomInteractionMode(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapInteractionMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Is3DSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Is3DSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsStreetsideSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsStreetsideSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Scene(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapScene>(this->shim().Scene());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Scene(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Scene(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapScene const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ActualCamera(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapCamera>(this->shim().ActualCamera());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TargetCamera(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapCamera>(this->shim().TargetCamera());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CustomExperience(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapCustomExperience>(this->shim().CustomExperience());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CustomExperience(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomExperience(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapCustomExperience const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_MapElementClick(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().MapElementClick(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_MapElementClick(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapElementClick(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_MapElementPointerEntered(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().MapElementPointerEntered(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_MapElementPointerEntered(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapElementPointerEntered(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_MapElementPointerExited(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().MapElementPointerExited(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_MapElementPointerExited(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapElementPointerExited(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_ActualCameraChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ActualCameraChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ActualCameraChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ActualCameraChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_ActualCameraChanging(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ActualCameraChanging(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ActualCameraChanging(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ActualCameraChanging(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_TargetCameraChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().TargetCameraChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_TargetCameraChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetCameraChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_CustomExperienceChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().CustomExperienceChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_CustomExperienceChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomExperienceChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall StartContinuousRotate(double rateInDegreesPerSecond) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartContinuousRotate(rateInDegreesPerSecond);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StopContinuousRotate() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopContinuousRotate();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartContinuousTilt(double rateInDegreesPerSecond) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartContinuousTilt(rateInDegreesPerSecond);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StopContinuousTilt() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopContinuousTilt();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartContinuousZoom(double rateOfChangePerSecond) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartContinuousZoom(rateOfChangePerSecond);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StopContinuousZoom() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopContinuousZoom();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryRotateAsync(double degrees, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryRotateAsync(degrees));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryRotateToAsync(double angleInDegrees, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryRotateToAsync(angleInDegrees));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryTiltAsync(double degrees, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryTiltAsync(degrees));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryTiltToAsync(double angleInDegrees, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryTiltToAsync(angleInDegrees));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryZoomInAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryZoomInAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryZoomOutAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryZoomOutAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryZoomToAsync(double zoomLevel, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryZoomToAsync(zoomLevel));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TrySetSceneAsync(void* scene, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TrySetSceneAsync(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapScene const*>(&scene)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TrySetSceneWithAnimationAsync(void* scene, int32_t animationKind, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TrySetSceneAsync(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapScene const*>(&scene), *reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapAnimationKind const*>(&animationKind)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControl3> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControl3>
    {
        int32_t __stdcall add_MapRightTapped(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().MapRightTapped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_MapRightTapped(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapRightTapped(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControl4> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControl4>
    {
        int32_t __stdcall get_BusinessLandmarksEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().BusinessLandmarksEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_BusinessLandmarksEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BusinessLandmarksEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TransitFeaturesEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().TransitFeaturesEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TransitFeaturesEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransitFeaturesEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetVisibleRegion(int32_t region, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Geolocation::Geopath>(this->shim().GetVisibleRegion(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapVisibleRegionKind const*>(&region)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControl5> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControl5>
    {
        int32_t __stdcall get_MapProjection(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapProjection>(this->shim().MapProjection());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MapProjection(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapProjection(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapProjection const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StyleSheet(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapStyleSheet>(this->shim().StyleSheet());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StyleSheet(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StyleSheet(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapStyleSheet const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ViewPadding(struct struct_Windows_UI_Xaml_Thickness* value) noexcept final try
        {
            zero_abi<Windows::UI::Xaml::Thickness>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Thickness>(this->shim().ViewPadding());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ViewPadding(struct struct_Windows_UI_Xaml_Thickness value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ViewPadding(*reinterpret_cast<Windows::UI::Xaml::Thickness const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_MapContextRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().MapContextRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_MapContextRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapContextRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall FindMapElementsAtOffsetWithRadius(Windows::Foundation::Point offset, double radius, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Maps::MapElement>>(this->shim().FindMapElementsAtOffset(*reinterpret_cast<Windows::Foundation::Point const*>(&offset), radius));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetLocationFromOffsetWithReferenceSystem(Windows::Foundation::Point offset, int32_t desiredReferenceSystem, void** location) noexcept final try
        {
            clear_abi(location);
            typename D::abi_guard guard(this->shim());
            this->shim().GetLocationFromOffset(*reinterpret_cast<Windows::Foundation::Point const*>(&offset), *reinterpret_cast<Windows::Devices::Geolocation::AltitudeReferenceSystem const*>(&desiredReferenceSystem), *reinterpret_cast<Windows::Devices::Geolocation::Geopoint*>(location));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartContinuousPan(double horizontalPixelsPerSecond, double verticalPixelsPerSecond) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartContinuousPan(horizontalPixelsPerSecond, verticalPixelsPerSecond);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StopContinuousPan() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopContinuousPan();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryPanAsync(double horizontalPixels, double verticalPixels, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryPanAsync(horizontalPixels, verticalPixels));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryPanToAsync(void* location, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryPanToAsync(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&location)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControl6> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControl6>
    {
        int32_t __stdcall get_Layers(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapLayer>>(this->shim().Layers());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Layers(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Layers(*reinterpret_cast<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapLayer> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetLocationFromOffset(Windows::Foundation::Point offset, void** location, bool* returnValue) noexcept final try
        {
            clear_abi(location);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().TryGetLocationFromOffset(*reinterpret_cast<Windows::Foundation::Point const*>(&offset), *reinterpret_cast<Windows::Devices::Geolocation::Geopoint*>(location)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetLocationFromOffsetWithReferenceSystem(Windows::Foundation::Point offset, int32_t desiredReferenceSystem, void** location, bool* returnValue) noexcept final try
        {
            clear_abi(location);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().TryGetLocationFromOffset(*reinterpret_cast<Windows::Foundation::Point const*>(&offset), *reinterpret_cast<Windows::Devices::Geolocation::AltitudeReferenceSystem const*>(&desiredReferenceSystem), *reinterpret_cast<Windows::Devices::Geolocation::Geopoint*>(location)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControl7> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControl7>
    {
        int32_t __stdcall get_Region(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Region());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Region(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Region(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControl8> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControl8>
    {
        int32_t __stdcall get_CanTiltDown(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanTiltDown());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CanTiltUp(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanTiltUp());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CanZoomIn(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanZoomIn());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CanZoomOut(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanZoomOut());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkClickEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkClickEventArgs>
    {
        int32_t __stdcall get_LocalLocations(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation>>(this->shim().LocalLocations());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerEnteredEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerEnteredEventArgs>
    {
        int32_t __stdcall get_LocalLocations(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation>>(this->shim().LocalLocations());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerExitedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerExitedEventArgs>
    {
        int32_t __stdcall get_LocalLocations(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation>>(this->shim().LocalLocations());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkRightTappedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkRightTappedEventArgs>
    {
        int32_t __stdcall get_LocalLocations(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation>>(this->shim().LocalLocations());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper>
    {
        int32_t __stdcall add_BusinessLandmarkClick(void* value, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().BusinessLandmarkClick(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkClickEventArgs> const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_BusinessLandmarkClick(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BusinessLandmarkClick(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_TransitFeatureClick(void* value, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().TransitFeatureClick(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureClickEventArgs> const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_TransitFeatureClick(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransitFeatureClick(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_BusinessLandmarkRightTapped(void* value, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().BusinessLandmarkRightTapped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkRightTappedEventArgs> const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_BusinessLandmarkRightTapped(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BusinessLandmarkRightTapped(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_TransitFeatureRightTapped(void* value, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().TransitFeatureRightTapped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureRightTappedEventArgs> const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_TransitFeatureRightTapped(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransitFeatureRightTapped(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2>
    {
        int32_t __stdcall add_BusinessLandmarkPointerEntered(void* value, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().BusinessLandmarkPointerEntered(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerEnteredEventArgs> const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_BusinessLandmarkPointerEntered(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BusinessLandmarkPointerEntered(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_TransitFeaturePointerEntered(void* value, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().TransitFeaturePointerEntered(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerEnteredEventArgs> const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_TransitFeaturePointerEntered(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransitFeaturePointerEntered(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_BusinessLandmarkPointerExited(void* value, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().BusinessLandmarkPointerExited(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerExitedEventArgs> const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_BusinessLandmarkPointerExited(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BusinessLandmarkPointerExited(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_TransitFeaturePointerExited(void* value, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().TransitFeaturePointerExited(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerExitedEventArgs> const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_TransitFeaturePointerExited(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransitFeaturePointerExited(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperFactory> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperFactory>
    {
        int32_t __stdcall CreateInstance(void* map, void** instance) noexcept final try
        {
            clear_abi(instance);
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::UI::Xaml::Controls::Maps::MapControlDataHelper>(this->shim().CreateInstance(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapControl const*>(&map)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperStatics>
    {
        int32_t __stdcall CreateMapControl(bool rasterRenderMode, void** returnValue) noexcept final try
        {
            clear_abi(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::Controls::Maps::MapControl>(this->shim().CreateMapControl(rasterRenderMode));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>
    {
        int32_t __stdcall get_CenterProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CenterProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ChildrenProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ChildrenProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ColorSchemeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ColorSchemeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DesiredPitchProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().DesiredPitchProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HeadingProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().HeadingProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LandmarksVisibleProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().LandmarksVisibleProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LoadingStatusProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().LoadingStatusProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MapServiceTokenProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().MapServiceTokenProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PedestrianFeaturesVisibleProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().PedestrianFeaturesVisibleProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PitchProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().PitchProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StyleProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().StyleProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TrafficFlowVisibleProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().TrafficFlowVisibleProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TransformOriginProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().TransformOriginProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WatermarkModeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().WatermarkModeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ZoomLevelProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ZoomLevelProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MapElementsProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().MapElementsProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RoutesProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().RoutesProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TileSourcesProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().TileSourcesProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LocationProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().LocationProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetLocation(void* element, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Geolocation::Geopoint>(this->shim().GetLocation(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetLocation(void* element, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetLocation(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NormalizedAnchorPointProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().NormalizedAnchorPointProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetNormalizedAnchorPoint(void* element, Windows::Foundation::Point* result) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Point>(this->shim().GetNormalizedAnchorPoint(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetNormalizedAnchorPoint(void* element, Windows::Foundation::Point value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetNormalizedAnchorPoint(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlStatics2> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>
    {
        int32_t __stdcall get_BusinessLandmarksVisibleProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().BusinessLandmarksVisibleProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TransitFeaturesVisibleProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().TransitFeaturesVisibleProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PanInteractionModeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().PanInteractionModeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RotateInteractionModeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().RotateInteractionModeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TiltInteractionModeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().TiltInteractionModeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ZoomInteractionModeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ZoomInteractionModeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Is3DSupportedProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().Is3DSupportedProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsStreetsideSupportedProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsStreetsideSupportedProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SceneProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SceneProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlStatics4> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlStatics4>
    {
        int32_t __stdcall get_BusinessLandmarksEnabledProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().BusinessLandmarksEnabledProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TransitFeaturesEnabledProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().TransitFeaturesEnabledProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlStatics5> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlStatics5>
    {
        int32_t __stdcall get_MapProjectionProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().MapProjectionProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StyleSheetProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().StyleSheetProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ViewPaddingProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ViewPaddingProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlStatics6> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlStatics6>
    {
        int32_t __stdcall get_LayersProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().LayersProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlStatics7> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlStatics7>
    {
        int32_t __stdcall get_RegionProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().RegionProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlStatics8> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlStatics8>
    {
        int32_t __stdcall get_CanTiltDownProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CanTiltDownProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CanTiltUpProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CanTiltUpProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CanZoomInProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CanZoomInProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CanZoomOutProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CanZoomOutProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs>
    {
        int32_t __stdcall get_DisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Location(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geopoint>(this->shim().Location());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TransitProperties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>(this->shim().TransitProperties());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs>
    {
        int32_t __stdcall get_DisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Location(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geopoint>(this->shim().Location());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TransitProperties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>(this->shim().TransitProperties());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs>
    {
        int32_t __stdcall get_DisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Location(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geopoint>(this->shim().Location());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TransitProperties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>(this->shim().TransitProperties());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs>
    {
        int32_t __stdcall get_DisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Location(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geopoint>(this->shim().Location());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TransitProperties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>(this->shim().TransitProperties());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapCustomExperience> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapCustomExperience>
    {
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs>
    {
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory>
    {
        int32_t __stdcall CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapCustomExperience>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElement> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElement>
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
        int32_t __stdcall get_Visible(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Visible());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Visible(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Visible(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElement2> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElement2>
    {
        int32_t __stdcall get_MapTabIndex(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().MapTabIndex());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MapTabIndex(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapTabIndex(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElement3> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElement3>
    {
        int32_t __stdcall get_MapStyleSheetEntry(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().MapStyleSheetEntry());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MapStyleSheetEntry(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapStyleSheetEntry(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MapStyleSheetEntryState(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().MapStyleSheetEntryState());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MapStyleSheetEntryState(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapStyleSheetEntryState(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Tag(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().Tag());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Tag(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Tag(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElement3D> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElement3D>
    {
        int32_t __stdcall get_Location(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geopoint>(this->shim().Location());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Location(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Location(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Model(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapModel3D>(this->shim().Model());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Model(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Model(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapModel3D const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Heading(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Heading());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Heading(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Heading(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Pitch(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Pitch());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Pitch(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Pitch(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Roll(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Roll());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Roll(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Roll(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Scale(Windows::Foundation::Numerics::float3* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float3>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().Scale());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Scale(Windows::Foundation::Numerics::float3 value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Scale(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics>
    {
        int32_t __stdcall get_LocationProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().LocationProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HeadingProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().HeadingProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PitchProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().PitchProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RollProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().RollProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ScaleProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ScaleProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElement4> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElement4>
    {
        int32_t __stdcall get_IsEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs>
    {
        int32_t __stdcall get_Position(Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().Position());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Location(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geopoint>(this->shim().Location());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MapElements(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapElement>>(this->shim().MapElements());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElementFactory> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElementFactory>
    {
        int32_t __stdcall CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapElement>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs>
    {
        int32_t __stdcall get_Position(Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().Position());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Location(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geopoint>(this->shim().Location());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MapElement(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapElement>(this->shim().MapElement());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs>
    {
        int32_t __stdcall get_Position(Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().Position());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Location(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geopoint>(this->shim().Location());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MapElement(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapElement>(this->shim().MapElement());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElementStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElementStatics>
    {
        int32_t __stdcall get_ZIndexProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ZIndexProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VisibleProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().VisibleProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElementStatics2> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElementStatics2>
    {
        int32_t __stdcall get_MapTabIndexProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().MapTabIndexProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElementStatics3> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElementStatics3>
    {
        int32_t __stdcall get_MapStyleSheetEntryProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().MapStyleSheetEntryProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MapStyleSheetEntryStateProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().MapStyleSheetEntryStateProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TagProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().TagProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElementStatics4> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElementStatics4>
    {
        int32_t __stdcall get_IsEnabledProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsEnabledProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElementsLayer> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElementsLayer>
    {
        int32_t __stdcall get_MapElements(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapElement>>(this->shim().MapElements());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MapElements(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapElements(*reinterpret_cast<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapElement> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_MapElementClick(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().MapElementClick(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerClickEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_MapElementClick(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapElementClick(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_MapElementPointerEntered(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().MapElementPointerEntered(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerEnteredEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_MapElementPointerEntered(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapElementPointerEntered(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_MapElementPointerExited(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().MapElementPointerExited(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerExitedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_MapElementPointerExited(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapElementPointerExited(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_MapContextRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().MapContextRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerContextRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_MapContextRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapContextRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElementsLayerClickEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElementsLayerClickEventArgs>
    {
        int32_t __stdcall get_Position(Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().Position());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Location(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geopoint>(this->shim().Location());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MapElements(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapElement>>(this->shim().MapElements());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElementsLayerContextRequestedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElementsLayerContextRequestedEventArgs>
    {
        int32_t __stdcall get_Position(Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().Position());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Location(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geopoint>(this->shim().Location());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MapElements(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Maps::MapElement>>(this->shim().MapElements());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerEnteredEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerEnteredEventArgs>
    {
        int32_t __stdcall get_Position(Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().Position());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Location(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geopoint>(this->shim().Location());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MapElement(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapElement>(this->shim().MapElement());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerExitedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerExitedEventArgs>
    {
        int32_t __stdcall get_Position(Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().Position());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Location(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geopoint>(this->shim().Location());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MapElement(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapElement>(this->shim().MapElement());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElementsLayerStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElementsLayerStatics>
    {
        int32_t __stdcall get_MapElementsProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().MapElementsProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapIcon> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapIcon>
    {
        int32_t __stdcall get_Location(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geopoint>(this->shim().Location());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Location(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Location(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Title(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Title());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Title(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NormalizedAnchorPoint(Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().NormalizedAnchorPoint());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_NormalizedAnchorPoint(Windows::Foundation::Point value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NormalizedAnchorPoint(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Image(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IRandomAccessStreamReference>(this->shim().Image());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Image(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Image(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapIcon2> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapIcon2>
    {
        int32_t __stdcall get_CollisionBehaviorDesired(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior>(this->shim().CollisionBehaviorDesired());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CollisionBehaviorDesired(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CollisionBehaviorDesired(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapIconStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapIconStatics>
    {
        int32_t __stdcall get_LocationProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().LocationProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TitleProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().TitleProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NormalizedAnchorPointProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().NormalizedAnchorPointProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapIconStatics2> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapIconStatics2>
    {
        int32_t __stdcall get_CollisionBehaviorDesiredProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CollisionBehaviorDesiredProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs>
    {
        int32_t __stdcall get_Position(Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().Position());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Location(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geopoint>(this->shim().Location());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapItemsControl> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapItemsControl>
    {
        int32_t __stdcall get_ItemsSource(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().ItemsSource());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ItemsSource(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ItemsSource(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Items(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject>>(this->shim().Items());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ItemTemplate(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DataTemplate>(this->shim().ItemTemplate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ItemTemplate(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ItemTemplate(*reinterpret_cast<Windows::UI::Xaml::DataTemplate const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics>
    {
        int32_t __stdcall get_ItemsSourceProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ItemsSourceProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ItemsProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ItemsProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ItemTemplateProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ItemTemplateProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapLayer> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapLayer>
    {
        int32_t __stdcall get_MapTabIndex(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().MapTabIndex());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MapTabIndex(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapTabIndex(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Visible(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Visible());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Visible(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Visible(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
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
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapLayerFactory> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapLayerFactory>
    {
        int32_t __stdcall CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapLayer>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapLayerStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapLayerStatics>
    {
        int32_t __stdcall get_MapTabIndexProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().MapTabIndexProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VisibleProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().VisibleProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ZIndexProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ZIndexProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapModel3D> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapModel3D>
    {
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapModel3DFactory> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapModel3DFactory>
    {
        int32_t __stdcall CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapModel3D>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapModel3DStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapModel3DStatics>
    {
        int32_t __stdcall CreateFrom3MFAsync(void* source, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::MapModel3D>>(this->shim().CreateFrom3MFAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&source)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFrom3MFWithShadingOptionAsync(void* source, int32_t shadingOption, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::MapModel3D>>(this->shim().CreateFrom3MFAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&source), *reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapModel3DShadingOption const*>(&shadingOption)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapPolygon> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapPolygon>
    {
        int32_t __stdcall get_Path(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geopath>(this->shim().Path());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Path(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Path(*reinterpret_cast<Windows::Devices::Geolocation::Geopath const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StrokeColor(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().StrokeColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StrokeColor(struct struct_Windows_UI_Color value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StrokeThickness(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().StrokeThickness());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StrokeThickness(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeThickness(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StrokeDashed(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().StrokeDashed());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StrokeDashed(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeDashed(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FillColor(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().FillColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_FillColor(struct struct_Windows_UI_Color value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapPolygon2> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapPolygon2>
    {
        int32_t __stdcall get_Paths(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Devices::Geolocation::Geopath>>(this->shim().Paths());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics>
    {
        int32_t __stdcall get_PathProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().PathProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StrokeThicknessProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().StrokeThicknessProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StrokeDashedProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().StrokeDashedProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapPolyline> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapPolyline>
    {
        int32_t __stdcall get_Path(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geopath>(this->shim().Path());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Path(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Path(*reinterpret_cast<Windows::Devices::Geolocation::Geopath const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StrokeColor(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().StrokeColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StrokeColor(struct struct_Windows_UI_Color value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StrokeThickness(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().StrokeThickness());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StrokeThickness(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeThickness(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StrokeDashed(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().StrokeDashed());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StrokeDashed(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeDashed(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics>
    {
        int32_t __stdcall get_PathProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().PathProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StrokeDashedProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().StrokeDashedProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs>
    {
        int32_t __stdcall get_Position(Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().Position());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Location(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geopoint>(this->shim().Location());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapRouteView> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapRouteView>
    {
        int32_t __stdcall get_RouteColor(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().RouteColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RouteColor(struct struct_Windows_UI_Color value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RouteColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OutlineColor(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().OutlineColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_OutlineColor(struct struct_Windows_UI_Color value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OutlineColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Route(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Services::Maps::MapRoute>(this->shim().Route());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory>
    {
        int32_t __stdcall CreateInstanceWithMapRoute(void* route, void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapRouteView>(this->shim().CreateInstanceWithMapRoute(*reinterpret_cast<Windows::Services::Maps::MapRoute const*>(&route), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapScene> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapScene>
    {
        int32_t __stdcall get_TargetCamera(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapCamera>(this->shim().TargetCamera());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_TargetCameraChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().TargetCameraChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapScene, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_TargetCameraChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetCameraChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapSceneStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>
    {
        int32_t __stdcall CreateFromBoundingBox(void* bounds, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Controls::Maps::MapScene>(this->shim().CreateFromBoundingBox(*reinterpret_cast<Windows::Devices::Geolocation::GeoboundingBox const*>(&bounds)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromBoundingBoxWithHeadingAndPitch(void* bounds, double headingInDegrees, double pitchInDegrees, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Controls::Maps::MapScene>(this->shim().CreateFromBoundingBox(*reinterpret_cast<Windows::Devices::Geolocation::GeoboundingBox const*>(&bounds), headingInDegrees, pitchInDegrees));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromCamera(void* camera, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Controls::Maps::MapScene>(this->shim().CreateFromCamera(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapCamera const*>(&camera)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromLocation(void* location, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Controls::Maps::MapScene>(this->shim().CreateFromLocation(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&location)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromLocationWithHeadingAndPitch(void* location, double headingInDegrees, double pitchInDegrees, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Controls::Maps::MapScene>(this->shim().CreateFromLocation(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&location), headingInDegrees, pitchInDegrees));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromLocationAndRadius(void* location, double radiusInMeters, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Controls::Maps::MapScene>(this->shim().CreateFromLocationAndRadius(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&location), radiusInMeters));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromLocationAndRadiusWithHeadingAndPitch(void* location, double radiusInMeters, double headingInDegrees, double pitchInDegrees, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Controls::Maps::MapScene>(this->shim().CreateFromLocationAndRadius(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&location), radiusInMeters, headingInDegrees, pitchInDegrees));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromLocations(void* locations, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Controls::Maps::MapScene>(this->shim().CreateFromLocations(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> const*>(&locations)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromLocationsWithHeadingAndPitch(void* locations, double headingInDegrees, double pitchInDegrees, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Controls::Maps::MapScene>(this->shim().CreateFromLocations(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> const*>(&locations), headingInDegrees, pitchInDegrees));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapStyleSheet> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapStyleSheet>
    {
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>
    {
        int32_t __stdcall get_Area(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Area());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Airport(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Airport());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Cemetery(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Cemetery());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Continent(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Continent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Education(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Education());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IndigenousPeoplesReserve(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().IndigenousPeoplesReserve());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Island(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Island());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Medical(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Medical());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Military(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Military());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Nautical(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Nautical());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Neighborhood(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Neighborhood());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Runway(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Runway());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Sand(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sand());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ShoppingCenter(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ShoppingCenter());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Stadium(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Stadium());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Vegetation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Vegetation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Forest(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Forest());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GolfCourse(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GolfCourse());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Park(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Park());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PlayingField(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PlayingField());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Reserve(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Reserve());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Point(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Point());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NaturalPoint(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NaturalPoint());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Peak(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Peak());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VolcanicPeak(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VolcanicPeak());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WaterPoint(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WaterPoint());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PointOfInterest(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PointOfInterest());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Business(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Business());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FoodPoint(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FoodPoint());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PopulatedPlace(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PopulatedPlace());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Capital(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Capital());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AdminDistrictCapital(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AdminDistrictCapital());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CountryRegionCapital(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CountryRegionCapital());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RoadShield(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RoadShield());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RoadExit(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RoadExit());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Transit(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Transit());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Political(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Political());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CountryRegion(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CountryRegion());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AdminDistrict(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AdminDistrict());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_District(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().District());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Structure(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Structure());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Building(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Building());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EducationBuilding(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EducationBuilding());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MedicalBuilding(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().MedicalBuilding());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TransitBuilding(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TransitBuilding());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Transportation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Transportation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Road(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Road());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ControlledAccessHighway(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ControlledAccessHighway());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HighSpeedRamp(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HighSpeedRamp());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Highway(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Highway());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MajorRoad(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().MajorRoad());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ArterialRoad(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ArterialRoad());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Street(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Street());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Ramp(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Ramp());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UnpavedStreet(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UnpavedStreet());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TollRoad(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TollRoad());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Railway(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Railway());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Trail(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Trail());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WaterRoute(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WaterRoute());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Water(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Water());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_River(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().River());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RouteLine(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RouteLine());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WalkingRoute(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WalkingRoute());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DrivingRoute(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DrivingRoute());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntryStatesStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntryStatesStatics>
    {
        int32_t __stdcall get_Disabled(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Disabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Hover(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Hover());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Selected(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Selected());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>
    {
        int32_t __stdcall Aerial(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Controls::Maps::MapStyleSheet>(this->shim().Aerial());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AerialWithOverlay(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Controls::Maps::MapStyleSheet>(this->shim().AerialWithOverlay());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RoadLight(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Controls::Maps::MapStyleSheet>(this->shim().RoadLight());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RoadDark(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Controls::Maps::MapStyleSheet>(this->shim().RoadDark());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RoadHighContrastLight(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Controls::Maps::MapStyleSheet>(this->shim().RoadHighContrastLight());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RoadHighContrastDark(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Controls::Maps::MapStyleSheet>(this->shim().RoadHighContrastDark());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Combine(void* styleSheets, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Controls::Maps::MapStyleSheet>(this->shim().Combine(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Controls::Maps::MapStyleSheet> const*>(&styleSheets)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ParseFromJson(void* styleAsJson, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Controls::Maps::MapStyleSheet>(this->shim().ParseFromJson(*reinterpret_cast<hstring const*>(&styleAsJson)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParseFromJson(void* styleAsJson, void** styleSheet, bool* returnValue) noexcept final try
        {
            clear_abi(styleSheet);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().TryParseFromJson(*reinterpret_cast<hstring const*>(&styleAsJson), *reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapStyleSheet*>(styleSheet)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs>
    {
        int32_t __stdcall get_Camera(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapCamera>(this->shim().Camera());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs2> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs2>
    {
        int32_t __stdcall get_ChangeReason(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason>(this->shim().ChangeReason());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest>
    {
        int32_t __stdcall get_PixelData(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IRandomAccessStreamReference>(this->shim().PixelData());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PixelData(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PixelData(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestDeferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral>
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
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs>
    {
        int32_t __stdcall get_X(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().X());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Y(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Y());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ZoomLevel(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ZoomLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Request(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequest>(this->shim().Request());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs2> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs2>
    {
        int32_t __stdcall get_FrameIndex(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().FrameIndex());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileDataSource> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileDataSource>
    {
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory>
    {
        int32_t __stdcall CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapTileDataSource>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileSource> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileSource>
    {
        int32_t __stdcall get_DataSource(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapTileDataSource>(this->shim().DataSource());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DataSource(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DataSource(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapTileDataSource const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Layer(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapTileLayer>(this->shim().Layer());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Layer(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Layer(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapTileLayer const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ZoomLevelRange(struct struct_Windows_UI_Xaml_Controls_Maps_MapZoomLevelRange* value) noexcept final try
        {
            zero_abi<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange>(this->shim().ZoomLevelRange());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ZoomLevelRange(struct struct_Windows_UI_Xaml_Controls_Maps_MapZoomLevelRange value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ZoomLevelRange(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Bounds(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::GeoboundingBox>(this->shim().Bounds());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Bounds(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Bounds(*reinterpret_cast<Windows::Devices::Geolocation::GeoboundingBox const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AllowOverstretch(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowOverstretch());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AllowOverstretch(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowOverstretch(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsFadingEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsFadingEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsFadingEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsFadingEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsTransparencyEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsTransparencyEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsTransparencyEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsTransparencyEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsRetryEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsRetryEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsRetryEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsRetryEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
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
        int32_t __stdcall get_TilePixelSize(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().TilePixelSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TilePixelSize(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TilePixelSize(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Visible(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Visible());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Visible(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Visible(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileSource2> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileSource2>
    {
        int32_t __stdcall get_AnimationState(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapTileAnimationState>(this->shim().AnimationState());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AutoPlay(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AutoPlay());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AutoPlay(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoPlay(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FrameCount(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().FrameCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_FrameCount(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FrameCount(value);
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
        int32_t __stdcall put_FrameDuration(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FrameDuration(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
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
        int32_t __stdcall Play() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Play();
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
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>
    {
        int32_t __stdcall CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapTileSource>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateInstanceWithDataSource(void* dataSource, void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapTileSource>(this->shim().CreateInstanceWithDataSource(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapTileDataSource const*>(&dataSource), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateInstanceWithDataSourceAndZoomRange(void* dataSource, struct struct_Windows_UI_Xaml_Controls_Maps_MapZoomLevelRange zoomLevelRange, void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapTileSource>(this->shim().CreateInstanceWithDataSourceAndZoomRange(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapTileDataSource const*>(&dataSource), *reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const*>(&zoomLevelRange), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateInstanceWithDataSourceZoomRangeAndBounds(void* dataSource, struct struct_Windows_UI_Xaml_Controls_Maps_MapZoomLevelRange zoomLevelRange, void* bounds, void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapTileSource>(this->shim().CreateInstanceWithDataSourceZoomRangeAndBounds(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapTileDataSource const*>(&dataSource), *reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const*>(&zoomLevelRange), *reinterpret_cast<Windows::Devices::Geolocation::GeoboundingBox const*>(&bounds), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateInstanceWithDataSourceZoomRangeBoundsAndTileSize(void* dataSource, struct struct_Windows_UI_Xaml_Controls_Maps_MapZoomLevelRange zoomLevelRange, void* bounds, int32_t tileSizeInPixels, void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapTileSource>(this->shim().CreateInstanceWithDataSourceZoomRangeBoundsAndTileSize(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapTileDataSource const*>(&dataSource), *reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const*>(&zoomLevelRange), *reinterpret_cast<Windows::Devices::Geolocation::GeoboundingBox const*>(&bounds), tileSizeInPixels, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>
    {
        int32_t __stdcall get_DataSourceProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().DataSourceProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LayerProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().LayerProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ZoomLevelRangeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ZoomLevelRangeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BoundsProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().BoundsProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AllowOverstretchProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().AllowOverstretchProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsFadingEnabledProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsFadingEnabledProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsTransparencyEnabledProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsTransparencyEnabledProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsRetryEnabledProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsRetryEnabledProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ZIndexProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ZIndexProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TilePixelSizeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().TilePixelSizeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VisibleProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().VisibleProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics2> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics2>
    {
        int32_t __stdcall get_AnimationStateProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().AnimationStateProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AutoPlayProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().AutoPlayProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FrameCountProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().FrameCountProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FrameDurationProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().FrameDurationProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest>
    {
        int32_t __stdcall get_Uri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Uri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Uri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Uri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Controls::Maps::MapTileUriRequestDeferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral>
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
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs>
    {
        int32_t __stdcall get_X(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().X());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Y(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Y());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ZoomLevel(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ZoomLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Request(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::MapTileUriRequest>(this->shim().Request());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs2> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs2>
    {
        int32_t __stdcall get_FrameIndex(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().FrameIndex());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IStreetsideExperience> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IStreetsideExperience>
    {
        int32_t __stdcall get_AddressTextVisible(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AddressTextVisible());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AddressTextVisible(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddressTextVisible(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CursorVisible(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CursorVisible());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CursorVisible(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CursorVisible(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OverviewMapVisible(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().OverviewMapVisible());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_OverviewMapVisible(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OverviewMapVisible(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StreetLabelsVisible(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().StreetLabelsVisible());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StreetLabelsVisible(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StreetLabelsVisible(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExitButtonVisible(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ExitButtonVisible());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ExitButtonVisible(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExitButtonVisible(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ZoomButtonsVisible(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ZoomButtonsVisible());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ZoomButtonsVisible(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ZoomButtonsVisible(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory>
    {
        int32_t __stdcall CreateInstanceWithPanorama(void* panorama, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::StreetsideExperience>(this->shim().CreateInstanceWithPanorama(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama const*>(&panorama)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateInstanceWithPanoramaHeadingPitchAndFieldOfView(void* panorama, double headingInDegrees, double pitchInDegrees, double fieldOfViewInDegrees, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Maps::StreetsideExperience>(this->shim().CreateInstanceWithPanoramaHeadingPitchAndFieldOfView(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama const*>(&panorama), headingInDegrees, pitchInDegrees, fieldOfViewInDegrees));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama>
    {
        int32_t __stdcall get_Location(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geopoint>(this->shim().Location());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics>
    {
        int32_t __stdcall FindNearbyWithLocationAsync(void* location, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama>>(this->shim().FindNearbyAsync(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&location)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindNearbyWithLocationAndRadiusAsync(void* location, double radiusInMeters, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama>>(this->shim().FindNearbyAsync(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&location), radiusInMeters));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::UI::Xaml::Controls::Maps
{
    inline CustomMapTileDataSource::CustomMapTileDataSource()
    {
        Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<CustomMapTileDataSource, Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory>([&](auto&& f) { return f.CreateInstance(baseInterface, innerInterface); });
    }
    inline HttpMapTileDataSource::HttpMapTileDataSource()
    {
        Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory>([&](auto&& f) { return f.CreateInstance(baseInterface, innerInterface); });
    }
    inline HttpMapTileDataSource::HttpMapTileDataSource(param::hstring const& uriFormatString)
    {
        Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory>([&](auto&& f) { return f.CreateInstanceWithUriFormatString(uriFormatString, baseInterface, innerInterface); });
    }
    inline LocalMapTileDataSource::LocalMapTileDataSource()
    {
        Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory>([&](auto&& f) { return f.CreateInstance(baseInterface, innerInterface); });
    }
    inline LocalMapTileDataSource::LocalMapTileDataSource(param::hstring const& uriFormatString)
    {
        Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory>([&](auto&& f) { return f.CreateInstanceWithUriFormatString(uriFormatString, baseInterface, innerInterface); });
    }
    inline MapActualCameraChangedEventArgs::MapActualCameraChangedEventArgs() :
        MapActualCameraChangedEventArgs(impl::call_factory<MapActualCameraChangedEventArgs>([](auto&& f) { return f.template ActivateInstance<MapActualCameraChangedEventArgs>(); }))
    {
    }
    inline MapActualCameraChangingEventArgs::MapActualCameraChangingEventArgs() :
        MapActualCameraChangingEventArgs(impl::call_factory<MapActualCameraChangingEventArgs>([](auto&& f) { return f.template ActivateInstance<MapActualCameraChangingEventArgs>(); }))
    {
    }
    inline MapBillboard::MapBillboard(Windows::UI::Xaml::Controls::Maps::MapCamera const& camera) :
        MapBillboard(impl::call_factory<MapBillboard, Windows::UI::Xaml::Controls::Maps::IMapBillboardFactory>([&](auto&& f) { return f.CreateInstanceFromCamera(camera); }))
    {
    }
    inline auto MapBillboard::LocationProperty()
    {
        return impl::call_factory<MapBillboard, Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics>([&](auto&& f) { return f.LocationProperty(); });
    }
    inline auto MapBillboard::NormalizedAnchorPointProperty()
    {
        return impl::call_factory<MapBillboard, Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics>([&](auto&& f) { return f.NormalizedAnchorPointProperty(); });
    }
    inline auto MapBillboard::CollisionBehaviorDesiredProperty()
    {
        return impl::call_factory<MapBillboard, Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics>([&](auto&& f) { return f.CollisionBehaviorDesiredProperty(); });
    }
    inline MapCamera::MapCamera(Windows::Devices::Geolocation::Geopoint const& location) :
        MapCamera(impl::call_factory<MapCamera, Windows::UI::Xaml::Controls::Maps::IMapCameraFactory>([&](auto&& f) { return f.CreateInstanceWithLocation(location); }))
    {
    }
    inline MapCamera::MapCamera(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees) :
        MapCamera(impl::call_factory<MapCamera, Windows::UI::Xaml::Controls::Maps::IMapCameraFactory>([&](auto&& f) { return f.CreateInstanceWithLocationAndHeading(location, headingInDegrees); }))
    {
    }
    inline MapCamera::MapCamera(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees, double pitchInDegrees) :
        MapCamera(impl::call_factory<MapCamera, Windows::UI::Xaml::Controls::Maps::IMapCameraFactory>([&](auto&& f) { return f.CreateInstanceWithLocationHeadingAndPitch(location, headingInDegrees, pitchInDegrees); }))
    {
    }
    inline MapCamera::MapCamera(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees, double pitchInDegrees, double rollInDegrees, double fieldOfViewInDegrees) :
        MapCamera(impl::call_factory<MapCamera, Windows::UI::Xaml::Controls::Maps::IMapCameraFactory>([&](auto&& f) { return f.CreateInstanceWithLocationHeadingPitchRollAndFieldOfView(location, headingInDegrees, pitchInDegrees, rollInDegrees, fieldOfViewInDegrees); }))
    {
    }
    inline MapContextRequestedEventArgs::MapContextRequestedEventArgs() :
        MapContextRequestedEventArgs(impl::call_factory<MapContextRequestedEventArgs>([](auto&& f) { return f.template ActivateInstance<MapContextRequestedEventArgs>(); }))
    {
    }
    inline MapControl::MapControl() :
        MapControl(impl::call_factory<MapControl>([](auto&& f) { return f.template ActivateInstance<MapControl>(); }))
    {
    }
    inline auto MapControl::CenterProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>([&](auto&& f) { return f.CenterProperty(); });
    }
    inline auto MapControl::ChildrenProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>([&](auto&& f) { return f.ChildrenProperty(); });
    }
    inline auto MapControl::ColorSchemeProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>([&](auto&& f) { return f.ColorSchemeProperty(); });
    }
    inline auto MapControl::DesiredPitchProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>([&](auto&& f) { return f.DesiredPitchProperty(); });
    }
    inline auto MapControl::HeadingProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>([&](auto&& f) { return f.HeadingProperty(); });
    }
    inline auto MapControl::LandmarksVisibleProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>([&](auto&& f) { return f.LandmarksVisibleProperty(); });
    }
    inline auto MapControl::LoadingStatusProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>([&](auto&& f) { return f.LoadingStatusProperty(); });
    }
    inline auto MapControl::MapServiceTokenProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>([&](auto&& f) { return f.MapServiceTokenProperty(); });
    }
    inline auto MapControl::PedestrianFeaturesVisibleProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>([&](auto&& f) { return f.PedestrianFeaturesVisibleProperty(); });
    }
    inline auto MapControl::PitchProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>([&](auto&& f) { return f.PitchProperty(); });
    }
    inline auto MapControl::StyleProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>([&](auto&& f) { return f.StyleProperty(); });
    }
    inline auto MapControl::TrafficFlowVisibleProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>([&](auto&& f) { return f.TrafficFlowVisibleProperty(); });
    }
    inline auto MapControl::TransformOriginProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>([&](auto&& f) { return f.TransformOriginProperty(); });
    }
    inline auto MapControl::WatermarkModeProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>([&](auto&& f) { return f.WatermarkModeProperty(); });
    }
    inline auto MapControl::ZoomLevelProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>([&](auto&& f) { return f.ZoomLevelProperty(); });
    }
    inline auto MapControl::MapElementsProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>([&](auto&& f) { return f.MapElementsProperty(); });
    }
    inline auto MapControl::RoutesProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>([&](auto&& f) { return f.RoutesProperty(); });
    }
    inline auto MapControl::TileSourcesProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>([&](auto&& f) { return f.TileSourcesProperty(); });
    }
    inline auto MapControl::LocationProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>([&](auto&& f) { return f.LocationProperty(); });
    }
    inline auto MapControl::GetLocation(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>([&](auto&& f) { return f.GetLocation(element); });
    }
    inline auto MapControl::SetLocation(Windows::UI::Xaml::DependencyObject const& element, Windows::Devices::Geolocation::Geopoint const& value)
    {
        impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>([&](auto&& f) { return f.SetLocation(element, value); });
    }
    inline auto MapControl::NormalizedAnchorPointProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>([&](auto&& f) { return f.NormalizedAnchorPointProperty(); });
    }
    inline auto MapControl::GetNormalizedAnchorPoint(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>([&](auto&& f) { return f.GetNormalizedAnchorPoint(element); });
    }
    inline auto MapControl::SetNormalizedAnchorPoint(Windows::UI::Xaml::DependencyObject const& element, Windows::Foundation::Point const& value)
    {
        impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>([&](auto&& f) { return f.SetNormalizedAnchorPoint(element, value); });
    }
    inline auto MapControl::BusinessLandmarksVisibleProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>([&](auto&& f) { return f.BusinessLandmarksVisibleProperty(); });
    }
    inline auto MapControl::TransitFeaturesVisibleProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>([&](auto&& f) { return f.TransitFeaturesVisibleProperty(); });
    }
    inline auto MapControl::PanInteractionModeProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>([&](auto&& f) { return f.PanInteractionModeProperty(); });
    }
    inline auto MapControl::RotateInteractionModeProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>([&](auto&& f) { return f.RotateInteractionModeProperty(); });
    }
    inline auto MapControl::TiltInteractionModeProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>([&](auto&& f) { return f.TiltInteractionModeProperty(); });
    }
    inline auto MapControl::ZoomInteractionModeProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>([&](auto&& f) { return f.ZoomInteractionModeProperty(); });
    }
    inline auto MapControl::Is3DSupportedProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>([&](auto&& f) { return f.Is3DSupportedProperty(); });
    }
    inline auto MapControl::IsStreetsideSupportedProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>([&](auto&& f) { return f.IsStreetsideSupportedProperty(); });
    }
    inline auto MapControl::SceneProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>([&](auto&& f) { return f.SceneProperty(); });
    }
    inline auto MapControl::BusinessLandmarksEnabledProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics4>([&](auto&& f) { return f.BusinessLandmarksEnabledProperty(); });
    }
    inline auto MapControl::TransitFeaturesEnabledProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics4>([&](auto&& f) { return f.TransitFeaturesEnabledProperty(); });
    }
    inline auto MapControl::MapProjectionProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics5>([&](auto&& f) { return f.MapProjectionProperty(); });
    }
    inline auto MapControl::StyleSheetProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics5>([&](auto&& f) { return f.StyleSheetProperty(); });
    }
    inline auto MapControl::ViewPaddingProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics5>([&](auto&& f) { return f.ViewPaddingProperty(); });
    }
    inline auto MapControl::LayersProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics6>([&](auto&& f) { return f.LayersProperty(); });
    }
    inline auto MapControl::RegionProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics7>([&](auto&& f) { return f.RegionProperty(); });
    }
    inline auto MapControl::CanTiltDownProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics8>([&](auto&& f) { return f.CanTiltDownProperty(); });
    }
    inline auto MapControl::CanTiltUpProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics8>([&](auto&& f) { return f.CanTiltUpProperty(); });
    }
    inline auto MapControl::CanZoomInProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics8>([&](auto&& f) { return f.CanZoomInProperty(); });
    }
    inline auto MapControl::CanZoomOutProperty()
    {
        return impl::call_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics8>([&](auto&& f) { return f.CanZoomOutProperty(); });
    }
    inline MapControlBusinessLandmarkClickEventArgs::MapControlBusinessLandmarkClickEventArgs() :
        MapControlBusinessLandmarkClickEventArgs(impl::call_factory<MapControlBusinessLandmarkClickEventArgs>([](auto&& f) { return f.template ActivateInstance<MapControlBusinessLandmarkClickEventArgs>(); }))
    {
    }
    inline MapControlBusinessLandmarkPointerEnteredEventArgs::MapControlBusinessLandmarkPointerEnteredEventArgs() :
        MapControlBusinessLandmarkPointerEnteredEventArgs(impl::call_factory<MapControlBusinessLandmarkPointerEnteredEventArgs>([](auto&& f) { return f.template ActivateInstance<MapControlBusinessLandmarkPointerEnteredEventArgs>(); }))
    {
    }
    inline MapControlBusinessLandmarkPointerExitedEventArgs::MapControlBusinessLandmarkPointerExitedEventArgs() :
        MapControlBusinessLandmarkPointerExitedEventArgs(impl::call_factory<MapControlBusinessLandmarkPointerExitedEventArgs>([](auto&& f) { return f.template ActivateInstance<MapControlBusinessLandmarkPointerExitedEventArgs>(); }))
    {
    }
    inline MapControlBusinessLandmarkRightTappedEventArgs::MapControlBusinessLandmarkRightTappedEventArgs() :
        MapControlBusinessLandmarkRightTappedEventArgs(impl::call_factory<MapControlBusinessLandmarkRightTappedEventArgs>([](auto&& f) { return f.template ActivateInstance<MapControlBusinessLandmarkRightTappedEventArgs>(); }))
    {
    }
    inline MapControlDataHelper::MapControlDataHelper(Windows::UI::Xaml::Controls::Maps::MapControl const& map) :
        MapControlDataHelper(impl::call_factory<MapControlDataHelper, Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperFactory>([&](auto&& f) { return f.CreateInstance(map); }))
    {
    }
    inline auto MapControlDataHelper::CreateMapControl(bool rasterRenderMode)
    {
        return impl::call_factory<MapControlDataHelper, Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperStatics>([&](auto&& f) { return f.CreateMapControl(rasterRenderMode); });
    }
    inline MapControlTransitFeatureClickEventArgs::MapControlTransitFeatureClickEventArgs() :
        MapControlTransitFeatureClickEventArgs(impl::call_factory<MapControlTransitFeatureClickEventArgs>([](auto&& f) { return f.template ActivateInstance<MapControlTransitFeatureClickEventArgs>(); }))
    {
    }
    inline MapControlTransitFeaturePointerEnteredEventArgs::MapControlTransitFeaturePointerEnteredEventArgs() :
        MapControlTransitFeaturePointerEnteredEventArgs(impl::call_factory<MapControlTransitFeaturePointerEnteredEventArgs>([](auto&& f) { return f.template ActivateInstance<MapControlTransitFeaturePointerEnteredEventArgs>(); }))
    {
    }
    inline MapControlTransitFeaturePointerExitedEventArgs::MapControlTransitFeaturePointerExitedEventArgs() :
        MapControlTransitFeaturePointerExitedEventArgs(impl::call_factory<MapControlTransitFeaturePointerExitedEventArgs>([](auto&& f) { return f.template ActivateInstance<MapControlTransitFeaturePointerExitedEventArgs>(); }))
    {
    }
    inline MapControlTransitFeatureRightTappedEventArgs::MapControlTransitFeatureRightTappedEventArgs() :
        MapControlTransitFeatureRightTappedEventArgs(impl::call_factory<MapControlTransitFeatureRightTappedEventArgs>([](auto&& f) { return f.template ActivateInstance<MapControlTransitFeatureRightTappedEventArgs>(); }))
    {
    }
    inline MapCustomExperience::MapCustomExperience()
    {
        Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<MapCustomExperience, Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory>([&](auto&& f) { return f.CreateInstance(baseInterface, innerInterface); });
    }
    inline MapCustomExperienceChangedEventArgs::MapCustomExperienceChangedEventArgs() :
        MapCustomExperienceChangedEventArgs(impl::call_factory<MapCustomExperienceChangedEventArgs>([](auto&& f) { return f.template ActivateInstance<MapCustomExperienceChangedEventArgs>(); }))
    {
    }
    inline MapElement::MapElement()
    {
        Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<MapElement, Windows::UI::Xaml::Controls::Maps::IMapElementFactory>([&](auto&& f) { return f.CreateInstance(baseInterface, innerInterface); });
    }
    inline auto MapElement::ZIndexProperty()
    {
        return impl::call_factory<MapElement, Windows::UI::Xaml::Controls::Maps::IMapElementStatics>([&](auto&& f) { return f.ZIndexProperty(); });
    }
    inline auto MapElement::VisibleProperty()
    {
        return impl::call_factory<MapElement, Windows::UI::Xaml::Controls::Maps::IMapElementStatics>([&](auto&& f) { return f.VisibleProperty(); });
    }
    inline auto MapElement::MapTabIndexProperty()
    {
        return impl::call_factory<MapElement, Windows::UI::Xaml::Controls::Maps::IMapElementStatics2>([&](auto&& f) { return f.MapTabIndexProperty(); });
    }
    inline auto MapElement::MapStyleSheetEntryProperty()
    {
        return impl::call_factory<MapElement, Windows::UI::Xaml::Controls::Maps::IMapElementStatics3>([&](auto&& f) { return f.MapStyleSheetEntryProperty(); });
    }
    inline auto MapElement::MapStyleSheetEntryStateProperty()
    {
        return impl::call_factory<MapElement, Windows::UI::Xaml::Controls::Maps::IMapElementStatics3>([&](auto&& f) { return f.MapStyleSheetEntryStateProperty(); });
    }
    inline auto MapElement::TagProperty()
    {
        return impl::call_factory<MapElement, Windows::UI::Xaml::Controls::Maps::IMapElementStatics3>([&](auto&& f) { return f.TagProperty(); });
    }
    inline auto MapElement::IsEnabledProperty()
    {
        return impl::call_factory<MapElement, Windows::UI::Xaml::Controls::Maps::IMapElementStatics4>([&](auto&& f) { return f.IsEnabledProperty(); });
    }
    inline MapElement3D::MapElement3D() :
        MapElement3D(impl::call_factory<MapElement3D>([](auto&& f) { return f.template ActivateInstance<MapElement3D>(); }))
    {
    }
    inline auto MapElement3D::LocationProperty()
    {
        return impl::call_factory<MapElement3D, Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics>([&](auto&& f) { return f.LocationProperty(); });
    }
    inline auto MapElement3D::HeadingProperty()
    {
        return impl::call_factory<MapElement3D, Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics>([&](auto&& f) { return f.HeadingProperty(); });
    }
    inline auto MapElement3D::PitchProperty()
    {
        return impl::call_factory<MapElement3D, Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics>([&](auto&& f) { return f.PitchProperty(); });
    }
    inline auto MapElement3D::RollProperty()
    {
        return impl::call_factory<MapElement3D, Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics>([&](auto&& f) { return f.RollProperty(); });
    }
    inline auto MapElement3D::ScaleProperty()
    {
        return impl::call_factory<MapElement3D, Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics>([&](auto&& f) { return f.ScaleProperty(); });
    }
    inline MapElementClickEventArgs::MapElementClickEventArgs() :
        MapElementClickEventArgs(impl::call_factory<MapElementClickEventArgs>([](auto&& f) { return f.template ActivateInstance<MapElementClickEventArgs>(); }))
    {
    }
    inline MapElementPointerEnteredEventArgs::MapElementPointerEnteredEventArgs() :
        MapElementPointerEnteredEventArgs(impl::call_factory<MapElementPointerEnteredEventArgs>([](auto&& f) { return f.template ActivateInstance<MapElementPointerEnteredEventArgs>(); }))
    {
    }
    inline MapElementPointerExitedEventArgs::MapElementPointerExitedEventArgs() :
        MapElementPointerExitedEventArgs(impl::call_factory<MapElementPointerExitedEventArgs>([](auto&& f) { return f.template ActivateInstance<MapElementPointerExitedEventArgs>(); }))
    {
    }
    inline MapElementsLayer::MapElementsLayer() :
        MapElementsLayer(impl::call_factory<MapElementsLayer>([](auto&& f) { return f.template ActivateInstance<MapElementsLayer>(); }))
    {
    }
    inline auto MapElementsLayer::MapElementsProperty()
    {
        return impl::call_factory<MapElementsLayer, Windows::UI::Xaml::Controls::Maps::IMapElementsLayerStatics>([&](auto&& f) { return f.MapElementsProperty(); });
    }
    inline MapElementsLayerClickEventArgs::MapElementsLayerClickEventArgs() :
        MapElementsLayerClickEventArgs(impl::call_factory<MapElementsLayerClickEventArgs>([](auto&& f) { return f.template ActivateInstance<MapElementsLayerClickEventArgs>(); }))
    {
    }
    inline MapElementsLayerContextRequestedEventArgs::MapElementsLayerContextRequestedEventArgs() :
        MapElementsLayerContextRequestedEventArgs(impl::call_factory<MapElementsLayerContextRequestedEventArgs>([](auto&& f) { return f.template ActivateInstance<MapElementsLayerContextRequestedEventArgs>(); }))
    {
    }
    inline MapElementsLayerPointerEnteredEventArgs::MapElementsLayerPointerEnteredEventArgs() :
        MapElementsLayerPointerEnteredEventArgs(impl::call_factory<MapElementsLayerPointerEnteredEventArgs>([](auto&& f) { return f.template ActivateInstance<MapElementsLayerPointerEnteredEventArgs>(); }))
    {
    }
    inline MapElementsLayerPointerExitedEventArgs::MapElementsLayerPointerExitedEventArgs() :
        MapElementsLayerPointerExitedEventArgs(impl::call_factory<MapElementsLayerPointerExitedEventArgs>([](auto&& f) { return f.template ActivateInstance<MapElementsLayerPointerExitedEventArgs>(); }))
    {
    }
    inline MapIcon::MapIcon() :
        MapIcon(impl::call_factory<MapIcon>([](auto&& f) { return f.template ActivateInstance<MapIcon>(); }))
    {
    }
    inline auto MapIcon::LocationProperty()
    {
        return impl::call_factory<MapIcon, Windows::UI::Xaml::Controls::Maps::IMapIconStatics>([&](auto&& f) { return f.LocationProperty(); });
    }
    inline auto MapIcon::TitleProperty()
    {
        return impl::call_factory<MapIcon, Windows::UI::Xaml::Controls::Maps::IMapIconStatics>([&](auto&& f) { return f.TitleProperty(); });
    }
    inline auto MapIcon::NormalizedAnchorPointProperty()
    {
        return impl::call_factory<MapIcon, Windows::UI::Xaml::Controls::Maps::IMapIconStatics>([&](auto&& f) { return f.NormalizedAnchorPointProperty(); });
    }
    inline auto MapIcon::CollisionBehaviorDesiredProperty()
    {
        return impl::call_factory<MapIcon, Windows::UI::Xaml::Controls::Maps::IMapIconStatics2>([&](auto&& f) { return f.CollisionBehaviorDesiredProperty(); });
    }
    inline MapInputEventArgs::MapInputEventArgs() :
        MapInputEventArgs(impl::call_factory<MapInputEventArgs>([](auto&& f) { return f.template ActivateInstance<MapInputEventArgs>(); }))
    {
    }
    inline MapItemsControl::MapItemsControl() :
        MapItemsControl(impl::call_factory<MapItemsControl>([](auto&& f) { return f.template ActivateInstance<MapItemsControl>(); }))
    {
    }
    inline auto MapItemsControl::ItemsSourceProperty()
    {
        return impl::call_factory<MapItemsControl, Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics>([&](auto&& f) { return f.ItemsSourceProperty(); });
    }
    inline auto MapItemsControl::ItemsProperty()
    {
        return impl::call_factory<MapItemsControl, Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics>([&](auto&& f) { return f.ItemsProperty(); });
    }
    inline auto MapItemsControl::ItemTemplateProperty()
    {
        return impl::call_factory<MapItemsControl, Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics>([&](auto&& f) { return f.ItemTemplateProperty(); });
    }
    inline MapLayer::MapLayer()
    {
        Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<MapLayer, Windows::UI::Xaml::Controls::Maps::IMapLayerFactory>([&](auto&& f) { return f.CreateInstance(baseInterface, innerInterface); });
    }
    inline auto MapLayer::MapTabIndexProperty()
    {
        return impl::call_factory<MapLayer, Windows::UI::Xaml::Controls::Maps::IMapLayerStatics>([&](auto&& f) { return f.MapTabIndexProperty(); });
    }
    inline auto MapLayer::VisibleProperty()
    {
        return impl::call_factory<MapLayer, Windows::UI::Xaml::Controls::Maps::IMapLayerStatics>([&](auto&& f) { return f.VisibleProperty(); });
    }
    inline auto MapLayer::ZIndexProperty()
    {
        return impl::call_factory<MapLayer, Windows::UI::Xaml::Controls::Maps::IMapLayerStatics>([&](auto&& f) { return f.ZIndexProperty(); });
    }
    inline MapModel3D::MapModel3D()
    {
        Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<MapModel3D, Windows::UI::Xaml::Controls::Maps::IMapModel3DFactory>([&](auto&& f) { return f.CreateInstance(baseInterface, innerInterface); });
    }
    inline auto MapModel3D::CreateFrom3MFAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& source)
    {
        return impl::call_factory<MapModel3D, Windows::UI::Xaml::Controls::Maps::IMapModel3DStatics>([&](auto&& f) { return f.CreateFrom3MFAsync(source); });
    }
    inline auto MapModel3D::CreateFrom3MFAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& source, Windows::UI::Xaml::Controls::Maps::MapModel3DShadingOption const& shadingOption)
    {
        return impl::call_factory<MapModel3D, Windows::UI::Xaml::Controls::Maps::IMapModel3DStatics>([&](auto&& f) { return f.CreateFrom3MFAsync(source, shadingOption); });
    }
    inline MapPolygon::MapPolygon() :
        MapPolygon(impl::call_factory<MapPolygon>([](auto&& f) { return f.template ActivateInstance<MapPolygon>(); }))
    {
    }
    inline auto MapPolygon::PathProperty()
    {
        return impl::call_factory<MapPolygon, Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics>([&](auto&& f) { return f.PathProperty(); });
    }
    inline auto MapPolygon::StrokeThicknessProperty()
    {
        return impl::call_factory<MapPolygon, Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics>([&](auto&& f) { return f.StrokeThicknessProperty(); });
    }
    inline auto MapPolygon::StrokeDashedProperty()
    {
        return impl::call_factory<MapPolygon, Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics>([&](auto&& f) { return f.StrokeDashedProperty(); });
    }
    inline MapPolyline::MapPolyline() :
        MapPolyline(impl::call_factory<MapPolyline>([](auto&& f) { return f.template ActivateInstance<MapPolyline>(); }))
    {
    }
    inline auto MapPolyline::PathProperty()
    {
        return impl::call_factory<MapPolyline, Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics>([&](auto&& f) { return f.PathProperty(); });
    }
    inline auto MapPolyline::StrokeDashedProperty()
    {
        return impl::call_factory<MapPolyline, Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics>([&](auto&& f) { return f.StrokeDashedProperty(); });
    }
    inline MapRightTappedEventArgs::MapRightTappedEventArgs() :
        MapRightTappedEventArgs(impl::call_factory<MapRightTappedEventArgs>([](auto&& f) { return f.template ActivateInstance<MapRightTappedEventArgs>(); }))
    {
    }
    inline MapRouteView::MapRouteView(Windows::Services::Maps::MapRoute const& route)
    {
        Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<MapRouteView, Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory>([&](auto&& f) { return f.CreateInstanceWithMapRoute(route, baseInterface, innerInterface); });
    }
    inline auto MapScene::CreateFromBoundingBox(Windows::Devices::Geolocation::GeoboundingBox const& bounds)
    {
        return impl::call_factory<MapScene, Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>([&](auto&& f) { return f.CreateFromBoundingBox(bounds); });
    }
    inline auto MapScene::CreateFromBoundingBox(Windows::Devices::Geolocation::GeoboundingBox const& bounds, double headingInDegrees, double pitchInDegrees)
    {
        return impl::call_factory<MapScene, Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>([&](auto&& f) { return f.CreateFromBoundingBox(bounds, headingInDegrees, pitchInDegrees); });
    }
    inline auto MapScene::CreateFromCamera(Windows::UI::Xaml::Controls::Maps::MapCamera const& camera)
    {
        return impl::call_factory<MapScene, Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>([&](auto&& f) { return f.CreateFromCamera(camera); });
    }
    inline auto MapScene::CreateFromLocation(Windows::Devices::Geolocation::Geopoint const& location)
    {
        return impl::call_factory<MapScene, Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>([&](auto&& f) { return f.CreateFromLocation(location); });
    }
    inline auto MapScene::CreateFromLocation(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees, double pitchInDegrees)
    {
        return impl::call_factory<MapScene, Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>([&](auto&& f) { return f.CreateFromLocation(location, headingInDegrees, pitchInDegrees); });
    }
    inline auto MapScene::CreateFromLocationAndRadius(Windows::Devices::Geolocation::Geopoint const& location, double radiusInMeters)
    {
        return impl::call_factory<MapScene, Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>([&](auto&& f) { return f.CreateFromLocationAndRadius(location, radiusInMeters); });
    }
    inline auto MapScene::CreateFromLocationAndRadius(Windows::Devices::Geolocation::Geopoint const& location, double radiusInMeters, double headingInDegrees, double pitchInDegrees)
    {
        return impl::call_factory<MapScene, Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>([&](auto&& f) { return f.CreateFromLocationAndRadius(location, radiusInMeters, headingInDegrees, pitchInDegrees); });
    }
    inline auto MapScene::CreateFromLocations(param::iterable<Windows::Devices::Geolocation::Geopoint> const& locations)
    {
        return impl::call_factory<MapScene, Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>([&](auto&& f) { return f.CreateFromLocations(locations); });
    }
    inline auto MapScene::CreateFromLocations(param::iterable<Windows::Devices::Geolocation::Geopoint> const& locations, double headingInDegrees, double pitchInDegrees)
    {
        return impl::call_factory<MapScene, Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>([&](auto&& f) { return f.CreateFromLocations(locations, headingInDegrees, pitchInDegrees); });
    }
    inline auto MapStyleSheet::Aerial()
    {
        return impl::call_factory<MapStyleSheet, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>([&](auto&& f) { return f.Aerial(); });
    }
    inline auto MapStyleSheet::AerialWithOverlay()
    {
        return impl::call_factory<MapStyleSheet, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>([&](auto&& f) { return f.AerialWithOverlay(); });
    }
    inline auto MapStyleSheet::RoadLight()
    {
        return impl::call_factory<MapStyleSheet, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>([&](auto&& f) { return f.RoadLight(); });
    }
    inline auto MapStyleSheet::RoadDark()
    {
        return impl::call_factory<MapStyleSheet, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>([&](auto&& f) { return f.RoadDark(); });
    }
    inline auto MapStyleSheet::RoadHighContrastLight()
    {
        return impl::call_factory<MapStyleSheet, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>([&](auto&& f) { return f.RoadHighContrastLight(); });
    }
    inline auto MapStyleSheet::RoadHighContrastDark()
    {
        return impl::call_factory<MapStyleSheet, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>([&](auto&& f) { return f.RoadHighContrastDark(); });
    }
    inline auto MapStyleSheet::Combine(param::iterable<Windows::UI::Xaml::Controls::Maps::MapStyleSheet> const& styleSheets)
    {
        return impl::call_factory<MapStyleSheet, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>([&](auto&& f) { return f.Combine(styleSheets); });
    }
    inline auto MapStyleSheet::ParseFromJson(param::hstring const& styleAsJson)
    {
        return impl::call_factory<MapStyleSheet, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>([&](auto&& f) { return f.ParseFromJson(styleAsJson); });
    }
    inline auto MapStyleSheet::TryParseFromJson(param::hstring const& styleAsJson, Windows::UI::Xaml::Controls::Maps::MapStyleSheet& styleSheet)
    {
        return impl::call_factory<MapStyleSheet, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>([&](auto&& f) { return f.TryParseFromJson(styleAsJson, styleSheet); });
    }
    inline auto MapStyleSheetEntries::Area()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Area(); });
    }
    inline auto MapStyleSheetEntries::Airport()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Airport(); });
    }
    inline auto MapStyleSheetEntries::Cemetery()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Cemetery(); });
    }
    inline auto MapStyleSheetEntries::Continent()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Continent(); });
    }
    inline auto MapStyleSheetEntries::Education()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Education(); });
    }
    inline auto MapStyleSheetEntries::IndigenousPeoplesReserve()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.IndigenousPeoplesReserve(); });
    }
    inline auto MapStyleSheetEntries::Island()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Island(); });
    }
    inline auto MapStyleSheetEntries::Medical()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Medical(); });
    }
    inline auto MapStyleSheetEntries::Military()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Military(); });
    }
    inline auto MapStyleSheetEntries::Nautical()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Nautical(); });
    }
    inline auto MapStyleSheetEntries::Neighborhood()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Neighborhood(); });
    }
    inline auto MapStyleSheetEntries::Runway()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Runway(); });
    }
    inline auto MapStyleSheetEntries::Sand()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Sand(); });
    }
    inline auto MapStyleSheetEntries::ShoppingCenter()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.ShoppingCenter(); });
    }
    inline auto MapStyleSheetEntries::Stadium()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Stadium(); });
    }
    inline auto MapStyleSheetEntries::Vegetation()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Vegetation(); });
    }
    inline auto MapStyleSheetEntries::Forest()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Forest(); });
    }
    inline auto MapStyleSheetEntries::GolfCourse()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.GolfCourse(); });
    }
    inline auto MapStyleSheetEntries::Park()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Park(); });
    }
    inline auto MapStyleSheetEntries::PlayingField()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.PlayingField(); });
    }
    inline auto MapStyleSheetEntries::Reserve()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Reserve(); });
    }
    inline auto MapStyleSheetEntries::Point()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Point(); });
    }
    inline auto MapStyleSheetEntries::NaturalPoint()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.NaturalPoint(); });
    }
    inline auto MapStyleSheetEntries::Peak()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Peak(); });
    }
    inline auto MapStyleSheetEntries::VolcanicPeak()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.VolcanicPeak(); });
    }
    inline auto MapStyleSheetEntries::WaterPoint()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.WaterPoint(); });
    }
    inline auto MapStyleSheetEntries::PointOfInterest()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.PointOfInterest(); });
    }
    inline auto MapStyleSheetEntries::Business()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Business(); });
    }
    inline auto MapStyleSheetEntries::FoodPoint()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.FoodPoint(); });
    }
    inline auto MapStyleSheetEntries::PopulatedPlace()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.PopulatedPlace(); });
    }
    inline auto MapStyleSheetEntries::Capital()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Capital(); });
    }
    inline auto MapStyleSheetEntries::AdminDistrictCapital()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.AdminDistrictCapital(); });
    }
    inline auto MapStyleSheetEntries::CountryRegionCapital()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.CountryRegionCapital(); });
    }
    inline auto MapStyleSheetEntries::RoadShield()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.RoadShield(); });
    }
    inline auto MapStyleSheetEntries::RoadExit()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.RoadExit(); });
    }
    inline auto MapStyleSheetEntries::Transit()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Transit(); });
    }
    inline auto MapStyleSheetEntries::Political()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Political(); });
    }
    inline auto MapStyleSheetEntries::CountryRegion()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.CountryRegion(); });
    }
    inline auto MapStyleSheetEntries::AdminDistrict()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.AdminDistrict(); });
    }
    inline auto MapStyleSheetEntries::District()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.District(); });
    }
    inline auto MapStyleSheetEntries::Structure()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Structure(); });
    }
    inline auto MapStyleSheetEntries::Building()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Building(); });
    }
    inline auto MapStyleSheetEntries::EducationBuilding()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.EducationBuilding(); });
    }
    inline auto MapStyleSheetEntries::MedicalBuilding()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.MedicalBuilding(); });
    }
    inline auto MapStyleSheetEntries::TransitBuilding()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.TransitBuilding(); });
    }
    inline auto MapStyleSheetEntries::Transportation()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Transportation(); });
    }
    inline auto MapStyleSheetEntries::Road()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Road(); });
    }
    inline auto MapStyleSheetEntries::ControlledAccessHighway()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.ControlledAccessHighway(); });
    }
    inline auto MapStyleSheetEntries::HighSpeedRamp()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.HighSpeedRamp(); });
    }
    inline auto MapStyleSheetEntries::Highway()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Highway(); });
    }
    inline auto MapStyleSheetEntries::MajorRoad()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.MajorRoad(); });
    }
    inline auto MapStyleSheetEntries::ArterialRoad()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.ArterialRoad(); });
    }
    inline auto MapStyleSheetEntries::Street()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Street(); });
    }
    inline auto MapStyleSheetEntries::Ramp()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Ramp(); });
    }
    inline auto MapStyleSheetEntries::UnpavedStreet()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.UnpavedStreet(); });
    }
    inline auto MapStyleSheetEntries::TollRoad()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.TollRoad(); });
    }
    inline auto MapStyleSheetEntries::Railway()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Railway(); });
    }
    inline auto MapStyleSheetEntries::Trail()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Trail(); });
    }
    inline auto MapStyleSheetEntries::WaterRoute()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.WaterRoute(); });
    }
    inline auto MapStyleSheetEntries::Water()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.Water(); });
    }
    inline auto MapStyleSheetEntries::River()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.River(); });
    }
    inline auto MapStyleSheetEntries::RouteLine()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.RouteLine(); });
    }
    inline auto MapStyleSheetEntries::WalkingRoute()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.WalkingRoute(); });
    }
    inline auto MapStyleSheetEntries::DrivingRoute()
    {
        return impl::call_factory<MapStyleSheetEntries, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>([&](auto&& f) { return f.DrivingRoute(); });
    }
    inline auto MapStyleSheetEntryStates::Disabled()
    {
        return impl::call_factory<MapStyleSheetEntryStates, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntryStatesStatics>([&](auto&& f) { return f.Disabled(); });
    }
    inline auto MapStyleSheetEntryStates::Hover()
    {
        return impl::call_factory<MapStyleSheetEntryStates, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntryStatesStatics>([&](auto&& f) { return f.Hover(); });
    }
    inline auto MapStyleSheetEntryStates::Selected()
    {
        return impl::call_factory<MapStyleSheetEntryStates, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntryStatesStatics>([&](auto&& f) { return f.Selected(); });
    }
    inline MapTargetCameraChangedEventArgs::MapTargetCameraChangedEventArgs() :
        MapTargetCameraChangedEventArgs(impl::call_factory<MapTargetCameraChangedEventArgs>([](auto&& f) { return f.template ActivateInstance<MapTargetCameraChangedEventArgs>(); }))
    {
    }
    inline MapTileBitmapRequest::MapTileBitmapRequest() :
        MapTileBitmapRequest(impl::call_factory<MapTileBitmapRequest>([](auto&& f) { return f.template ActivateInstance<MapTileBitmapRequest>(); }))
    {
    }
    inline MapTileBitmapRequestDeferral::MapTileBitmapRequestDeferral() :
        MapTileBitmapRequestDeferral(impl::call_factory<MapTileBitmapRequestDeferral>([](auto&& f) { return f.template ActivateInstance<MapTileBitmapRequestDeferral>(); }))
    {
    }
    inline MapTileBitmapRequestedEventArgs::MapTileBitmapRequestedEventArgs() :
        MapTileBitmapRequestedEventArgs(impl::call_factory<MapTileBitmapRequestedEventArgs>([](auto&& f) { return f.template ActivateInstance<MapTileBitmapRequestedEventArgs>(); }))
    {
    }
    inline MapTileDataSource::MapTileDataSource()
    {
        Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<MapTileDataSource, Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory>([&](auto&& f) { return f.CreateInstance(baseInterface, innerInterface); });
    }
    inline MapTileSource::MapTileSource()
    {
        Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>([&](auto&& f) { return f.CreateInstance(baseInterface, innerInterface); });
    }
    inline MapTileSource::MapTileSource(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource)
    {
        Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>([&](auto&& f) { return f.CreateInstanceWithDataSource(dataSource, baseInterface, innerInterface); });
    }
    inline MapTileSource::MapTileSource(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange)
    {
        Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>([&](auto&& f) { return f.CreateInstanceWithDataSourceAndZoomRange(dataSource, zoomLevelRange, baseInterface, innerInterface); });
    }
    inline MapTileSource::MapTileSource(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange, Windows::Devices::Geolocation::GeoboundingBox const& bounds)
    {
        Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>([&](auto&& f) { return f.CreateInstanceWithDataSourceZoomRangeAndBounds(dataSource, zoomLevelRange, bounds, baseInterface, innerInterface); });
    }
    inline MapTileSource::MapTileSource(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange, Windows::Devices::Geolocation::GeoboundingBox const& bounds, int32_t tileSizeInPixels)
    {
        Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>([&](auto&& f) { return f.CreateInstanceWithDataSourceZoomRangeBoundsAndTileSize(dataSource, zoomLevelRange, bounds, tileSizeInPixels, baseInterface, innerInterface); });
    }
    inline auto MapTileSource::DataSourceProperty()
    {
        return impl::call_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>([&](auto&& f) { return f.DataSourceProperty(); });
    }
    inline auto MapTileSource::LayerProperty()
    {
        return impl::call_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>([&](auto&& f) { return f.LayerProperty(); });
    }
    inline auto MapTileSource::ZoomLevelRangeProperty()
    {
        return impl::call_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>([&](auto&& f) { return f.ZoomLevelRangeProperty(); });
    }
    inline auto MapTileSource::BoundsProperty()
    {
        return impl::call_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>([&](auto&& f) { return f.BoundsProperty(); });
    }
    inline auto MapTileSource::AllowOverstretchProperty()
    {
        return impl::call_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>([&](auto&& f) { return f.AllowOverstretchProperty(); });
    }
    inline auto MapTileSource::IsFadingEnabledProperty()
    {
        return impl::call_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>([&](auto&& f) { return f.IsFadingEnabledProperty(); });
    }
    inline auto MapTileSource::IsTransparencyEnabledProperty()
    {
        return impl::call_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>([&](auto&& f) { return f.IsTransparencyEnabledProperty(); });
    }
    inline auto MapTileSource::IsRetryEnabledProperty()
    {
        return impl::call_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>([&](auto&& f) { return f.IsRetryEnabledProperty(); });
    }
    inline auto MapTileSource::ZIndexProperty()
    {
        return impl::call_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>([&](auto&& f) { return f.ZIndexProperty(); });
    }
    inline auto MapTileSource::TilePixelSizeProperty()
    {
        return impl::call_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>([&](auto&& f) { return f.TilePixelSizeProperty(); });
    }
    inline auto MapTileSource::VisibleProperty()
    {
        return impl::call_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>([&](auto&& f) { return f.VisibleProperty(); });
    }
    inline auto MapTileSource::AnimationStateProperty()
    {
        return impl::call_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics2>([&](auto&& f) { return f.AnimationStateProperty(); });
    }
    inline auto MapTileSource::AutoPlayProperty()
    {
        return impl::call_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics2>([&](auto&& f) { return f.AutoPlayProperty(); });
    }
    inline auto MapTileSource::FrameCountProperty()
    {
        return impl::call_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics2>([&](auto&& f) { return f.FrameCountProperty(); });
    }
    inline auto MapTileSource::FrameDurationProperty()
    {
        return impl::call_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics2>([&](auto&& f) { return f.FrameDurationProperty(); });
    }
    inline MapTileUriRequest::MapTileUriRequest() :
        MapTileUriRequest(impl::call_factory<MapTileUriRequest>([](auto&& f) { return f.template ActivateInstance<MapTileUriRequest>(); }))
    {
    }
    inline MapTileUriRequestDeferral::MapTileUriRequestDeferral() :
        MapTileUriRequestDeferral(impl::call_factory<MapTileUriRequestDeferral>([](auto&& f) { return f.template ActivateInstance<MapTileUriRequestDeferral>(); }))
    {
    }
    inline MapTileUriRequestedEventArgs::MapTileUriRequestedEventArgs() :
        MapTileUriRequestedEventArgs(impl::call_factory<MapTileUriRequestedEventArgs>([](auto&& f) { return f.template ActivateInstance<MapTileUriRequestedEventArgs>(); }))
    {
    }
    inline StreetsideExperience::StreetsideExperience(Windows::UI::Xaml::Controls::Maps::StreetsidePanorama const& panorama) :
        StreetsideExperience(impl::call_factory<StreetsideExperience, Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory>([&](auto&& f) { return f.CreateInstanceWithPanorama(panorama); }))
    {
    }
    inline StreetsideExperience::StreetsideExperience(Windows::UI::Xaml::Controls::Maps::StreetsidePanorama const& panorama, double headingInDegrees, double pitchInDegrees, double fieldOfViewInDegrees) :
        StreetsideExperience(impl::call_factory<StreetsideExperience, Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory>([&](auto&& f) { return f.CreateInstanceWithPanoramaHeadingPitchAndFieldOfView(panorama, headingInDegrees, pitchInDegrees, fieldOfViewInDegrees); }))
    {
    }
    inline auto StreetsidePanorama::FindNearbyAsync(Windows::Devices::Geolocation::Geopoint const& location)
    {
        return impl::call_factory<StreetsidePanorama, Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics>([&](auto&& f) { return f.FindNearbyAsync(location); });
    }
    inline auto StreetsidePanorama::FindNearbyAsync(Windows::Devices::Geolocation::Geopoint const& location, double radiusInMeters)
    {
        return impl::call_factory<StreetsidePanorama, Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics>([&](auto&& f) { return f.FindNearbyAsync(location, radiusInMeters); });
    }
    template <typename D, typename... Interfaces>
    struct CustomMapTileDataSourceT :
        implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
        impl::require<D, Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource, Windows::UI::Xaml::Controls::Maps::IMapTileDataSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
        impl::base<D, CustomMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileDataSource, Windows::UI::Xaml::DependencyObject>
    {
        using composable = CustomMapTileDataSource;
    protected:
        CustomMapTileDataSourceT()
        {
            impl::call_factory<CustomMapTileDataSource, Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory>([&](auto&& f) { f.CreateInstance(*this, this->m_inner); });
        }
    };
    template <typename D, typename... Interfaces>
    struct HttpMapTileDataSourceT :
        implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
        impl::require<D, Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::IMapTileDataSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
        impl::base<D, HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileDataSource, Windows::UI::Xaml::DependencyObject>
    {
        using composable = HttpMapTileDataSource;
    protected:
        HttpMapTileDataSourceT()
        {
            impl::call_factory<HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory>([&](auto&& f) { f.CreateInstance(*this, this->m_inner); });
        }
        HttpMapTileDataSourceT(param::hstring const& uriFormatString)
        {
            impl::call_factory<HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory>([&](auto&& f) { f.CreateInstanceWithUriFormatString(uriFormatString, *this, this->m_inner); });
        }
    };
    template <typename D, typename... Interfaces>
    struct LocalMapTileDataSourceT :
        implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
        impl::require<D, Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::IMapTileDataSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
        impl::base<D, LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileDataSource, Windows::UI::Xaml::DependencyObject>
    {
        using composable = LocalMapTileDataSource;
    protected:
        LocalMapTileDataSourceT()
        {
            impl::call_factory<LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory>([&](auto&& f) { f.CreateInstance(*this, this->m_inner); });
        }
        LocalMapTileDataSourceT(param::hstring const& uriFormatString)
        {
            impl::call_factory<LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory>([&](auto&& f) { f.CreateInstanceWithUriFormatString(uriFormatString, *this, this->m_inner); });
        }
    };
    template <typename D, typename... Interfaces>
    struct MapCustomExperienceT :
        implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
        impl::require<D, Windows::UI::Xaml::Controls::Maps::IMapCustomExperience, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
        impl::base<D, MapCustomExperience, Windows::UI::Xaml::DependencyObject>
    {
        using composable = MapCustomExperience;
    protected:
        MapCustomExperienceT()
        {
            impl::call_factory<MapCustomExperience, Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory>([&](auto&& f) { f.CreateInstance(*this, this->m_inner); });
        }
    };
    template <typename D, typename... Interfaces>
    struct MapElementT :
        implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
        impl::require<D, Windows::UI::Xaml::Controls::Maps::IMapElement, Windows::UI::Xaml::Controls::Maps::IMapElement2, Windows::UI::Xaml::Controls::Maps::IMapElement3, Windows::UI::Xaml::Controls::Maps::IMapElement4, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
        impl::base<D, MapElement, Windows::UI::Xaml::DependencyObject>
    {
        using composable = MapElement;
    protected:
        MapElementT()
        {
            impl::call_factory<MapElement, Windows::UI::Xaml::Controls::Maps::IMapElementFactory>([&](auto&& f) { f.CreateInstance(*this, this->m_inner); });
        }
    };
    template <typename D, typename... Interfaces>
    struct MapLayerT :
        implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
        impl::require<D, Windows::UI::Xaml::Controls::Maps::IMapLayer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
        impl::base<D, MapLayer, Windows::UI::Xaml::DependencyObject>
    {
        using composable = MapLayer;
    protected:
        MapLayerT()
        {
            impl::call_factory<MapLayer, Windows::UI::Xaml::Controls::Maps::IMapLayerFactory>([&](auto&& f) { f.CreateInstance(*this, this->m_inner); });
        }
    };
    template <typename D, typename... Interfaces>
    struct MapModel3DT :
        implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
        impl::require<D, Windows::UI::Xaml::Controls::Maps::IMapModel3D, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
        impl::base<D, MapModel3D, Windows::UI::Xaml::DependencyObject>
    {
        using composable = MapModel3D;
    protected:
        MapModel3DT()
        {
            impl::call_factory<MapModel3D, Windows::UI::Xaml::Controls::Maps::IMapModel3DFactory>([&](auto&& f) { f.CreateInstance(*this, this->m_inner); });
        }
    };
    template <typename D, typename... Interfaces>
    struct MapRouteViewT :
        implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
        impl::require<D, Windows::UI::Xaml::Controls::Maps::IMapRouteView, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
        impl::base<D, MapRouteView, Windows::UI::Xaml::DependencyObject>
    {
        using composable = MapRouteView;
    protected:
        MapRouteViewT(Windows::Services::Maps::MapRoute const& route)
        {
            impl::call_factory<MapRouteView, Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory>([&](auto&& f) { f.CreateInstanceWithMapRoute(route, *this, this->m_inner); });
        }
    };
    template <typename D, typename... Interfaces>
    struct MapTileDataSourceT :
        implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
        impl::require<D, Windows::UI::Xaml::Controls::Maps::IMapTileDataSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
        impl::base<D, MapTileDataSource, Windows::UI::Xaml::DependencyObject>
    {
        using composable = MapTileDataSource;
    protected:
        MapTileDataSourceT()
        {
            impl::call_factory<MapTileDataSource, Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory>([&](auto&& f) { f.CreateInstance(*this, this->m_inner); });
        }
    };
    template <typename D, typename... Interfaces>
    struct MapTileSourceT :
        implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
        impl::require<D, Windows::UI::Xaml::Controls::Maps::IMapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSource2, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
        impl::base<D, MapTileSource, Windows::UI::Xaml::DependencyObject>
    {
        using composable = MapTileSource;
    protected:
        MapTileSourceT()
        {
            impl::call_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>([&](auto&& f) { f.CreateInstance(*this, this->m_inner); });
        }
        MapTileSourceT(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource)
        {
            impl::call_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>([&](auto&& f) { f.CreateInstanceWithDataSource(dataSource, *this, this->m_inner); });
        }
        MapTileSourceT(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange)
        {
            impl::call_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>([&](auto&& f) { f.CreateInstanceWithDataSourceAndZoomRange(dataSource, zoomLevelRange, *this, this->m_inner); });
        }
        MapTileSourceT(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange, Windows::Devices::Geolocation::GeoboundingBox const& bounds)
        {
            impl::call_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>([&](auto&& f) { f.CreateInstanceWithDataSourceZoomRangeAndBounds(dataSource, zoomLevelRange, bounds, *this, this->m_inner); });
        }
        MapTileSourceT(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange, Windows::Devices::Geolocation::GeoboundingBox const& bounds, int32_t tileSizeInPixels)
        {
            impl::call_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>([&](auto&& f) { f.CreateInstanceWithDataSourceZoomRangeBoundsAndTileSize(dataSource, zoomLevelRange, bounds, tileSizeInPixels, *this, this->m_inner); });
        }
    };
}
namespace std
{
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs2> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs2> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapBillboard> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapBillboard> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapBillboardFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapBillboardFactory> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapCamera> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapCamera> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapCameraFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapCameraFactory> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControl> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapControl> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControl2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapControl2> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControl3> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapControl3> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControl4> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapControl4> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControl5> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapControl5> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControl6> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapControl6> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControl7> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapControl7> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControl8> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapControl8> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkClickEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkClickEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerEnteredEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerEnteredEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerExitedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerExitedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkRightTappedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkRightTappedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperFactory> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperStatics> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlStatics> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlStatics2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlStatics2> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlStatics4> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlStatics4> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlStatics5> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlStatics5> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlStatics6> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlStatics6> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlStatics7> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlStatics7> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlStatics8> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlStatics8> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapCustomExperience> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapCustomExperience> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElement> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapElement> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElement2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapElement2> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElement3> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapElement3> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElement3D> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapElement3D> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElement4> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapElement4> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementFactory> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementStatics> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementStatics2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementStatics2> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementStatics3> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementStatics3> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementStatics4> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementStatics4> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementsLayer> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementsLayer> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementsLayerClickEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementsLayerClickEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementsLayerContextRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementsLayerContextRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerEnteredEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerEnteredEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerExitedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerExitedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementsLayerStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementsLayerStatics> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapIcon> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapIcon> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapIcon2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapIcon2> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapIconStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapIconStatics> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapIconStatics2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapIconStatics2> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapItemsControl> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapItemsControl> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapLayer> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapLayer> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapLayerFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapLayerFactory> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapLayerStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapLayerStatics> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapModel3D> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapModel3D> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapModel3DFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapModel3DFactory> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapModel3DStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapModel3DStatics> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapPolygon> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapPolygon> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapPolygon2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapPolygon2> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapPolyline> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapPolyline> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapRouteView> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapRouteView> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapScene> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapScene> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapSceneStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapSceneStatics> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapStyleSheet> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapStyleSheet> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntryStatesStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntryStatesStatics> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs2> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs2> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileDataSource> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileDataSource> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileSource> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileSource> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileSource2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileSource2> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics2> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs2> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IStreetsideExperience> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IStreetsideExperience> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapBillboard> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapBillboard> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapCamera> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapCamera> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapControl> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapControl> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkClickEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkClickEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerEnteredEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerEnteredEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerExitedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerExitedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkRightTappedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkRightTappedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapControlDataHelper> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapControlDataHelper> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureClickEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureClickEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerEnteredEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerEnteredEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerExitedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerExitedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureRightTappedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureRightTappedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapCustomExperience> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapCustomExperience> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapElement> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapElement> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapElement3D> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapElement3D> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapElementsLayer> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapElementsLayer> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapElementsLayerClickEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapElementsLayerClickEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapElementsLayerContextRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapElementsLayerContextRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerEnteredEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerEnteredEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerExitedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerExitedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapIcon> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapIcon> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapItemsControl> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapItemsControl> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapLayer> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapLayer> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapModel3D> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapModel3D> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapPolygon> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapPolygon> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapPolyline> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapPolyline> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapRouteView> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapRouteView> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapScene> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapScene> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapStyleSheet> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapStyleSheet> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapStyleSheetEntries> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapStyleSheetEntries> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapStyleSheetEntryStates> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapStyleSheetEntryStates> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequest> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequest> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestDeferral> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestDeferral> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapTileDataSource> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapTileDataSource> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapTileSource> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapTileSource> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapTileUriRequest> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapTileUriRequest> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapTileUriRequestDeferral> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapTileUriRequestDeferral> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::StreetsideExperience> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::StreetsideExperience> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::StreetsidePanorama> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Maps::StreetsidePanorama> {};
}
#endif
