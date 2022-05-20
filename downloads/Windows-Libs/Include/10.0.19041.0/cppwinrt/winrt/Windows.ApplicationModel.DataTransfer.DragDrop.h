// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_DataTransfer_DragDrop_H
#define WINRT_Windows_ApplicationModel_DataTransfer_DragDrop_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.ApplicationModel.DataTransfer.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.DragDrop.2.h"
namespace winrt::impl
{
}
namespace winrt::Windows::ApplicationModel::DataTransfer::DragDrop
{
    constexpr auto operator|(DragDropModifiers const left, DragDropModifiers const right) noexcept
    {
        return static_cast<DragDropModifiers>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(DragDropModifiers& left, DragDropModifiers const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(DragDropModifiers const left, DragDropModifiers const right) noexcept
    {
        return static_cast<DragDropModifiers>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(DragDropModifiers& left, DragDropModifiers const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(DragDropModifiers const value) noexcept
    {
        return static_cast<DragDropModifiers>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(DragDropModifiers const left, DragDropModifiers const right) noexcept
    {
        return static_cast<DragDropModifiers>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(DragDropModifiers& left, DragDropModifiers const right) noexcept
    {
        left = left ^ right;
        return left;
    }
}
namespace std
{
}
#endif
