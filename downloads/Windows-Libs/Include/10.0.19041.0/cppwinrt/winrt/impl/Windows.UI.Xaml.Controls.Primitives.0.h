// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Controls_Primitives_0_H
#define WINRT_Windows_UI_Xaml_Controls_Primitives_0_H
namespace winrt::Windows::Foundation
{
    template <typename T> struct EventHandler;
    struct EventRegistrationToken;
    template <typename T> struct IReference;
    struct Point;
    struct Rect;
    struct Size;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IVector;
}
namespace winrt::Windows::Foundation::Numerics
{
}
namespace winrt::Windows::UI
{
    struct Color;
}
namespace winrt::Windows::UI::Xaml
{
    struct DataTemplate;
    struct DependencyObject;
    struct DependencyProperty;
    enum class ElementSoundMode : int32_t;
    struct FrameworkElement;
    struct GridLength;
    enum class HorizontalAlignment : int32_t;
    struct RoutedEventHandler;
    struct Thickness;
    struct UIElement;
    enum class VerticalAlignment : int32_t;
    enum class Visibility : int32_t;
    struct XamlRoot;
}
namespace winrt::Windows::UI::Xaml::Controls
{
    enum class ClickMode : int32_t;
    struct ColorChangedEventArgs;
    enum class ColorPickerHsvChannel : int32_t;
    enum class ColorSpectrumComponents : int32_t;
    enum class ColorSpectrumShape : int32_t;
    struct Control;
    struct IconElement;
    enum class LightDismissOverlayMode : int32_t;
    enum class Orientation : int32_t;
    struct SelectionChangedEventHandler;
}
namespace winrt::Windows::UI::Xaml::Input
{
    struct ICommand;
    struct ProcessKeyboardAcceleratorEventArgs;
}
namespace winrt::Windows::UI::Xaml::Media
{
    struct Brush;
    struct ImageSource;
}
namespace winrt::Windows::UI::Xaml::Media::Animation
{
    struct TransitionCollection;
}
namespace winrt::Windows::UI::Xaml::Controls::Primitives
{
    enum class AnimationDirection : int32_t
    {
        Left = 0,
        Top = 1,
        Right = 2,
        Bottom = 3,
    };
    enum class ComponentResourceLocation : int32_t
    {
        Application = 0,
        Nested = 1,
    };
    enum class EdgeTransitionLocation : int32_t
    {
        Left = 0,
        Top = 1,
        Right = 2,
        Bottom = 3,
    };
    enum class FlyoutPlacementMode : int32_t
    {
        Top = 0,
        Bottom = 1,
        Left = 2,
        Right = 3,
        Full = 4,
        TopEdgeAlignedLeft = 5,
        TopEdgeAlignedRight = 6,
        BottomEdgeAlignedLeft = 7,
        BottomEdgeAlignedRight = 8,
        LeftEdgeAlignedTop = 9,
        LeftEdgeAlignedBottom = 10,
        RightEdgeAlignedTop = 11,
        RightEdgeAlignedBottom = 12,
        Auto = 13,
    };
    enum class FlyoutShowMode : int32_t
    {
        Auto = 0,
        Standard = 1,
        Transient = 2,
        TransientWithDismissOnPointerMoveAway = 3,
    };
    enum class GeneratorDirection : int32_t
    {
        Forward = 0,
        Backward = 1,
    };
    enum class GroupHeaderPlacement : int32_t
    {
        Top = 0,
        Left = 1,
    };
    enum class ListViewItemPresenterCheckMode : int32_t
    {
        Inline = 0,
        Overlay = 1,
    };
    enum class PlacementMode : int32_t
    {
        Bottom = 2,
        Left = 9,
        Mouse = 7,
        Right = 4,
        Top = 10,
    };
    enum class ScrollEventType : int32_t
    {
        SmallDecrement = 0,
        SmallIncrement = 1,
        LargeDecrement = 2,
        LargeIncrement = 3,
        ThumbPosition = 4,
        ThumbTrack = 5,
        First = 6,
        Last = 7,
        EndScroll = 8,
    };
    enum class ScrollingIndicatorMode : int32_t
    {
        None = 0,
        TouchIndicator = 1,
        MouseIndicator = 2,
    };
    enum class SliderSnapsTo : int32_t
    {
        StepValues = 0,
        Ticks = 1,
    };
    enum class SnapPointsAlignment : int32_t
    {
        Near = 0,
        Center = 1,
        Far = 2,
    };
    enum class TickPlacement : int32_t
    {
        None = 0,
        TopLeft = 1,
        BottomRight = 2,
        Outside = 3,
        Inline = 4,
    };
    struct IAppBarButtonTemplateSettings;
    struct IAppBarTemplateSettings;
    struct IAppBarTemplateSettings2;
    struct IAppBarToggleButtonTemplateSettings;
    struct IButtonBase;
    struct IButtonBaseFactory;
    struct IButtonBaseStatics;
    struct ICalendarPanel;
    struct ICalendarViewTemplateSettings;
    struct ICarouselPanel;
    struct ICarouselPanelFactory;
    struct IColorPickerSlider;
    struct IColorPickerSliderFactory;
    struct IColorPickerSliderStatics;
    struct IColorSpectrum;
    struct IColorSpectrumFactory;
    struct IColorSpectrumStatics;
    struct IComboBoxTemplateSettings;
    struct IComboBoxTemplateSettings2;
    struct ICommandBarFlyoutCommandBar;
    struct ICommandBarFlyoutCommandBarFactory;
    struct ICommandBarFlyoutCommandBarTemplateSettings;
    struct ICommandBarTemplateSettings;
    struct ICommandBarTemplateSettings2;
    struct ICommandBarTemplateSettings3;
    struct ICommandBarTemplateSettings4;
    struct IDragCompletedEventArgs;
    struct IDragCompletedEventArgsFactory;
    struct IDragDeltaEventArgs;
    struct IDragDeltaEventArgsFactory;
    struct IDragStartedEventArgs;
    struct IDragStartedEventArgsFactory;
    struct IFlyoutBase;
    struct IFlyoutBase2;
    struct IFlyoutBase3;
    struct IFlyoutBase4;
    struct IFlyoutBase5;
    struct IFlyoutBase6;
    struct IFlyoutBaseClosingEventArgs;
    struct IFlyoutBaseFactory;
    struct IFlyoutBaseOverrides;
    struct IFlyoutBaseOverrides4;
    struct IFlyoutBaseStatics;
    struct IFlyoutBaseStatics2;
    struct IFlyoutBaseStatics3;
    struct IFlyoutBaseStatics5;
    struct IFlyoutBaseStatics6;
    struct IFlyoutShowOptions;
    struct IFlyoutShowOptionsFactory;
    struct IGeneratorPositionHelper;
    struct IGeneratorPositionHelperStatics;
    struct IGridViewItemPresenter;
    struct IGridViewItemPresenterFactory;
    struct IGridViewItemPresenterStatics;
    struct IGridViewItemTemplateSettings;
    struct IItemsChangedEventArgs;
    struct IJumpListItemBackgroundConverter;
    struct IJumpListItemBackgroundConverterStatics;
    struct IJumpListItemForegroundConverter;
    struct IJumpListItemForegroundConverterStatics;
    struct ILayoutInformation;
    struct ILayoutInformationStatics;
    struct ILayoutInformationStatics2;
    struct IListViewItemPresenter;
    struct IListViewItemPresenter2;
    struct IListViewItemPresenter3;
    struct IListViewItemPresenterFactory;
    struct IListViewItemPresenterStatics;
    struct IListViewItemPresenterStatics2;
    struct IListViewItemPresenterStatics3;
    struct IListViewItemTemplateSettings;
    struct ILoopingSelector;
    struct ILoopingSelectorItem;
    struct ILoopingSelectorPanel;
    struct ILoopingSelectorStatics;
    struct IMenuFlyoutItemTemplateSettings;
    struct IMenuFlyoutPresenterTemplateSettings;
    struct INavigationViewItemPresenter;
    struct INavigationViewItemPresenterFactory;
    struct INavigationViewItemPresenterStatics;
    struct IOrientedVirtualizingPanel;
    struct IOrientedVirtualizingPanelFactory;
    struct IPickerFlyoutBase;
    struct IPickerFlyoutBaseFactory;
    struct IPickerFlyoutBaseOverrides;
    struct IPickerFlyoutBaseStatics;
    struct IPivotHeaderItem;
    struct IPivotHeaderItemFactory;
    struct IPivotHeaderPanel;
    struct IPivotPanel;
    struct IPopup;
    struct IPopup2;
    struct IPopup3;
    struct IPopupStatics;
    struct IPopupStatics2;
    struct IPopupStatics3;
    struct IProgressBarTemplateSettings;
    struct IProgressRingTemplateSettings;
    struct IRangeBase;
    struct IRangeBaseFactory;
    struct IRangeBaseOverrides;
    struct IRangeBaseStatics;
    struct IRangeBaseValueChangedEventArgs;
    struct IRepeatButton;
    struct IRepeatButtonStatics;
    struct IScrollBar;
    struct IScrollBarStatics;
    struct IScrollEventArgs;
    struct IScrollSnapPointsInfo;
    struct ISelector;
    struct ISelectorFactory;
    struct ISelectorItem;
    struct ISelectorItemFactory;
    struct ISelectorItemStatics;
    struct ISelectorStatics;
    struct ISettingsFlyoutTemplateSettings;
    struct ISplitViewTemplateSettings;
    struct IThumb;
    struct IThumbStatics;
    struct ITickBar;
    struct ITickBarStatics;
    struct IToggleButton;
    struct IToggleButtonFactory;
    struct IToggleButtonOverrides;
    struct IToggleButtonStatics;
    struct IToggleSwitchTemplateSettings;
    struct IToolTipTemplateSettings;
    struct AppBarButtonTemplateSettings;
    struct AppBarTemplateSettings;
    struct AppBarToggleButtonTemplateSettings;
    struct ButtonBase;
    struct CalendarPanel;
    struct CalendarViewTemplateSettings;
    struct CarouselPanel;
    struct ColorPickerSlider;
    struct ColorSpectrum;
    struct ComboBoxTemplateSettings;
    struct CommandBarFlyoutCommandBar;
    struct CommandBarFlyoutCommandBarTemplateSettings;
    struct CommandBarTemplateSettings;
    struct DragCompletedEventArgs;
    struct DragDeltaEventArgs;
    struct DragStartedEventArgs;
    struct FlyoutBase;
    struct FlyoutBaseClosingEventArgs;
    struct FlyoutShowOptions;
    struct GeneratorPositionHelper;
    struct GridViewItemPresenter;
    struct GridViewItemTemplateSettings;
    struct ItemsChangedEventArgs;
    struct JumpListItemBackgroundConverter;
    struct JumpListItemForegroundConverter;
    struct LayoutInformation;
    struct ListViewItemPresenter;
    struct ListViewItemTemplateSettings;
    struct LoopingSelector;
    struct LoopingSelectorItem;
    struct LoopingSelectorPanel;
    struct MenuFlyoutItemTemplateSettings;
    struct MenuFlyoutPresenterTemplateSettings;
    struct NavigationViewItemPresenter;
    struct OrientedVirtualizingPanel;
    struct PickerFlyoutBase;
    struct PivotHeaderItem;
    struct PivotHeaderPanel;
    struct PivotPanel;
    struct Popup;
    struct ProgressBarTemplateSettings;
    struct ProgressRingTemplateSettings;
    struct RangeBase;
    struct RangeBaseValueChangedEventArgs;
    struct RepeatButton;
    struct ScrollBar;
    struct ScrollEventArgs;
    struct Selector;
    struct SelectorItem;
    struct SettingsFlyoutTemplateSettings;
    struct SplitViewTemplateSettings;
    struct Thumb;
    struct TickBar;
    struct ToggleButton;
    struct ToggleSwitchTemplateSettings;
    struct ToolTipTemplateSettings;
    struct GeneratorPosition;
    struct DragCompletedEventHandler;
    struct DragDeltaEventHandler;
    struct DragStartedEventHandler;
    struct ItemsChangedEventHandler;
    struct RangeBaseValueChangedEventHandler;
    struct ScrollEventHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IButtonBase>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IButtonBaseFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICalendarPanel>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICarouselPanel>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICarouselPanelFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IColorSpectrum>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBar>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarTemplateSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgsFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgsFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase6>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics6>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptionsFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelperStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverterStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverterStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ILayoutInformation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ILoopingSelector>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenterFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenterStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanelFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItemFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPivotPanel>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPopup>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPopup2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPopup3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPopupStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPopupStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPopupStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IRangeBase>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IRangeBaseFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IRepeatButton>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IRepeatButtonStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IScrollBar>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ISelector>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ISelectorFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ISelectorItem>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ISelectorItemFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ISelectorItemStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ISelectorStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IThumb>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IThumbStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ITickBar>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ITickBarStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IToggleButton>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IToggleButtonFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IToggleButtonStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::AppBarButtonTemplateSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::AppBarTemplateSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::AppBarToggleButtonTemplateSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ButtonBase>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::CalendarPanel>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::CalendarViewTemplateSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::CarouselPanel>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ColorPickerSlider>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ColorSpectrum>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ComboBoxTemplateSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::CommandBarFlyoutCommandBar>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::CommandBarFlyoutCommandBarTemplateSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::CommandBarTemplateSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::FlyoutBase>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::FlyoutShowOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::GeneratorPositionHelper>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::GridViewItemTemplateSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::JumpListItemBackgroundConverter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::JumpListItemForegroundConverter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::LayoutInformation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ListViewItemTemplateSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::LoopingSelector>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::LoopingSelectorItem>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::LoopingSelectorPanel>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::MenuFlyoutItemTemplateSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::MenuFlyoutPresenterTemplateSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::NavigationViewItemPresenter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::PivotHeaderItem>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::PivotHeaderPanel>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::PivotPanel>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::Popup>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ProgressBarTemplateSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ProgressRingTemplateSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::RangeBase>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::RepeatButton>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ScrollBar>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::Selector>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::SelectorItem>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::SettingsFlyoutTemplateSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::SplitViewTemplateSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::Thumb>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::TickBar>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ToggleButton>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ToggleSwitchTemplateSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ToolTipTemplateSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::AnimationDirection>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::FlyoutShowMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::GeneratorDirection>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::GroupHeaderPlacement>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::PlacementMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ScrollEventType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::SliderSnapsTo>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::TickPlacement>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::GeneratorPosition>
    {
        using type = struct_category<int32_t, int32_t>;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IAppBarButtonTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IAppBarTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IAppBarTemplateSettings2" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IAppBarToggleButtonTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IButtonBase>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IButtonBase" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IButtonBaseFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IButtonBaseFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IButtonBaseStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ICalendarPanel>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ICalendarPanel" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ICalendarViewTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ICarouselPanel>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ICarouselPanel" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ICarouselPanelFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ICarouselPanelFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IColorPickerSlider" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IColorPickerSliderFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IColorPickerSliderStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IColorSpectrum>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IColorSpectrum" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IColorSpectrumFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IColorSpectrumStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IComboBoxTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IComboBoxTemplateSettings2" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBar>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ICommandBarFlyoutCommandBar" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ICommandBarFlyoutCommandBarFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ICommandBarFlyoutCommandBarTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ICommandBarTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ICommandBarTemplateSettings2" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings3>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ICommandBarTemplateSettings3" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings4>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ICommandBarTemplateSettings4" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IDragCompletedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgsFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IDragCompletedEventArgsFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IDragDeltaEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgsFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IDragDeltaEventArgsFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IDragStartedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IDragStartedEventArgsFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBase" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBase2" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBase3" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBase4" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBase5" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase6>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBase6" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseClosingEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseOverrides" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseOverrides4" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseStatics2" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics3>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseStatics3" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics5>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseStatics5" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics6>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseStatics6" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptions>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutShowOptions" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptionsFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutShowOptionsFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IGeneratorPositionHelper" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelperStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IGeneratorPositionHelperStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IGridViewItemPresenter" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IGridViewItemPresenterFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IGridViewItemPresenterStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IGridViewItemTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IItemsChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IJumpListItemBackgroundConverter" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverterStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IJumpListItemBackgroundConverterStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IJumpListItemForegroundConverter" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverterStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IJumpListItemForegroundConverterStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ILayoutInformation>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ILayoutInformation" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ILayoutInformationStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ILayoutInformationStatics2" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenter" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenter2" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenter3" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenterFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenterStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenterStatics2" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics3>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenterStatics3" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IListViewItemTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ILoopingSelector>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ILoopingSelector" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ILoopingSelectorItem" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ILoopingSelectorPanel" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ILoopingSelectorStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IMenuFlyoutItemTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IMenuFlyoutPresenterTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenter>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.INavigationViewItemPresenter" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenterFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.INavigationViewItemPresenterFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenterStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.INavigationViewItemPresenterStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IOrientedVirtualizingPanel" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanelFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IOrientedVirtualizingPanelFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IPickerFlyoutBase" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IPickerFlyoutBaseFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IPickerFlyoutBaseOverrides" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IPickerFlyoutBaseStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IPivotHeaderItem" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItemFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IPivotHeaderItemFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IPivotHeaderPanel" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IPivotPanel>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IPivotPanel" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IPopup>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IPopup" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IPopup2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IPopup2" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IPopup3>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IPopup3" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IPopupStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IPopupStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IPopupStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IPopupStatics2" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IPopupStatics3>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IPopupStatics3" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IProgressBarTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IProgressRingTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IRangeBase>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IRangeBase" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IRangeBaseFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IRangeBaseFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IRangeBaseOverrides" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IRangeBaseStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IRangeBaseValueChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IRepeatButton>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IRepeatButton" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IRepeatButtonStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IRepeatButtonStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IScrollBar>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IScrollBar" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IScrollBarStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IScrollEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IScrollSnapPointsInfo" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ISelector>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ISelector" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ISelectorFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ISelectorFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ISelectorItem>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ISelectorItem" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ISelectorItemFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ISelectorItemFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ISelectorItemStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ISelectorItemStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ISelectorStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ISelectorStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ISettingsFlyoutTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ISplitViewTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IThumb>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IThumb" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IThumbStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IThumbStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ITickBar>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ITickBar" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ITickBarStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ITickBarStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IToggleButton>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IToggleButton" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IToggleButtonFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IToggleButtonFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IToggleButtonOverrides" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IToggleButtonStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IToggleButtonStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IToggleSwitchTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IToolTipTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::AppBarButtonTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.AppBarButtonTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::AppBarTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.AppBarTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::AppBarToggleButtonTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.AppBarToggleButtonTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ButtonBase>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ButtonBase" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::CalendarPanel>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.CalendarPanel" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::CalendarViewTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.CalendarViewTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::CarouselPanel>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.CarouselPanel" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ColorPickerSlider>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ColorPickerSlider" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ColorSpectrum>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ColorSpectrum" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ComboBoxTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ComboBoxTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::CommandBarFlyoutCommandBar>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::CommandBarFlyoutCommandBarTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBarTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::CommandBarTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.CommandBarTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.DragCompletedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.DragDeltaEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.DragStartedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::FlyoutBase>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.FlyoutBase" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.FlyoutBaseClosingEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::FlyoutShowOptions>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.FlyoutShowOptions" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::GeneratorPositionHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.GeneratorPositionHelper" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.GridViewItemPresenter" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::GridViewItemTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.GridViewItemTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ItemsChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::JumpListItemBackgroundConverter>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.JumpListItemBackgroundConverter" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::JumpListItemForegroundConverter>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.JumpListItemForegroundConverter" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::LayoutInformation>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.LayoutInformation" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ListViewItemPresenter" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ListViewItemTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ListViewItemTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::LoopingSelector>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.LoopingSelector" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::LoopingSelectorItem>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.LoopingSelectorItem" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::LoopingSelectorPanel>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.LoopingSelectorPanel" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::MenuFlyoutItemTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.MenuFlyoutItemTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::MenuFlyoutPresenterTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.MenuFlyoutPresenterTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::NavigationViewItemPresenter>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.OrientedVirtualizingPanel" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.PickerFlyoutBase" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::PivotHeaderItem>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.PivotHeaderItem" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::PivotHeaderPanel>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.PivotHeaderPanel" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::PivotPanel>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.PivotPanel" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::Popup>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.Popup" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ProgressBarTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ProgressBarTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ProgressRingTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ProgressRingTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::RangeBase>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.RangeBase" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.RangeBaseValueChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::RepeatButton>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.RepeatButton" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ScrollBar>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ScrollBar" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ScrollEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::Selector>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.Selector" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::SelectorItem>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.SelectorItem" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::SettingsFlyoutTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.SettingsFlyoutTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::SplitViewTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.SplitViewTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::Thumb>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.Thumb" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::TickBar>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.TickBar" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ToggleButton>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ToggleButton" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ToggleSwitchTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ToggleSwitchTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ToolTipTemplateSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ToolTipTemplateSettings" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::AnimationDirection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.AnimationDirection" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ComponentResourceLocation" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.EdgeTransitionLocation" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.FlyoutPlacementMode" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::FlyoutShowMode>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.FlyoutShowMode" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::GeneratorDirection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.GeneratorDirection" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::GroupHeaderPlacement>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.GroupHeaderPlacement" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ListViewItemPresenterCheckMode" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::PlacementMode>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.PlacementMode" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ScrollEventType>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ScrollEventType" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ScrollingIndicatorMode" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::SliderSnapsTo>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.SliderSnapsTo" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.SnapPointsAlignment" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::TickPlacement>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.TickPlacement" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::GeneratorPosition>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.GeneratorPosition" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.DragCompletedEventHandler" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.DragDeltaEventHandler" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.DragStartedEventHandler" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ItemsChangedEventHandler" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.RangeBaseValueChangedEventHandler" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ScrollEventHandler" };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings>
    {
        static constexpr guid value{ 0xCBC9B39D,0x0C95,0x4951,{ 0xBF,0xF2,0x13,0x96,0x36,0x91,0xC3,0x66 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings>
    {
        static constexpr guid value{ 0xBCC2A863,0xEB35,0x423C,{ 0x83,0x89,0xD7,0x82,0x7B,0xE3,0xBF,0x67 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings2>
    {
        static constexpr guid value{ 0xCBE66259,0x0399,0x5BCC,{ 0xB9,0x25,0x4D,0x5F,0x5C,0x9A,0x45,0x68 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings>
    {
        static constexpr guid value{ 0xAAF99C48,0xD8F4,0x40D9,{ 0x9F,0xA3,0x3A,0x64,0xF0,0xFE,0xC5,0xD8 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IButtonBase>
    {
        static constexpr guid value{ 0xFA002C1A,0x494E,0x46CF,{ 0x91,0xD4,0xE1,0x4A,0x8D,0x79,0x86,0x74 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IButtonBaseFactory>
    {
        static constexpr guid value{ 0x389B7C71,0x5220,0x42B2,{ 0x99,0x92,0x26,0x90,0xC1,0xA6,0x70,0x2F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics>
    {
        static constexpr guid value{ 0x67EF17E1,0xFE37,0x474F,{ 0x9E,0x97,0x3B,0x5E,0x0B,0x30,0xF2,0xDF } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ICalendarPanel>
    {
        static constexpr guid value{ 0xFCD55A2D,0x02D3,0x4EE6,{ 0x9A,0x90,0x9D,0xF3,0xEA,0xD0,0x09,0x94 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings>
    {
        static constexpr guid value{ 0x56C71483,0x64E1,0x477C,{ 0x8A,0x0B,0xCB,0x2F,0x33,0x34,0xB9,0xB0 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ICarouselPanel>
    {
        static constexpr guid value{ 0xDEAB78B2,0x373B,0x4151,{ 0x87,0x85,0xE5,0x44,0xD0,0xD9,0x36,0x2B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ICarouselPanelFactory>
    {
        static constexpr guid value{ 0xC1109404,0x9AE1,0x440E,{ 0xA0,0xDD,0xBB,0xB6,0xE2,0x29,0x3C,0xBE } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider>
    {
        static constexpr guid value{ 0x94394D83,0xE0DF,0x4C5F,{ 0xBB,0xCD,0x81,0x55,0xF4,0x02,0x04,0x40 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderFactory>
    {
        static constexpr guid value{ 0x06D879A2,0x8C07,0x4B1E,{ 0xA9,0x40,0x9F,0xBC,0xE8,0xF4,0x96,0x39 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderStatics>
    {
        static constexpr guid value{ 0x22EAFC6A,0x9FE3,0x4EEE,{ 0x87,0x34,0xA1,0x39,0x8E,0xC4,0x41,0x3A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IColorSpectrum>
    {
        static constexpr guid value{ 0xCE46F271,0xF509,0x4F98,{ 0x82,0x88,0xE4,0x94,0x2F,0xB3,0x85,0xDF } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumFactory>
    {
        static constexpr guid value{ 0x90C7E61E,0x904D,0x42AB,{ 0xB4,0x4F,0xE6,0x8D,0xBF,0x0C,0xDE,0xE9 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics>
    {
        static constexpr guid value{ 0x906BEE7C,0x2CEE,0x4E90,{ 0x96,0x8B,0xF0,0xA5,0xBD,0x69,0x1B,0x4A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings>
    {
        static constexpr guid value{ 0x83285C4E,0x17F6,0x4AA3,{ 0xB6,0x1B,0xE8,0x7C,0x71,0x86,0x04,0xEA } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings2>
    {
        static constexpr guid value{ 0x00E90CD7,0x68BE,0x449D,{ 0xB5,0xA7,0x76,0xE2,0x6F,0x70,0x3E,0x9B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBar>
    {
        static constexpr guid value{ 0x14146E7C,0x38C4,0x55C4,{ 0xB7,0x06,0xCE,0x18,0xF6,0x06,0x1E,0x7E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarFactory>
    {
        static constexpr guid value{ 0xF8236F9F,0x5559,0x5697,{ 0x8E,0x6F,0x20,0xD7,0x0C,0xA1,0x7D,0xD0 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarTemplateSettings>
    {
        static constexpr guid value{ 0x47642C44,0x26FF,0x5D14,{ 0x9C,0xFC,0x77,0xDC,0x64,0xF3,0xA4,0x47 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings>
    {
        static constexpr guid value{ 0x61C8F92C,0x05AA,0x414A,{ 0xA2,0xAE,0x48,0x2C,0x5A,0x46,0xC0,0x8E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings2>
    {
        static constexpr guid value{ 0xFBB24F93,0xC2E2,0x4177,{ 0xA2,0xB6,0x3C,0xD7,0x05,0x07,0x3C,0xF6 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings3>
    {
        static constexpr guid value{ 0x3BD71EBA,0x3403,0x4BFE,{ 0x84,0x2D,0x2C,0xE8,0xC5,0x11,0xD2,0x45 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings4>
    {
        static constexpr guid value{ 0xF2562DD3,0xAA58,0x59C5,{ 0x85,0x3B,0x82,0x8A,0x19,0xD1,0x21,0x4E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs>
    {
        static constexpr guid value{ 0xB04F29A1,0xBD16,0x48F6,{ 0xA5,0x11,0x9C,0x27,0x63,0x64,0x13,0x31 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgsFactory>
    {
        static constexpr guid value{ 0x36A7D99D,0x148C,0x495F,{ 0xA0,0xFC,0xAF,0xC8,0x71,0xD6,0x2F,0x33 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs>
    {
        static constexpr guid value{ 0x2C2DD73C,0x2806,0x49FC,{ 0xAA,0xE9,0x6D,0x79,0x2B,0x57,0x2B,0x6A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgsFactory>
    {
        static constexpr guid value{ 0x46E7A1EF,0xAE15,0x44A6,{ 0x8A,0x04,0x95,0xB0,0xBF,0x9A,0xB8,0x76 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs>
    {
        static constexpr guid value{ 0x9F915DD0,0xA124,0x4366,{ 0xBD,0x85,0x24,0x08,0x21,0x4A,0xEE,0xD4 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory>
    {
        static constexpr guid value{ 0x5EEFE579,0xC706,0x4781,{ 0xA3,0x08,0xC9,0xE7,0xF4,0xC6,0xA1,0xD7 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>
    {
        static constexpr guid value{ 0x723EEA0B,0xD12E,0x430D,{ 0xA9,0xF0,0x9B,0xB3,0x2B,0xBF,0x99,0x13 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2>
    {
        static constexpr guid value{ 0xF82B435E,0x65B3,0x41C6,{ 0xA9,0xE2,0x77,0xB6,0x7B,0xC4,0xC0,0x0C } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3>
    {
        static constexpr guid value{ 0xA89C9712,0x48E0,0x4240,{ 0x95,0xB9,0x0D,0xFD,0x08,0x26,0xA8,0xD3 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4>
    {
        static constexpr guid value{ 0xE3897D69,0xA37F,0x4828,{ 0x9B,0x70,0x0E,0xF6,0x7C,0x03,0xB5,0xF8 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5>
    {
        static constexpr guid value{ 0xAD3EC0C7,0x12BB,0x5A73,{ 0xB7,0x8E,0x10,0x51,0x92,0xCA,0x73,0xD6 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase6>
    {
        static constexpr guid value{ 0x5399DE8C,0x06CC,0x5B52,{ 0xB6,0x5A,0xFF,0x93,0x22,0xD1,0xC9,0x40 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs>
    {
        static constexpr guid value{ 0xD075852D,0xB09A,0x4FD1,{ 0xB0,0x05,0xDB,0x2B,0xA0,0x12,0x06,0xFB } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseFactory>
    {
        static constexpr guid value{ 0x1C3363D7,0xFCA7,0x407E,{ 0x92,0x0E,0x70,0xE1,0x5E,0x9F,0x0B,0xF1 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides>
    {
        static constexpr guid value{ 0x101DEC86,0x6F4D,0x45A4,{ 0x9D,0x0E,0x3E,0xCE,0x6F,0x16,0x97,0x7E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4>
    {
        static constexpr guid value{ 0xA6BFD04D,0x5FF3,0x4418,{ 0xAD,0xD8,0x40,0x42,0xA8,0x8D,0x2D,0xA5 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>
    {
        static constexpr guid value{ 0xE2D795E3,0x85C0,0x4DE2,{ 0xBA,0xC1,0x52,0x94,0xCA,0x01,0x1A,0x78 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2>
    {
        static constexpr guid value{ 0xA8E913FE,0x2D60,0x4307,{ 0xAA,0xD9,0x56,0xB4,0x50,0x12,0x1B,0x58 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics3>
    {
        static constexpr guid value{ 0x7BA92E4F,0xDD16,0x4BE4,{ 0x99,0xDB,0xBD,0x9D,0x44,0x06,0xC0,0xF8 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics5>
    {
        static constexpr guid value{ 0x69EDB25C,0x992A,0x542B,{ 0xBC,0xFF,0x2F,0x7F,0x85,0x55,0x23,0xBD } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics6>
    {
        static constexpr guid value{ 0x96D49254,0xC91B,0x5246,{ 0x8B,0x39,0xAF,0xC2,0xA2,0xC5,0x0C,0xF8 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptions>
    {
        static constexpr guid value{ 0x57D693AD,0x0C74,0x54DD,{ 0xB1,0x10,0x1E,0xE4,0x3F,0xAB,0xAD,0xD9 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptionsFactory>
    {
        static constexpr guid value{ 0xCE596F61,0x2EB4,0x5B4E,{ 0xAF,0x69,0xF9,0xAF,0x42,0x32,0x0E,0xEE } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper>
    {
        static constexpr guid value{ 0xCD40318D,0x7745,0x40D9,{ 0xAB,0x9D,0xAB,0xBD,0xA4,0xA7,0xFF,0xEA } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelperStatics>
    {
        static constexpr guid value{ 0xAD4095CD,0x60EC,0x4588,{ 0x8D,0x60,0x39,0xD2,0x90,0x97,0xA4,0xDF } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter>
    {
        static constexpr guid value{ 0x214F9010,0x56E2,0x4821,{ 0x8A,0x1C,0x23,0x05,0x70,0x9A,0xF9,0x4B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory>
    {
        static constexpr guid value{ 0x53C12178,0x63BB,0x4A65,{ 0xA3,0xF1,0xAB,0x11,0x4C,0xFC,0x6F,0xFE } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>
    {
        static constexpr guid value{ 0xE958F8C4,0x277E,0x4A72,{ 0xA0,0x1E,0x9E,0x16,0x88,0x98,0x01,0x78 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings>
    {
        static constexpr guid value{ 0x9E30BAAF,0x165D,0x4267,{ 0xA4,0x5E,0x1A,0x43,0xA7,0x57,0x06,0xAC } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs>
    {
        static constexpr guid value{ 0xE8B45568,0x7D10,0x421E,{ 0xBE,0x29,0x81,0x83,0x9A,0x91,0xDE,0x20 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter>
    {
        static constexpr guid value{ 0x81177858,0xD224,0x410C,{ 0xB1,0x6C,0xC5,0xB6,0xBB,0x61,0x88,0xB2 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverterStatics>
    {
        static constexpr guid value{ 0x20E7C3DD,0x6F27,0x4808,{ 0xB0,0xBE,0x83,0xE0,0xE9,0xB5,0xCC,0x45 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter>
    {
        static constexpr guid value{ 0x1590ED38,0xC504,0x4796,{ 0xA6,0x3A,0x5B,0xFC,0x9E,0xEF,0xAA,0xE8 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverterStatics>
    {
        static constexpr guid value{ 0x474E7352,0x210C,0x4673,{ 0xAC,0x6A,0x41,0x3F,0x0E,0x2C,0x77,0x50 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ILayoutInformation>
    {
        static constexpr guid value{ 0xB5384C9B,0xC8CF,0x41B3,{ 0xBF,0x16,0x18,0xC8,0x42,0x0E,0x72,0xC9 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics>
    {
        static constexpr guid value{ 0xCF06CF99,0x58E9,0x4682,{ 0x83,0x26,0x50,0xCA,0xAB,0x65,0xED,0x7C } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics2>
    {
        static constexpr guid value{ 0x760315B5,0x6D4E,0x4939,{ 0xAC,0x61,0x63,0x98,0x63,0xCE,0xA3,0x6B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter>
    {
        static constexpr guid value{ 0xFC8946BD,0xA3A2,0x4969,{ 0x81,0x74,0x25,0xB5,0xD3,0xC2,0x80,0x33 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2>
    {
        static constexpr guid value{ 0xF5DC5496,0xE122,0x4C57,{ 0xA6,0x25,0xAC,0x4B,0x08,0xFB,0x2D,0x4C } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3>
    {
        static constexpr guid value{ 0x36620013,0x0390,0x4E30,{ 0xAD,0x97,0x87,0x44,0x40,0x4F,0x70,0x10 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterFactory>
    {
        static constexpr guid value{ 0xE0777CFD,0xF7E4,0x4A67,{ 0x9A,0xC0,0xA9,0x94,0xFC,0xAC,0xD0,0x20 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>
    {
        static constexpr guid value{ 0x6504A55A,0x15DD,0x42FB,{ 0xAA,0x5D,0x2D,0x8C,0xE2,0xE9,0xC2,0x94 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2>
    {
        static constexpr guid value{ 0x4CB3B945,0xD24D,0x42A3,{ 0x9E,0x83,0xA8,0x6D,0x06,0x18,0xBF,0x1B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics3>
    {
        static constexpr guid value{ 0xC3D3D11E,0xFA26,0x4CE7,{ 0xA4,0xED,0xFF,0x94,0x8F,0x01,0xB7,0xC0 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings>
    {
        static constexpr guid value{ 0x67AF84BF,0x8279,0x4686,{ 0x93,0x26,0xCD,0x18,0x9F,0x27,0x57,0x5D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ILoopingSelector>
    {
        static constexpr guid value{ 0x4C9A3E04,0x4827,0x49D9,{ 0x88,0x06,0x09,0x39,0x57,0xB0,0xFD,0x21 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem>
    {
        static constexpr guid value{ 0xC69714B9,0x27C6,0x4433,{ 0x9D,0x7C,0x0D,0xBF,0xB2,0xF4,0x34,0x4F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel>
    {
        static constexpr guid value{ 0x40A9BA70,0x1011,0x4778,{ 0x87,0xF7,0x6B,0xFD,0x20,0xD6,0x37,0x7D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics>
    {
        static constexpr guid value{ 0x03E8BAFA,0x8C7D,0x4FC5,{ 0xB9,0x2A,0xF0,0x49,0xFB,0x93,0x3C,0xC5 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings>
    {
        static constexpr guid value{ 0x56AD1809,0x3A16,0x4147,{ 0x81,0xCB,0xD0,0xB3,0x5C,0x83,0x4E,0x0F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings>
    {
        static constexpr guid value{ 0xD68FD00D,0x629D,0x4349,{ 0xAC,0x51,0xB8,0x77,0xC8,0x09,0x83,0xB8 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenter>
    {
        static constexpr guid value{ 0x9956D3FC,0x4693,0x59CB,{ 0xB6,0xBF,0x37,0x24,0x90,0x58,0xBE,0x96 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenterFactory>
    {
        static constexpr guid value{ 0xBB062C50,0x4A36,0x52E7,{ 0x94,0x59,0xE8,0x9D,0x02,0xF3,0xFC,0x42 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenterStatics>
    {
        static constexpr guid value{ 0x52814604,0xCFC1,0x5AD5,{ 0xA3,0xAA,0xFA,0x35,0x5B,0xE6,0xBD,0x76 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel>
    {
        static constexpr guid value{ 0xF077B577,0x39BD,0x46EE,{ 0xBD,0xD7,0x08,0x26,0xBE,0xED,0x71,0xB8 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanelFactory>
    {
        static constexpr guid value{ 0x7B8EAEAF,0xF92F,0x439D,{ 0x9E,0xBF,0xE9,0x91,0x9F,0x56,0xC9,0x4D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase>
    {
        static constexpr guid value{ 0xE33574EA,0x1076,0x44D1,{ 0x93,0x83,0xDC,0x24,0xAC,0x5C,0xFF,0x2A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseFactory>
    {
        static constexpr guid value{ 0x7EC27A53,0x9502,0x4BEB,{ 0xB3,0x42,0x00,0x56,0x6C,0x8F,0x16,0xB0 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides>
    {
        static constexpr guid value{ 0x5BFC4F4A,0x4822,0x47B4,{ 0xA9,0x58,0x77,0xC2,0x0B,0xA1,0x20,0xD3 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics>
    {
        static constexpr guid value{ 0x5A4D0AC5,0x89AE,0x40E5,{ 0xA7,0xF1,0xBB,0x70,0x23,0x55,0xAD,0xF3 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem>
    {
        static constexpr guid value{ 0x594572C2,0x82AA,0x410B,{ 0x9E,0x55,0xFD,0x8E,0x2C,0x98,0x86,0x2D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItemFactory>
    {
        static constexpr guid value{ 0x14308B37,0x185B,0x4117,{ 0xBC,0x77,0xDD,0xA2,0xEB,0x26,0x1B,0x99 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel>
    {
        static constexpr guid value{ 0x21484EBC,0x9241,0x4203,{ 0xBD,0x37,0x6C,0x08,0xFB,0x09,0x66,0x12 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IPivotPanel>
    {
        static constexpr guid value{ 0xAD4EBE80,0x22A9,0x4CA3,{ 0x92,0x12,0x27,0x73,0xB6,0x35,0x9F,0xF3 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IPopup>
    {
        static constexpr guid value{ 0x62418240,0xE6D3,0x4705,{ 0xA1,0xDC,0x39,0x15,0x64,0x56,0xEE,0x29 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IPopup2>
    {
        static constexpr guid value{ 0x376A8C4C,0xAAC0,0x4B20,{ 0x96,0x6A,0x0B,0x93,0x64,0xFE,0xB4,0xB5 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IPopup3>
    {
        static constexpr guid value{ 0xF9C46915,0xA65C,0x5F68,{ 0x9F,0x54,0x31,0x0A,0x1B,0x51,0x09,0x5F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IPopupStatics>
    {
        static constexpr guid value{ 0x5AE3BF1A,0x6E34,0x40D6,{ 0x8A,0x7F,0xCA,0x82,0x2A,0xAF,0x59,0xE3 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IPopupStatics2>
    {
        static constexpr guid value{ 0x2B9AE9EC,0x55EF,0x43B6,{ 0xB4,0x59,0x12,0xE4,0x0F,0xFA,0x43,0x02 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IPopupStatics3>
    {
        static constexpr guid value{ 0x00789589,0xC580,0x558F,{ 0x94,0x5A,0x7D,0x02,0xEE,0x00,0x4D,0x3E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings>
    {
        static constexpr guid value{ 0x3FE2EA2A,0xE3F2,0x4C2B,{ 0x94,0x88,0x91,0x8D,0x77,0xD2,0xBB,0xE4 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings>
    {
        static constexpr guid value{ 0xB9B675EC,0xC723,0x42E6,{ 0x83,0xE9,0x98,0x26,0x27,0x2B,0xDC,0x0E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IRangeBase>
    {
        static constexpr guid value{ 0xFA002C1A,0x494E,0x46CF,{ 0x91,0xD4,0xE1,0x4A,0x8D,0x79,0x86,0x75 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IRangeBaseFactory>
    {
        static constexpr guid value{ 0x389B7C71,0x5220,0x42B2,{ 0x99,0x92,0x26,0x90,0xC1,0xA6,0x70,0x30 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides>
    {
        static constexpr guid value{ 0x4291AF39,0x7F0B,0x4BC2,{ 0x99,0xC4,0x06,0xE7,0x06,0x26,0x82,0xD8 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics>
    {
        static constexpr guid value{ 0x67EF17E1,0xFE37,0x474F,{ 0x9E,0x97,0x3B,0x5E,0x0B,0x30,0xF2,0xE0 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs>
    {
        static constexpr guid value{ 0xA1921777,0xD5C1,0x4F9C,{ 0xA7,0xB0,0x04,0x01,0xB7,0xE6,0xDC,0x5C } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IRepeatButton>
    {
        static constexpr guid value{ 0x02200DF9,0x021A,0x484A,{ 0xA9,0x3B,0x0F,0x31,0x02,0x03,0x14,0xE5 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IRepeatButtonStatics>
    {
        static constexpr guid value{ 0x3914AC4E,0xF462,0x4F73,{ 0x81,0x97,0xE8,0x84,0x66,0x39,0xC6,0x82 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IScrollBar>
    {
        static constexpr guid value{ 0xF57AE6CA,0xD1A6,0x4B90,{ 0xA4,0xE9,0x54,0xDF,0x1B,0xA8,0xD2,0xEC } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics>
    {
        static constexpr guid value{ 0x45EAF38D,0xB814,0x48CF,{ 0x97,0xF2,0x53,0x9E,0xB1,0x6D,0xFD,0x4D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs>
    {
        static constexpr guid value{ 0xC57E5168,0x3AFE,0x448D,{ 0xB7,0x52,0x2F,0x36,0x4C,0x75,0xD7,0x43 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo>
    {
        static constexpr guid value{ 0x1B5D1336,0xE61B,0x4D51,{ 0xBE,0x41,0xFD,0x8D,0xDC,0x55,0xC5,0x8C } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ISelector>
    {
        static constexpr guid value{ 0xE30EB3A5,0xB36B,0x42DC,{ 0x85,0x27,0xCD,0x25,0x13,0x6C,0x08,0x3C } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ISelectorFactory>
    {
        static constexpr guid value{ 0xC9BE2995,0xD136,0x4600,{ 0xB1,0x87,0x8A,0xD5,0x60,0x79,0xB4,0x8A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ISelectorItem>
    {
        static constexpr guid value{ 0x541C8D6C,0x0283,0x4581,{ 0xB9,0x45,0x2A,0x64,0xC2,0x8A,0x06,0x46 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ISelectorItemFactory>
    {
        static constexpr guid value{ 0xB9363945,0xC86A,0x4B1E,{ 0x94,0x40,0x18,0x79,0x37,0x8D,0x53,0x13 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ISelectorItemStatics>
    {
        static constexpr guid value{ 0x2A353AB8,0xCBE9,0x4303,{ 0x92,0xE7,0xC8,0x90,0x6E,0x21,0x83,0x92 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ISelectorStatics>
    {
        static constexpr guid value{ 0x13300B06,0xBD10,0x4E09,{ 0xBF,0xF7,0x71,0xEF,0xB8,0xBB,0xB4,0x2B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings>
    {
        static constexpr guid value{ 0xBCF14C10,0xCEA7,0x43F1,{ 0x9D,0x68,0x57,0x60,0x5D,0xED,0x69,0xD4 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings>
    {
        static constexpr guid value{ 0xC16AB5A7,0x4996,0x4443,{ 0xB1,0x99,0x6B,0x6B,0x89,0x12,0x4E,0xAB } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IThumb>
    {
        static constexpr guid value{ 0xE8B2B281,0x0D6A,0x45CF,{ 0xB3,0x33,0x24,0x02,0xB0,0x37,0xF0,0x99 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IThumbStatics>
    {
        static constexpr guid value{ 0x955024EB,0x36F3,0x4672,{ 0xA1,0x86,0xBA,0xAF,0x62,0x6A,0xC4,0xAD } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ITickBar>
    {
        static constexpr guid value{ 0x994683FA,0xF1F6,0x487D,{ 0xA5,0xAC,0xC1,0x59,0x21,0xBF,0xA9,0x95 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ITickBarStatics>
    {
        static constexpr guid value{ 0x2C6D7E40,0x799D,0x4A54,{ 0xBE,0x09,0x1F,0xEF,0xC6,0x1D,0x01,0x8E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IToggleButton>
    {
        static constexpr guid value{ 0x589877FB,0x0FC7,0x4036,{ 0x9D,0x8B,0x12,0x7D,0xFA,0x75,0xC1,0x6D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IToggleButtonFactory>
    {
        static constexpr guid value{ 0xD56AA2FC,0xFC7F,0x449C,{ 0x98,0x55,0x7A,0x10,0x55,0xD6,0x68,0xA8 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides>
    {
        static constexpr guid value{ 0xD20E4C28,0xF18B,0x491A,{ 0x9A,0x45,0xF1,0xA0,0x4A,0x93,0x69,0xA4 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IToggleButtonStatics>
    {
        static constexpr guid value{ 0xAF1EAB12,0x0128,0x4F67,{ 0x9C,0x5A,0x82,0x32,0x0C,0x44,0x5D,0x19 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings>
    {
        static constexpr guid value{ 0x02B7BDCD,0x628A,0x4363,{ 0x86,0xE0,0x51,0xD6,0xE2,0xE8,0x9E,0x58 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings>
    {
        static constexpr guid value{ 0xD4388247,0x0EC4,0x4506,{ 0xAF,0xFD,0xAF,0xAC,0x22,0x25,0xB4,0x8C } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler>
    {
        static constexpr guid value{ 0x36B28888,0x19AC,0x4B4E,{ 0x91,0x37,0xA6,0xCF,0x2B,0x02,0x38,0x83 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler>
    {
        static constexpr guid value{ 0x4AC24F9F,0xAC28,0x49E9,{ 0x91,0x89,0xDC,0xCF,0xFE,0xB6,0x64,0x72 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler>
    {
        static constexpr guid value{ 0xD2EEA48A,0xC65A,0x495D,{ 0xA2,0xF1,0x72,0xC6,0x69,0x89,0x14,0x2D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventHandler>
    {
        static constexpr guid value{ 0x178257BE,0xA304,0x482F,{ 0x8B,0xF0,0xB9,0xD2,0xE3,0x96,0x12,0xA3 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler>
    {
        static constexpr guid value{ 0xE3906FD9,0x4D1B,0x4AC8,{ 0xA4,0x3C,0xC3,0xB9,0x08,0x74,0x27,0x99 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler>
    {
        static constexpr guid value{ 0x8860B0A4,0xA383,0x4C83,{ 0xB3,0x06,0xA1,0xC3,0x9D,0x7D,0xB8,0x7F } };
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::AppBarButtonTemplateSettings>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::AppBarTemplateSettings>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::AppBarToggleButtonTemplateSettings>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ButtonBase>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IButtonBase;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::CalendarPanel>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::ICalendarPanel;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::CalendarViewTemplateSettings>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::CarouselPanel>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::ICarouselPanel;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ColorPickerSlider>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ColorSpectrum>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IColorSpectrum;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ComboBoxTemplateSettings>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::CommandBarFlyoutCommandBar>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBar;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::CommandBarFlyoutCommandBarTemplateSettings>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarTemplateSettings;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::CommandBarTemplateSettings>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::FlyoutBase>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IFlyoutBase;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::FlyoutShowOptions>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptions;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::GeneratorPositionHelper>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::GridViewItemTemplateSettings>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::JumpListItemBackgroundConverter>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::JumpListItemForegroundConverter>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::LayoutInformation>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::ILayoutInformation;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ListViewItemTemplateSettings>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::LoopingSelector>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::ILoopingSelector;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::LoopingSelectorItem>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::LoopingSelectorPanel>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::MenuFlyoutItemTemplateSettings>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::MenuFlyoutPresenterTemplateSettings>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::NavigationViewItemPresenter>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenter;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::PivotHeaderItem>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::PivotHeaderPanel>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::PivotPanel>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IPivotPanel;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::Popup>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IPopup;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ProgressBarTemplateSettings>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ProgressRingTemplateSettings>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::RangeBase>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IRangeBase;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::RepeatButton>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IRepeatButton;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ScrollBar>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IScrollBar;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::Selector>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::ISelector;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::SelectorItem>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::ISelectorItem;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::SettingsFlyoutTemplateSettings>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::SplitViewTemplateSettings>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::Thumb>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IThumb;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::TickBar>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::ITickBar;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ToggleButton>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IToggleButton;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ToggleSwitchTemplateSettings>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ToolTipTemplateSettings>
    {
        using type = Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings;
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeyboardAcceleratorTextMinWidth(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ClipRect(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_CompactVerticalDelta(double*) noexcept = 0;
            virtual int32_t __stdcall get_CompactRootMargin(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall get_MinimalVerticalDelta(double*) noexcept = 0;
            virtual int32_t __stdcall get_MinimalRootMargin(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall get_HiddenVerticalDelta(double*) noexcept = 0;
            virtual int32_t __stdcall get_HiddenRootMargin(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NegativeCompactVerticalDelta(double*) noexcept = 0;
            virtual int32_t __stdcall get_NegativeMinimalVerticalDelta(double*) noexcept = 0;
            virtual int32_t __stdcall get_NegativeHiddenVerticalDelta(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeyboardAcceleratorTextMinWidth(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IButtonBase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ClickMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ClickMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsPointerOver(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsPressed(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Command(void**) noexcept = 0;
            virtual int32_t __stdcall put_Command(void*) noexcept = 0;
            virtual int32_t __stdcall get_CommandParameter(void**) noexcept = 0;
            virtual int32_t __stdcall put_CommandParameter(void*) noexcept = 0;
            virtual int32_t __stdcall add_Click(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Click(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IButtonBaseFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ClickModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsPointerOverProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsPressedProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CommandProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CommandParameterProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICalendarPanel>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MinViewWidth(double*) noexcept = 0;
            virtual int32_t __stdcall get_HeaderText(void**) noexcept = 0;
            virtual int32_t __stdcall get_WeekDay1(void**) noexcept = 0;
            virtual int32_t __stdcall get_WeekDay2(void**) noexcept = 0;
            virtual int32_t __stdcall get_WeekDay3(void**) noexcept = 0;
            virtual int32_t __stdcall get_WeekDay4(void**) noexcept = 0;
            virtual int32_t __stdcall get_WeekDay5(void**) noexcept = 0;
            virtual int32_t __stdcall get_WeekDay6(void**) noexcept = 0;
            virtual int32_t __stdcall get_WeekDay7(void**) noexcept = 0;
            virtual int32_t __stdcall get_HasMoreContentAfter(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HasMoreContentBefore(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HasMoreViews(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ClipRect(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_CenterX(double*) noexcept = 0;
            virtual int32_t __stdcall get_CenterY(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICarouselPanel>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanVerticallyScroll(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanVerticallyScroll(bool) noexcept = 0;
            virtual int32_t __stdcall get_CanHorizontallyScroll(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanHorizontallyScroll(bool) noexcept = 0;
            virtual int32_t __stdcall get_ExtentWidth(double*) noexcept = 0;
            virtual int32_t __stdcall get_ExtentHeight(double*) noexcept = 0;
            virtual int32_t __stdcall get_ViewportWidth(double*) noexcept = 0;
            virtual int32_t __stdcall get_ViewportHeight(double*) noexcept = 0;
            virtual int32_t __stdcall get_HorizontalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_VerticalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_ScrollOwner(void**) noexcept = 0;
            virtual int32_t __stdcall put_ScrollOwner(void*) noexcept = 0;
            virtual int32_t __stdcall LineUp() noexcept = 0;
            virtual int32_t __stdcall LineDown() noexcept = 0;
            virtual int32_t __stdcall LineLeft() noexcept = 0;
            virtual int32_t __stdcall LineRight() noexcept = 0;
            virtual int32_t __stdcall PageUp() noexcept = 0;
            virtual int32_t __stdcall PageDown() noexcept = 0;
            virtual int32_t __stdcall PageLeft() noexcept = 0;
            virtual int32_t __stdcall PageRight() noexcept = 0;
            virtual int32_t __stdcall MouseWheelUp() noexcept = 0;
            virtual int32_t __stdcall MouseWheelDown() noexcept = 0;
            virtual int32_t __stdcall MouseWheelLeft() noexcept = 0;
            virtual int32_t __stdcall MouseWheelRight() noexcept = 0;
            virtual int32_t __stdcall SetHorizontalOffset(double) noexcept = 0;
            virtual int32_t __stdcall SetVerticalOffset(double) noexcept = 0;
            virtual int32_t __stdcall MakeVisible(void*, Windows::Foundation::Rect, Windows::Foundation::Rect*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICarouselPanelFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ColorChannel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ColorChannel(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ColorChannelProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IColorSpectrum>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Color(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Color(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_HsvColor(Windows::Foundation::Numerics::float4*) noexcept = 0;
            virtual int32_t __stdcall put_HsvColor(Windows::Foundation::Numerics::float4) noexcept = 0;
            virtual int32_t __stdcall get_MinHue(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MinHue(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MaxHue(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxHue(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MinSaturation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MinSaturation(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MaxSaturation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxSaturation(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MinValue(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MinValue(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MaxValue(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxValue(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Shape(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Shape(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Components(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Components(int32_t) noexcept = 0;
            virtual int32_t __stdcall add_ColorChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ColorChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ColorProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_HsvColorProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MinHueProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaxHueProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MinSaturationProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaxSaturationProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MinValueProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaxValueProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ShapeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ComponentsProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DropDownOpenedHeight(double*) noexcept = 0;
            virtual int32_t __stdcall get_DropDownClosedHeight(double*) noexcept = 0;
            virtual int32_t __stdcall get_DropDownOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedItemDirection(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DropDownContentMinWidth(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBar>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FlyoutTemplateSettings(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OpenAnimationStartPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_OpenAnimationEndPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_CloseAnimationEndPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_CurrentWidth(double*) noexcept = 0;
            virtual int32_t __stdcall get_ExpandedWidth(double*) noexcept = 0;
            virtual int32_t __stdcall get_WidthExpansionDelta(double*) noexcept = 0;
            virtual int32_t __stdcall get_WidthExpansionAnimationStartPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_WidthExpansionAnimationEndPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_WidthExpansionMoreButtonAnimationStartPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_WidthExpansionMoreButtonAnimationEndPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_ExpandUpOverflowVerticalPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_ExpandDownOverflowVerticalPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_ExpandUpAnimationStartPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_ExpandUpAnimationEndPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_ExpandUpAnimationHoldPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_ExpandDownAnimationStartPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_ExpandDownAnimationEndPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_ExpandDownAnimationHoldPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_ContentClipRect(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_OverflowContentClipRect(Windows::Foundation::Rect*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContentHeight(double*) noexcept = 0;
            virtual int32_t __stdcall get_OverflowContentClipRect(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_OverflowContentMinWidth(double*) noexcept = 0;
            virtual int32_t __stdcall get_OverflowContentMaxHeight(double*) noexcept = 0;
            virtual int32_t __stdcall get_OverflowContentHorizontalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_OverflowContentHeight(double*) noexcept = 0;
            virtual int32_t __stdcall get_NegativeOverflowContentHeight(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OverflowContentMaxWidth(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EffectiveOverflowButtonVisibility(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OverflowContentCompactYTranslation(double*) noexcept = 0;
            virtual int32_t __stdcall get_OverflowContentMinimalYTranslation(double*) noexcept = 0;
            virtual int32_t __stdcall get_OverflowContentHiddenYTranslation(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HorizontalChange(double*) noexcept = 0;
            virtual int32_t __stdcall get_VerticalChange(double*) noexcept = 0;
            virtual int32_t __stdcall get_Canceled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithHorizontalChangeVerticalChangeAndCanceled(double, double, bool, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HorizontalChange(double*) noexcept = 0;
            virtual int32_t __stdcall get_VerticalChange(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithHorizontalChangeAndVerticalChange(double, double, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HorizontalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_VerticalOffset(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithHorizontalOffsetAndVerticalOffset(double, double, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Placement(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Placement(int32_t) noexcept = 0;
            virtual int32_t __stdcall add_Opened(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Opened(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Closed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Opening(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Opening(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall ShowAt(void*) noexcept = 0;
            virtual int32_t __stdcall Hide() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Target(void**) noexcept = 0;
            virtual int32_t __stdcall get_AllowFocusOnInteraction(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowFocusOnInteraction(bool) noexcept = 0;
            virtual int32_t __stdcall get_LightDismissOverlayMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_LightDismissOverlayMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AllowFocusWhenDisabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowFocusWhenDisabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_ElementSoundMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ElementSoundMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall add_Closing(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closing(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OverlayInputPassThroughElement(void**) noexcept = 0;
            virtual int32_t __stdcall put_OverlayInputPassThroughElement(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryInvokeKeyboardAccelerator(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ShowMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ShowMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_InputDevicePrefersPrimaryCommands(bool*) noexcept = 0;
            virtual int32_t __stdcall get_AreOpenCloseAnimationsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AreOpenCloseAnimationsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsOpen(bool*) noexcept = 0;
            virtual int32_t __stdcall ShowAt(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ShouldConstrainToRootBounds(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ShouldConstrainToRootBounds(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsConstrainedToRootBounds(bool*) noexcept = 0;
            virtual int32_t __stdcall get_XamlRoot(void**) noexcept = 0;
            virtual int32_t __stdcall put_XamlRoot(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Cancel(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Cancel(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreatePresenter(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OnProcessKeyboardAccelerators(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PlacementProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AttachedFlyoutProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetAttachedFlyout(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetAttachedFlyout(void*, void*) noexcept = 0;
            virtual int32_t __stdcall ShowAttachedFlyout(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllowFocusOnInteractionProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_LightDismissOverlayModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AllowFocusWhenDisabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ElementSoundModeProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OverlayInputPassThroughElementProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ShowModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_InputDevicePrefersPrimaryCommandsProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AreOpenCloseAnimationsEnabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsOpenProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ShouldConstrainToRootBoundsProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(void**) noexcept = 0;
            virtual int32_t __stdcall put_Position(void*) noexcept = 0;
            virtual int32_t __stdcall get_ExclusionRect(void**) noexcept = 0;
            virtual int32_t __stdcall put_ExclusionRect(void*) noexcept = 0;
            virtual int32_t __stdcall get_ShowMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ShowMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Placement(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Placement(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptionsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromIndexAndOffset(int32_t, int32_t, struct struct_Windows_UI_Xaml_Controls_Primitives_GeneratorPosition*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SelectionCheckMarkVisualEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_SelectionCheckMarkVisualEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_CheckHintBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CheckHintBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_CheckSelectingBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CheckSelectingBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_CheckBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CheckBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_DragBackground(void**) noexcept = 0;
            virtual int32_t __stdcall put_DragBackground(void*) noexcept = 0;
            virtual int32_t __stdcall get_DragForeground(void**) noexcept = 0;
            virtual int32_t __stdcall put_DragForeground(void*) noexcept = 0;
            virtual int32_t __stdcall get_FocusBorderBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_FocusBorderBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_PlaceholderBackground(void**) noexcept = 0;
            virtual int32_t __stdcall put_PlaceholderBackground(void*) noexcept = 0;
            virtual int32_t __stdcall get_PointerOverBackground(void**) noexcept = 0;
            virtual int32_t __stdcall put_PointerOverBackground(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedBackground(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedBackground(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedForeground(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedForeground(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedPointerOverBackground(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedPointerOverBackground(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedPointerOverBorderBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedPointerOverBorderBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedBorderThickness(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall put_SelectedBorderThickness(struct struct_Windows_UI_Xaml_Thickness) noexcept = 0;
            virtual int32_t __stdcall get_DisabledOpacity(double*) noexcept = 0;
            virtual int32_t __stdcall put_DisabledOpacity(double) noexcept = 0;
            virtual int32_t __stdcall get_DragOpacity(double*) noexcept = 0;
            virtual int32_t __stdcall put_DragOpacity(double) noexcept = 0;
            virtual int32_t __stdcall get_ReorderHintOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_ReorderHintOffset(double) noexcept = 0;
            virtual int32_t __stdcall get_GridViewItemPresenterHorizontalContentAlignment(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_GridViewItemPresenterHorizontalContentAlignment(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_GridViewItemPresenterVerticalContentAlignment(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_GridViewItemPresenterVerticalContentAlignment(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_GridViewItemPresenterPadding(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall put_GridViewItemPresenterPadding(struct struct_Windows_UI_Xaml_Thickness) noexcept = 0;
            virtual int32_t __stdcall get_PointerOverBackgroundMargin(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall put_PointerOverBackgroundMargin(struct struct_Windows_UI_Xaml_Thickness) noexcept = 0;
            virtual int32_t __stdcall get_ContentMargin(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall put_ContentMargin(struct struct_Windows_UI_Xaml_Thickness) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SelectionCheckMarkVisualEnabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckHintBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckSelectingBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DragBackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DragForegroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FocusBorderBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PlaceholderBackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PointerOverBackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedBackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedForegroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedPointerOverBackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedPointerOverBorderBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedBorderThicknessProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisabledOpacityProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DragOpacityProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ReorderHintOffsetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_GridViewItemPresenterHorizontalContentAlignmentProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_GridViewItemPresenterVerticalContentAlignmentProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_GridViewItemPresenterPaddingProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PointerOverBackgroundMarginProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContentMarginProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DragItemsCount(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Action(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Position(struct struct_Windows_UI_Xaml_Controls_Primitives_GeneratorPosition*) noexcept = 0;
            virtual int32_t __stdcall get_OldPosition(struct struct_Windows_UI_Xaml_Controls_Primitives_GeneratorPosition*) noexcept = 0;
            virtual int32_t __stdcall get_ItemCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ItemUICount(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Enabled(void**) noexcept = 0;
            virtual int32_t __stdcall put_Enabled(void*) noexcept = 0;
            virtual int32_t __stdcall get_Disabled(void**) noexcept = 0;
            virtual int32_t __stdcall put_Disabled(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverterStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EnabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisabledProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Enabled(void**) noexcept = 0;
            virtual int32_t __stdcall put_Enabled(void*) noexcept = 0;
            virtual int32_t __stdcall get_Disabled(void**) noexcept = 0;
            virtual int32_t __stdcall put_Disabled(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverterStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EnabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisabledProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ILayoutInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetLayoutExceptionElement(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetLayoutSlot(void*, Windows::Foundation::Rect*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAvailableSize(void*, Windows::Foundation::Size*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SelectionCheckMarkVisualEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_SelectionCheckMarkVisualEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_CheckHintBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CheckHintBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_CheckSelectingBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CheckSelectingBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_CheckBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CheckBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_DragBackground(void**) noexcept = 0;
            virtual int32_t __stdcall put_DragBackground(void*) noexcept = 0;
            virtual int32_t __stdcall get_DragForeground(void**) noexcept = 0;
            virtual int32_t __stdcall put_DragForeground(void*) noexcept = 0;
            virtual int32_t __stdcall get_FocusBorderBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_FocusBorderBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_PlaceholderBackground(void**) noexcept = 0;
            virtual int32_t __stdcall put_PlaceholderBackground(void*) noexcept = 0;
            virtual int32_t __stdcall get_PointerOverBackground(void**) noexcept = 0;
            virtual int32_t __stdcall put_PointerOverBackground(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedBackground(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedBackground(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedForeground(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedForeground(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedPointerOverBackground(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedPointerOverBackground(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedPointerOverBorderBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedPointerOverBorderBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedBorderThickness(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall put_SelectedBorderThickness(struct struct_Windows_UI_Xaml_Thickness) noexcept = 0;
            virtual int32_t __stdcall get_DisabledOpacity(double*) noexcept = 0;
            virtual int32_t __stdcall put_DisabledOpacity(double) noexcept = 0;
            virtual int32_t __stdcall get_DragOpacity(double*) noexcept = 0;
            virtual int32_t __stdcall put_DragOpacity(double) noexcept = 0;
            virtual int32_t __stdcall get_ReorderHintOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_ReorderHintOffset(double) noexcept = 0;
            virtual int32_t __stdcall get_ListViewItemPresenterHorizontalContentAlignment(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ListViewItemPresenterHorizontalContentAlignment(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ListViewItemPresenterVerticalContentAlignment(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ListViewItemPresenterVerticalContentAlignment(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ListViewItemPresenterPadding(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall put_ListViewItemPresenterPadding(struct struct_Windows_UI_Xaml_Thickness) noexcept = 0;
            virtual int32_t __stdcall get_PointerOverBackgroundMargin(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall put_PointerOverBackgroundMargin(struct struct_Windows_UI_Xaml_Thickness) noexcept = 0;
            virtual int32_t __stdcall get_ContentMargin(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall put_ContentMargin(struct struct_Windows_UI_Xaml_Thickness) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SelectedPressedBackground(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedPressedBackground(void*) noexcept = 0;
            virtual int32_t __stdcall get_PressedBackground(void**) noexcept = 0;
            virtual int32_t __stdcall put_PressedBackground(void*) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CheckBoxBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_FocusSecondaryBorderBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_FocusSecondaryBorderBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_CheckMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CheckMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_PointerOverForeground(void**) noexcept = 0;
            virtual int32_t __stdcall put_PointerOverForeground(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RevealBackground(void**) noexcept = 0;
            virtual int32_t __stdcall put_RevealBackground(void*) noexcept = 0;
            virtual int32_t __stdcall get_RevealBorderBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_RevealBorderBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_RevealBorderThickness(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall put_RevealBorderThickness(struct struct_Windows_UI_Xaml_Thickness) noexcept = 0;
            virtual int32_t __stdcall get_RevealBackgroundShowsAboveContent(bool*) noexcept = 0;
            virtual int32_t __stdcall put_RevealBackgroundShowsAboveContent(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SelectionCheckMarkVisualEnabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckHintBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckSelectingBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DragBackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DragForegroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FocusBorderBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PlaceholderBackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PointerOverBackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedBackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedForegroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedPointerOverBackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedPointerOverBorderBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedBorderThicknessProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisabledOpacityProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DragOpacityProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ReorderHintOffsetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ListViewItemPresenterHorizontalContentAlignmentProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ListViewItemPresenterVerticalContentAlignmentProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ListViewItemPresenterPaddingProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PointerOverBackgroundMarginProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContentMarginProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SelectedPressedBackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PressedBackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FocusSecondaryBorderBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PointerOverForegroundProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RevealBackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RevealBorderBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RevealBorderThicknessProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RevealBackgroundShowsAboveContentProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DragItemsCount(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ILoopingSelector>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ShouldLoop(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ShouldLoop(bool) noexcept = 0;
            virtual int32_t __stdcall get_Items(void**) noexcept = 0;
            virtual int32_t __stdcall put_Items(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SelectedIndex(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SelectedItem(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedItem(void*) noexcept = 0;
            virtual int32_t __stdcall get_ItemWidth(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ItemWidth(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ItemHeight(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ItemHeight(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ItemTemplate(void**) noexcept = 0;
            virtual int32_t __stdcall put_ItemTemplate(void*) noexcept = 0;
            virtual int32_t __stdcall add_SelectionChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SelectionChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ShouldLoopProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ItemsProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedIndexProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedItemProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ItemWidthProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ItemHeightProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ItemTemplateProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeyboardAcceleratorTextMinWidth(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FlyoutContentMinWidth(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Icon(void**) noexcept = 0;
            virtual int32_t __stdcall put_Icon(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenterFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenterStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IconProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanVerticallyScroll(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanVerticallyScroll(bool) noexcept = 0;
            virtual int32_t __stdcall get_CanHorizontallyScroll(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanHorizontallyScroll(bool) noexcept = 0;
            virtual int32_t __stdcall get_ExtentWidth(double*) noexcept = 0;
            virtual int32_t __stdcall get_ExtentHeight(double*) noexcept = 0;
            virtual int32_t __stdcall get_ViewportWidth(double*) noexcept = 0;
            virtual int32_t __stdcall get_ViewportHeight(double*) noexcept = 0;
            virtual int32_t __stdcall get_HorizontalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_VerticalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_ScrollOwner(void**) noexcept = 0;
            virtual int32_t __stdcall put_ScrollOwner(void*) noexcept = 0;
            virtual int32_t __stdcall LineUp() noexcept = 0;
            virtual int32_t __stdcall LineDown() noexcept = 0;
            virtual int32_t __stdcall LineLeft() noexcept = 0;
            virtual int32_t __stdcall LineRight() noexcept = 0;
            virtual int32_t __stdcall PageUp() noexcept = 0;
            virtual int32_t __stdcall PageDown() noexcept = 0;
            virtual int32_t __stdcall PageLeft() noexcept = 0;
            virtual int32_t __stdcall PageRight() noexcept = 0;
            virtual int32_t __stdcall MouseWheelUp() noexcept = 0;
            virtual int32_t __stdcall MouseWheelDown() noexcept = 0;
            virtual int32_t __stdcall MouseWheelLeft() noexcept = 0;
            virtual int32_t __stdcall MouseWheelRight() noexcept = 0;
            virtual int32_t __stdcall SetHorizontalOffset(double) noexcept = 0;
            virtual int32_t __stdcall SetVerticalOffset(double) noexcept = 0;
            virtual int32_t __stdcall MakeVisible(void*, Windows::Foundation::Rect, Windows::Foundation::Rect*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanelFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OnConfirmed() noexcept = 0;
            virtual int32_t __stdcall ShouldShowConfirmationButtons(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TitleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetTitle(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetTitle(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItemFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPivotPanel>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPopup>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Child(void**) noexcept = 0;
            virtual int32_t __stdcall put_Child(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsOpen(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsOpen(bool) noexcept = 0;
            virtual int32_t __stdcall get_HorizontalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_HorizontalOffset(double) noexcept = 0;
            virtual int32_t __stdcall get_VerticalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_VerticalOffset(double) noexcept = 0;
            virtual int32_t __stdcall get_ChildTransitions(void**) noexcept = 0;
            virtual int32_t __stdcall put_ChildTransitions(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsLightDismissEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsLightDismissEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall add_Opened(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Opened(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Closed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPopup2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LightDismissOverlayMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_LightDismissOverlayMode(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPopup3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ShouldConstrainToRootBounds(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ShouldConstrainToRootBounds(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsConstrainedToRootBounds(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPopupStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChildProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsOpenProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_HorizontalOffsetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_VerticalOffsetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ChildTransitionsProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsLightDismissEnabledProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPopupStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LightDismissOverlayModeProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPopupStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ShouldConstrainToRootBoundsProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EllipseDiameter(double*) noexcept = 0;
            virtual int32_t __stdcall get_EllipseOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_EllipseAnimationWellPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_EllipseAnimationEndPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_ContainerAnimationStartPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_ContainerAnimationEndPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_IndicatorLengthDelta(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EllipseDiameter(double*) noexcept = 0;
            virtual int32_t __stdcall get_EllipseOffset(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall get_MaxSideLength(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IRangeBase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Minimum(double*) noexcept = 0;
            virtual int32_t __stdcall put_Minimum(double) noexcept = 0;
            virtual int32_t __stdcall get_Maximum(double*) noexcept = 0;
            virtual int32_t __stdcall put_Maximum(double) noexcept = 0;
            virtual int32_t __stdcall get_SmallChange(double*) noexcept = 0;
            virtual int32_t __stdcall put_SmallChange(double) noexcept = 0;
            virtual int32_t __stdcall get_LargeChange(double*) noexcept = 0;
            virtual int32_t __stdcall put_LargeChange(double) noexcept = 0;
            virtual int32_t __stdcall get_Value(double*) noexcept = 0;
            virtual int32_t __stdcall put_Value(double) noexcept = 0;
            virtual int32_t __stdcall add_ValueChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ValueChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IRangeBaseFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OnMinimumChanged(double, double) noexcept = 0;
            virtual int32_t __stdcall OnMaximumChanged(double, double) noexcept = 0;
            virtual int32_t __stdcall OnValueChanged(double, double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MinimumProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaximumProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SmallChangeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_LargeChangeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ValueProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OldValue(double*) noexcept = 0;
            virtual int32_t __stdcall get_NewValue(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IRepeatButton>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Delay(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Delay(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Interval(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Interval(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IRepeatButtonStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DelayProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IntervalProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IScrollBar>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Orientation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Orientation(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ViewportSize(double*) noexcept = 0;
            virtual int32_t __stdcall put_ViewportSize(double) noexcept = 0;
            virtual int32_t __stdcall get_IndicatorMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_IndicatorMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall add_Scroll(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Scroll(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OrientationProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ViewportSizeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IndicatorModeProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NewValue(double*) noexcept = 0;
            virtual int32_t __stdcall get_ScrollEventType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AreHorizontalSnapPointsRegular(bool*) noexcept = 0;
            virtual int32_t __stdcall get_AreVerticalSnapPointsRegular(bool*) noexcept = 0;
            virtual int32_t __stdcall add_HorizontalSnapPointsChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_HorizontalSnapPointsChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_VerticalSnapPointsChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VerticalSnapPointsChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetIrregularSnapPoints(int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetRegularSnapPoints(int32_t, int32_t, float*, float*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ISelector>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SelectedIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SelectedIndex(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SelectedItem(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedItem(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedValue(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedValue(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedValuePath(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedValuePath(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsSynchronizedWithCurrentItem(void**) noexcept = 0;
            virtual int32_t __stdcall put_IsSynchronizedWithCurrentItem(void*) noexcept = 0;
            virtual int32_t __stdcall add_SelectionChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SelectionChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ISelectorFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ISelectorItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSelected(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsSelected(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ISelectorItemFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ISelectorItemStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSelectedProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ISelectorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SelectedIndexProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedItemProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedValueProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedValuePathProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsSynchronizedWithCurrentItemProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetIsSelectionActive(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HeaderBackground(void**) noexcept = 0;
            virtual int32_t __stdcall get_HeaderForeground(void**) noexcept = 0;
            virtual int32_t __stdcall get_BorderBrush(void**) noexcept = 0;
            virtual int32_t __stdcall get_BorderThickness(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall get_IconSource(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContentTransitions(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OpenPaneLength(double*) noexcept = 0;
            virtual int32_t __stdcall get_NegativeOpenPaneLength(double*) noexcept = 0;
            virtual int32_t __stdcall get_OpenPaneLengthMinusCompactLength(double*) noexcept = 0;
            virtual int32_t __stdcall get_NegativeOpenPaneLengthMinusCompactLength(double*) noexcept = 0;
            virtual int32_t __stdcall get_OpenPaneGridLength(struct struct_Windows_UI_Xaml_GridLength*) noexcept = 0;
            virtual int32_t __stdcall get_CompactPaneGridLength(struct struct_Windows_UI_Xaml_GridLength*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IThumb>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsDragging(bool*) noexcept = 0;
            virtual int32_t __stdcall add_DragStarted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DragStarted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DragDelta(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DragDelta(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DragCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DragCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall CancelDrag() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IThumbStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsDraggingProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ITickBar>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Fill(void**) noexcept = 0;
            virtual int32_t __stdcall put_Fill(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ITickBarStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FillProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IToggleButton>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsChecked(void**) noexcept = 0;
            virtual int32_t __stdcall put_IsChecked(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsThreeState(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsThreeState(bool) noexcept = 0;
            virtual int32_t __stdcall add_Checked(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Checked(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Unchecked(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Unchecked(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Indeterminate(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Indeterminate(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IToggleButtonFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OnToggle() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IToggleButtonStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsCheckedProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsThreeStateProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KnobCurrentToOnOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_KnobCurrentToOffOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_KnobOnToOffOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_KnobOffToOnOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_CurtainCurrentToOnOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_CurtainCurrentToOffOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_CurtainOnToOffOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_CurtainOffToOnOffset(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FromHorizontalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_FromVerticalOffset(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IAppBarButtonTemplateSettings
    {
        [[nodiscard]] auto KeyboardAcceleratorTextMinWidth() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IAppBarButtonTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IAppBarTemplateSettings
    {
        [[nodiscard]] auto ClipRect() const;
        [[nodiscard]] auto CompactVerticalDelta() const;
        [[nodiscard]] auto CompactRootMargin() const;
        [[nodiscard]] auto MinimalVerticalDelta() const;
        [[nodiscard]] auto MinimalRootMargin() const;
        [[nodiscard]] auto HiddenVerticalDelta() const;
        [[nodiscard]] auto HiddenRootMargin() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IAppBarTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IAppBarTemplateSettings2
    {
        [[nodiscard]] auto NegativeCompactVerticalDelta() const;
        [[nodiscard]] auto NegativeMinimalVerticalDelta() const;
        [[nodiscard]] auto NegativeHiddenVerticalDelta() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IAppBarTemplateSettings2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IAppBarToggleButtonTemplateSettings
    {
        [[nodiscard]] auto KeyboardAcceleratorTextMinWidth() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IAppBarToggleButtonTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IButtonBase
    {
        [[nodiscard]] auto ClickMode() const;
        auto ClickMode(Windows::UI::Xaml::Controls::ClickMode const& value) const;
        [[nodiscard]] auto IsPointerOver() const;
        [[nodiscard]] auto IsPressed() const;
        [[nodiscard]] auto Command() const;
        auto Command(Windows::UI::Xaml::Input::ICommand const& value) const;
        [[nodiscard]] auto CommandParameter() const;
        auto CommandParameter(Windows::Foundation::IInspectable const& value) const;
        auto Click(Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        using Click_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IButtonBase, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IButtonBase>::remove_Click>;
        Click_revoker Click(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        auto Click(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IButtonBase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IButtonBase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IButtonBaseFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IButtonBaseFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IButtonBaseFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IButtonBaseStatics
    {
        [[nodiscard]] auto ClickModeProperty() const;
        [[nodiscard]] auto IsPointerOverProperty() const;
        [[nodiscard]] auto IsPressedProperty() const;
        [[nodiscard]] auto CommandProperty() const;
        [[nodiscard]] auto CommandParameterProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IButtonBaseStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ICalendarPanel
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICalendarPanel>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICalendarPanel<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ICalendarViewTemplateSettings
    {
        [[nodiscard]] auto MinViewWidth() const;
        [[nodiscard]] auto HeaderText() const;
        [[nodiscard]] auto WeekDay1() const;
        [[nodiscard]] auto WeekDay2() const;
        [[nodiscard]] auto WeekDay3() const;
        [[nodiscard]] auto WeekDay4() const;
        [[nodiscard]] auto WeekDay5() const;
        [[nodiscard]] auto WeekDay6() const;
        [[nodiscard]] auto WeekDay7() const;
        [[nodiscard]] auto HasMoreContentAfter() const;
        [[nodiscard]] auto HasMoreContentBefore() const;
        [[nodiscard]] auto HasMoreViews() const;
        [[nodiscard]] auto ClipRect() const;
        [[nodiscard]] auto CenterX() const;
        [[nodiscard]] auto CenterY() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICalendarViewTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel
    {
        [[nodiscard]] auto CanVerticallyScroll() const;
        auto CanVerticallyScroll(bool value) const;
        [[nodiscard]] auto CanHorizontallyScroll() const;
        auto CanHorizontallyScroll(bool value) const;
        [[nodiscard]] auto ExtentWidth() const;
        [[nodiscard]] auto ExtentHeight() const;
        [[nodiscard]] auto ViewportWidth() const;
        [[nodiscard]] auto ViewportHeight() const;
        [[nodiscard]] auto HorizontalOffset() const;
        [[nodiscard]] auto VerticalOffset() const;
        [[nodiscard]] auto ScrollOwner() const;
        auto ScrollOwner(Windows::Foundation::IInspectable const& value) const;
        auto LineUp() const;
        auto LineDown() const;
        auto LineLeft() const;
        auto LineRight() const;
        auto PageUp() const;
        auto PageDown() const;
        auto PageLeft() const;
        auto PageRight() const;
        auto MouseWheelUp() const;
        auto MouseWheelDown() const;
        auto MouseWheelLeft() const;
        auto MouseWheelRight() const;
        auto SetHorizontalOffset(double offset) const;
        auto SetVerticalOffset(double offset) const;
        auto MakeVisible(Windows::UI::Xaml::UIElement const& visual, Windows::Foundation::Rect const& rectangle) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICarouselPanel>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanelFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICarouselPanelFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanelFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IColorPickerSlider
    {
        [[nodiscard]] auto ColorChannel() const;
        auto ColorChannel(Windows::UI::Xaml::Controls::ColorPickerHsvChannel const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IColorPickerSlider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IColorPickerSliderFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IColorPickerSliderFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IColorPickerSliderStatics
    {
        [[nodiscard]] auto ColorChannelProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IColorPickerSliderStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum
    {
        [[nodiscard]] auto Color() const;
        auto Color(Windows::UI::Color const& value) const;
        [[nodiscard]] auto HsvColor() const;
        auto HsvColor(Windows::Foundation::Numerics::float4 const& value) const;
        [[nodiscard]] auto MinHue() const;
        auto MinHue(int32_t value) const;
        [[nodiscard]] auto MaxHue() const;
        auto MaxHue(int32_t value) const;
        [[nodiscard]] auto MinSaturation() const;
        auto MinSaturation(int32_t value) const;
        [[nodiscard]] auto MaxSaturation() const;
        auto MaxSaturation(int32_t value) const;
        [[nodiscard]] auto MinValue() const;
        auto MinValue(int32_t value) const;
        [[nodiscard]] auto MaxValue() const;
        auto MaxValue(int32_t value) const;
        [[nodiscard]] auto Shape() const;
        auto Shape(Windows::UI::Xaml::Controls::ColorSpectrumShape const& value) const;
        [[nodiscard]] auto Components() const;
        auto Components(Windows::UI::Xaml::Controls::ColorSpectrumComponents const& value) const;
        auto ColorChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Primitives::ColorSpectrum, Windows::UI::Xaml::Controls::ColorChangedEventArgs> const& handler) const;
        using ColorChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IColorSpectrum, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IColorSpectrum>::remove_ColorChanged>;
        ColorChanged_revoker ColorChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Primitives::ColorSpectrum, Windows::UI::Xaml::Controls::ColorChangedEventArgs> const& handler) const;
        auto ColorChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IColorSpectrum>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrumFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrumFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrumStatics
    {
        [[nodiscard]] auto ColorProperty() const;
        [[nodiscard]] auto HsvColorProperty() const;
        [[nodiscard]] auto MinHueProperty() const;
        [[nodiscard]] auto MaxHueProperty() const;
        [[nodiscard]] auto MinSaturationProperty() const;
        [[nodiscard]] auto MaxSaturationProperty() const;
        [[nodiscard]] auto MinValueProperty() const;
        [[nodiscard]] auto MaxValueProperty() const;
        [[nodiscard]] auto ShapeProperty() const;
        [[nodiscard]] auto ComponentsProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrumStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IComboBoxTemplateSettings
    {
        [[nodiscard]] auto DropDownOpenedHeight() const;
        [[nodiscard]] auto DropDownClosedHeight() const;
        [[nodiscard]] auto DropDownOffset() const;
        [[nodiscard]] auto SelectedItemDirection() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IComboBoxTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IComboBoxTemplateSettings2
    {
        [[nodiscard]] auto DropDownContentMinWidth() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IComboBoxTemplateSettings2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarFlyoutCommandBar
    {
        [[nodiscard]] auto FlyoutTemplateSettings() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBar>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarFlyoutCommandBar<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarFlyoutCommandBarFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarFlyoutCommandBarFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarFlyoutCommandBarTemplateSettings
    {
        [[nodiscard]] auto OpenAnimationStartPosition() const;
        [[nodiscard]] auto OpenAnimationEndPosition() const;
        [[nodiscard]] auto CloseAnimationEndPosition() const;
        [[nodiscard]] auto CurrentWidth() const;
        [[nodiscard]] auto ExpandedWidth() const;
        [[nodiscard]] auto WidthExpansionDelta() const;
        [[nodiscard]] auto WidthExpansionAnimationStartPosition() const;
        [[nodiscard]] auto WidthExpansionAnimationEndPosition() const;
        [[nodiscard]] auto WidthExpansionMoreButtonAnimationStartPosition() const;
        [[nodiscard]] auto WidthExpansionMoreButtonAnimationEndPosition() const;
        [[nodiscard]] auto ExpandUpOverflowVerticalPosition() const;
        [[nodiscard]] auto ExpandDownOverflowVerticalPosition() const;
        [[nodiscard]] auto ExpandUpAnimationStartPosition() const;
        [[nodiscard]] auto ExpandUpAnimationEndPosition() const;
        [[nodiscard]] auto ExpandUpAnimationHoldPosition() const;
        [[nodiscard]] auto ExpandDownAnimationStartPosition() const;
        [[nodiscard]] auto ExpandDownAnimationEndPosition() const;
        [[nodiscard]] auto ExpandDownAnimationHoldPosition() const;
        [[nodiscard]] auto ContentClipRect() const;
        [[nodiscard]] auto OverflowContentClipRect() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarFlyoutCommandBarTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings
    {
        [[nodiscard]] auto ContentHeight() const;
        [[nodiscard]] auto OverflowContentClipRect() const;
        [[nodiscard]] auto OverflowContentMinWidth() const;
        [[nodiscard]] auto OverflowContentMaxHeight() const;
        [[nodiscard]] auto OverflowContentHorizontalOffset() const;
        [[nodiscard]] auto OverflowContentHeight() const;
        [[nodiscard]] auto NegativeOverflowContentHeight() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings2
    {
        [[nodiscard]] auto OverflowContentMaxWidth() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings3
    {
        [[nodiscard]] auto EffectiveOverflowButtonVisibility() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings4
    {
        [[nodiscard]] auto OverflowContentCompactYTranslation() const;
        [[nodiscard]] auto OverflowContentMinimalYTranslation() const;
        [[nodiscard]] auto OverflowContentHiddenYTranslation() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IDragCompletedEventArgs
    {
        [[nodiscard]] auto HorizontalChange() const;
        [[nodiscard]] auto VerticalChange() const;
        [[nodiscard]] auto Canceled() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IDragCompletedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IDragCompletedEventArgsFactory
    {
        auto CreateInstanceWithHorizontalChangeVerticalChangeAndCanceled(double horizontalChange, double verticalChange, bool canceled, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgsFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IDragCompletedEventArgsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IDragDeltaEventArgs
    {
        [[nodiscard]] auto HorizontalChange() const;
        [[nodiscard]] auto VerticalChange() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IDragDeltaEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IDragDeltaEventArgsFactory
    {
        auto CreateInstanceWithHorizontalChangeAndVerticalChange(double horizontalChange, double verticalChange, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgsFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IDragDeltaEventArgsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IDragStartedEventArgs
    {
        [[nodiscard]] auto HorizontalOffset() const;
        [[nodiscard]] auto VerticalOffset() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IDragStartedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IDragStartedEventArgsFactory
    {
        auto CreateInstanceWithHorizontalOffsetAndVerticalOffset(double horizontalOffset, double verticalOffset, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IDragStartedEventArgsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase
    {
        [[nodiscard]] auto Placement() const;
        auto Placement(Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode const& value) const;
        auto Opened(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using Opened_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>::remove_Opened>;
        Opened_revoker Opened(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto Opened(winrt::event_token const& token) const noexcept;
        auto Closed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using Closed_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>::remove_Closed>;
        Closed_revoker Closed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto Closed(winrt::event_token const& token) const noexcept;
        auto Opening(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using Opening_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>::remove_Opening>;
        Opening_revoker Opening(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto Opening(winrt::event_token const& token) const noexcept;
        auto ShowAt(Windows::UI::Xaml::FrameworkElement const& placementTarget) const;
        auto Hide() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase2
    {
        [[nodiscard]] auto Target() const;
        [[nodiscard]] auto AllowFocusOnInteraction() const;
        auto AllowFocusOnInteraction(bool value) const;
        [[nodiscard]] auto LightDismissOverlayMode() const;
        auto LightDismissOverlayMode(Windows::UI::Xaml::Controls::LightDismissOverlayMode const& value) const;
        [[nodiscard]] auto AllowFocusWhenDisabled() const;
        auto AllowFocusWhenDisabled(bool value) const;
        [[nodiscard]] auto ElementSoundMode() const;
        auto ElementSoundMode(Windows::UI::Xaml::ElementSoundMode const& value) const;
        auto Closing(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Primitives::FlyoutBase, Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs> const& handler) const;
        using Closing_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2>::remove_Closing>;
        Closing_revoker Closing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Primitives::FlyoutBase, Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs> const& handler) const;
        auto Closing(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase3
    {
        [[nodiscard]] auto OverlayInputPassThroughElement() const;
        auto OverlayInputPassThroughElement(Windows::UI::Xaml::DependencyObject const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase4
    {
        auto TryInvokeKeyboardAccelerator(Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs const& args) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase5
    {
        [[nodiscard]] auto ShowMode() const;
        auto ShowMode(Windows::UI::Xaml::Controls::Primitives::FlyoutShowMode const& value) const;
        [[nodiscard]] auto InputDevicePrefersPrimaryCommands() const;
        [[nodiscard]] auto AreOpenCloseAnimationsEnabled() const;
        auto AreOpenCloseAnimationsEnabled(bool value) const;
        [[nodiscard]] auto IsOpen() const;
        auto ShowAt(Windows::UI::Xaml::DependencyObject const& placementTarget, Windows::UI::Xaml::Controls::Primitives::FlyoutShowOptions const& showOptions) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase5<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase6
    {
        [[nodiscard]] auto ShouldConstrainToRootBounds() const;
        auto ShouldConstrainToRootBounds(bool value) const;
        [[nodiscard]] auto IsConstrainedToRootBounds() const;
        [[nodiscard]] auto XamlRoot() const;
        auto XamlRoot(Windows::UI::Xaml::XamlRoot const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase6>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase6<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseClosingEventArgs
    {
        [[nodiscard]] auto Cancel() const;
        auto Cancel(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseClosingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseOverrides
    {
        auto CreatePresenter() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseOverrides<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseOverrides4
    {
        auto OnProcessKeyboardAccelerators(Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs const& args) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseOverrides4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics
    {
        [[nodiscard]] auto PlacementProperty() const;
        [[nodiscard]] auto AttachedFlyoutProperty() const;
        auto GetAttachedFlyout(Windows::UI::Xaml::FrameworkElement const& element) const;
        auto SetAttachedFlyout(Windows::UI::Xaml::FrameworkElement const& element, Windows::UI::Xaml::Controls::Primitives::FlyoutBase const& value) const;
        auto ShowAttachedFlyout(Windows::UI::Xaml::FrameworkElement const& flyoutOwner) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics2
    {
        [[nodiscard]] auto AllowFocusOnInteractionProperty() const;
        [[nodiscard]] auto LightDismissOverlayModeProperty() const;
        [[nodiscard]] auto AllowFocusWhenDisabledProperty() const;
        [[nodiscard]] auto ElementSoundModeProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics3
    {
        [[nodiscard]] auto OverlayInputPassThroughElementProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics5
    {
        [[nodiscard]] auto TargetProperty() const;
        [[nodiscard]] auto ShowModeProperty() const;
        [[nodiscard]] auto InputDevicePrefersPrimaryCommandsProperty() const;
        [[nodiscard]] auto AreOpenCloseAnimationsEnabledProperty() const;
        [[nodiscard]] auto IsOpenProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics5>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics5<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics6
    {
        [[nodiscard]] auto ShouldConstrainToRootBoundsProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics6>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics6<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutShowOptions
    {
        [[nodiscard]] auto Position() const;
        auto Position(Windows::Foundation::IReference<Windows::Foundation::Point> const& value) const;
        [[nodiscard]] auto ExclusionRect() const;
        auto ExclusionRect(Windows::Foundation::IReference<Windows::Foundation::Rect> const& value) const;
        [[nodiscard]] auto ShowMode() const;
        auto ShowMode(Windows::UI::Xaml::Controls::Primitives::FlyoutShowMode const& value) const;
        [[nodiscard]] auto Placement() const;
        auto Placement(Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptions>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutShowOptions<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutShowOptionsFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptionsFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutShowOptionsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IGeneratorPositionHelper
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IGeneratorPositionHelper<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IGeneratorPositionHelperStatics
    {
        auto FromIndexAndOffset(int32_t index, int32_t offset) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelperStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IGeneratorPositionHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter
    {
        [[nodiscard]] auto SelectionCheckMarkVisualEnabled() const;
        auto SelectionCheckMarkVisualEnabled(bool value) const;
        [[nodiscard]] auto CheckHintBrush() const;
        auto CheckHintBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto CheckSelectingBrush() const;
        auto CheckSelectingBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto CheckBrush() const;
        auto CheckBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto DragBackground() const;
        auto DragBackground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto DragForeground() const;
        auto DragForeground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto FocusBorderBrush() const;
        auto FocusBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto PlaceholderBackground() const;
        auto PlaceholderBackground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto PointerOverBackground() const;
        auto PointerOverBackground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto SelectedBackground() const;
        auto SelectedBackground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto SelectedForeground() const;
        auto SelectedForeground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto SelectedPointerOverBackground() const;
        auto SelectedPointerOverBackground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto SelectedPointerOverBorderBrush() const;
        auto SelectedPointerOverBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto SelectedBorderThickness() const;
        auto SelectedBorderThickness(Windows::UI::Xaml::Thickness const& value) const;
        [[nodiscard]] auto DisabledOpacity() const;
        auto DisabledOpacity(double value) const;
        [[nodiscard]] auto DragOpacity() const;
        auto DragOpacity(double value) const;
        [[nodiscard]] auto ReorderHintOffset() const;
        auto ReorderHintOffset(double value) const;
        [[nodiscard]] auto GridViewItemPresenterHorizontalContentAlignment() const;
        auto GridViewItemPresenterHorizontalContentAlignment(Windows::UI::Xaml::HorizontalAlignment const& value) const;
        [[nodiscard]] auto GridViewItemPresenterVerticalContentAlignment() const;
        auto GridViewItemPresenterVerticalContentAlignment(Windows::UI::Xaml::VerticalAlignment const& value) const;
        [[nodiscard]] auto GridViewItemPresenterPadding() const;
        auto GridViewItemPresenterPadding(Windows::UI::Xaml::Thickness const& value) const;
        [[nodiscard]] auto PointerOverBackgroundMargin() const;
        auto PointerOverBackgroundMargin(Windows::UI::Xaml::Thickness const& value) const;
        [[nodiscard]] auto ContentMargin() const;
        auto ContentMargin(Windows::UI::Xaml::Thickness const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics
    {
        [[nodiscard]] auto SelectionCheckMarkVisualEnabledProperty() const;
        [[nodiscard]] auto CheckHintBrushProperty() const;
        [[nodiscard]] auto CheckSelectingBrushProperty() const;
        [[nodiscard]] auto CheckBrushProperty() const;
        [[nodiscard]] auto DragBackgroundProperty() const;
        [[nodiscard]] auto DragForegroundProperty() const;
        [[nodiscard]] auto FocusBorderBrushProperty() const;
        [[nodiscard]] auto PlaceholderBackgroundProperty() const;
        [[nodiscard]] auto PointerOverBackgroundProperty() const;
        [[nodiscard]] auto SelectedBackgroundProperty() const;
        [[nodiscard]] auto SelectedForegroundProperty() const;
        [[nodiscard]] auto SelectedPointerOverBackgroundProperty() const;
        [[nodiscard]] auto SelectedPointerOverBorderBrushProperty() const;
        [[nodiscard]] auto SelectedBorderThicknessProperty() const;
        [[nodiscard]] auto DisabledOpacityProperty() const;
        [[nodiscard]] auto DragOpacityProperty() const;
        [[nodiscard]] auto ReorderHintOffsetProperty() const;
        [[nodiscard]] auto GridViewItemPresenterHorizontalContentAlignmentProperty() const;
        [[nodiscard]] auto GridViewItemPresenterVerticalContentAlignmentProperty() const;
        [[nodiscard]] auto GridViewItemPresenterPaddingProperty() const;
        [[nodiscard]] auto PointerOverBackgroundMarginProperty() const;
        [[nodiscard]] auto ContentMarginProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemTemplateSettings
    {
        [[nodiscard]] auto DragItemsCount() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IItemsChangedEventArgs
    {
        [[nodiscard]] auto Action() const;
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto OldPosition() const;
        [[nodiscard]] auto ItemCount() const;
        [[nodiscard]] auto ItemUICount() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IItemsChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemBackgroundConverter
    {
        [[nodiscard]] auto Enabled() const;
        auto Enabled(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto Disabled() const;
        auto Disabled(Windows::UI::Xaml::Media::Brush const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemBackgroundConverter<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemBackgroundConverterStatics
    {
        [[nodiscard]] auto EnabledProperty() const;
        [[nodiscard]] auto DisabledProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverterStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemBackgroundConverterStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemForegroundConverter
    {
        [[nodiscard]] auto Enabled() const;
        auto Enabled(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto Disabled() const;
        auto Disabled(Windows::UI::Xaml::Media::Brush const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemForegroundConverter<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemForegroundConverterStatics
    {
        [[nodiscard]] auto EnabledProperty() const;
        [[nodiscard]] auto DisabledProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverterStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemForegroundConverterStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ILayoutInformation
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ILayoutInformation>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ILayoutInformation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ILayoutInformationStatics
    {
        auto GetLayoutExceptionElement(Windows::Foundation::IInspectable const& dispatcher) const;
        auto GetLayoutSlot(Windows::UI::Xaml::FrameworkElement const& element) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ILayoutInformationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ILayoutInformationStatics2
    {
        auto GetAvailableSize(Windows::UI::Xaml::UIElement const& element) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ILayoutInformationStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter
    {
        [[nodiscard]] auto SelectionCheckMarkVisualEnabled() const;
        auto SelectionCheckMarkVisualEnabled(bool value) const;
        [[nodiscard]] auto CheckHintBrush() const;
        auto CheckHintBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto CheckSelectingBrush() const;
        auto CheckSelectingBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto CheckBrush() const;
        auto CheckBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto DragBackground() const;
        auto DragBackground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto DragForeground() const;
        auto DragForeground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto FocusBorderBrush() const;
        auto FocusBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto PlaceholderBackground() const;
        auto PlaceholderBackground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto PointerOverBackground() const;
        auto PointerOverBackground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto SelectedBackground() const;
        auto SelectedBackground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto SelectedForeground() const;
        auto SelectedForeground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto SelectedPointerOverBackground() const;
        auto SelectedPointerOverBackground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto SelectedPointerOverBorderBrush() const;
        auto SelectedPointerOverBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto SelectedBorderThickness() const;
        auto SelectedBorderThickness(Windows::UI::Xaml::Thickness const& value) const;
        [[nodiscard]] auto DisabledOpacity() const;
        auto DisabledOpacity(double value) const;
        [[nodiscard]] auto DragOpacity() const;
        auto DragOpacity(double value) const;
        [[nodiscard]] auto ReorderHintOffset() const;
        auto ReorderHintOffset(double value) const;
        [[nodiscard]] auto ListViewItemPresenterHorizontalContentAlignment() const;
        auto ListViewItemPresenterHorizontalContentAlignment(Windows::UI::Xaml::HorizontalAlignment const& value) const;
        [[nodiscard]] auto ListViewItemPresenterVerticalContentAlignment() const;
        auto ListViewItemPresenterVerticalContentAlignment(Windows::UI::Xaml::VerticalAlignment const& value) const;
        [[nodiscard]] auto ListViewItemPresenterPadding() const;
        auto ListViewItemPresenterPadding(Windows::UI::Xaml::Thickness const& value) const;
        [[nodiscard]] auto PointerOverBackgroundMargin() const;
        auto PointerOverBackgroundMargin(Windows::UI::Xaml::Thickness const& value) const;
        [[nodiscard]] auto ContentMargin() const;
        auto ContentMargin(Windows::UI::Xaml::Thickness const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter2
    {
        [[nodiscard]] auto SelectedPressedBackground() const;
        auto SelectedPressedBackground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto PressedBackground() const;
        auto PressedBackground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto CheckBoxBrush() const;
        auto CheckBoxBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto FocusSecondaryBorderBrush() const;
        auto FocusSecondaryBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto CheckMode() const;
        auto CheckMode(Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode const& value) const;
        [[nodiscard]] auto PointerOverForeground() const;
        auto PointerOverForeground(Windows::UI::Xaml::Media::Brush const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter3
    {
        [[nodiscard]] auto RevealBackground() const;
        auto RevealBackground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto RevealBorderBrush() const;
        auto RevealBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto RevealBorderThickness() const;
        auto RevealBorderThickness(Windows::UI::Xaml::Thickness const& value) const;
        [[nodiscard]] auto RevealBackgroundShowsAboveContent() const;
        auto RevealBackgroundShowsAboveContent(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics
    {
        [[nodiscard]] auto SelectionCheckMarkVisualEnabledProperty() const;
        [[nodiscard]] auto CheckHintBrushProperty() const;
        [[nodiscard]] auto CheckSelectingBrushProperty() const;
        [[nodiscard]] auto CheckBrushProperty() const;
        [[nodiscard]] auto DragBackgroundProperty() const;
        [[nodiscard]] auto DragForegroundProperty() const;
        [[nodiscard]] auto FocusBorderBrushProperty() const;
        [[nodiscard]] auto PlaceholderBackgroundProperty() const;
        [[nodiscard]] auto PointerOverBackgroundProperty() const;
        [[nodiscard]] auto SelectedBackgroundProperty() const;
        [[nodiscard]] auto SelectedForegroundProperty() const;
        [[nodiscard]] auto SelectedPointerOverBackgroundProperty() const;
        [[nodiscard]] auto SelectedPointerOverBorderBrushProperty() const;
        [[nodiscard]] auto SelectedBorderThicknessProperty() const;
        [[nodiscard]] auto DisabledOpacityProperty() const;
        [[nodiscard]] auto DragOpacityProperty() const;
        [[nodiscard]] auto ReorderHintOffsetProperty() const;
        [[nodiscard]] auto ListViewItemPresenterHorizontalContentAlignmentProperty() const;
        [[nodiscard]] auto ListViewItemPresenterVerticalContentAlignmentProperty() const;
        [[nodiscard]] auto ListViewItemPresenterPaddingProperty() const;
        [[nodiscard]] auto PointerOverBackgroundMarginProperty() const;
        [[nodiscard]] auto ContentMarginProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics2
    {
        [[nodiscard]] auto SelectedPressedBackgroundProperty() const;
        [[nodiscard]] auto PressedBackgroundProperty() const;
        [[nodiscard]] auto CheckBoxBrushProperty() const;
        [[nodiscard]] auto FocusSecondaryBorderBrushProperty() const;
        [[nodiscard]] auto CheckModeProperty() const;
        [[nodiscard]] auto PointerOverForegroundProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics3
    {
        [[nodiscard]] auto RevealBackgroundProperty() const;
        [[nodiscard]] auto RevealBorderBrushProperty() const;
        [[nodiscard]] auto RevealBorderThicknessProperty() const;
        [[nodiscard]] auto RevealBackgroundShowsAboveContentProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemTemplateSettings
    {
        [[nodiscard]] auto DragItemsCount() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelector
    {
        [[nodiscard]] auto ShouldLoop() const;
        auto ShouldLoop(bool value) const;
        [[nodiscard]] auto Items() const;
        auto Items(param::vector<Windows::Foundation::IInspectable> const& value) const;
        [[nodiscard]] auto SelectedIndex() const;
        auto SelectedIndex(int32_t value) const;
        [[nodiscard]] auto SelectedItem() const;
        auto SelectedItem(Windows::Foundation::IInspectable const& value) const;
        [[nodiscard]] auto ItemWidth() const;
        auto ItemWidth(int32_t value) const;
        [[nodiscard]] auto ItemHeight() const;
        auto ItemHeight(int32_t value) const;
        [[nodiscard]] auto ItemTemplate() const;
        auto ItemTemplate(Windows::UI::Xaml::DataTemplate const& value) const;
        auto SelectionChanged(Windows::UI::Xaml::Controls::SelectionChangedEventHandler const& handler) const;
        using SelectionChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::ILoopingSelector, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::ILoopingSelector>::remove_SelectionChanged>;
        SelectionChanged_revoker SelectionChanged(auto_revoke_t, Windows::UI::Xaml::Controls::SelectionChangedEventHandler const& handler) const;
        auto SelectionChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ILoopingSelector>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelector<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorItem
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorItem<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorPanel
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorPanel<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorStatics
    {
        [[nodiscard]] auto ShouldLoopProperty() const;
        [[nodiscard]] auto ItemsProperty() const;
        [[nodiscard]] auto SelectedIndexProperty() const;
        [[nodiscard]] auto SelectedItemProperty() const;
        [[nodiscard]] auto ItemWidthProperty() const;
        [[nodiscard]] auto ItemHeightProperty() const;
        [[nodiscard]] auto ItemTemplateProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IMenuFlyoutItemTemplateSettings
    {
        [[nodiscard]] auto KeyboardAcceleratorTextMinWidth() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IMenuFlyoutItemTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IMenuFlyoutPresenterTemplateSettings
    {
        [[nodiscard]] auto FlyoutContentMinWidth() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IMenuFlyoutPresenterTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_INavigationViewItemPresenter
    {
        [[nodiscard]] auto Icon() const;
        auto Icon(Windows::UI::Xaml::Controls::IconElement const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenter>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_INavigationViewItemPresenter<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_INavigationViewItemPresenterFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenterFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_INavigationViewItemPresenterFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_INavigationViewItemPresenterStatics
    {
        [[nodiscard]] auto IconProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenterStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_INavigationViewItemPresenterStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel
    {
        [[nodiscard]] auto CanVerticallyScroll() const;
        auto CanVerticallyScroll(bool value) const;
        [[nodiscard]] auto CanHorizontallyScroll() const;
        auto CanHorizontallyScroll(bool value) const;
        [[nodiscard]] auto ExtentWidth() const;
        [[nodiscard]] auto ExtentHeight() const;
        [[nodiscard]] auto ViewportWidth() const;
        [[nodiscard]] auto ViewportHeight() const;
        [[nodiscard]] auto HorizontalOffset() const;
        [[nodiscard]] auto VerticalOffset() const;
        [[nodiscard]] auto ScrollOwner() const;
        auto ScrollOwner(Windows::Foundation::IInspectable const& value) const;
        auto LineUp() const;
        auto LineDown() const;
        auto LineLeft() const;
        auto LineRight() const;
        auto PageUp() const;
        auto PageDown() const;
        auto PageLeft() const;
        auto PageRight() const;
        auto MouseWheelUp() const;
        auto MouseWheelDown() const;
        auto MouseWheelLeft() const;
        auto MouseWheelRight() const;
        auto SetHorizontalOffset(double offset) const;
        auto SetVerticalOffset(double offset) const;
        auto MakeVisible(Windows::UI::Xaml::UIElement const& visual, Windows::Foundation::Rect const& rectangle) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanelFactory
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanelFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanelFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBase
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBaseFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBaseFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBaseOverrides
    {
        auto OnConfirmed() const;
        auto ShouldShowConfirmationButtons() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBaseOverrides<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBaseStatics
    {
        [[nodiscard]] auto TitleProperty() const;
        auto GetTitle(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetTitle(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBaseStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPivotHeaderItem
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPivotHeaderItem<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPivotHeaderItemFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItemFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPivotHeaderItemFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPivotHeaderPanel
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPivotHeaderPanel<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPivotPanel
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPivotPanel>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPivotPanel<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPopup
    {
        [[nodiscard]] auto Child() const;
        auto Child(Windows::UI::Xaml::UIElement const& value) const;
        [[nodiscard]] auto IsOpen() const;
        auto IsOpen(bool value) const;
        [[nodiscard]] auto HorizontalOffset() const;
        auto HorizontalOffset(double value) const;
        [[nodiscard]] auto VerticalOffset() const;
        auto VerticalOffset(double value) const;
        [[nodiscard]] auto ChildTransitions() const;
        auto ChildTransitions(Windows::UI::Xaml::Media::Animation::TransitionCollection const& value) const;
        [[nodiscard]] auto IsLightDismissEnabled() const;
        auto IsLightDismissEnabled(bool value) const;
        auto Opened(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using Opened_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IPopup, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IPopup>::remove_Opened>;
        Opened_revoker Opened(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto Opened(winrt::event_token const& token) const noexcept;
        auto Closed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using Closed_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IPopup, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IPopup>::remove_Closed>;
        Closed_revoker Closed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto Closed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPopup>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPopup<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPopup2
    {
        [[nodiscard]] auto LightDismissOverlayMode() const;
        auto LightDismissOverlayMode(Windows::UI::Xaml::Controls::LightDismissOverlayMode const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPopup2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPopup2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPopup3
    {
        [[nodiscard]] auto ShouldConstrainToRootBounds() const;
        auto ShouldConstrainToRootBounds(bool value) const;
        [[nodiscard]] auto IsConstrainedToRootBounds() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPopup3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPopup3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPopupStatics
    {
        [[nodiscard]] auto ChildProperty() const;
        [[nodiscard]] auto IsOpenProperty() const;
        [[nodiscard]] auto HorizontalOffsetProperty() const;
        [[nodiscard]] auto VerticalOffsetProperty() const;
        [[nodiscard]] auto ChildTransitionsProperty() const;
        [[nodiscard]] auto IsLightDismissEnabledProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPopupStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPopupStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPopupStatics2
    {
        [[nodiscard]] auto LightDismissOverlayModeProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPopupStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPopupStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPopupStatics3
    {
        [[nodiscard]] auto ShouldConstrainToRootBoundsProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPopupStatics3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPopupStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IProgressBarTemplateSettings
    {
        [[nodiscard]] auto EllipseDiameter() const;
        [[nodiscard]] auto EllipseOffset() const;
        [[nodiscard]] auto EllipseAnimationWellPosition() const;
        [[nodiscard]] auto EllipseAnimationEndPosition() const;
        [[nodiscard]] auto ContainerAnimationStartPosition() const;
        [[nodiscard]] auto ContainerAnimationEndPosition() const;
        [[nodiscard]] auto IndicatorLengthDelta() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IProgressBarTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IProgressRingTemplateSettings
    {
        [[nodiscard]] auto EllipseDiameter() const;
        [[nodiscard]] auto EllipseOffset() const;
        [[nodiscard]] auto MaxSideLength() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IProgressRingTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IRangeBase
    {
        [[nodiscard]] auto Minimum() const;
        auto Minimum(double value) const;
        [[nodiscard]] auto Maximum() const;
        auto Maximum(double value) const;
        [[nodiscard]] auto SmallChange() const;
        auto SmallChange(double value) const;
        [[nodiscard]] auto LargeChange() const;
        auto LargeChange(double value) const;
        [[nodiscard]] auto Value() const;
        auto Value(double value) const;
        auto ValueChanged(Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler const& handler) const;
        using ValueChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IRangeBase, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IRangeBase>::remove_ValueChanged>;
        ValueChanged_revoker ValueChanged(auto_revoke_t, Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler const& handler) const;
        auto ValueChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IRangeBase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IRangeBase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IRangeBaseFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseOverrides
    {
        auto OnMinimumChanged(double oldMinimum, double newMinimum) const;
        auto OnMaximumChanged(double oldMaximum, double newMaximum) const;
        auto OnValueChanged(double oldValue, double newValue) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseOverrides<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseStatics
    {
        [[nodiscard]] auto MinimumProperty() const;
        [[nodiscard]] auto MaximumProperty() const;
        [[nodiscard]] auto SmallChangeProperty() const;
        [[nodiscard]] auto LargeChangeProperty() const;
        [[nodiscard]] auto ValueProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseValueChangedEventArgs
    {
        [[nodiscard]] auto OldValue() const;
        [[nodiscard]] auto NewValue() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseValueChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IRepeatButton
    {
        [[nodiscard]] auto Delay() const;
        auto Delay(int32_t value) const;
        [[nodiscard]] auto Interval() const;
        auto Interval(int32_t value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IRepeatButton>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IRepeatButton<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IRepeatButtonStatics
    {
        [[nodiscard]] auto DelayProperty() const;
        [[nodiscard]] auto IntervalProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IRepeatButtonStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IRepeatButtonStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IScrollBar
    {
        [[nodiscard]] auto Orientation() const;
        auto Orientation(Windows::UI::Xaml::Controls::Orientation const& value) const;
        [[nodiscard]] auto ViewportSize() const;
        auto ViewportSize(double value) const;
        [[nodiscard]] auto IndicatorMode() const;
        auto IndicatorMode(Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode const& value) const;
        auto Scroll(Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler const& handler) const;
        using Scroll_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IScrollBar, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IScrollBar>::remove_Scroll>;
        Scroll_revoker Scroll(auto_revoke_t, Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler const& handler) const;
        auto Scroll(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IScrollBar>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IScrollBar<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IScrollBarStatics
    {
        [[nodiscard]] auto OrientationProperty() const;
        [[nodiscard]] auto ViewportSizeProperty() const;
        [[nodiscard]] auto IndicatorModeProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IScrollBarStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IScrollEventArgs
    {
        [[nodiscard]] auto NewValue() const;
        [[nodiscard]] auto ScrollEventType() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IScrollEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IScrollSnapPointsInfo
    {
        [[nodiscard]] auto AreHorizontalSnapPointsRegular() const;
        [[nodiscard]] auto AreVerticalSnapPointsRegular() const;
        auto HorizontalSnapPointsChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using HorizontalSnapPointsChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo>::remove_HorizontalSnapPointsChanged>;
        HorizontalSnapPointsChanged_revoker HorizontalSnapPointsChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto HorizontalSnapPointsChanged(winrt::event_token const& token) const noexcept;
        auto VerticalSnapPointsChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using VerticalSnapPointsChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo>::remove_VerticalSnapPointsChanged>;
        VerticalSnapPointsChanged_revoker VerticalSnapPointsChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto VerticalSnapPointsChanged(winrt::event_token const& token) const noexcept;
        auto GetIrregularSnapPoints(Windows::UI::Xaml::Controls::Orientation const& orientation, Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment const& alignment) const;
        auto GetRegularSnapPoints(Windows::UI::Xaml::Controls::Orientation const& orientation, Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment const& alignment, float& offset) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IScrollSnapPointsInfo<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ISelector
    {
        [[nodiscard]] auto SelectedIndex() const;
        auto SelectedIndex(int32_t value) const;
        [[nodiscard]] auto SelectedItem() const;
        auto SelectedItem(Windows::Foundation::IInspectable const& value) const;
        [[nodiscard]] auto SelectedValue() const;
        auto SelectedValue(Windows::Foundation::IInspectable const& value) const;
        [[nodiscard]] auto SelectedValuePath() const;
        auto SelectedValuePath(param::hstring const& value) const;
        [[nodiscard]] auto IsSynchronizedWithCurrentItem() const;
        auto IsSynchronizedWithCurrentItem(Windows::Foundation::IReference<bool> const& value) const;
        auto SelectionChanged(Windows::UI::Xaml::Controls::SelectionChangedEventHandler const& handler) const;
        using SelectionChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::ISelector, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::ISelector>::remove_SelectionChanged>;
        SelectionChanged_revoker SelectionChanged(auto_revoke_t, Windows::UI::Xaml::Controls::SelectionChangedEventHandler const& handler) const;
        auto SelectionChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ISelector>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ISelector<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ISelectorFactory
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ISelectorFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ISelectorFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ISelectorItem
    {
        [[nodiscard]] auto IsSelected() const;
        auto IsSelected(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ISelectorItem>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ISelectorItem<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ISelectorItemFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ISelectorItemFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ISelectorItemFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ISelectorItemStatics
    {
        [[nodiscard]] auto IsSelectedProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ISelectorItemStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ISelectorItemStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ISelectorStatics
    {
        [[nodiscard]] auto SelectedIndexProperty() const;
        [[nodiscard]] auto SelectedItemProperty() const;
        [[nodiscard]] auto SelectedValueProperty() const;
        [[nodiscard]] auto SelectedValuePathProperty() const;
        [[nodiscard]] auto IsSynchronizedWithCurrentItemProperty() const;
        auto GetIsSelectionActive(Windows::UI::Xaml::DependencyObject const& element) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ISelectorStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ISelectorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ISettingsFlyoutTemplateSettings
    {
        [[nodiscard]] auto HeaderBackground() const;
        [[nodiscard]] auto HeaderForeground() const;
        [[nodiscard]] auto BorderBrush() const;
        [[nodiscard]] auto BorderThickness() const;
        [[nodiscard]] auto IconSource() const;
        [[nodiscard]] auto ContentTransitions() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ISettingsFlyoutTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ISplitViewTemplateSettings
    {
        [[nodiscard]] auto OpenPaneLength() const;
        [[nodiscard]] auto NegativeOpenPaneLength() const;
        [[nodiscard]] auto OpenPaneLengthMinusCompactLength() const;
        [[nodiscard]] auto NegativeOpenPaneLengthMinusCompactLength() const;
        [[nodiscard]] auto OpenPaneGridLength() const;
        [[nodiscard]] auto CompactPaneGridLength() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ISplitViewTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IThumb
    {
        [[nodiscard]] auto IsDragging() const;
        auto DragStarted(Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler const& handler) const;
        using DragStarted_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IThumb, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IThumb>::remove_DragStarted>;
        DragStarted_revoker DragStarted(auto_revoke_t, Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler const& handler) const;
        auto DragStarted(winrt::event_token const& token) const noexcept;
        auto DragDelta(Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler const& handler) const;
        using DragDelta_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IThumb, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IThumb>::remove_DragDelta>;
        DragDelta_revoker DragDelta(auto_revoke_t, Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler const& handler) const;
        auto DragDelta(winrt::event_token const& token) const noexcept;
        auto DragCompleted(Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler const& handler) const;
        using DragCompleted_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IThumb, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IThumb>::remove_DragCompleted>;
        DragCompleted_revoker DragCompleted(auto_revoke_t, Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler const& handler) const;
        auto DragCompleted(winrt::event_token const& token) const noexcept;
        auto CancelDrag() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IThumb>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IThumb<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IThumbStatics
    {
        [[nodiscard]] auto IsDraggingProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IThumbStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IThumbStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ITickBar
    {
        [[nodiscard]] auto Fill() const;
        auto Fill(Windows::UI::Xaml::Media::Brush const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ITickBar>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ITickBar<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ITickBarStatics
    {
        [[nodiscard]] auto FillProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ITickBarStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ITickBarStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IToggleButton
    {
        [[nodiscard]] auto IsChecked() const;
        auto IsChecked(Windows::Foundation::IReference<bool> const& value) const;
        [[nodiscard]] auto IsThreeState() const;
        auto IsThreeState(bool value) const;
        auto Checked(Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        using Checked_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IToggleButton, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IToggleButton>::remove_Checked>;
        Checked_revoker Checked(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        auto Checked(winrt::event_token const& token) const noexcept;
        auto Unchecked(Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        using Unchecked_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IToggleButton, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IToggleButton>::remove_Unchecked>;
        Unchecked_revoker Unchecked(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        auto Unchecked(winrt::event_token const& token) const noexcept;
        auto Indeterminate(Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        using Indeterminate_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IToggleButton, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IToggleButton>::remove_Indeterminate>;
        Indeterminate_revoker Indeterminate(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        auto Indeterminate(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IToggleButton>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IToggleButton<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IToggleButtonFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IToggleButtonFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IToggleButtonFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IToggleButtonOverrides
    {
        auto OnToggle() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IToggleButtonOverrides<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IToggleButtonStatics
    {
        [[nodiscard]] auto IsCheckedProperty() const;
        [[nodiscard]] auto IsThreeStateProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IToggleButtonStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IToggleButtonStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IToggleSwitchTemplateSettings
    {
        [[nodiscard]] auto KnobCurrentToOnOffset() const;
        [[nodiscard]] auto KnobCurrentToOffOffset() const;
        [[nodiscard]] auto KnobOnToOffOffset() const;
        [[nodiscard]] auto KnobOffToOnOffset() const;
        [[nodiscard]] auto CurtainCurrentToOnOffset() const;
        [[nodiscard]] auto CurtainCurrentToOffOffset() const;
        [[nodiscard]] auto CurtainOnToOffOffset() const;
        [[nodiscard]] auto CurtainOffToOnOffset() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IToggleSwitchTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IToolTipTemplateSettings
    {
        [[nodiscard]] auto FromHorizontalOffset() const;
        [[nodiscard]] auto FromVerticalOffset() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IToolTipTemplateSettings<D>;
    };
    struct struct_Windows_UI_Xaml_Controls_Primitives_GeneratorPosition
    {
        int32_t Index;
        int32_t Offset;
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::GeneratorPosition>
    {
        using type = struct_Windows_UI_Xaml_Controls_Primitives_GeneratorPosition;
    };
}
#endif
