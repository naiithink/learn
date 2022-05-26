// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Profile_H
#define WINRT_Windows_System_Profile_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.System.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.System.Profile.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_System_Profile_IAnalyticsInfoStatics<D>::VersionInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IAnalyticsInfoStatics)->get_VersionInfo(&value));
        return Windows::System::Profile::AnalyticsVersionInfo{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IAnalyticsInfoStatics<D>::DeviceForm() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IAnalyticsInfoStatics)->get_DeviceForm(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IAnalyticsInfoStatics2<D>::GetSystemPropertiesAsync(param::async_iterable<hstring> const& attributeNames) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IAnalyticsInfoStatics2)->GetSystemPropertiesAsync(*(void**)(&attributeNames), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, hstring>>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IAnalyticsVersionInfo<D>::DeviceFamily() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IAnalyticsVersionInfo)->get_DeviceFamily(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IAnalyticsVersionInfo<D>::DeviceFamilyVersion() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IAnalyticsVersionInfo)->get_DeviceFamilyVersion(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IAppApplicabilityStatics<D>::GetUnsupportedAppRequirements(param::iterable<hstring> const& capabilities) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IAppApplicabilityStatics)->GetUnsupportedAppRequirements(*(void**)(&capabilities), &result));
        return Windows::Foundation::Collections::IVectorView<Windows::System::Profile::UnsupportedAppRequirement>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IEducationSettingsStatics<D>::IsEducationEnvironment() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IEducationSettingsStatics)->get_IsEducationEnvironment(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_Profile_IHardwareIdentificationStatics<D>::GetPackageSpecificToken(Windows::Storage::Streams::IBuffer const& nonce) const
    {
        void* packageSpecificHardwareToken{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IHardwareIdentificationStatics)->GetPackageSpecificToken(*(void**)(&nonce), &packageSpecificHardwareToken));
        return Windows::System::Profile::HardwareToken{ packageSpecificHardwareToken, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IHardwareToken<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IHardwareToken)->get_Id(&value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IHardwareToken<D>::Signature() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IHardwareToken)->get_Signature(&value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IHardwareToken<D>::Certificate() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IHardwareToken)->get_Certificate(&value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::RetailAccessCode() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_RetailAccessCode(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::ManufacturerName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_ManufacturerName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::ModelName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_ModelName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::DisplayModelName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_DisplayModelName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::Price() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_Price(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::IsFeatured() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_IsFeatured(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::FormFactor() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_FormFactor(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::ScreenSize() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_ScreenSize(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::Weight() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_Weight(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::DisplayDescription() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_DisplayDescription(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::BatteryLifeDescription() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_BatteryLifeDescription(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::ProcessorDescription() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_ProcessorDescription(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::Memory() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_Memory(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::StorageDescription() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_StorageDescription(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::GraphicsDescription() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_GraphicsDescription(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::FrontCameraDescription() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_FrontCameraDescription(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::RearCameraDescription() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_RearCameraDescription(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::HasNfc() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_HasNfc(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::HasSdSlot() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_HasSdSlot(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::HasOpticalDrive() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_HasOpticalDrive(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::IsOfficeInstalled() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_IsOfficeInstalled(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::WindowsEdition() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_WindowsEdition(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IPlatformDiagnosticsAndUsageDataSettingsStatics<D>::CollectionLevel() const
    {
        Windows::System::Profile::PlatformDataCollectionLevel value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics)->get_CollectionLevel(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_System_Profile_IPlatformDiagnosticsAndUsageDataSettingsStatics<D>::CollectionLevelChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics)->add_CollectionLevelChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_Profile_IPlatformDiagnosticsAndUsageDataSettingsStatics<D>::CollectionLevelChanged_revoker consume_Windows_System_Profile_IPlatformDiagnosticsAndUsageDataSettingsStatics<D>::CollectionLevelChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, CollectionLevelChanged_revoker>(this, CollectionLevelChanged(handler));
    }
    template <typename D> auto consume_Windows_System_Profile_IPlatformDiagnosticsAndUsageDataSettingsStatics<D>::CollectionLevelChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics)->remove_CollectionLevelChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_System_Profile_IPlatformDiagnosticsAndUsageDataSettingsStatics<D>::CanCollectDiagnostics(Windows::System::Profile::PlatformDataCollectionLevel const& level) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics)->CanCollectDiagnostics(static_cast<int32_t>(level), &result));
        return result;
    }
    template <typename D> auto consume_Windows_System_Profile_IRetailInfoStatics<D>::IsDemoModeEnabled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IRetailInfoStatics)->get_IsDemoModeEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_Profile_IRetailInfoStatics<D>::Properties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IRetailInfoStatics)->get_Properties(&value));
        return Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_ISharedModeSettingsStatics<D>::IsEnabled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::ISharedModeSettingsStatics)->get_IsEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_Profile_ISharedModeSettingsStatics2<D>::ShouldAvoidLocalStorage() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::ISharedModeSettingsStatics2)->get_ShouldAvoidLocalStorage(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_Profile_ISystemIdentificationInfo<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::ISystemIdentificationInfo)->get_Id(&value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_ISystemIdentificationInfo<D>::Source() const
    {
        Windows::System::Profile::SystemIdentificationSource value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::ISystemIdentificationInfo)->get_Source(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_System_Profile_ISystemIdentificationStatics<D>::GetSystemIdForPublisher() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::ISystemIdentificationStatics)->GetSystemIdForPublisher(&result));
        return Windows::System::Profile::SystemIdentificationInfo{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_ISystemIdentificationStatics<D>::GetSystemIdForUser(Windows::System::User const& user) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::ISystemIdentificationStatics)->GetSystemIdForUser(*(void**)(&user), &result));
        return Windows::System::Profile::SystemIdentificationInfo{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_ISystemSetupInfoStatics<D>::OutOfBoxExperienceState() const
    {
        Windows::System::Profile::SystemOutOfBoxExperienceState value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::ISystemSetupInfoStatics)->get_OutOfBoxExperienceState(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_System_Profile_ISystemSetupInfoStatics<D>::OutOfBoxExperienceStateChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::ISystemSetupInfoStatics)->add_OutOfBoxExperienceStateChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_Profile_ISystemSetupInfoStatics<D>::OutOfBoxExperienceStateChanged_revoker consume_Windows_System_Profile_ISystemSetupInfoStatics<D>::OutOfBoxExperienceStateChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, OutOfBoxExperienceStateChanged_revoker>(this, OutOfBoxExperienceStateChanged(handler));
    }
    template <typename D> auto consume_Windows_System_Profile_ISystemSetupInfoStatics<D>::OutOfBoxExperienceStateChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::System::Profile::ISystemSetupInfoStatics)->remove_OutOfBoxExperienceStateChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_System_Profile_IUnsupportedAppRequirement<D>::Requirement() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IUnsupportedAppRequirement)->get_Requirement(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Profile_IUnsupportedAppRequirement<D>::Reasons() const
    {
        Windows::System::Profile::UnsupportedAppRequirementReasons value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IUnsupportedAppRequirement)->get_Reasons(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_System_Profile_IWindowsIntegrityPolicyStatics<D>::IsEnabled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IWindowsIntegrityPolicyStatics)->get_IsEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_Profile_IWindowsIntegrityPolicyStatics<D>::IsEnabledForTrial() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IWindowsIntegrityPolicyStatics)->get_IsEnabledForTrial(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_Profile_IWindowsIntegrityPolicyStatics<D>::CanDisable() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IWindowsIntegrityPolicyStatics)->get_CanDisable(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_Profile_IWindowsIntegrityPolicyStatics<D>::IsDisableSupported() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IWindowsIntegrityPolicyStatics)->get_IsDisableSupported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_Profile_IWindowsIntegrityPolicyStatics<D>::PolicyChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Profile::IWindowsIntegrityPolicyStatics)->add_PolicyChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_Profile_IWindowsIntegrityPolicyStatics<D>::PolicyChanged_revoker consume_Windows_System_Profile_IWindowsIntegrityPolicyStatics<D>::PolicyChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, PolicyChanged_revoker>(this, PolicyChanged(handler));
    }
    template <typename D> auto consume_Windows_System_Profile_IWindowsIntegrityPolicyStatics<D>::PolicyChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::System::Profile::IWindowsIntegrityPolicyStatics)->remove_PolicyChanged(impl::bind_in(token)));
    }
    template <typename D>
    struct produce<D, Windows::System::Profile::IAnalyticsInfoStatics> : produce_base<D, Windows::System::Profile::IAnalyticsInfoStatics>
    {
        int32_t __stdcall get_VersionInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::Profile::AnalyticsVersionInfo>(this->shim().VersionInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DeviceForm(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceForm());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::Profile::IAnalyticsInfoStatics2> : produce_base<D, Windows::System::Profile::IAnalyticsInfoStatics2>
    {
        int32_t __stdcall GetSystemPropertiesAsync(void* attributeNames, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, hstring>>>(this->shim().GetSystemPropertiesAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&attributeNames)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::Profile::IAnalyticsVersionInfo> : produce_base<D, Windows::System::Profile::IAnalyticsVersionInfo>
    {
        int32_t __stdcall get_DeviceFamily(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceFamily());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DeviceFamilyVersion(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceFamilyVersion());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::Profile::IAppApplicabilityStatics> : produce_base<D, Windows::System::Profile::IAppApplicabilityStatics>
    {
        int32_t __stdcall GetUnsupportedAppRequirements(void* capabilities, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVectorView<Windows::System::Profile::UnsupportedAppRequirement>>(this->shim().GetUnsupportedAppRequirements(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&capabilities)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::Profile::IEducationSettingsStatics> : produce_base<D, Windows::System::Profile::IEducationSettingsStatics>
    {
        int32_t __stdcall get_IsEducationEnvironment(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsEducationEnvironment());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::Profile::IHardwareIdentificationStatics> : produce_base<D, Windows::System::Profile::IHardwareIdentificationStatics>
    {
        int32_t __stdcall GetPackageSpecificToken(void* nonce, void** packageSpecificHardwareToken) noexcept final try
        {
            clear_abi(packageSpecificHardwareToken);
            typename D::abi_guard guard(this->shim());
            *packageSpecificHardwareToken = detach_from<Windows::System::Profile::HardwareToken>(this->shim().GetPackageSpecificToken(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&nonce)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::Profile::IHardwareToken> : produce_base<D, Windows::System::Profile::IHardwareToken>
    {
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Signature(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().Signature());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Certificate(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().Certificate());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::Profile::IKnownRetailInfoPropertiesStatics> : produce_base<D, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>
    {
        int32_t __stdcall get_RetailAccessCode(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RetailAccessCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ManufacturerName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ManufacturerName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ModelName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ModelName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisplayModelName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayModelName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Price(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Price());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsFeatured(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().IsFeatured());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FormFactor(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FormFactor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ScreenSize(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ScreenSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Weight(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Weight());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisplayDescription(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayDescription());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BatteryLifeDescription(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BatteryLifeDescription());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProcessorDescription(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ProcessorDescription());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Memory(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Memory());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StorageDescription(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().StorageDescription());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GraphicsDescription(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GraphicsDescription());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FrontCameraDescription(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FrontCameraDescription());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RearCameraDescription(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RearCameraDescription());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HasNfc(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HasNfc());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HasSdSlot(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HasSdSlot());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HasOpticalDrive(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HasOpticalDrive());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsOfficeInstalled(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().IsOfficeInstalled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WindowsEdition(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WindowsEdition());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics> : produce_base<D, Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>
    {
        int32_t __stdcall get_CollectionLevel(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::Profile::PlatformDataCollectionLevel>(this->shim().CollectionLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_CollectionLevelChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().CollectionLevelChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_CollectionLevelChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CollectionLevelChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall CanCollectDiagnostics(int32_t level, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().CanCollectDiagnostics(*reinterpret_cast<Windows::System::Profile::PlatformDataCollectionLevel const*>(&level)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::Profile::IRetailInfoStatics> : produce_base<D, Windows::System::Profile::IRetailInfoStatics>
    {
        int32_t __stdcall get_IsDemoModeEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsDemoModeEnabled());
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
    };
    template <typename D>
    struct produce<D, Windows::System::Profile::ISharedModeSettingsStatics> : produce_base<D, Windows::System::Profile::ISharedModeSettingsStatics>
    {
        int32_t __stdcall get_IsEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::Profile::ISharedModeSettingsStatics2> : produce_base<D, Windows::System::Profile::ISharedModeSettingsStatics2>
    {
        int32_t __stdcall get_ShouldAvoidLocalStorage(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ShouldAvoidLocalStorage());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::Profile::ISystemIdentificationInfo> : produce_base<D, Windows::System::Profile::ISystemIdentificationInfo>
    {
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Source(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::Profile::SystemIdentificationSource>(this->shim().Source());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::Profile::ISystemIdentificationStatics> : produce_base<D, Windows::System::Profile::ISystemIdentificationStatics>
    {
        int32_t __stdcall GetSystemIdForPublisher(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::System::Profile::SystemIdentificationInfo>(this->shim().GetSystemIdForPublisher());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetSystemIdForUser(void* user, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::System::Profile::SystemIdentificationInfo>(this->shim().GetSystemIdForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::Profile::ISystemSetupInfoStatics> : produce_base<D, Windows::System::Profile::ISystemSetupInfoStatics>
    {
        int32_t __stdcall get_OutOfBoxExperienceState(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::Profile::SystemOutOfBoxExperienceState>(this->shim().OutOfBoxExperienceState());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_OutOfBoxExperienceStateChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().OutOfBoxExperienceStateChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_OutOfBoxExperienceStateChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OutOfBoxExperienceStateChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::System::Profile::IUnsupportedAppRequirement> : produce_base<D, Windows::System::Profile::IUnsupportedAppRequirement>
    {
        int32_t __stdcall get_Requirement(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Requirement());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Reasons(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::Profile::UnsupportedAppRequirementReasons>(this->shim().Reasons());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::Profile::IWindowsIntegrityPolicyStatics> : produce_base<D, Windows::System::Profile::IWindowsIntegrityPolicyStatics>
    {
        int32_t __stdcall get_IsEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsEnabledForTrial(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsEnabledForTrial());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CanDisable(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanDisable());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsDisableSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsDisableSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_PolicyChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().PolicyChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_PolicyChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PolicyChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
}
namespace winrt::Windows::System::Profile
{
    constexpr auto operator|(UnsupportedAppRequirementReasons const left, UnsupportedAppRequirementReasons const right) noexcept
    {
        return static_cast<UnsupportedAppRequirementReasons>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(UnsupportedAppRequirementReasons& left, UnsupportedAppRequirementReasons const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(UnsupportedAppRequirementReasons const left, UnsupportedAppRequirementReasons const right) noexcept
    {
        return static_cast<UnsupportedAppRequirementReasons>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(UnsupportedAppRequirementReasons& left, UnsupportedAppRequirementReasons const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(UnsupportedAppRequirementReasons const value) noexcept
    {
        return static_cast<UnsupportedAppRequirementReasons>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(UnsupportedAppRequirementReasons const left, UnsupportedAppRequirementReasons const right) noexcept
    {
        return static_cast<UnsupportedAppRequirementReasons>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(UnsupportedAppRequirementReasons& left, UnsupportedAppRequirementReasons const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline auto AnalyticsInfo::VersionInfo()
    {
        return impl::call_factory<AnalyticsInfo, Windows::System::Profile::IAnalyticsInfoStatics>([&](auto&& f) { return f.VersionInfo(); });
    }
    inline auto AnalyticsInfo::DeviceForm()
    {
        return impl::call_factory<AnalyticsInfo, Windows::System::Profile::IAnalyticsInfoStatics>([&](auto&& f) { return f.DeviceForm(); });
    }
    inline auto AnalyticsInfo::GetSystemPropertiesAsync(param::async_iterable<hstring> const& attributeNames)
    {
        return impl::call_factory<AnalyticsInfo, Windows::System::Profile::IAnalyticsInfoStatics2>([&](auto&& f) { return f.GetSystemPropertiesAsync(attributeNames); });
    }
    inline auto AppApplicability::GetUnsupportedAppRequirements(param::iterable<hstring> const& capabilities)
    {
        return impl::call_factory<AppApplicability, Windows::System::Profile::IAppApplicabilityStatics>([&](auto&& f) { return f.GetUnsupportedAppRequirements(capabilities); });
    }
    inline auto EducationSettings::IsEducationEnvironment()
    {
        return impl::call_factory<EducationSettings, Windows::System::Profile::IEducationSettingsStatics>([&](auto&& f) { return f.IsEducationEnvironment(); });
    }
    inline auto HardwareIdentification::GetPackageSpecificToken(Windows::Storage::Streams::IBuffer const& nonce)
    {
        return impl::call_factory<HardwareIdentification, Windows::System::Profile::IHardwareIdentificationStatics>([&](auto&& f) { return f.GetPackageSpecificToken(nonce); });
    }
    inline auto KnownRetailInfoProperties::RetailAccessCode()
    {
        return impl::call_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>([&](auto&& f) { return f.RetailAccessCode(); });
    }
    inline auto KnownRetailInfoProperties::ManufacturerName()
    {
        return impl::call_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>([&](auto&& f) { return f.ManufacturerName(); });
    }
    inline auto KnownRetailInfoProperties::ModelName()
    {
        return impl::call_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>([&](auto&& f) { return f.ModelName(); });
    }
    inline auto KnownRetailInfoProperties::DisplayModelName()
    {
        return impl::call_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>([&](auto&& f) { return f.DisplayModelName(); });
    }
    inline auto KnownRetailInfoProperties::Price()
    {
        return impl::call_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>([&](auto&& f) { return f.Price(); });
    }
    inline auto KnownRetailInfoProperties::IsFeatured()
    {
        return impl::call_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>([&](auto&& f) { return f.IsFeatured(); });
    }
    inline auto KnownRetailInfoProperties::FormFactor()
    {
        return impl::call_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>([&](auto&& f) { return f.FormFactor(); });
    }
    inline auto KnownRetailInfoProperties::ScreenSize()
    {
        return impl::call_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>([&](auto&& f) { return f.ScreenSize(); });
    }
    inline auto KnownRetailInfoProperties::Weight()
    {
        return impl::call_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>([&](auto&& f) { return f.Weight(); });
    }
    inline auto KnownRetailInfoProperties::DisplayDescription()
    {
        return impl::call_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>([&](auto&& f) { return f.DisplayDescription(); });
    }
    inline auto KnownRetailInfoProperties::BatteryLifeDescription()
    {
        return impl::call_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>([&](auto&& f) { return f.BatteryLifeDescription(); });
    }
    inline auto KnownRetailInfoProperties::ProcessorDescription()
    {
        return impl::call_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>([&](auto&& f) { return f.ProcessorDescription(); });
    }
    inline auto KnownRetailInfoProperties::Memory()
    {
        return impl::call_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>([&](auto&& f) { return f.Memory(); });
    }
    inline auto KnownRetailInfoProperties::StorageDescription()
    {
        return impl::call_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>([&](auto&& f) { return f.StorageDescription(); });
    }
    inline auto KnownRetailInfoProperties::GraphicsDescription()
    {
        return impl::call_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>([&](auto&& f) { return f.GraphicsDescription(); });
    }
    inline auto KnownRetailInfoProperties::FrontCameraDescription()
    {
        return impl::call_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>([&](auto&& f) { return f.FrontCameraDescription(); });
    }
    inline auto KnownRetailInfoProperties::RearCameraDescription()
    {
        return impl::call_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>([&](auto&& f) { return f.RearCameraDescription(); });
    }
    inline auto KnownRetailInfoProperties::HasNfc()
    {
        return impl::call_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>([&](auto&& f) { return f.HasNfc(); });
    }
    inline auto KnownRetailInfoProperties::HasSdSlot()
    {
        return impl::call_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>([&](auto&& f) { return f.HasSdSlot(); });
    }
    inline auto KnownRetailInfoProperties::HasOpticalDrive()
    {
        return impl::call_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>([&](auto&& f) { return f.HasOpticalDrive(); });
    }
    inline auto KnownRetailInfoProperties::IsOfficeInstalled()
    {
        return impl::call_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>([&](auto&& f) { return f.IsOfficeInstalled(); });
    }
    inline auto KnownRetailInfoProperties::WindowsEdition()
    {
        return impl::call_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>([&](auto&& f) { return f.WindowsEdition(); });
    }
    inline auto PlatformDiagnosticsAndUsageDataSettings::CollectionLevel()
    {
        return impl::call_factory<PlatformDiagnosticsAndUsageDataSettings, Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>([&](auto&& f) { return f.CollectionLevel(); });
    }
    inline auto PlatformDiagnosticsAndUsageDataSettings::CollectionLevelChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
    {
        return impl::call_factory<PlatformDiagnosticsAndUsageDataSettings, Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>([&](auto&& f) { return f.CollectionLevelChanged(handler); });
    }
    inline PlatformDiagnosticsAndUsageDataSettings::CollectionLevelChanged_revoker PlatformDiagnosticsAndUsageDataSettings::CollectionLevelChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
    {
        auto f = get_activation_factory<PlatformDiagnosticsAndUsageDataSettings, Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>();
        return { f, f.CollectionLevelChanged(handler) };
    }
    inline auto PlatformDiagnosticsAndUsageDataSettings::CollectionLevelChanged(winrt::event_token const& token)
    {
        impl::call_factory<PlatformDiagnosticsAndUsageDataSettings, Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>([&](auto&& f) { return f.CollectionLevelChanged(token); });
    }
    inline auto PlatformDiagnosticsAndUsageDataSettings::CanCollectDiagnostics(Windows::System::Profile::PlatformDataCollectionLevel const& level)
    {
        return impl::call_factory<PlatformDiagnosticsAndUsageDataSettings, Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>([&](auto&& f) { return f.CanCollectDiagnostics(level); });
    }
    inline auto RetailInfo::IsDemoModeEnabled()
    {
        return impl::call_factory<RetailInfo, Windows::System::Profile::IRetailInfoStatics>([&](auto&& f) { return f.IsDemoModeEnabled(); });
    }
    inline auto RetailInfo::Properties()
    {
        return impl::call_factory<RetailInfo, Windows::System::Profile::IRetailInfoStatics>([&](auto&& f) { return f.Properties(); });
    }
    inline auto SharedModeSettings::IsEnabled()
    {
        return impl::call_factory<SharedModeSettings, Windows::System::Profile::ISharedModeSettingsStatics>([&](auto&& f) { return f.IsEnabled(); });
    }
    inline auto SharedModeSettings::ShouldAvoidLocalStorage()
    {
        return impl::call_factory<SharedModeSettings, Windows::System::Profile::ISharedModeSettingsStatics2>([&](auto&& f) { return f.ShouldAvoidLocalStorage(); });
    }
    inline auto SystemIdentification::GetSystemIdForPublisher()
    {
        return impl::call_factory<SystemIdentification, Windows::System::Profile::ISystemIdentificationStatics>([&](auto&& f) { return f.GetSystemIdForPublisher(); });
    }
    inline auto SystemIdentification::GetSystemIdForUser(Windows::System::User const& user)
    {
        return impl::call_factory<SystemIdentification, Windows::System::Profile::ISystemIdentificationStatics>([&](auto&& f) { return f.GetSystemIdForUser(user); });
    }
    inline auto SystemSetupInfo::OutOfBoxExperienceState()
    {
        return impl::call_factory<SystemSetupInfo, Windows::System::Profile::ISystemSetupInfoStatics>([&](auto&& f) { return f.OutOfBoxExperienceState(); });
    }
    inline auto SystemSetupInfo::OutOfBoxExperienceStateChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
    {
        return impl::call_factory<SystemSetupInfo, Windows::System::Profile::ISystemSetupInfoStatics>([&](auto&& f) { return f.OutOfBoxExperienceStateChanged(handler); });
    }
    inline SystemSetupInfo::OutOfBoxExperienceStateChanged_revoker SystemSetupInfo::OutOfBoxExperienceStateChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
    {
        auto f = get_activation_factory<SystemSetupInfo, Windows::System::Profile::ISystemSetupInfoStatics>();
        return { f, f.OutOfBoxExperienceStateChanged(handler) };
    }
    inline auto SystemSetupInfo::OutOfBoxExperienceStateChanged(winrt::event_token const& token)
    {
        impl::call_factory<SystemSetupInfo, Windows::System::Profile::ISystemSetupInfoStatics>([&](auto&& f) { return f.OutOfBoxExperienceStateChanged(token); });
    }
    inline auto WindowsIntegrityPolicy::IsEnabled()
    {
        return impl::call_factory<WindowsIntegrityPolicy, Windows::System::Profile::IWindowsIntegrityPolicyStatics>([&](auto&& f) { return f.IsEnabled(); });
    }
    inline auto WindowsIntegrityPolicy::IsEnabledForTrial()
    {
        return impl::call_factory<WindowsIntegrityPolicy, Windows::System::Profile::IWindowsIntegrityPolicyStatics>([&](auto&& f) { return f.IsEnabledForTrial(); });
    }
    inline auto WindowsIntegrityPolicy::CanDisable()
    {
        return impl::call_factory<WindowsIntegrityPolicy, Windows::System::Profile::IWindowsIntegrityPolicyStatics>([&](auto&& f) { return f.CanDisable(); });
    }
    inline auto WindowsIntegrityPolicy::IsDisableSupported()
    {
        return impl::call_factory<WindowsIntegrityPolicy, Windows::System::Profile::IWindowsIntegrityPolicyStatics>([&](auto&& f) { return f.IsDisableSupported(); });
    }
    inline auto WindowsIntegrityPolicy::PolicyChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
    {
        return impl::call_factory<WindowsIntegrityPolicy, Windows::System::Profile::IWindowsIntegrityPolicyStatics>([&](auto&& f) { return f.PolicyChanged(handler); });
    }
    inline WindowsIntegrityPolicy::PolicyChanged_revoker WindowsIntegrityPolicy::PolicyChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
    {
        auto f = get_activation_factory<WindowsIntegrityPolicy, Windows::System::Profile::IWindowsIntegrityPolicyStatics>();
        return { f, f.PolicyChanged(handler) };
    }
    inline auto WindowsIntegrityPolicy::PolicyChanged(winrt::event_token const& token)
    {
        impl::call_factory<WindowsIntegrityPolicy, Windows::System::Profile::IWindowsIntegrityPolicyStatics>([&](auto&& f) { return f.PolicyChanged(token); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::System::Profile::IAnalyticsInfoStatics> : winrt::impl::hash_base<winrt::Windows::System::Profile::IAnalyticsInfoStatics> {};
    template<> struct hash<winrt::Windows::System::Profile::IAnalyticsInfoStatics2> : winrt::impl::hash_base<winrt::Windows::System::Profile::IAnalyticsInfoStatics2> {};
    template<> struct hash<winrt::Windows::System::Profile::IAnalyticsVersionInfo> : winrt::impl::hash_base<winrt::Windows::System::Profile::IAnalyticsVersionInfo> {};
    template<> struct hash<winrt::Windows::System::Profile::IAppApplicabilityStatics> : winrt::impl::hash_base<winrt::Windows::System::Profile::IAppApplicabilityStatics> {};
    template<> struct hash<winrt::Windows::System::Profile::IEducationSettingsStatics> : winrt::impl::hash_base<winrt::Windows::System::Profile::IEducationSettingsStatics> {};
    template<> struct hash<winrt::Windows::System::Profile::IHardwareIdentificationStatics> : winrt::impl::hash_base<winrt::Windows::System::Profile::IHardwareIdentificationStatics> {};
    template<> struct hash<winrt::Windows::System::Profile::IHardwareToken> : winrt::impl::hash_base<winrt::Windows::System::Profile::IHardwareToken> {};
    template<> struct hash<winrt::Windows::System::Profile::IKnownRetailInfoPropertiesStatics> : winrt::impl::hash_base<winrt::Windows::System::Profile::IKnownRetailInfoPropertiesStatics> {};
    template<> struct hash<winrt::Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics> : winrt::impl::hash_base<winrt::Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics> {};
    template<> struct hash<winrt::Windows::System::Profile::IRetailInfoStatics> : winrt::impl::hash_base<winrt::Windows::System::Profile::IRetailInfoStatics> {};
    template<> struct hash<winrt::Windows::System::Profile::ISharedModeSettingsStatics> : winrt::impl::hash_base<winrt::Windows::System::Profile::ISharedModeSettingsStatics> {};
    template<> struct hash<winrt::Windows::System::Profile::ISharedModeSettingsStatics2> : winrt::impl::hash_base<winrt::Windows::System::Profile::ISharedModeSettingsStatics2> {};
    template<> struct hash<winrt::Windows::System::Profile::ISystemIdentificationInfo> : winrt::impl::hash_base<winrt::Windows::System::Profile::ISystemIdentificationInfo> {};
    template<> struct hash<winrt::Windows::System::Profile::ISystemIdentificationStatics> : winrt::impl::hash_base<winrt::Windows::System::Profile::ISystemIdentificationStatics> {};
    template<> struct hash<winrt::Windows::System::Profile::ISystemSetupInfoStatics> : winrt::impl::hash_base<winrt::Windows::System::Profile::ISystemSetupInfoStatics> {};
    template<> struct hash<winrt::Windows::System::Profile::IUnsupportedAppRequirement> : winrt::impl::hash_base<winrt::Windows::System::Profile::IUnsupportedAppRequirement> {};
    template<> struct hash<winrt::Windows::System::Profile::IWindowsIntegrityPolicyStatics> : winrt::impl::hash_base<winrt::Windows::System::Profile::IWindowsIntegrityPolicyStatics> {};
    template<> struct hash<winrt::Windows::System::Profile::AnalyticsInfo> : winrt::impl::hash_base<winrt::Windows::System::Profile::AnalyticsInfo> {};
    template<> struct hash<winrt::Windows::System::Profile::AnalyticsVersionInfo> : winrt::impl::hash_base<winrt::Windows::System::Profile::AnalyticsVersionInfo> {};
    template<> struct hash<winrt::Windows::System::Profile::AppApplicability> : winrt::impl::hash_base<winrt::Windows::System::Profile::AppApplicability> {};
    template<> struct hash<winrt::Windows::System::Profile::EducationSettings> : winrt::impl::hash_base<winrt::Windows::System::Profile::EducationSettings> {};
    template<> struct hash<winrt::Windows::System::Profile::HardwareIdentification> : winrt::impl::hash_base<winrt::Windows::System::Profile::HardwareIdentification> {};
    template<> struct hash<winrt::Windows::System::Profile::HardwareToken> : winrt::impl::hash_base<winrt::Windows::System::Profile::HardwareToken> {};
    template<> struct hash<winrt::Windows::System::Profile::KnownRetailInfoProperties> : winrt::impl::hash_base<winrt::Windows::System::Profile::KnownRetailInfoProperties> {};
    template<> struct hash<winrt::Windows::System::Profile::PlatformDiagnosticsAndUsageDataSettings> : winrt::impl::hash_base<winrt::Windows::System::Profile::PlatformDiagnosticsAndUsageDataSettings> {};
    template<> struct hash<winrt::Windows::System::Profile::RetailInfo> : winrt::impl::hash_base<winrt::Windows::System::Profile::RetailInfo> {};
    template<> struct hash<winrt::Windows::System::Profile::SharedModeSettings> : winrt::impl::hash_base<winrt::Windows::System::Profile::SharedModeSettings> {};
    template<> struct hash<winrt::Windows::System::Profile::SystemIdentification> : winrt::impl::hash_base<winrt::Windows::System::Profile::SystemIdentification> {};
    template<> struct hash<winrt::Windows::System::Profile::SystemIdentificationInfo> : winrt::impl::hash_base<winrt::Windows::System::Profile::SystemIdentificationInfo> {};
    template<> struct hash<winrt::Windows::System::Profile::SystemSetupInfo> : winrt::impl::hash_base<winrt::Windows::System::Profile::SystemSetupInfo> {};
    template<> struct hash<winrt::Windows::System::Profile::UnsupportedAppRequirement> : winrt::impl::hash_base<winrt::Windows::System::Profile::UnsupportedAppRequirement> {};
    template<> struct hash<winrt::Windows::System::Profile::WindowsIntegrityPolicy> : winrt::impl::hash_base<winrt::Windows::System::Profile::WindowsIntegrityPolicy> {};
}
#endif
