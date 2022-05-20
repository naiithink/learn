// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Capture_Core_0_H
#define WINRT_Windows_Media_Capture_Core_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Media::Capture
{
    struct CapturedFrame;
    struct CapturedFrameControlValues;
}
namespace winrt::Windows::Media::Capture::Core
{
    struct IVariablePhotoCapturedEventArgs;
    struct IVariablePhotoSequenceCapture;
    struct IVariablePhotoSequenceCapture2;
    struct VariablePhotoCapturedEventArgs;
    struct VariablePhotoSequenceCapture;
}
namespace winrt::impl
{
    template <> struct category<Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::Core::VariablePhotoSequenceCapture>
    {
        using type = class_category;
    };
    template <> struct name<Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.Core.IVariablePhotoCapturedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.Core.IVariablePhotoSequenceCapture" };
    };
    template <> struct name<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture2>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.Core.IVariablePhotoSequenceCapture2" };
    };
    template <> struct name<Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.Core.VariablePhotoCapturedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::Core::VariablePhotoSequenceCapture>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.Core.VariablePhotoSequenceCapture" };
    };
    template <> struct guid_storage<Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs>
    {
        static constexpr guid value{ 0xD1EB4C5C,0x1B53,0x4E4A,{ 0x8B,0x5C,0xDB,0x78,0x87,0xAC,0x94,0x9B } };
    };
    template <> struct guid_storage<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture>
    {
        static constexpr guid value{ 0xD0112D1D,0x031E,0x4041,{ 0xA6,0xD6,0xBD,0x74,0x24,0x76,0xA8,0xEE } };
    };
    template <> struct guid_storage<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture2>
    {
        static constexpr guid value{ 0xFE2C62BC,0x50B0,0x43E3,{ 0x91,0x7C,0xE3,0xB9,0x27,0x98,0x94,0x2F } };
    };
    template <> struct default_interface<Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs>
    {
        using type = Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Capture::Core::VariablePhotoSequenceCapture>
    {
        using type = Windows::Media::Capture::Core::IVariablePhotoSequenceCapture;
    };
    template <> struct abi<Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Frame(void**) noexcept = 0;
            virtual int32_t __stdcall get_CaptureTimeOffset(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsedFrameControllerIndex(void**) noexcept = 0;
            virtual int32_t __stdcall get_CapturedFrameControlValues(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StartAsync(void**) noexcept = 0;
            virtual int32_t __stdcall StopAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FinishAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_PhotoCaptured(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PhotoCaptured(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Stopped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Stopped(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall UpdateSettingsAsync(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Core_IVariablePhotoCapturedEventArgs
    {
        [[nodiscard]] auto Frame() const;
        [[nodiscard]] auto CaptureTimeOffset() const;
        [[nodiscard]] auto UsedFrameControllerIndex() const;
        [[nodiscard]] auto CapturedFrameControlValues() const;
    };
    template <> struct consume<Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Core_IVariablePhotoCapturedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture
    {
        auto StartAsync() const;
        auto StopAsync() const;
        auto FinishAsync() const;
        auto PhotoCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs> const& handler) const;
        using PhotoCaptured_revoker = impl::event_revoker<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture, &impl::abi_t<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture>::remove_PhotoCaptured>;
        PhotoCaptured_revoker PhotoCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs> const& handler) const;
        auto PhotoCaptured(winrt::event_token const& token) const noexcept;
        auto Stopped(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Foundation::IInspectable> const& handler) const;
        using Stopped_revoker = impl::event_revoker<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture, &impl::abi_t<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture>::remove_Stopped>;
        Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Foundation::IInspectable> const& handler) const;
        auto Stopped(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture2
    {
        auto UpdateSettingsAsync() const;
    };
    template <> struct consume<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture2<D>;
    };
}
#endif
