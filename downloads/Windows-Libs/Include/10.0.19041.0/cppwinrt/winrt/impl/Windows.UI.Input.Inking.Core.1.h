// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Input_Inking_Core_1_H
#define WINRT_Windows_UI_Input_Inking_Core_1_H
#include "winrt/impl/Windows.UI.Input.Inking.Core.0.h"
namespace winrt::Windows::UI::Input::Inking::Core
{
    struct __declspec(empty_bases) ICoreIncrementalInkStroke :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreIncrementalInkStroke>
    {
        ICoreIncrementalInkStroke(std::nullptr_t = nullptr) noexcept {}
        ICoreIncrementalInkStroke(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreIncrementalInkStrokeFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreIncrementalInkStrokeFactory>
    {
        ICoreIncrementalInkStrokeFactory(std::nullptr_t = nullptr) noexcept {}
        ICoreIncrementalInkStrokeFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreInkIndependentInputSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreInkIndependentInputSource>
    {
        ICoreInkIndependentInputSource(std::nullptr_t = nullptr) noexcept {}
        ICoreInkIndependentInputSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreInkIndependentInputSourceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreInkIndependentInputSourceStatics>
    {
        ICoreInkIndependentInputSourceStatics(std::nullptr_t = nullptr) noexcept {}
        ICoreInkIndependentInputSourceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreInkPresenterHost :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreInkPresenterHost>
    {
        ICoreInkPresenterHost(std::nullptr_t = nullptr) noexcept {}
        ICoreInkPresenterHost(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreWetStrokeUpdateEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreWetStrokeUpdateEventArgs>
    {
        ICoreWetStrokeUpdateEventArgs(std::nullptr_t = nullptr) noexcept {}
        ICoreWetStrokeUpdateEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreWetStrokeUpdateSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreWetStrokeUpdateSource>
    {
        ICoreWetStrokeUpdateSource(std::nullptr_t = nullptr) noexcept {}
        ICoreWetStrokeUpdateSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreWetStrokeUpdateSourceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreWetStrokeUpdateSourceStatics>
    {
        ICoreWetStrokeUpdateSourceStatics(std::nullptr_t = nullptr) noexcept {}
        ICoreWetStrokeUpdateSourceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
