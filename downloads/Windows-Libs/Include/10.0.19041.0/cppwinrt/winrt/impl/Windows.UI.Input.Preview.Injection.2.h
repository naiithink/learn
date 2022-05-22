// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Input_Preview_Injection_2_H
#define WINRT_Windows_UI_Input_Preview_Injection_2_H
#include "winrt/impl/Windows.Gaming.Input.1.h"
#include "winrt/impl/Windows.UI.Input.Preview.Injection.1.h"
namespace winrt::Windows::UI::Input::Preview::Injection
{
    struct InjectedInputPoint
    {
        int32_t PositionX;
        int32_t PositionY;
    };
    inline bool operator==(InjectedInputPoint const& left, InjectedInputPoint const& right) noexcept
    {
        return left.PositionX == right.PositionX && left.PositionY == right.PositionY;
    }
    inline bool operator!=(InjectedInputPoint const& left, InjectedInputPoint const& right) noexcept
    {
        return !(left == right);
    }
    struct InjectedInputPointerInfo
    {
        uint32_t PointerId;
        Windows::UI::Input::Preview::Injection::InjectedInputPointerOptions PointerOptions;
        Windows::UI::Input::Preview::Injection::InjectedInputPoint PixelLocation;
        uint32_t TimeOffsetInMilliseconds;
        uint64_t PerformanceCount;
    };
    inline bool operator==(InjectedInputPointerInfo const& left, InjectedInputPointerInfo const& right) noexcept
    {
        return left.PointerId == right.PointerId && left.PointerOptions == right.PointerOptions && left.PixelLocation == right.PixelLocation && left.TimeOffsetInMilliseconds == right.TimeOffsetInMilliseconds && left.PerformanceCount == right.PerformanceCount;
    }
    inline bool operator!=(InjectedInputPointerInfo const& left, InjectedInputPointerInfo const& right) noexcept
    {
        return !(left == right);
    }
    struct InjectedInputRectangle
    {
        int32_t Left;
        int32_t Top;
        int32_t Bottom;
        int32_t Right;
    };
    inline bool operator==(InjectedInputRectangle const& left, InjectedInputRectangle const& right) noexcept
    {
        return left.Left == right.Left && left.Top == right.Top && left.Bottom == right.Bottom && left.Right == right.Right;
    }
    inline bool operator!=(InjectedInputRectangle const& left, InjectedInputRectangle const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) InjectedInputGamepadInfo : Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo
    {
        InjectedInputGamepadInfo(std::nullptr_t) noexcept {}
        InjectedInputGamepadInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo(ptr, take_ownership_from_abi) {}
        InjectedInputGamepadInfo();
        InjectedInputGamepadInfo(Windows::Gaming::Input::GamepadReading const& reading);
    };
    struct __declspec(empty_bases) InjectedInputKeyboardInfo : Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo
    {
        InjectedInputKeyboardInfo(std::nullptr_t) noexcept {}
        InjectedInputKeyboardInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo(ptr, take_ownership_from_abi) {}
        InjectedInputKeyboardInfo();
    };
    struct __declspec(empty_bases) InjectedInputMouseInfo : Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo
    {
        InjectedInputMouseInfo(std::nullptr_t) noexcept {}
        InjectedInputMouseInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo(ptr, take_ownership_from_abi) {}
        InjectedInputMouseInfo();
    };
    struct __declspec(empty_bases) InjectedInputPenInfo : Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo
    {
        InjectedInputPenInfo(std::nullptr_t) noexcept {}
        InjectedInputPenInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo(ptr, take_ownership_from_abi) {}
        InjectedInputPenInfo();
    };
    struct __declspec(empty_bases) InjectedInputTouchInfo : Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo
    {
        InjectedInputTouchInfo(std::nullptr_t) noexcept {}
        InjectedInputTouchInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo(ptr, take_ownership_from_abi) {}
        InjectedInputTouchInfo();
    };
    struct __declspec(empty_bases) InputInjector : Windows::UI::Input::Preview::Injection::IInputInjector,
        impl::require<InputInjector, Windows::UI::Input::Preview::Injection::IInputInjector2>
    {
        InputInjector(std::nullptr_t) noexcept {}
        InputInjector(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Input::Preview::Injection::IInputInjector(ptr, take_ownership_from_abi) {}
        static auto TryCreate();
        static auto TryCreateForAppBroadcastOnly();
    };
}
#endif
