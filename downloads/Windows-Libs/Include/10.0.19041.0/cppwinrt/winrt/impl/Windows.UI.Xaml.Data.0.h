// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Data_0_H
#define WINRT_Windows_UI_Xaml_Data_0_H
namespace winrt::Windows::Foundation
{
    template <typename T> struct EventHandler;
    struct EventRegistrationToken;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IVectorView;
}
namespace winrt::Windows::UI::Xaml
{
    struct DependencyObject;
    struct DependencyProperty;
    struct PropertyPath;
}
namespace winrt::Windows::UI::Xaml::Interop
{
    struct TypeName;
}
namespace winrt::Windows::UI::Xaml::Data
{
    enum class BindingMode : int32_t
    {
        OneWay = 1,
        OneTime = 2,
        TwoWay = 3,
    };
    enum class RelativeSourceMode : int32_t
    {
        None = 0,
        TemplatedParent = 1,
        Self = 2,
    };
    enum class UpdateSourceTrigger : int32_t
    {
        Default = 0,
        PropertyChanged = 1,
        Explicit = 2,
        LostFocus = 3,
    };
    struct IBinding;
    struct IBinding2;
    struct IBindingBase;
    struct IBindingBaseFactory;
    struct IBindingExpression;
    struct IBindingExpressionBase;
    struct IBindingExpressionBaseFactory;
    struct IBindingExpressionFactory;
    struct IBindingFactory;
    struct IBindingOperations;
    struct IBindingOperationsStatics;
    struct ICollectionView;
    struct ICollectionViewFactory;
    struct ICollectionViewGroup;
    struct ICollectionViewSource;
    struct ICollectionViewSourceStatics;
    struct ICurrentChangingEventArgs;
    struct ICurrentChangingEventArgsFactory;
    struct ICustomProperty;
    struct ICustomPropertyProvider;
    struct IItemIndexRange;
    struct IItemIndexRangeFactory;
    struct IItemsRangeInfo;
    struct INotifyPropertyChanged;
    struct IPropertyChangedEventArgs;
    struct IPropertyChangedEventArgsFactory;
    struct IRelativeSource;
    struct IRelativeSourceFactory;
    struct ISelectionInfo;
    struct ISupportIncrementalLoading;
    struct IValueConverter;
    struct Binding;
    struct BindingBase;
    struct BindingExpression;
    struct BindingExpressionBase;
    struct BindingOperations;
    struct CollectionViewSource;
    struct CurrentChangingEventArgs;
    struct ItemIndexRange;
    struct PropertyChangedEventArgs;
    struct RelativeSource;
    struct LoadMoreItemsResult;
    struct CurrentChangingEventHandler;
    struct PropertyChangedEventHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Xaml::Data::IBinding>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::IBinding2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::IBindingBase>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::IBindingBaseFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::IBindingExpression>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::IBindingExpressionBase>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::IBindingExpressionBaseFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::IBindingExpressionFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::IBindingFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::IBindingOperations>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::IBindingOperationsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::ICollectionView>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::ICollectionViewFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::ICollectionViewGroup>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::ICollectionViewSource>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::ICollectionViewSourceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::ICurrentChangingEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::ICurrentChangingEventArgsFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::ICustomProperty>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::ICustomPropertyProvider>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::IItemIndexRange>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::IItemIndexRangeFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::IItemsRangeInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::INotifyPropertyChanged>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::IPropertyChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::IPropertyChangedEventArgsFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::IRelativeSource>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::IRelativeSourceFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::ISelectionInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::ISupportIncrementalLoading>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::IValueConverter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::Binding>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::BindingBase>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::BindingExpression>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::BindingExpressionBase>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::BindingOperations>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::CollectionViewSource>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::CurrentChangingEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::ItemIndexRange>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::PropertyChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::RelativeSource>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::BindingMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::RelativeSourceMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::UpdateSourceTrigger>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::LoadMoreItemsResult>
    {
        using type = struct_category<uint32_t>;
    };
    template <> struct category<Windows::UI::Xaml::Data::CurrentChangingEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::Data::PropertyChangedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct name<Windows::UI::Xaml::Data::IBinding>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.IBinding" };
    };
    template <> struct name<Windows::UI::Xaml::Data::IBinding2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.IBinding2" };
    };
    template <> struct name<Windows::UI::Xaml::Data::IBindingBase>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.IBindingBase" };
    };
    template <> struct name<Windows::UI::Xaml::Data::IBindingBaseFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.IBindingBaseFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Data::IBindingExpression>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.IBindingExpression" };
    };
    template <> struct name<Windows::UI::Xaml::Data::IBindingExpressionBase>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.IBindingExpressionBase" };
    };
    template <> struct name<Windows::UI::Xaml::Data::IBindingExpressionBaseFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.IBindingExpressionBaseFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Data::IBindingExpressionFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.IBindingExpressionFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Data::IBindingFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.IBindingFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Data::IBindingOperations>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.IBindingOperations" };
    };
    template <> struct name<Windows::UI::Xaml::Data::IBindingOperationsStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.IBindingOperationsStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Data::ICollectionView>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.ICollectionView" };
    };
    template <> struct name<Windows::UI::Xaml::Data::ICollectionViewFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.ICollectionViewFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Data::ICollectionViewGroup>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.ICollectionViewGroup" };
    };
    template <> struct name<Windows::UI::Xaml::Data::ICollectionViewSource>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.ICollectionViewSource" };
    };
    template <> struct name<Windows::UI::Xaml::Data::ICollectionViewSourceStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.ICollectionViewSourceStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Data::ICurrentChangingEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.ICurrentChangingEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Data::ICurrentChangingEventArgsFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.ICurrentChangingEventArgsFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Data::ICustomProperty>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.ICustomProperty" };
    };
    template <> struct name<Windows::UI::Xaml::Data::ICustomPropertyProvider>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.ICustomPropertyProvider" };
    };
    template <> struct name<Windows::UI::Xaml::Data::IItemIndexRange>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.IItemIndexRange" };
    };
    template <> struct name<Windows::UI::Xaml::Data::IItemIndexRangeFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.IItemIndexRangeFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Data::IItemsRangeInfo>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.IItemsRangeInfo" };
    };
    template <> struct name<Windows::UI::Xaml::Data::INotifyPropertyChanged>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.INotifyPropertyChanged" };
    };
    template <> struct name<Windows::UI::Xaml::Data::IPropertyChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.IPropertyChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Data::IPropertyChangedEventArgsFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.IPropertyChangedEventArgsFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Data::IRelativeSource>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.IRelativeSource" };
    };
    template <> struct name<Windows::UI::Xaml::Data::IRelativeSourceFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.IRelativeSourceFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Data::ISelectionInfo>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.ISelectionInfo" };
    };
    template <> struct name<Windows::UI::Xaml::Data::ISupportIncrementalLoading>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.ISupportIncrementalLoading" };
    };
    template <> struct name<Windows::UI::Xaml::Data::IValueConverter>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.IValueConverter" };
    };
    template <> struct name<Windows::UI::Xaml::Data::Binding>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.Binding" };
    };
    template <> struct name<Windows::UI::Xaml::Data::BindingBase>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.BindingBase" };
    };
    template <> struct name<Windows::UI::Xaml::Data::BindingExpression>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.BindingExpression" };
    };
    template <> struct name<Windows::UI::Xaml::Data::BindingExpressionBase>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.BindingExpressionBase" };
    };
    template <> struct name<Windows::UI::Xaml::Data::BindingOperations>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.BindingOperations" };
    };
    template <> struct name<Windows::UI::Xaml::Data::CollectionViewSource>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.CollectionViewSource" };
    };
    template <> struct name<Windows::UI::Xaml::Data::CurrentChangingEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.CurrentChangingEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Data::ItemIndexRange>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.ItemIndexRange" };
    };
    template <> struct name<Windows::UI::Xaml::Data::PropertyChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.PropertyChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Data::RelativeSource>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.RelativeSource" };
    };
    template <> struct name<Windows::UI::Xaml::Data::BindingMode>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.BindingMode" };
    };
    template <> struct name<Windows::UI::Xaml::Data::RelativeSourceMode>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.RelativeSourceMode" };
    };
    template <> struct name<Windows::UI::Xaml::Data::UpdateSourceTrigger>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.UpdateSourceTrigger" };
    };
    template <> struct name<Windows::UI::Xaml::Data::LoadMoreItemsResult>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.LoadMoreItemsResult" };
    };
    template <> struct name<Windows::UI::Xaml::Data::CurrentChangingEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.CurrentChangingEventHandler" };
    };
    template <> struct name<Windows::UI::Xaml::Data::PropertyChangedEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Data.PropertyChangedEventHandler" };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::IBinding>
    {
        static constexpr guid value{ 0x3F7A0C6B,0xD00F,0x4730,{ 0x8C,0x1D,0x48,0xE1,0x6C,0x46,0xF9,0xCA } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::IBinding2>
    {
        static constexpr guid value{ 0x34F96FCB,0x0406,0x48B3,{ 0x9E,0x82,0xF3,0x33,0xEC,0x4C,0x69,0x10 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::IBindingBase>
    {
        static constexpr guid value{ 0x1589A2AB,0x3D15,0x49BC,{ 0xA4,0x47,0x8A,0x54,0x48,0xE5,0x88,0x70 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::IBindingBaseFactory>
    {
        static constexpr guid value{ 0x22DAFC3A,0x7701,0x4666,{ 0xA1,0xBA,0x98,0x59,0xBD,0xCF,0xEC,0x34 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::IBindingExpression>
    {
        static constexpr guid value{ 0x516A19A5,0xC2FD,0x4A9E,{ 0x9F,0xD3,0x9A,0xA4,0x2F,0x99,0x5A,0x3C } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::IBindingExpressionBase>
    {
        static constexpr guid value{ 0xFDED3154,0xE954,0x4F67,{ 0x8F,0xB6,0x6E,0xD7,0x9B,0x3A,0x1C,0xB3 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::IBindingExpressionBaseFactory>
    {
        static constexpr guid value{ 0xEA7116A7,0xC2D9,0x4375,{ 0xB4,0x71,0x66,0xB9,0xC4,0x8C,0x79,0x30 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::IBindingExpressionFactory>
    {
        static constexpr guid value{ 0x1CB55CD9,0xDB72,0x40B3,{ 0xA2,0xB5,0x24,0xEE,0x6E,0xA5,0xC3,0x28 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::IBindingFactory>
    {
        static constexpr guid value{ 0xFF42BB08,0xC39E,0x4F7E,{ 0x84,0x34,0xA1,0x56,0x90,0x83,0x88,0x3C } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::IBindingOperations>
    {
        static constexpr guid value{ 0x6FFFD738,0x9839,0x419C,{ 0xA1,0x7A,0x4B,0x36,0x04,0xE1,0x52,0x4E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::IBindingOperationsStatics>
    {
        static constexpr guid value{ 0xE155EF73,0x95A0,0x4AAB,{ 0x8C,0x7D,0x2A,0x47,0xDA,0x07,0x3C,0x79 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::ICollectionView>
    {
        static constexpr guid value{ 0x8BE8BFE4,0xDBEF,0x44DF,{ 0x81,0x26,0xA3,0x1A,0x89,0x12,0x1D,0xDC } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::ICollectionViewFactory>
    {
        static constexpr guid value{ 0x34D4AAF4,0x8E72,0x4950,{ 0x91,0x92,0xEC,0xD0,0x7D,0x39,0x9D,0x0A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::ICollectionViewGroup>
    {
        static constexpr guid value{ 0x7E01B9D8,0xD7B5,0x48B6,{ 0xB3,0x1C,0x5B,0xB5,0xBD,0xF5,0xF0,0x9B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::ICollectionViewSource>
    {
        static constexpr guid value{ 0xA66A1146,0xD2FB,0x4EAD,{ 0xBE,0x9F,0x35,0x78,0xA4,0x66,0xDC,0xFE } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::ICollectionViewSourceStatics>
    {
        static constexpr guid value{ 0x173A0710,0x46AF,0x4C0C,{ 0x81,0x8B,0x21,0xB6,0xEF,0x81,0xBF,0x65 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::ICurrentChangingEventArgs>
    {
        static constexpr guid value{ 0xF9891E29,0x51CC,0x47DD,{ 0xA5,0xB9,0x35,0xDC,0x49,0x14,0xAF,0x69 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::ICurrentChangingEventArgsFactory>
    {
        static constexpr guid value{ 0x153BBEEE,0x62F3,0x48CF,{ 0x81,0x83,0x8B,0xE2,0x6D,0xE3,0xA6,0x6E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::ICustomProperty>
    {
        static constexpr guid value{ 0x30DA92C0,0x23E8,0x42A0,{ 0xAE,0x7C,0x73,0x4A,0x0E,0x5D,0x27,0x82 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::ICustomPropertyProvider>
    {
        static constexpr guid value{ 0x7C925755,0x3E48,0x42B4,{ 0x86,0x77,0x76,0x37,0x22,0x67,0x03,0x3F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::IItemIndexRange>
    {
        static constexpr guid value{ 0x83B834BE,0x0583,0x4A26,{ 0x9B,0x64,0x8B,0xF4,0xA2,0xF6,0x57,0x04 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::IItemIndexRangeFactory>
    {
        static constexpr guid value{ 0x86E2C440,0x2E7A,0x4C7D,{ 0xA6,0x64,0xE8,0xAB,0xF0,0x7B,0xFC,0x7E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::IItemsRangeInfo>
    {
        static constexpr guid value{ 0xF05F5665,0x71FD,0x45A2,{ 0xBE,0x13,0xA0,0x81,0xD2,0x94,0xA6,0x8D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::INotifyPropertyChanged>
    {
        static constexpr guid value{ 0xCF75D69C,0xF2F4,0x486B,{ 0xB3,0x02,0xBB,0x4C,0x09,0xBA,0xEB,0xFA } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::IPropertyChangedEventArgs>
    {
        static constexpr guid value{ 0x4F33A9A0,0x5CF4,0x47A4,{ 0xB1,0x6F,0xD7,0xFA,0xAF,0x17,0x45,0x7E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::IPropertyChangedEventArgsFactory>
    {
        static constexpr guid value{ 0x6DCC9C03,0xE0C7,0x4EEE,{ 0x8E,0xA9,0x37,0xE3,0x40,0x6E,0xEB,0x1C } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::IRelativeSource>
    {
        static constexpr guid value{ 0x2397CE84,0x2822,0x483A,{ 0xB4,0x99,0xD0,0xF0,0x31,0xE0,0x6C,0x6B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::IRelativeSourceFactory>
    {
        static constexpr guid value{ 0xEF8392CD,0x446E,0x4F93,{ 0xAA,0xCB,0x9B,0x12,0x55,0x57,0x74,0x60 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::ISelectionInfo>
    {
        static constexpr guid value{ 0x2E12CA86,0xE1ED,0x4245,{ 0xBE,0x49,0x20,0x7E,0x42,0xAE,0xC5,0x24 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::ISupportIncrementalLoading>
    {
        static constexpr guid value{ 0x7F5EE992,0x7694,0x4E6C,{ 0xA5,0x1B,0xE3,0x4B,0xF4,0x3D,0xE7,0x43 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::IValueConverter>
    {
        static constexpr guid value{ 0xE6F2FEF0,0x0712,0x487F,{ 0xB3,0x13,0xF3,0x00,0xB8,0xD7,0x9A,0xA1 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::CurrentChangingEventHandler>
    {
        static constexpr guid value{ 0xF3888DB8,0x139F,0x4DCE,{ 0x8D,0xC9,0xF7,0xF1,0x44,0x4D,0x11,0x85 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Data::PropertyChangedEventHandler>
    {
        static constexpr guid value{ 0x50F19C16,0x0A22,0x4D8E,{ 0xA0,0x89,0x1E,0xA9,0x95,0x16,0x57,0xD2 } };
    };
    template <> struct default_interface<Windows::UI::Xaml::Data::Binding>
    {
        using type = Windows::UI::Xaml::Data::IBinding;
    };
    template <> struct default_interface<Windows::UI::Xaml::Data::BindingBase>
    {
        using type = Windows::UI::Xaml::Data::IBindingBase;
    };
    template <> struct default_interface<Windows::UI::Xaml::Data::BindingExpression>
    {
        using type = Windows::UI::Xaml::Data::IBindingExpression;
    };
    template <> struct default_interface<Windows::UI::Xaml::Data::BindingExpressionBase>
    {
        using type = Windows::UI::Xaml::Data::IBindingExpressionBase;
    };
    template <> struct default_interface<Windows::UI::Xaml::Data::BindingOperations>
    {
        using type = Windows::UI::Xaml::Data::IBindingOperations;
    };
    template <> struct default_interface<Windows::UI::Xaml::Data::CollectionViewSource>
    {
        using type = Windows::UI::Xaml::Data::ICollectionViewSource;
    };
    template <> struct default_interface<Windows::UI::Xaml::Data::CurrentChangingEventArgs>
    {
        using type = Windows::UI::Xaml::Data::ICurrentChangingEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Data::ItemIndexRange>
    {
        using type = Windows::UI::Xaml::Data::IItemIndexRange;
    };
    template <> struct default_interface<Windows::UI::Xaml::Data::PropertyChangedEventArgs>
    {
        using type = Windows::UI::Xaml::Data::IPropertyChangedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Data::RelativeSource>
    {
        using type = Windows::UI::Xaml::Data::IRelativeSource;
    };
    template <> struct abi<Windows::UI::Xaml::Data::IBinding>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Path(void**) noexcept = 0;
            virtual int32_t __stdcall put_Path(void*) noexcept = 0;
            virtual int32_t __stdcall get_Mode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Mode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
            virtual int32_t __stdcall put_Source(void*) noexcept = 0;
            virtual int32_t __stdcall get_RelativeSource(void**) noexcept = 0;
            virtual int32_t __stdcall put_RelativeSource(void*) noexcept = 0;
            virtual int32_t __stdcall get_ElementName(void**) noexcept = 0;
            virtual int32_t __stdcall put_ElementName(void*) noexcept = 0;
            virtual int32_t __stdcall get_Converter(void**) noexcept = 0;
            virtual int32_t __stdcall put_Converter(void*) noexcept = 0;
            virtual int32_t __stdcall get_ConverterParameter(void**) noexcept = 0;
            virtual int32_t __stdcall put_ConverterParameter(void*) noexcept = 0;
            virtual int32_t __stdcall get_ConverterLanguage(void**) noexcept = 0;
            virtual int32_t __stdcall put_ConverterLanguage(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::IBinding2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FallbackValue(void**) noexcept = 0;
            virtual int32_t __stdcall put_FallbackValue(void*) noexcept = 0;
            virtual int32_t __stdcall get_TargetNullValue(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetNullValue(void*) noexcept = 0;
            virtual int32_t __stdcall get_UpdateSourceTrigger(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_UpdateSourceTrigger(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::IBindingBase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::IBindingBaseFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::IBindingExpression>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DataItem(void**) noexcept = 0;
            virtual int32_t __stdcall get_ParentBinding(void**) noexcept = 0;
            virtual int32_t __stdcall UpdateSource() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::IBindingExpressionBase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::IBindingExpressionBaseFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::IBindingExpressionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::IBindingFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::IBindingOperations>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::IBindingOperationsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetBinding(void*, void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::ICollectionView>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CurrentItem(void**) noexcept = 0;
            virtual int32_t __stdcall get_CurrentPosition(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsCurrentAfterLast(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsCurrentBeforeFirst(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CollectionGroups(void**) noexcept = 0;
            virtual int32_t __stdcall get_HasMoreItems(bool*) noexcept = 0;
            virtual int32_t __stdcall add_CurrentChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CurrentChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CurrentChanging(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CurrentChanging(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall MoveCurrentTo(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall MoveCurrentToPosition(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall MoveCurrentToFirst(bool*) noexcept = 0;
            virtual int32_t __stdcall MoveCurrentToLast(bool*) noexcept = 0;
            virtual int32_t __stdcall MoveCurrentToNext(bool*) noexcept = 0;
            virtual int32_t __stdcall MoveCurrentToPrevious(bool*) noexcept = 0;
            virtual int32_t __stdcall LoadMoreItemsAsync(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::ICollectionViewFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::ICollectionViewGroup>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Group(void**) noexcept = 0;
            virtual int32_t __stdcall get_GroupItems(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::ICollectionViewSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
            virtual int32_t __stdcall put_Source(void*) noexcept = 0;
            virtual int32_t __stdcall get_View(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsSourceGrouped(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsSourceGrouped(bool) noexcept = 0;
            virtual int32_t __stdcall get_ItemsPath(void**) noexcept = 0;
            virtual int32_t __stdcall put_ItemsPath(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::ICollectionViewSourceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SourceProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ViewProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsSourceGroupedProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ItemsPathProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::ICurrentChangingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Cancel(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Cancel(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsCancelable(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::ICurrentChangingEventArgsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithCancelableParameter(bool, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::ICustomProperty>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Type(struct struct_Windows_UI_Xaml_Interop_TypeName*) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall GetValue(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetValue(void*, void*) noexcept = 0;
            virtual int32_t __stdcall GetIndexedValue(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetIndexedValue(void*, void*, void*) noexcept = 0;
            virtual int32_t __stdcall get_CanWrite(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanRead(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::ICustomPropertyProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCustomProperty(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetIndexedProperty(void*, struct struct_Windows_UI_Xaml_Interop_TypeName, void**) noexcept = 0;
            virtual int32_t __stdcall GetStringRepresentation(void**) noexcept = 0;
            virtual int32_t __stdcall get_Type(struct struct_Windows_UI_Xaml_Interop_TypeName*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::IItemIndexRange>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FirstIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Length(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LastIndex(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::IItemIndexRangeFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(int32_t, uint32_t, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::IItemsRangeInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RangesChanged(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::INotifyPropertyChanged>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_PropertyChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PropertyChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::IPropertyChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PropertyName(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::IPropertyChangedEventArgsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::IRelativeSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Mode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Mode(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::IRelativeSourceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::ISelectionInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SelectRange(void*) noexcept = 0;
            virtual int32_t __stdcall DeselectRange(void*) noexcept = 0;
            virtual int32_t __stdcall IsSelected(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall GetSelectedRanges(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::ISupportIncrementalLoading>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall LoadMoreItemsAsync(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_HasMoreItems(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::IValueConverter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Convert(void*, struct struct_Windows_UI_Xaml_Interop_TypeName, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall ConvertBack(void*, struct struct_Windows_UI_Xaml_Interop_TypeName, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::CurrentChangingEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Data::PropertyChangedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_IBinding
    {
        [[nodiscard]] auto Path() const;
        auto Path(Windows::UI::Xaml::PropertyPath const& value) const;
        [[nodiscard]] auto Mode() const;
        auto Mode(Windows::UI::Xaml::Data::BindingMode const& value) const;
        [[nodiscard]] auto Source() const;
        auto Source(Windows::Foundation::IInspectable const& value) const;
        [[nodiscard]] auto RelativeSource() const;
        auto RelativeSource(Windows::UI::Xaml::Data::RelativeSource const& value) const;
        [[nodiscard]] auto ElementName() const;
        auto ElementName(param::hstring const& value) const;
        [[nodiscard]] auto Converter() const;
        auto Converter(Windows::UI::Xaml::Data::IValueConverter const& value) const;
        [[nodiscard]] auto ConverterParameter() const;
        auto ConverterParameter(Windows::Foundation::IInspectable const& value) const;
        [[nodiscard]] auto ConverterLanguage() const;
        auto ConverterLanguage(param::hstring const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Data::IBinding>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_IBinding<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_IBinding2
    {
        [[nodiscard]] auto FallbackValue() const;
        auto FallbackValue(Windows::Foundation::IInspectable const& value) const;
        [[nodiscard]] auto TargetNullValue() const;
        auto TargetNullValue(Windows::Foundation::IInspectable const& value) const;
        [[nodiscard]] auto UpdateSourceTrigger() const;
        auto UpdateSourceTrigger(Windows::UI::Xaml::Data::UpdateSourceTrigger const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Data::IBinding2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_IBinding2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_IBindingBase
    {
    };
    template <> struct consume<Windows::UI::Xaml::Data::IBindingBase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_IBindingBase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_IBindingBaseFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Data::IBindingBaseFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_IBindingBaseFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_IBindingExpression
    {
        [[nodiscard]] auto DataItem() const;
        [[nodiscard]] auto ParentBinding() const;
        auto UpdateSource() const;
    };
    template <> struct consume<Windows::UI::Xaml::Data::IBindingExpression>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_IBindingExpression<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_IBindingExpressionBase
    {
    };
    template <> struct consume<Windows::UI::Xaml::Data::IBindingExpressionBase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_IBindingExpressionBase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_IBindingExpressionBaseFactory
    {
    };
    template <> struct consume<Windows::UI::Xaml::Data::IBindingExpressionBaseFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_IBindingExpressionBaseFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_IBindingExpressionFactory
    {
    };
    template <> struct consume<Windows::UI::Xaml::Data::IBindingExpressionFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_IBindingExpressionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_IBindingFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Data::IBindingFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_IBindingFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_IBindingOperations
    {
    };
    template <> struct consume<Windows::UI::Xaml::Data::IBindingOperations>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_IBindingOperations<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_IBindingOperationsStatics
    {
        auto SetBinding(Windows::UI::Xaml::DependencyObject const& target, Windows::UI::Xaml::DependencyProperty const& dp, Windows::UI::Xaml::Data::BindingBase const& binding) const;
    };
    template <> struct consume<Windows::UI::Xaml::Data::IBindingOperationsStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_IBindingOperationsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_ICollectionView
    {
        [[nodiscard]] auto CurrentItem() const;
        [[nodiscard]] auto CurrentPosition() const;
        [[nodiscard]] auto IsCurrentAfterLast() const;
        [[nodiscard]] auto IsCurrentBeforeFirst() const;
        [[nodiscard]] auto CollectionGroups() const;
        [[nodiscard]] auto HasMoreItems() const;
        auto CurrentChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using CurrentChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Data::ICollectionView, &impl::abi_t<Windows::UI::Xaml::Data::ICollectionView>::remove_CurrentChanged>;
        CurrentChanged_revoker CurrentChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto CurrentChanged(winrt::event_token const& token) const noexcept;
        auto CurrentChanging(Windows::UI::Xaml::Data::CurrentChangingEventHandler const& handler) const;
        using CurrentChanging_revoker = impl::event_revoker<Windows::UI::Xaml::Data::ICollectionView, &impl::abi_t<Windows::UI::Xaml::Data::ICollectionView>::remove_CurrentChanging>;
        CurrentChanging_revoker CurrentChanging(auto_revoke_t, Windows::UI::Xaml::Data::CurrentChangingEventHandler const& handler) const;
        auto CurrentChanging(winrt::event_token const& token) const noexcept;
        auto MoveCurrentTo(Windows::Foundation::IInspectable const& item) const;
        auto MoveCurrentToPosition(int32_t index) const;
        auto MoveCurrentToFirst() const;
        auto MoveCurrentToLast() const;
        auto MoveCurrentToNext() const;
        auto MoveCurrentToPrevious() const;
        auto LoadMoreItemsAsync(uint32_t count) const;
    };
    template <> struct consume<Windows::UI::Xaml::Data::ICollectionView>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_ICollectionView<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_ICollectionViewFactory
    {
        auto CreateView() const;
    };
    template <> struct consume<Windows::UI::Xaml::Data::ICollectionViewFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_ICollectionViewFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_ICollectionViewGroup
    {
        [[nodiscard]] auto Group() const;
        [[nodiscard]] auto GroupItems() const;
    };
    template <> struct consume<Windows::UI::Xaml::Data::ICollectionViewGroup>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_ICollectionViewGroup<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_ICollectionViewSource
    {
        [[nodiscard]] auto Source() const;
        auto Source(Windows::Foundation::IInspectable const& value) const;
        [[nodiscard]] auto View() const;
        [[nodiscard]] auto IsSourceGrouped() const;
        auto IsSourceGrouped(bool value) const;
        [[nodiscard]] auto ItemsPath() const;
        auto ItemsPath(Windows::UI::Xaml::PropertyPath const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Data::ICollectionViewSource>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_ICollectionViewSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_ICollectionViewSourceStatics
    {
        [[nodiscard]] auto SourceProperty() const;
        [[nodiscard]] auto ViewProperty() const;
        [[nodiscard]] auto IsSourceGroupedProperty() const;
        [[nodiscard]] auto ItemsPathProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Data::ICollectionViewSourceStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_ICollectionViewSourceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_ICurrentChangingEventArgs
    {
        [[nodiscard]] auto Cancel() const;
        auto Cancel(bool value) const;
        [[nodiscard]] auto IsCancelable() const;
    };
    template <> struct consume<Windows::UI::Xaml::Data::ICurrentChangingEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_ICurrentChangingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_ICurrentChangingEventArgsFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
        auto CreateWithCancelableParameter(bool isCancelable, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Data::ICurrentChangingEventArgsFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_ICurrentChangingEventArgsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_ICustomProperty
    {
        [[nodiscard]] auto Type() const;
        [[nodiscard]] auto Name() const;
        auto GetValue(Windows::Foundation::IInspectable const& target) const;
        auto SetValue(Windows::Foundation::IInspectable const& target, Windows::Foundation::IInspectable const& value) const;
        auto GetIndexedValue(Windows::Foundation::IInspectable const& target, Windows::Foundation::IInspectable const& index) const;
        auto SetIndexedValue(Windows::Foundation::IInspectable const& target, Windows::Foundation::IInspectable const& value, Windows::Foundation::IInspectable const& index) const;
        [[nodiscard]] auto CanWrite() const;
        [[nodiscard]] auto CanRead() const;
    };
    template <> struct consume<Windows::UI::Xaml::Data::ICustomProperty>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_ICustomProperty<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_ICustomPropertyProvider
    {
        auto GetCustomProperty(param::hstring const& name) const;
        auto GetIndexedProperty(param::hstring const& name, Windows::UI::Xaml::Interop::TypeName const& type) const;
        auto GetStringRepresentation() const;
        [[nodiscard]] auto Type() const;
    };
    template <> struct consume<Windows::UI::Xaml::Data::ICustomPropertyProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_ICustomPropertyProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_IItemIndexRange
    {
        [[nodiscard]] auto FirstIndex() const;
        [[nodiscard]] auto Length() const;
        [[nodiscard]] auto LastIndex() const;
    };
    template <> struct consume<Windows::UI::Xaml::Data::IItemIndexRange>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_IItemIndexRange<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_IItemIndexRangeFactory
    {
        auto CreateInstance(int32_t firstIndex, uint32_t length, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Data::IItemIndexRangeFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_IItemIndexRangeFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_IItemsRangeInfo
    {
        auto RangesChanged(Windows::UI::Xaml::Data::ItemIndexRange const& visibleRange, param::vector_view<Windows::UI::Xaml::Data::ItemIndexRange> const& trackedItems) const;
    };
    template <> struct consume<Windows::UI::Xaml::Data::IItemsRangeInfo>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_IItemsRangeInfo<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_INotifyPropertyChanged
    {
        auto PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler) const;
        using PropertyChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Data::INotifyPropertyChanged, &impl::abi_t<Windows::UI::Xaml::Data::INotifyPropertyChanged>::remove_PropertyChanged>;
        PropertyChanged_revoker PropertyChanged(auto_revoke_t, Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler) const;
        auto PropertyChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Data::INotifyPropertyChanged>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_INotifyPropertyChanged<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_IPropertyChangedEventArgs
    {
        [[nodiscard]] auto PropertyName() const;
    };
    template <> struct consume<Windows::UI::Xaml::Data::IPropertyChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_IPropertyChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_IPropertyChangedEventArgsFactory
    {
        auto CreateInstance(param::hstring const& name, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Data::IPropertyChangedEventArgsFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_IPropertyChangedEventArgsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_IRelativeSource
    {
        [[nodiscard]] auto Mode() const;
        auto Mode(Windows::UI::Xaml::Data::RelativeSourceMode const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Data::IRelativeSource>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_IRelativeSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_IRelativeSourceFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Data::IRelativeSourceFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_IRelativeSourceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_ISelectionInfo
    {
        auto SelectRange(Windows::UI::Xaml::Data::ItemIndexRange const& itemIndexRange) const;
        auto DeselectRange(Windows::UI::Xaml::Data::ItemIndexRange const& itemIndexRange) const;
        auto IsSelected(int32_t index) const;
        auto GetSelectedRanges() const;
    };
    template <> struct consume<Windows::UI::Xaml::Data::ISelectionInfo>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_ISelectionInfo<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_ISupportIncrementalLoading
    {
        auto LoadMoreItemsAsync(uint32_t count) const;
        [[nodiscard]] auto HasMoreItems() const;
    };
    template <> struct consume<Windows::UI::Xaml::Data::ISupportIncrementalLoading>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_ISupportIncrementalLoading<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Data_IValueConverter
    {
        auto Convert(Windows::Foundation::IInspectable const& value, Windows::UI::Xaml::Interop::TypeName const& targetType, Windows::Foundation::IInspectable const& parameter, param::hstring const& language) const;
        auto ConvertBack(Windows::Foundation::IInspectable const& value, Windows::UI::Xaml::Interop::TypeName const& targetType, Windows::Foundation::IInspectable const& parameter, param::hstring const& language) const;
    };
    template <> struct consume<Windows::UI::Xaml::Data::IValueConverter>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Data_IValueConverter<D>;
    };
    struct struct_Windows_UI_Xaml_Data_LoadMoreItemsResult
    {
        uint32_t Count;
    };
    template <> struct abi<Windows::UI::Xaml::Data::LoadMoreItemsResult>
    {
        using type = struct_Windows_UI_Xaml_Data_LoadMoreItemsResult;
    };
}
#endif
