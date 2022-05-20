// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Activation_H
#define WINRT_Windows_ApplicationModel_Activation_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.ApplicationModel.h"
#include "winrt/impl/Windows.ApplicationModel.Appointments.AppointmentsProvider.2.h"
#include "winrt/impl/Windows.ApplicationModel.Background.2.h"
#include "winrt/impl/Windows.ApplicationModel.Calls.2.h"
#include "winrt/impl/Windows.ApplicationModel.Contacts.2.h"
#include "winrt/impl/Windows.ApplicationModel.Contacts.Provider.2.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.ShareTarget.2.h"
#include "winrt/impl/Windows.ApplicationModel.Search.2.h"
#include "winrt/impl/Windows.ApplicationModel.UserDataAccounts.Provider.2.h"
#include "winrt/impl/Windows.ApplicationModel.Wallet.2.h"
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/impl/Windows.Devices.Printers.Extensions.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Media.SpeechRecognition.2.h"
#include "winrt/impl/Windows.Security.Authentication.Web.2.h"
#include "winrt/impl/Windows.Security.Authentication.Web.Provider.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Pickers.Provider.2.h"
#include "winrt/impl/Windows.Storage.Provider.2.h"
#include "winrt/impl/Windows.Storage.Search.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.UI.Notifications.2.h"
#include "winrt/impl/Windows.UI.ViewManagement.2.h"
#include "winrt/impl/Windows.ApplicationModel.Activation.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IActivatedEventArgs<D>::Kind() const
    {
        Windows::ApplicationModel::Activation::ActivationKind value;
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IActivatedEventArgs)->get_Kind(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IActivatedEventArgs<D>::PreviousExecutionState() const
    {
        Windows::ApplicationModel::Activation::ApplicationExecutionState value;
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IActivatedEventArgs)->get_PreviousExecutionState(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IActivatedEventArgs<D>::SplashScreen() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IActivatedEventArgs)->get_SplashScreen(&value));
        return Windows::ApplicationModel::Activation::SplashScreen{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IActivatedEventArgsWithUser<D>::User() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser)->get_User(&value));
        return Windows::System::User{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IApplicationViewActivatedEventArgs<D>::CurrentlyShownApplicationViewId() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs)->get_CurrentlyShownApplicationViewId(&value));
        return value;
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IAppointmentsProviderActivatedEventArgs<D>::Verb() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs)->get_Verb(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IAppointmentsProviderAddAppointmentActivatedEventArgs<D>::AddAppointmentOperation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs)->get_AddAppointmentOperation(&value));
        return Windows::ApplicationModel::Appointments::AppointmentsProvider::AddAppointmentOperation{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IAppointmentsProviderRemoveAppointmentActivatedEventArgs<D>::RemoveAppointmentOperation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs)->get_RemoveAppointmentOperation(&value));
        return Windows::ApplicationModel::Appointments::AppointmentsProvider::RemoveAppointmentOperation{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IAppointmentsProviderReplaceAppointmentActivatedEventArgs<D>::ReplaceAppointmentOperation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs)->get_ReplaceAppointmentOperation(&value));
        return Windows::ApplicationModel::Appointments::AppointmentsProvider::ReplaceAppointmentOperation{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs<D>::InstanceStartDate() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs)->get_InstanceStartDate(&value));
        return Windows::Foundation::IReference<Windows::Foundation::DateTime>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs<D>::LocalId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs)->get_LocalId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs<D>::RoamingId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs)->get_RoamingId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IAppointmentsProviderShowTimeFrameActivatedEventArgs<D>::TimeToShow() const
    {
        Windows::Foundation::DateTime value;
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs)->get_TimeToShow(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IAppointmentsProviderShowTimeFrameActivatedEventArgs<D>::Duration() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs)->get_Duration(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IBackgroundActivatedEventArgs<D>::TaskInstance() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs)->get_TaskInstance(&value));
        return Windows::ApplicationModel::Background::IBackgroundTaskInstance{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IBarcodeScannerPreviewActivatedEventArgs<D>::ConnectionId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IBarcodeScannerPreviewActivatedEventArgs)->get_ConnectionId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_ICachedFileUpdaterActivatedEventArgs<D>::CachedFileUpdaterUI() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs)->get_CachedFileUpdaterUI(&value));
        return Windows::Storage::Provider::CachedFileUpdaterUI{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_ICameraSettingsActivatedEventArgs<D>::VideoDeviceController() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs)->get_VideoDeviceController(&value));
        return Windows::Foundation::IInspectable{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_ICameraSettingsActivatedEventArgs<D>::VideoDeviceExtension() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs)->get_VideoDeviceExtension(&value));
        return Windows::Foundation::IInspectable{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_ICommandLineActivatedEventArgs<D>::Operation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::ICommandLineActivatedEventArgs)->get_Operation(&value));
        return Windows::ApplicationModel::Activation::CommandLineActivationOperation{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_ICommandLineActivationOperation<D>::Arguments() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::ICommandLineActivationOperation)->get_Arguments(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_ICommandLineActivationOperation<D>::CurrentDirectoryPath() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::ICommandLineActivationOperation)->get_CurrentDirectoryPath(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_ICommandLineActivationOperation<D>::ExitCode(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::ICommandLineActivationOperation)->put_ExitCode(value));
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_ICommandLineActivationOperation<D>::ExitCode() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::ICommandLineActivationOperation)->get_ExitCode(&value));
        return value;
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_ICommandLineActivationOperation<D>::GetDeferral() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::ICommandLineActivationOperation)->GetDeferral(&value));
        return Windows::Foundation::Deferral{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IContactActivatedEventArgs<D>::Verb() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IContactActivatedEventArgs)->get_Verb(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IContactCallActivatedEventArgs<D>::ServiceId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs)->get_ServiceId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IContactCallActivatedEventArgs<D>::ServiceUserId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs)->get_ServiceUserId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IContactCallActivatedEventArgs<D>::Contact() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs)->get_Contact(&value));
        return Windows::ApplicationModel::Contacts::Contact{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IContactMapActivatedEventArgs<D>::Address() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs)->get_Address(&value));
        return Windows::ApplicationModel::Contacts::ContactAddress{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IContactMapActivatedEventArgs<D>::Contact() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs)->get_Contact(&value));
        return Windows::ApplicationModel::Contacts::Contact{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IContactMessageActivatedEventArgs<D>::ServiceId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs)->get_ServiceId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IContactMessageActivatedEventArgs<D>::ServiceUserId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs)->get_ServiceUserId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IContactMessageActivatedEventArgs<D>::Contact() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs)->get_Contact(&value));
        return Windows::ApplicationModel::Contacts::Contact{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IContactPanelActivatedEventArgs<D>::ContactPanel() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs)->get_ContactPanel(&value));
        return Windows::ApplicationModel::Contacts::ContactPanel{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IContactPanelActivatedEventArgs<D>::Contact() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs)->get_Contact(&value));
        return Windows::ApplicationModel::Contacts::Contact{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IContactPickerActivatedEventArgs<D>::ContactPickerUI() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs)->get_ContactPickerUI(&value));
        return Windows::ApplicationModel::Contacts::Provider::ContactPickerUI{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IContactPostActivatedEventArgs<D>::ServiceId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs)->get_ServiceId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IContactPostActivatedEventArgs<D>::ServiceUserId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs)->get_ServiceUserId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IContactPostActivatedEventArgs<D>::Contact() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs)->get_Contact(&value));
        return Windows::ApplicationModel::Contacts::Contact{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IContactVideoCallActivatedEventArgs<D>::ServiceId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs)->get_ServiceId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IContactVideoCallActivatedEventArgs<D>::ServiceUserId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs)->get_ServiceUserId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IContactVideoCallActivatedEventArgs<D>::Contact() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs)->get_Contact(&value));
        return Windows::ApplicationModel::Contacts::Contact{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IContactsProviderActivatedEventArgs<D>::Verb() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IContactsProviderActivatedEventArgs)->get_Verb(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IContinuationActivatedEventArgs<D>::ContinuationData() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs)->get_ContinuationData(&value));
        return Windows::Foundation::Collections::ValueSet{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IDeviceActivatedEventArgs<D>::DeviceInformationId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs)->get_DeviceInformationId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IDeviceActivatedEventArgs<D>::Verb() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs)->get_Verb(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IDevicePairingActivatedEventArgs<D>::DeviceInformation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs)->get_DeviceInformation(&value));
        return Windows::Devices::Enumeration::DeviceInformation{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IDialReceiverActivatedEventArgs<D>::AppName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs)->get_AppName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IFileActivatedEventArgs<D>::Files() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IFileActivatedEventArgs)->get_Files(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IFileActivatedEventArgs<D>::Verb() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IFileActivatedEventArgs)->get_Verb(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IFileActivatedEventArgsWithCallerPackageFamilyName<D>::CallerPackageFamilyName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName)->get_CallerPackageFamilyName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IFileActivatedEventArgsWithNeighboringFiles<D>::NeighboringFilesQuery() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles)->get_NeighboringFilesQuery(&value));
        return Windows::Storage::Search::StorageFileQueryResult{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IFileOpenPickerActivatedEventArgs<D>::FileOpenPickerUI() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs)->get_FileOpenPickerUI(&value));
        return Windows::Storage::Pickers::Provider::FileOpenPickerUI{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IFileOpenPickerActivatedEventArgs2<D>::CallerPackageFamilyName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2)->get_CallerPackageFamilyName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IFileOpenPickerContinuationEventArgs<D>::Files() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs)->get_Files(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IFileSavePickerActivatedEventArgs<D>::FileSavePickerUI() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs)->get_FileSavePickerUI(&value));
        return Windows::Storage::Pickers::Provider::FileSavePickerUI{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IFileSavePickerActivatedEventArgs2<D>::CallerPackageFamilyName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2)->get_CallerPackageFamilyName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IFileSavePickerActivatedEventArgs2<D>::EnterpriseId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2)->get_EnterpriseId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IFileSavePickerContinuationEventArgs<D>::File() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs)->get_File(&value));
        return Windows::Storage::StorageFile{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IFolderPickerContinuationEventArgs<D>::Folder() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs)->get_Folder(&value));
        return Windows::Storage::StorageFolder{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_ILaunchActivatedEventArgs<D>::Arguments() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs)->get_Arguments(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_ILaunchActivatedEventArgs<D>::TileId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs)->get_TileId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_ILaunchActivatedEventArgs2<D>::TileActivatedInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2)->get_TileActivatedInfo(&value));
        return Windows::ApplicationModel::Activation::TileActivatedInfo{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_ILockScreenActivatedEventArgs<D>::Info() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs)->get_Info(&value));
        return Windows::Foundation::IInspectable{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_ILockScreenCallActivatedEventArgs<D>::CallUI() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs)->get_CallUI(&value));
        return Windows::ApplicationModel::Calls::LockScreenCallUI{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IPickerReturnedActivatedEventArgs<D>::PickerOperationId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs)->get_PickerOperationId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IPrelaunchActivatedEventArgs<D>::PrelaunchActivated() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs)->get_PrelaunchActivated(&value));
        return value;
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IPrint3DWorkflowActivatedEventArgs<D>::Workflow() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs)->get_Workflow(&value));
        return Windows::Devices::Printers::Extensions::Print3DWorkflow{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IPrintTaskSettingsActivatedEventArgs<D>::Configuration() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs)->get_Configuration(&value));
        return Windows::Devices::Printers::Extensions::PrintTaskConfiguration{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IProtocolActivatedEventArgs<D>::Uri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs)->get_Uri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData<D>::CallerPackageFamilyName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData)->get_CallerPackageFamilyName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData<D>::Data() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData)->get_Data(&value));
        return Windows::Foundation::Collections::ValueSet{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IProtocolForResultsActivatedEventArgs<D>::ProtocolForResultsOperation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs)->get_ProtocolForResultsOperation(&value));
        return Windows::System::ProtocolForResultsOperation{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IRestrictedLaunchActivatedEventArgs<D>::SharedContext() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs)->get_SharedContext(&value));
        return Windows::Foundation::IInspectable{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_ISearchActivatedEventArgs<D>::QueryText() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::ISearchActivatedEventArgs)->get_QueryText(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_ISearchActivatedEventArgs<D>::Language() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::ISearchActivatedEventArgs)->get_Language(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_ISearchActivatedEventArgsWithLinguisticDetails<D>::LinguisticDetails() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails)->get_LinguisticDetails(&value));
        return Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IShareTargetActivatedEventArgs<D>::ShareOperation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs)->get_ShareOperation(&value));
        return Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_ISplashScreen<D>::ImageLocation() const
    {
        Windows::Foundation::Rect value;
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::ISplashScreen)->get_ImageLocation(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_ISplashScreen<D>::Dismissed(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token cookie;
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::ISplashScreen)->add_Dismissed(*(void**)(&handler), put_abi(cookie)));
        return cookie;
    }
    template <typename D> typename consume_Windows_ApplicationModel_Activation_ISplashScreen<D>::Dismissed_revoker consume_Windows_ApplicationModel_Activation_ISplashScreen<D>::Dismissed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, Dismissed_revoker>(this, Dismissed(handler));
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_ISplashScreen<D>::Dismissed(winrt::event_token const& cookie) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::ISplashScreen)->remove_Dismissed(impl::bind_in(cookie)));
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IStartupTaskActivatedEventArgs<D>::TaskId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs)->get_TaskId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_ITileActivatedInfo<D>::RecentlyShownNotifications() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::ITileActivatedInfo)->get_RecentlyShownNotifications(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ShownTileNotification>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IToastNotificationActivatedEventArgs<D>::Argument() const
    {
        void* argument{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs)->get_Argument(&argument));
        return hstring{ argument, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IToastNotificationActivatedEventArgs<D>::UserInput() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs)->get_UserInput(&value));
        return Windows::Foundation::Collections::ValueSet{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IUserDataAccountProviderActivatedEventArgs<D>::Operation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs)->get_Operation(&value));
        return Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IViewSwitcherProvider<D>::ViewSwitcher() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IViewSwitcherProvider)->get_ViewSwitcher(&value));
        return Windows::UI::ViewManagement::ActivationViewSwitcher{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IVoiceCommandActivatedEventArgs<D>::Result() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs)->get_Result(&value));
        return Windows::Media::SpeechRecognition::SpeechRecognitionResult{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IWalletActionActivatedEventArgs<D>::ItemId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs)->get_ItemId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IWalletActionActivatedEventArgs<D>::ActionKind() const
    {
        Windows::ApplicationModel::Wallet::WalletActionKind value;
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs)->get_ActionKind(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IWalletActionActivatedEventArgs<D>::ActionId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs)->get_ActionId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IWebAccountProviderActivatedEventArgs<D>::Operation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs)->get_Operation(&value));
        return Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Activation_IWebAuthenticationBrokerContinuationEventArgs<D>::WebAuthenticationResult() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs)->get_WebAuthenticationResult(&result));
        return Windows::Security::Authentication::Web::WebAuthenticationResult{ result, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        int32_t __stdcall get_Kind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Activation::ActivationKind>(this->shim().Kind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PreviousExecutionState(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Activation::ApplicationExecutionState>(this->shim().PreviousExecutionState());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SplashScreen(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Activation::SplashScreen>(this->shim().SplashScreen());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser> : produce_base<D, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        int32_t __stdcall get_User(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::User>(this->shim().User());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs>
    {
        int32_t __stdcall get_CurrentlyShownApplicationViewId(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().CurrentlyShownApplicationViewId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>
    {
        int32_t __stdcall get_Verb(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Verb());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs>
    {
        int32_t __stdcall get_AddAppointmentOperation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentsProvider::AddAppointmentOperation>(this->shim().AddAppointmentOperation());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs>
    {
        int32_t __stdcall get_RemoveAppointmentOperation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentsProvider::RemoveAppointmentOperation>(this->shim().RemoveAppointmentOperation());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs>
    {
        int32_t __stdcall get_ReplaceAppointmentOperation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentsProvider::ReplaceAppointmentOperation>(this->shim().ReplaceAppointmentOperation());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs>
    {
        int32_t __stdcall get_InstanceStartDate(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::DateTime>>(this->shim().InstanceStartDate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LocalId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().LocalId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RoamingId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RoamingId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs>
    {
        int32_t __stdcall get_TimeToShow(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().TimeToShow());
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
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs>
    {
        int32_t __stdcall get_TaskInstance(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Background::IBackgroundTaskInstance>(this->shim().TaskInstance());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IBarcodeScannerPreviewActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IBarcodeScannerPreviewActivatedEventArgs>
    {
        int32_t __stdcall get_ConnectionId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ConnectionId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs>
    {
        int32_t __stdcall get_CachedFileUpdaterUI(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::CachedFileUpdaterUI>(this->shim().CachedFileUpdaterUI());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs>
    {
        int32_t __stdcall get_VideoDeviceController(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().VideoDeviceController());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VideoDeviceExtension(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().VideoDeviceExtension());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::ICommandLineActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::ICommandLineActivatedEventArgs>
    {
        int32_t __stdcall get_Operation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Activation::CommandLineActivationOperation>(this->shim().Operation());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::ICommandLineActivationOperation> : produce_base<D, Windows::ApplicationModel::Activation::ICommandLineActivationOperation>
    {
        int32_t __stdcall get_Arguments(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Arguments());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CurrentDirectoryPath(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CurrentDirectoryPath());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ExitCode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExitCode(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExitCode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ExitCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IContactActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactActivatedEventArgs>
    {
        int32_t __stdcall get_Verb(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Verb());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs>
    {
        int32_t __stdcall get_ServiceId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ServiceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ServiceUserId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ServiceUserId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Contact(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Contacts::Contact>(this->shim().Contact());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs>
    {
        int32_t __stdcall get_Address(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Contacts::ContactAddress>(this->shim().Address());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Contact(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Contacts::Contact>(this->shim().Contact());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs>
    {
        int32_t __stdcall get_ServiceId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ServiceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ServiceUserId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ServiceUserId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Contact(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Contacts::Contact>(this->shim().Contact());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs>
    {
        int32_t __stdcall get_ContactPanel(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Contacts::ContactPanel>(this->shim().ContactPanel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Contact(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Contacts::Contact>(this->shim().Contact());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs>
    {
        int32_t __stdcall get_ContactPickerUI(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Contacts::Provider::ContactPickerUI>(this->shim().ContactPickerUI());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs>
    {
        int32_t __stdcall get_ServiceId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ServiceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ServiceUserId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ServiceUserId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Contact(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Contacts::Contact>(this->shim().Contact());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs>
    {
        int32_t __stdcall get_ServiceId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ServiceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ServiceUserId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ServiceUserId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Contact(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Contacts::Contact>(this->shim().Contact());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IContactsProviderActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactsProviderActivatedEventArgs>
    {
        int32_t __stdcall get_Verb(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Verb());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs>
    {
        int32_t __stdcall get_ContinuationData(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::ValueSet>(this->shim().ContinuationData());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs>
    {
        int32_t __stdcall get_DeviceInformationId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceInformationId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Verb(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Verb());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs>
    {
        int32_t __stdcall get_DeviceInformation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Enumeration::DeviceInformation>(this->shim().DeviceInformation());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs>
    {
        int32_t __stdcall get_AppName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AppName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IFileActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IFileActivatedEventArgs>
    {
        int32_t __stdcall get_Files(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>>(this->shim().Files());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Verb(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Verb());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName> : produce_base<D, Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName>
    {
        int32_t __stdcall get_CallerPackageFamilyName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CallerPackageFamilyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles> : produce_base<D, Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles>
    {
        int32_t __stdcall get_NeighboringFilesQuery(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Search::StorageFileQueryResult>(this->shim().NeighboringFilesQuery());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs>
    {
        int32_t __stdcall get_FileOpenPickerUI(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Pickers::Provider::FileOpenPickerUI>(this->shim().FileOpenPickerUI());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2> : produce_base<D, Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2>
    {
        int32_t __stdcall get_CallerPackageFamilyName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CallerPackageFamilyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs>
    {
        int32_t __stdcall get_Files(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>>(this->shim().Files());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs>
    {
        int32_t __stdcall get_FileSavePickerUI(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Pickers::Provider::FileSavePickerUI>(this->shim().FileSavePickerUI());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2> : produce_base<D, Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2>
    {
        int32_t __stdcall get_CallerPackageFamilyName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CallerPackageFamilyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EnterpriseId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EnterpriseId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs>
    {
        int32_t __stdcall get_File(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::StorageFile>(this->shim().File());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs>
    {
        int32_t __stdcall get_Folder(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::StorageFolder>(this->shim().Folder());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>
    {
        int32_t __stdcall get_Arguments(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Arguments());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TileId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TileId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2> : produce_base<D, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>
    {
        int32_t __stdcall get_TileActivatedInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Activation::TileActivatedInfo>(this->shim().TileActivatedInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs>
    {
        int32_t __stdcall get_Info(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().Info());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs>
    {
        int32_t __stdcall get_CallUI(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Calls::LockScreenCallUI>(this->shim().CallUI());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs>
    {
        int32_t __stdcall get_PickerOperationId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PickerOperationId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>
    {
        int32_t __stdcall get_PrelaunchActivated(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().PrelaunchActivated());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs>
    {
        int32_t __stdcall get_Workflow(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Printers::Extensions::Print3DWorkflow>(this->shim().Workflow());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs>
    {
        int32_t __stdcall get_Configuration(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Printers::Extensions::PrintTaskConfiguration>(this->shim().Configuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>
    {
        int32_t __stdcall get_Uri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Uri());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData> : produce_base<D, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData>
    {
        int32_t __stdcall get_CallerPackageFamilyName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CallerPackageFamilyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Data(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::ValueSet>(this->shim().Data());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs>
    {
        int32_t __stdcall get_ProtocolForResultsOperation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::ProtocolForResultsOperation>(this->shim().ProtocolForResultsOperation());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs>
    {
        int32_t __stdcall get_SharedContext(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().SharedContext());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::ISearchActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::ISearchActivatedEventArgs>
    {
        int32_t __stdcall get_QueryText(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().QueryText());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Language(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Language());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails> : produce_base<D, Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails>
    {
        int32_t __stdcall get_LinguisticDetails(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails>(this->shim().LinguisticDetails());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs>
    {
        int32_t __stdcall get_ShareOperation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation>(this->shim().ShareOperation());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::ISplashScreen> : produce_base<D, Windows::ApplicationModel::Activation::ISplashScreen>
    {
        int32_t __stdcall get_ImageLocation(Windows::Foundation::Rect* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Rect>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().ImageLocation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_Dismissed(void* handler, winrt::event_token* cookie) noexcept final try
        {
            zero_abi<winrt::event_token>(cookie);
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<winrt::event_token>(this->shim().Dismissed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Dismissed(winrt::event_token cookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Dismissed(*reinterpret_cast<winrt::event_token const*>(&cookie));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>
    {
        int32_t __stdcall get_TaskId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TaskId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::ITileActivatedInfo> : produce_base<D, Windows::ApplicationModel::Activation::ITileActivatedInfo>
    {
        int32_t __stdcall get_RecentlyShownNotifications(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ShownTileNotification>>(this->shim().RecentlyShownNotifications());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs>
    {
        int32_t __stdcall get_Argument(void** argument) noexcept final try
        {
            clear_abi(argument);
            typename D::abi_guard guard(this->shim());
            *argument = detach_from<hstring>(this->shim().Argument());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UserInput(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::ValueSet>(this->shim().UserInput());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs>
    {
        int32_t __stdcall get_Operation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation>(this->shim().Operation());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IViewSwitcherProvider> : produce_base<D, Windows::ApplicationModel::Activation::IViewSwitcherProvider>
    {
        int32_t __stdcall get_ViewSwitcher(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::ViewManagement::ActivationViewSwitcher>(this->shim().ViewSwitcher());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs>
    {
        int32_t __stdcall get_Result(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SpeechRecognition::SpeechRecognitionResult>(this->shim().Result());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs>
    {
        int32_t __stdcall get_ItemId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ItemId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ActionKind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Wallet::WalletActionKind>(this->shim().ActionKind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ActionId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ActionId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs>
    {
        int32_t __stdcall get_Operation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>(this->shim().Operation());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs>
    {
        int32_t __stdcall get_WebAuthenticationResult(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Security::Authentication::Web::WebAuthenticationResult>(this->shim().WebAuthenticationResult());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::ApplicationModel::Activation
{
}
namespace std
{
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IBarcodeScannerPreviewActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IBarcodeScannerPreviewActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::ICommandLineActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ICommandLineActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::ICommandLineActivationOperation> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ICommandLineActivationOperation> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContactActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IContactActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContactsProviderActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IContactsProviderActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::ISearchActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ISearchActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::ISplashScreen> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ISplashScreen> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::ITileActivatedInfo> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ITileActivatedInfo> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IViewSwitcherProvider> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IViewSwitcherProvider> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderAddAppointmentActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderAddAppointmentActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderRemoveAppointmentActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderRemoveAppointmentActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderReplaceAppointmentActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderReplaceAppointmentActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderShowAppointmentDetailsActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderShowAppointmentDetailsActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderShowTimeFrameActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderShowTimeFrameActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::BarcodeScannerPreviewActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::BarcodeScannerPreviewActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::CachedFileUpdaterActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::CachedFileUpdaterActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::CameraSettingsActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::CameraSettingsActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::CommandLineActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::CommandLineActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::CommandLineActivationOperation> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::CommandLineActivationOperation> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::ContactCallActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ContactCallActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::ContactMapActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ContactMapActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::ContactMessageActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ContactMessageActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::ContactPanelActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ContactPanelActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::ContactPickerActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ContactPickerActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::ContactPostActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ContactPostActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::ContactVideoCallActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ContactVideoCallActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::DeviceActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::DeviceActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::DevicePairingActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::DevicePairingActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::DialReceiverActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::DialReceiverActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::FileActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::FileActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::FileOpenPickerActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::FileOpenPickerActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::FileOpenPickerContinuationEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::FileOpenPickerContinuationEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::FileSavePickerActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::FileSavePickerActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::FileSavePickerContinuationEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::FileSavePickerContinuationEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::FolderPickerContinuationEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::FolderPickerContinuationEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::LaunchActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::LaunchActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::LockScreenActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::LockScreenActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::LockScreenCallActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::LockScreenCallActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::LockScreenComponentActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::LockScreenComponentActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::PickerReturnedActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::PickerReturnedActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::Print3DWorkflowActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::Print3DWorkflowActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::PrintTaskSettingsActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::PrintTaskSettingsActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::ProtocolActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ProtocolActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::ProtocolForResultsActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ProtocolForResultsActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::RestrictedLaunchActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::RestrictedLaunchActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::SearchActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::SearchActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::ShareTargetActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ShareTargetActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::SplashScreen> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::SplashScreen> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::StartupTaskActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::StartupTaskActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::TileActivatedInfo> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::TileActivatedInfo> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::ToastNotificationActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ToastNotificationActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::UserDataAccountProviderActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::UserDataAccountProviderActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::VoiceCommandActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::VoiceCommandActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::WalletActionActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::WalletActionActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::WebAccountProviderActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::WebAccountProviderActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Activation::WebAuthenticationBrokerContinuationEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::WebAuthenticationBrokerContinuationEventArgs> {};
}
#endif
