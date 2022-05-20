// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Devices_2_H
#define WINRT_Windows_Media_Devices_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Media.Devices.1.h"
namespace winrt::Windows::Media::Devices
{
    struct CallControlEventHandler : Windows::Foundation::IUnknown
    {
        CallControlEventHandler(std::nullptr_t = nullptr) noexcept {}
        CallControlEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> CallControlEventHandler(L lambda);
        template <typename F> CallControlEventHandler(F* function);
        template <typename O, typename M> CallControlEventHandler(O* object, M method);
        template <typename O, typename M> CallControlEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> CallControlEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Media::Devices::CallControl const& sender) const;
    };
    struct DialRequestedEventHandler : Windows::Foundation::IUnknown
    {
        DialRequestedEventHandler(std::nullptr_t = nullptr) noexcept {}
        DialRequestedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> DialRequestedEventHandler(L lambda);
        template <typename F> DialRequestedEventHandler(F* function);
        template <typename O, typename M> DialRequestedEventHandler(O* object, M method);
        template <typename O, typename M> DialRequestedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> DialRequestedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Media::Devices::CallControl const& sender, Windows::Media::Devices::DialRequestedEventArgs const& e) const;
    };
    struct KeypadPressedEventHandler : Windows::Foundation::IUnknown
    {
        KeypadPressedEventHandler(std::nullptr_t = nullptr) noexcept {}
        KeypadPressedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> KeypadPressedEventHandler(L lambda);
        template <typename F> KeypadPressedEventHandler(F* function);
        template <typename O, typename M> KeypadPressedEventHandler(O* object, M method);
        template <typename O, typename M> KeypadPressedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> KeypadPressedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Media::Devices::CallControl const& sender, Windows::Media::Devices::KeypadPressedEventArgs const& e) const;
    };
    struct RedialRequestedEventHandler : Windows::Foundation::IUnknown
    {
        RedialRequestedEventHandler(std::nullptr_t = nullptr) noexcept {}
        RedialRequestedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> RedialRequestedEventHandler(L lambda);
        template <typename F> RedialRequestedEventHandler(F* function);
        template <typename O, typename M> RedialRequestedEventHandler(O* object, M method);
        template <typename O, typename M> RedialRequestedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> RedialRequestedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Media::Devices::CallControl const& sender, Windows::Media::Devices::RedialRequestedEventArgs const& e) const;
    };
    struct __declspec(empty_bases) AdvancedPhotoCaptureSettings : Windows::Media::Devices::IAdvancedPhotoCaptureSettings
    {
        AdvancedPhotoCaptureSettings(std::nullptr_t) noexcept {}
        AdvancedPhotoCaptureSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IAdvancedPhotoCaptureSettings(ptr, take_ownership_from_abi) {}
        AdvancedPhotoCaptureSettings();
    };
    struct __declspec(empty_bases) AdvancedPhotoControl : Windows::Media::Devices::IAdvancedPhotoControl
    {
        AdvancedPhotoControl(std::nullptr_t) noexcept {}
        AdvancedPhotoControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IAdvancedPhotoControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AudioDeviceController : Windows::Media::Devices::IAudioDeviceController
    {
        AudioDeviceController(std::nullptr_t) noexcept {}
        AudioDeviceController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IAudioDeviceController(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AudioDeviceModule : Windows::Media::Devices::IAudioDeviceModule
    {
        AudioDeviceModule(std::nullptr_t) noexcept {}
        AudioDeviceModule(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IAudioDeviceModule(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AudioDeviceModuleNotificationEventArgs : Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs
    {
        AudioDeviceModuleNotificationEventArgs(std::nullptr_t) noexcept {}
        AudioDeviceModuleNotificationEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AudioDeviceModulesManager : Windows::Media::Devices::IAudioDeviceModulesManager
    {
        AudioDeviceModulesManager(std::nullptr_t) noexcept {}
        AudioDeviceModulesManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IAudioDeviceModulesManager(ptr, take_ownership_from_abi) {}
        AudioDeviceModulesManager(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) CallControl : Windows::Media::Devices::ICallControl
    {
        CallControl(std::nullptr_t) noexcept {}
        CallControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::ICallControl(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto FromId(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) DefaultAudioCaptureDeviceChangedEventArgs : Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs
    {
        DefaultAudioCaptureDeviceChangedEventArgs(std::nullptr_t) noexcept {}
        DefaultAudioCaptureDeviceChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DefaultAudioRenderDeviceChangedEventArgs : Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs
    {
        DefaultAudioRenderDeviceChangedEventArgs(std::nullptr_t) noexcept {}
        DefaultAudioRenderDeviceChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DialRequestedEventArgs : Windows::Media::Devices::IDialRequestedEventArgs
    {
        DialRequestedEventArgs(std::nullptr_t) noexcept {}
        DialRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IDialRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ExposureCompensationControl : Windows::Media::Devices::IExposureCompensationControl
    {
        ExposureCompensationControl(std::nullptr_t) noexcept {}
        ExposureCompensationControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IExposureCompensationControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ExposureControl : Windows::Media::Devices::IExposureControl
    {
        ExposureControl(std::nullptr_t) noexcept {}
        ExposureControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IExposureControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ExposurePriorityVideoControl : Windows::Media::Devices::IExposurePriorityVideoControl
    {
        ExposurePriorityVideoControl(std::nullptr_t) noexcept {}
        ExposurePriorityVideoControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IExposurePriorityVideoControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FlashControl : Windows::Media::Devices::IFlashControl,
        impl::require<FlashControl, Windows::Media::Devices::IFlashControl2>
    {
        FlashControl(std::nullptr_t) noexcept {}
        FlashControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IFlashControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FocusControl : Windows::Media::Devices::IFocusControl,
        impl::require<FocusControl, Windows::Media::Devices::IFocusControl2>
    {
        FocusControl(std::nullptr_t) noexcept {}
        FocusControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IFocusControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FocusSettings : Windows::Media::Devices::IFocusSettings
    {
        FocusSettings(std::nullptr_t) noexcept {}
        FocusSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IFocusSettings(ptr, take_ownership_from_abi) {}
        FocusSettings();
    };
    struct __declspec(empty_bases) HdrVideoControl : Windows::Media::Devices::IHdrVideoControl
    {
        HdrVideoControl(std::nullptr_t) noexcept {}
        HdrVideoControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IHdrVideoControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InfraredTorchControl : Windows::Media::Devices::IInfraredTorchControl
    {
        InfraredTorchControl(std::nullptr_t) noexcept {}
        InfraredTorchControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IInfraredTorchControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IsoSpeedControl : Windows::Media::Devices::IIsoSpeedControl,
        impl::require<IsoSpeedControl, Windows::Media::Devices::IIsoSpeedControl2>
    {
        IsoSpeedControl(std::nullptr_t) noexcept {}
        IsoSpeedControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IIsoSpeedControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) KeypadPressedEventArgs : Windows::Media::Devices::IKeypadPressedEventArgs
    {
        KeypadPressedEventArgs(std::nullptr_t) noexcept {}
        KeypadPressedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IKeypadPressedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LowLagPhotoControl : Windows::Media::Devices::ILowLagPhotoControl
    {
        LowLagPhotoControl(std::nullptr_t) noexcept {}
        LowLagPhotoControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::ILowLagPhotoControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LowLagPhotoSequenceControl : Windows::Media::Devices::ILowLagPhotoSequenceControl
    {
        LowLagPhotoSequenceControl(std::nullptr_t) noexcept {}
        LowLagPhotoSequenceControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::ILowLagPhotoSequenceControl(ptr, take_ownership_from_abi) {}
    };
    struct MediaDevice
    {
        MediaDevice() = delete;
        static auto GetAudioCaptureSelector();
        static auto GetAudioRenderSelector();
        static auto GetVideoCaptureSelector();
        static auto GetDefaultAudioCaptureId(Windows::Media::Devices::AudioDeviceRole const& role);
        static auto GetDefaultAudioRenderId(Windows::Media::Devices::AudioDeviceRole const& role);
        static auto DefaultAudioCaptureDeviceChanged(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> const& handler);
        using DefaultAudioCaptureDeviceChanged_revoker = impl::factory_event_revoker<Windows::Media::Devices::IMediaDeviceStatics, &impl::abi_t<Windows::Media::Devices::IMediaDeviceStatics>::remove_DefaultAudioCaptureDeviceChanged>;
        static DefaultAudioCaptureDeviceChanged_revoker DefaultAudioCaptureDeviceChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> const& handler);
        static auto DefaultAudioCaptureDeviceChanged(winrt::event_token const& cookie);
        static auto DefaultAudioRenderDeviceChanged(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> const& handler);
        using DefaultAudioRenderDeviceChanged_revoker = impl::factory_event_revoker<Windows::Media::Devices::IMediaDeviceStatics, &impl::abi_t<Windows::Media::Devices::IMediaDeviceStatics>::remove_DefaultAudioRenderDeviceChanged>;
        static DefaultAudioRenderDeviceChanged_revoker DefaultAudioRenderDeviceChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> const& handler);
        static auto DefaultAudioRenderDeviceChanged(winrt::event_token const& cookie);
    };
    struct __declspec(empty_bases) MediaDeviceControl : Windows::Media::Devices::IMediaDeviceControl
    {
        MediaDeviceControl(std::nullptr_t) noexcept {}
        MediaDeviceControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IMediaDeviceControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaDeviceControlCapabilities : Windows::Media::Devices::IMediaDeviceControlCapabilities
    {
        MediaDeviceControlCapabilities(std::nullptr_t) noexcept {}
        MediaDeviceControlCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IMediaDeviceControlCapabilities(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ModuleCommandResult : Windows::Media::Devices::IModuleCommandResult
    {
        ModuleCommandResult(std::nullptr_t) noexcept {}
        ModuleCommandResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IModuleCommandResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) OpticalImageStabilizationControl : Windows::Media::Devices::IOpticalImageStabilizationControl
    {
        OpticalImageStabilizationControl(std::nullptr_t) noexcept {}
        OpticalImageStabilizationControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IOpticalImageStabilizationControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PanelBasedOptimizationControl : Windows::Media::Devices::IPanelBasedOptimizationControl
    {
        PanelBasedOptimizationControl(std::nullptr_t) noexcept {}
        PanelBasedOptimizationControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IPanelBasedOptimizationControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PhotoConfirmationControl : Windows::Media::Devices::IPhotoConfirmationControl
    {
        PhotoConfirmationControl(std::nullptr_t) noexcept {}
        PhotoConfirmationControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IPhotoConfirmationControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RedialRequestedEventArgs : Windows::Media::Devices::IRedialRequestedEventArgs
    {
        RedialRequestedEventArgs(std::nullptr_t) noexcept {}
        RedialRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IRedialRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RegionOfInterest : Windows::Media::Devices::IRegionOfInterest,
        impl::require<RegionOfInterest, Windows::Media::Devices::IRegionOfInterest2>
    {
        RegionOfInterest(std::nullptr_t) noexcept {}
        RegionOfInterest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IRegionOfInterest(ptr, take_ownership_from_abi) {}
        RegionOfInterest();
    };
    struct __declspec(empty_bases) RegionsOfInterestControl : Windows::Media::Devices::IRegionsOfInterestControl
    {
        RegionsOfInterestControl(std::nullptr_t) noexcept {}
        RegionsOfInterestControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IRegionsOfInterestControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SceneModeControl : Windows::Media::Devices::ISceneModeControl
    {
        SceneModeControl(std::nullptr_t) noexcept {}
        SceneModeControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::ISceneModeControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TorchControl : Windows::Media::Devices::ITorchControl
    {
        TorchControl(std::nullptr_t) noexcept {}
        TorchControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::ITorchControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VideoDeviceController : Windows::Media::Devices::IVideoDeviceController,
        impl::require<VideoDeviceController, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController6, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController7, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController8>
    {
        VideoDeviceController(std::nullptr_t) noexcept {}
        VideoDeviceController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IVideoDeviceController(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VideoDeviceControllerGetDevicePropertyResult : Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult
    {
        VideoDeviceControllerGetDevicePropertyResult(std::nullptr_t) noexcept {}
        VideoDeviceControllerGetDevicePropertyResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VideoTemporalDenoisingControl : Windows::Media::Devices::IVideoTemporalDenoisingControl
    {
        VideoTemporalDenoisingControl(std::nullptr_t) noexcept {}
        VideoTemporalDenoisingControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IVideoTemporalDenoisingControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WhiteBalanceControl : Windows::Media::Devices::IWhiteBalanceControl
    {
        WhiteBalanceControl(std::nullptr_t) noexcept {}
        WhiteBalanceControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IWhiteBalanceControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ZoomControl : Windows::Media::Devices::IZoomControl,
        impl::require<ZoomControl, Windows::Media::Devices::IZoomControl2>
    {
        ZoomControl(std::nullptr_t) noexcept {}
        ZoomControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IZoomControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ZoomSettings : Windows::Media::Devices::IZoomSettings
    {
        ZoomSettings(std::nullptr_t) noexcept {}
        ZoomSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Devices::IZoomSettings(ptr, take_ownership_from_abi) {}
        ZoomSettings();
    };
}
#endif
