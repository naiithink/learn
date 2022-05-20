// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_1_H
#define WINRT_Windows_Devices_1_H
#include "winrt/impl/Windows.Devices.0.h"
namespace winrt::Windows::Devices
{
    struct __declspec(empty_bases) ILowLevelDevicesAggregateProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILowLevelDevicesAggregateProvider>
    {
        ILowLevelDevicesAggregateProvider(std::nullptr_t = nullptr) noexcept {}
        ILowLevelDevicesAggregateProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILowLevelDevicesAggregateProviderFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILowLevelDevicesAggregateProviderFactory>
    {
        ILowLevelDevicesAggregateProviderFactory(std::nullptr_t = nullptr) noexcept {}
        ILowLevelDevicesAggregateProviderFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILowLevelDevicesController :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILowLevelDevicesController>
    {
        ILowLevelDevicesController(std::nullptr_t = nullptr) noexcept {}
        ILowLevelDevicesController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILowLevelDevicesControllerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILowLevelDevicesControllerStatics>
    {
        ILowLevelDevicesControllerStatics(std::nullptr_t = nullptr) noexcept {}
        ILowLevelDevicesControllerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
