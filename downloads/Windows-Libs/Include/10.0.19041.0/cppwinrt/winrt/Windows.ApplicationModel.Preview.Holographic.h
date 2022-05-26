// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Preview_Holographic_H
#define WINRT_Windows_ApplicationModel_Preview_Holographic_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.ApplicationModel.h"
#include "winrt/impl/Windows.ApplicationModel.Activation.2.h"
#include "winrt/impl/Windows.Foundation.Numerics.2.h"
#include "winrt/impl/Windows.Perception.Spatial.2.h"
#include "winrt/impl/Windows.ApplicationModel.Preview.Holographic.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_ApplicationModel_Preview_Holographic_IHolographicApplicationPreviewStatics<D>::IsCurrentViewPresentedOnHolographicDisplay() const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics)->IsCurrentViewPresentedOnHolographicDisplay(&result));
        return result;
    }
    template <typename D> auto consume_Windows_ApplicationModel_Preview_Holographic_IHolographicApplicationPreviewStatics<D>::IsHolographicActivation(Windows::ApplicationModel::Activation::IActivatedEventArgs const& activatedEventArgs) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics)->IsHolographicActivation(*(void**)(&activatedEventArgs), &result));
        return result;
    }
    template <typename D> auto consume_Windows_ApplicationModel_Preview_Holographic_IHolographicKeyboardPlacementOverridePreview<D>::SetPlacementOverride(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& topCenterPosition, Windows::Foundation::Numerics::float3 const& normal) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Preview::Holographic::IHolographicKeyboardPlacementOverridePreview)->SetPlacementOverride(*(void**)(&coordinateSystem), impl::bind_in(topCenterPosition), impl::bind_in(normal)));
    }
    template <typename D> auto consume_Windows_ApplicationModel_Preview_Holographic_IHolographicKeyboardPlacementOverridePreview<D>::SetPlacementOverride(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& topCenterPosition, Windows::Foundation::Numerics::float3 const& normal, Windows::Foundation::Numerics::float2 const& maxSize) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Preview::Holographic::IHolographicKeyboardPlacementOverridePreview)->SetPlacementOverrideWithMaxSize(*(void**)(&coordinateSystem), impl::bind_in(topCenterPosition), impl::bind_in(normal), impl::bind_in(maxSize)));
    }
    template <typename D> auto consume_Windows_ApplicationModel_Preview_Holographic_IHolographicKeyboardPlacementOverridePreview<D>::ResetPlacementOverride() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Preview::Holographic::IHolographicKeyboardPlacementOverridePreview)->ResetPlacementOverride());
    }
    template <typename D> auto consume_Windows_ApplicationModel_Preview_Holographic_IHolographicKeyboardPlacementOverridePreviewStatics<D>::GetForCurrentView() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Preview::Holographic::IHolographicKeyboardPlacementOverridePreviewStatics)->GetForCurrentView(&result));
        return Windows::ApplicationModel::Preview::Holographic::HolographicKeyboardPlacementOverridePreview{ result, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics> : produce_base<D, Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics>
    {
        int32_t __stdcall IsCurrentViewPresentedOnHolographicDisplay(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsCurrentViewPresentedOnHolographicDisplay());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsHolographicActivation(void* activatedEventArgs, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsHolographicActivation(*reinterpret_cast<Windows::ApplicationModel::Activation::IActivatedEventArgs const*>(&activatedEventArgs)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Preview::Holographic::IHolographicKeyboardPlacementOverridePreview> : produce_base<D, Windows::ApplicationModel::Preview::Holographic::IHolographicKeyboardPlacementOverridePreview>
    {
        int32_t __stdcall SetPlacementOverride(void* coordinateSystem, Windows::Foundation::Numerics::float3 topCenterPosition, Windows::Foundation::Numerics::float3 normal) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPlacementOverride(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&topCenterPosition), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&normal));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetPlacementOverrideWithMaxSize(void* coordinateSystem, Windows::Foundation::Numerics::float3 topCenterPosition, Windows::Foundation::Numerics::float3 normal, Windows::Foundation::Numerics::float2 maxSize) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPlacementOverride(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&topCenterPosition), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&normal), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&maxSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ResetPlacementOverride() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResetPlacementOverride();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Preview::Holographic::IHolographicKeyboardPlacementOverridePreviewStatics> : produce_base<D, Windows::ApplicationModel::Preview::Holographic::IHolographicKeyboardPlacementOverridePreviewStatics>
    {
        int32_t __stdcall GetForCurrentView(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Preview::Holographic::HolographicKeyboardPlacementOverridePreview>(this->shim().GetForCurrentView());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::ApplicationModel::Preview::Holographic
{
    inline auto HolographicApplicationPreview::IsCurrentViewPresentedOnHolographicDisplay()
    {
        return impl::call_factory<HolographicApplicationPreview, Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics>([&](auto&& f) { return f.IsCurrentViewPresentedOnHolographicDisplay(); });
    }
    inline auto HolographicApplicationPreview::IsHolographicActivation(Windows::ApplicationModel::Activation::IActivatedEventArgs const& activatedEventArgs)
    {
        return impl::call_factory<HolographicApplicationPreview, Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics>([&](auto&& f) { return f.IsHolographicActivation(activatedEventArgs); });
    }
    inline auto HolographicKeyboardPlacementOverridePreview::GetForCurrentView()
    {
        return impl::call_factory<HolographicKeyboardPlacementOverridePreview, Windows::ApplicationModel::Preview::Holographic::IHolographicKeyboardPlacementOverridePreviewStatics>([&](auto&& f) { return f.GetForCurrentView(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Preview::Holographic::IHolographicKeyboardPlacementOverridePreview> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Preview::Holographic::IHolographicKeyboardPlacementOverridePreview> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Preview::Holographic::IHolographicKeyboardPlacementOverridePreviewStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Preview::Holographic::IHolographicKeyboardPlacementOverridePreviewStatics> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Preview::Holographic::HolographicApplicationPreview> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Preview::Holographic::HolographicApplicationPreview> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Preview::Holographic::HolographicKeyboardPlacementOverridePreview> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Preview::Holographic::HolographicKeyboardPlacementOverridePreview> {};
}
#endif
