// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Profile_SystemManufacturers_2_H
#define WINRT_Windows_System_Profile_SystemManufacturers_2_H
#include "winrt/impl/Windows.System.Profile.SystemManufacturers.1.h"
namespace winrt::Windows::System::Profile::SystemManufacturers
{
    struct __declspec(empty_bases) OemSupportInfo : Windows::System::Profile::SystemManufacturers::IOemSupportInfo
    {
        OemSupportInfo(std::nullptr_t) noexcept {}
        OemSupportInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::System::Profile::SystemManufacturers::IOemSupportInfo(ptr, take_ownership_from_abi) {}
    };
    struct SmbiosInformation
    {
        SmbiosInformation() = delete;
        [[nodiscard]] static auto SerialNumber();
    };
    struct __declspec(empty_bases) SystemSupportDeviceInfo : Windows::System::Profile::SystemManufacturers::ISystemSupportDeviceInfo
    {
        SystemSupportDeviceInfo(std::nullptr_t) noexcept {}
        SystemSupportDeviceInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::System::Profile::SystemManufacturers::ISystemSupportDeviceInfo(ptr, take_ownership_from_abi) {}
    };
    struct SystemSupportInfo
    {
        SystemSupportInfo() = delete;
        [[nodiscard]] static auto LocalSystemEdition();
        [[nodiscard]] static auto OemSupportInfo();
        [[nodiscard]] static auto LocalDeviceInfo();
    };
}
#endif
