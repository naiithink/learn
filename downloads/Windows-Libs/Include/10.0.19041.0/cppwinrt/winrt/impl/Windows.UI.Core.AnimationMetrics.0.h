// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Core_AnimationMetrics_0_H
#define WINRT_Windows_UI_Core_AnimationMetrics_0_H
namespace winrt::Windows::Foundation
{
    struct Point;
}
namespace winrt::Windows::UI::Core::AnimationMetrics
{
    enum class AnimationEffect : int32_t
    {
        Expand = 0,
        Collapse = 1,
        Reposition = 2,
        FadeIn = 3,
        FadeOut = 4,
        AddToList = 5,
        DeleteFromList = 6,
        AddToGrid = 7,
        DeleteFromGrid = 8,
        AddToSearchGrid = 9,
        DeleteFromSearchGrid = 10,
        AddToSearchList = 11,
        DeleteFromSearchList = 12,
        ShowEdgeUI = 13,
        ShowPanel = 14,
        HideEdgeUI = 15,
        HidePanel = 16,
        ShowPopup = 17,
        HidePopup = 18,
        PointerDown = 19,
        PointerUp = 20,
        DragSourceStart = 21,
        DragSourceEnd = 22,
        TransitionContent = 23,
        Reveal = 24,
        Hide = 25,
        DragBetweenEnter = 26,
        DragBetweenLeave = 27,
        SwipeSelect = 28,
        SwipeDeselect = 29,
        SwipeReveal = 30,
        EnterPage = 31,
        TransitionPage = 32,
        CrossFade = 33,
        Peek = 34,
        UpdateBadge = 35,
    };
    enum class AnimationEffectTarget : int32_t
    {
        Primary = 0,
        Added = 1,
        Affected = 2,
        Background = 3,
        Content = 4,
        Deleted = 5,
        Deselected = 6,
        DragSource = 7,
        Hidden = 8,
        Incoming = 9,
        Outgoing = 10,
        Outline = 11,
        Remaining = 12,
        Revealed = 13,
        RowIn = 14,
        RowOut = 15,
        Selected = 16,
        Selection = 17,
        Shown = 18,
        Tapped = 19,
    };
    enum class PropertyAnimationType : int32_t
    {
        Scale = 0,
        Translation = 1,
        Opacity = 2,
    };
    struct IAnimationDescription;
    struct IAnimationDescriptionFactory;
    struct IOpacityAnimation;
    struct IPropertyAnimation;
    struct IScaleAnimation;
    struct AnimationDescription;
    struct OpacityAnimation;
    struct PropertyAnimation;
    struct ScaleAnimation;
    struct TranslationAnimation;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Core::AnimationMetrics::IAnimationDescription>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Core::AnimationMetrics::IAnimationDescriptionFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Core::AnimationMetrics::IOpacityAnimation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Core::AnimationMetrics::IPropertyAnimation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Core::AnimationMetrics::IScaleAnimation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Core::AnimationMetrics::AnimationDescription>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Core::AnimationMetrics::OpacityAnimation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Core::AnimationMetrics::PropertyAnimation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Core::AnimationMetrics::ScaleAnimation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Core::AnimationMetrics::TranslationAnimation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Core::AnimationMetrics::AnimationEffect>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Core::AnimationMetrics::AnimationEffectTarget>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Core::AnimationMetrics::PropertyAnimationType>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::UI::Core::AnimationMetrics::IAnimationDescription>
    {
        static constexpr auto & value{ L"Windows.UI.Core.AnimationMetrics.IAnimationDescription" };
    };
    template <> struct name<Windows::UI::Core::AnimationMetrics::IAnimationDescriptionFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Core.AnimationMetrics.IAnimationDescriptionFactory" };
    };
    template <> struct name<Windows::UI::Core::AnimationMetrics::IOpacityAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Core.AnimationMetrics.IOpacityAnimation" };
    };
    template <> struct name<Windows::UI::Core::AnimationMetrics::IPropertyAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Core.AnimationMetrics.IPropertyAnimation" };
    };
    template <> struct name<Windows::UI::Core::AnimationMetrics::IScaleAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Core.AnimationMetrics.IScaleAnimation" };
    };
    template <> struct name<Windows::UI::Core::AnimationMetrics::AnimationDescription>
    {
        static constexpr auto & value{ L"Windows.UI.Core.AnimationMetrics.AnimationDescription" };
    };
    template <> struct name<Windows::UI::Core::AnimationMetrics::OpacityAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Core.AnimationMetrics.OpacityAnimation" };
    };
    template <> struct name<Windows::UI::Core::AnimationMetrics::PropertyAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Core.AnimationMetrics.PropertyAnimation" };
    };
    template <> struct name<Windows::UI::Core::AnimationMetrics::ScaleAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Core.AnimationMetrics.ScaleAnimation" };
    };
    template <> struct name<Windows::UI::Core::AnimationMetrics::TranslationAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Core.AnimationMetrics.TranslationAnimation" };
    };
    template <> struct name<Windows::UI::Core::AnimationMetrics::AnimationEffect>
    {
        static constexpr auto & value{ L"Windows.UI.Core.AnimationMetrics.AnimationEffect" };
    };
    template <> struct name<Windows::UI::Core::AnimationMetrics::AnimationEffectTarget>
    {
        static constexpr auto & value{ L"Windows.UI.Core.AnimationMetrics.AnimationEffectTarget" };
    };
    template <> struct name<Windows::UI::Core::AnimationMetrics::PropertyAnimationType>
    {
        static constexpr auto & value{ L"Windows.UI.Core.AnimationMetrics.PropertyAnimationType" };
    };
    template <> struct guid_storage<Windows::UI::Core::AnimationMetrics::IAnimationDescription>
    {
        static constexpr guid value{ 0x7D11A549,0xBE3D,0x41DE,{ 0xB0,0x81,0x05,0xC1,0x49,0x96,0x2F,0x9B } };
    };
    template <> struct guid_storage<Windows::UI::Core::AnimationMetrics::IAnimationDescriptionFactory>
    {
        static constexpr guid value{ 0xC6E27ABE,0xC1FB,0x48B5,{ 0x92,0x71,0xEC,0xC7,0x0A,0xC8,0x6E,0xF0 } };
    };
    template <> struct guid_storage<Windows::UI::Core::AnimationMetrics::IOpacityAnimation>
    {
        static constexpr guid value{ 0x803AABE5,0xEE7E,0x455F,{ 0x84,0xE9,0x25,0x06,0xAF,0xB8,0xD2,0xB4 } };
    };
    template <> struct guid_storage<Windows::UI::Core::AnimationMetrics::IPropertyAnimation>
    {
        static constexpr guid value{ 0x3A01B4DA,0x4D8C,0x411E,{ 0xB6,0x15,0x1A,0xDE,0x68,0x3A,0x99,0x03 } };
    };
    template <> struct guid_storage<Windows::UI::Core::AnimationMetrics::IScaleAnimation>
    {
        static constexpr guid value{ 0x023552C7,0x71AB,0x428C,{ 0x9C,0x9F,0xD3,0x17,0x80,0x96,0x49,0x95 } };
    };
    template <> struct default_interface<Windows::UI::Core::AnimationMetrics::AnimationDescription>
    {
        using type = Windows::UI::Core::AnimationMetrics::IAnimationDescription;
    };
    template <> struct default_interface<Windows::UI::Core::AnimationMetrics::OpacityAnimation>
    {
        using type = Windows::UI::Core::AnimationMetrics::IOpacityAnimation;
    };
    template <> struct default_interface<Windows::UI::Core::AnimationMetrics::PropertyAnimation>
    {
        using type = Windows::UI::Core::AnimationMetrics::IPropertyAnimation;
    };
    template <> struct default_interface<Windows::UI::Core::AnimationMetrics::ScaleAnimation>
    {
        using type = Windows::UI::Core::AnimationMetrics::IScaleAnimation;
    };
    template <> struct default_interface<Windows::UI::Core::AnimationMetrics::TranslationAnimation>
    {
        using type = Windows::UI::Core::AnimationMetrics::IPropertyAnimation;
    };
    template <> struct abi<Windows::UI::Core::AnimationMetrics::IAnimationDescription>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Animations(void**) noexcept = 0;
            virtual int32_t __stdcall get_StaggerDelay(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_StaggerDelayFactor(float*) noexcept = 0;
            virtual int32_t __stdcall get_DelayLimit(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_ZOrder(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Core::AnimationMetrics::IAnimationDescriptionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(int32_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Core::AnimationMetrics::IOpacityAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InitialOpacity(void**) noexcept = 0;
            virtual int32_t __stdcall get_FinalOpacity(float*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Core::AnimationMetrics::IPropertyAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Delay(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Control1(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Control2(Windows::Foundation::Point*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Core::AnimationMetrics::IScaleAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InitialScaleX(void**) noexcept = 0;
            virtual int32_t __stdcall get_InitialScaleY(void**) noexcept = 0;
            virtual int32_t __stdcall get_FinalScaleX(float*) noexcept = 0;
            virtual int32_t __stdcall get_FinalScaleY(float*) noexcept = 0;
            virtual int32_t __stdcall get_NormalizedOrigin(Windows::Foundation::Point*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Core_AnimationMetrics_IAnimationDescription
    {
        [[nodiscard]] auto Animations() const;
        [[nodiscard]] auto StaggerDelay() const;
        [[nodiscard]] auto StaggerDelayFactor() const;
        [[nodiscard]] auto DelayLimit() const;
        [[nodiscard]] auto ZOrder() const;
    };
    template <> struct consume<Windows::UI::Core::AnimationMetrics::IAnimationDescription>
    {
        template <typename D> using type = consume_Windows_UI_Core_AnimationMetrics_IAnimationDescription<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_AnimationMetrics_IAnimationDescriptionFactory
    {
        auto CreateInstance(Windows::UI::Core::AnimationMetrics::AnimationEffect const& effect, Windows::UI::Core::AnimationMetrics::AnimationEffectTarget const& target) const;
    };
    template <> struct consume<Windows::UI::Core::AnimationMetrics::IAnimationDescriptionFactory>
    {
        template <typename D> using type = consume_Windows_UI_Core_AnimationMetrics_IAnimationDescriptionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_AnimationMetrics_IOpacityAnimation
    {
        [[nodiscard]] auto InitialOpacity() const;
        [[nodiscard]] auto FinalOpacity() const;
    };
    template <> struct consume<Windows::UI::Core::AnimationMetrics::IOpacityAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Core_AnimationMetrics_IOpacityAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_AnimationMetrics_IPropertyAnimation
    {
        [[nodiscard]] auto Type() const;
        [[nodiscard]] auto Delay() const;
        [[nodiscard]] auto Duration() const;
        [[nodiscard]] auto Control1() const;
        [[nodiscard]] auto Control2() const;
    };
    template <> struct consume<Windows::UI::Core::AnimationMetrics::IPropertyAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Core_AnimationMetrics_IPropertyAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_AnimationMetrics_IScaleAnimation
    {
        [[nodiscard]] auto InitialScaleX() const;
        [[nodiscard]] auto InitialScaleY() const;
        [[nodiscard]] auto FinalScaleX() const;
        [[nodiscard]] auto FinalScaleY() const;
        [[nodiscard]] auto NormalizedOrigin() const;
    };
    template <> struct consume<Windows::UI::Core::AnimationMetrics::IScaleAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Core_AnimationMetrics_IScaleAnimation<D>;
    };
}
#endif
