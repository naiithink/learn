// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_AI_MachineLearning_0_H
#define WINRT_Windows_AI_MachineLearning_0_H
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
    template <typename K, typename V> struct IMap;
    struct IPropertySet;
}
namespace winrt::Windows::Graphics
{
    struct DisplayAdapterId;
}
namespace winrt::Windows::Graphics::DirectX::Direct3D11
{
    struct IDirect3DDevice;
}
namespace winrt::Windows::Graphics::Imaging
{
    enum class BitmapAlphaMode : int32_t;
    enum class BitmapPixelFormat : int32_t;
}
namespace winrt::Windows::Media
{
    struct VideoFrame;
}
namespace winrt::Windows::Storage
{
    struct IStorageFile;
}
namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
    struct IRandomAccessStreamReference;
}
namespace winrt::Windows::AI::MachineLearning
{
    enum class LearningModelDeviceKind : int32_t
    {
        Default = 0,
        Cpu = 1,
        DirectX = 2,
        DirectXHighPerformance = 3,
        DirectXMinPower = 4,
    };
    enum class LearningModelFeatureKind : int32_t
    {
        Tensor = 0,
        Sequence = 1,
        Map = 2,
        Image = 3,
    };
    enum class TensorKind : int32_t
    {
        Undefined = 0,
        Float = 1,
        UInt8 = 2,
        Int8 = 3,
        UInt16 = 4,
        Int16 = 5,
        Int32 = 6,
        Int64 = 7,
        String = 8,
        Boolean = 9,
        Float16 = 10,
        Double = 11,
        UInt32 = 12,
        UInt64 = 13,
        Complex64 = 14,
        Complex128 = 15,
    };
    struct IImageFeatureDescriptor;
    struct IImageFeatureValue;
    struct IImageFeatureValueStatics;
    struct ILearningModel;
    struct ILearningModelBinding;
    struct ILearningModelBindingFactory;
    struct ILearningModelDevice;
    struct ILearningModelDeviceFactory;
    struct ILearningModelDeviceStatics;
    struct ILearningModelEvaluationResult;
    struct ILearningModelFeatureDescriptor;
    struct ILearningModelFeatureValue;
    struct ILearningModelOperatorProvider;
    struct ILearningModelSession;
    struct ILearningModelSessionFactory;
    struct ILearningModelSessionFactory2;
    struct ILearningModelSessionOptions;
    struct ILearningModelSessionOptions2;
    struct ILearningModelStatics;
    struct IMapFeatureDescriptor;
    struct ISequenceFeatureDescriptor;
    struct ITensor;
    struct ITensorBoolean;
    struct ITensorBooleanStatics;
    struct ITensorBooleanStatics2;
    struct ITensorDouble;
    struct ITensorDoubleStatics;
    struct ITensorDoubleStatics2;
    struct ITensorFeatureDescriptor;
    struct ITensorFloat;
    struct ITensorFloat16Bit;
    struct ITensorFloat16BitStatics;
    struct ITensorFloat16BitStatics2;
    struct ITensorFloatStatics;
    struct ITensorFloatStatics2;
    struct ITensorInt16Bit;
    struct ITensorInt16BitStatics;
    struct ITensorInt16BitStatics2;
    struct ITensorInt32Bit;
    struct ITensorInt32BitStatics;
    struct ITensorInt32BitStatics2;
    struct ITensorInt64Bit;
    struct ITensorInt64BitStatics;
    struct ITensorInt64BitStatics2;
    struct ITensorInt8Bit;
    struct ITensorInt8BitStatics;
    struct ITensorInt8BitStatics2;
    struct ITensorString;
    struct ITensorStringStatics;
    struct ITensorStringStatics2;
    struct ITensorUInt16Bit;
    struct ITensorUInt16BitStatics;
    struct ITensorUInt16BitStatics2;
    struct ITensorUInt32Bit;
    struct ITensorUInt32BitStatics;
    struct ITensorUInt32BitStatics2;
    struct ITensorUInt64Bit;
    struct ITensorUInt64BitStatics;
    struct ITensorUInt64BitStatics2;
    struct ITensorUInt8Bit;
    struct ITensorUInt8BitStatics;
    struct ITensorUInt8BitStatics2;
    struct ImageFeatureDescriptor;
    struct ImageFeatureValue;
    struct LearningModel;
    struct LearningModelBinding;
    struct LearningModelDevice;
    struct LearningModelEvaluationResult;
    struct LearningModelSession;
    struct LearningModelSessionOptions;
    struct MapFeatureDescriptor;
    struct SequenceFeatureDescriptor;
    struct TensorBoolean;
    struct TensorDouble;
    struct TensorFeatureDescriptor;
    struct TensorFloat;
    struct TensorFloat16Bit;
    struct TensorInt16Bit;
    struct TensorInt32Bit;
    struct TensorInt64Bit;
    struct TensorInt8Bit;
    struct TensorString;
    struct TensorUInt16Bit;
    struct TensorUInt32Bit;
    struct TensorUInt64Bit;
    struct TensorUInt8Bit;
}
namespace winrt::impl
{
    template <> struct category<Windows::AI::MachineLearning::IImageFeatureDescriptor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::IImageFeatureValue>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::IImageFeatureValueStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ILearningModel>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ILearningModelBinding>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ILearningModelBindingFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ILearningModelDevice>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ILearningModelDeviceFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ILearningModelDeviceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ILearningModelEvaluationResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ILearningModelFeatureDescriptor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ILearningModelFeatureValue>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ILearningModelOperatorProvider>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ILearningModelSession>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ILearningModelSessionFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ILearningModelSessionFactory2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ILearningModelSessionOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ILearningModelSessionOptions2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ILearningModelStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::IMapFeatureDescriptor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ISequenceFeatureDescriptor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorBoolean>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorBooleanStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorBooleanStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorDouble>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorDoubleStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorDoubleStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorFeatureDescriptor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorFloat>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorFloat16Bit>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorFloat16BitStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorFloat16BitStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorFloatStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorFloatStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorInt16Bit>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorInt16BitStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorInt16BitStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorInt32Bit>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorInt32BitStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorInt32BitStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorInt64Bit>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorInt64BitStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorInt64BitStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorInt8Bit>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorInt8BitStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorInt8BitStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorString>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorStringStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorStringStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorUInt16Bit>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorUInt16BitStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorUInt16BitStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorUInt32Bit>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorUInt32BitStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorUInt32BitStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorUInt64Bit>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorUInt64BitStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorUInt64BitStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorUInt8Bit>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorUInt8BitStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ITensorUInt8BitStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ImageFeatureDescriptor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::AI::MachineLearning::ImageFeatureValue>
    {
        using type = class_category;
    };
    template <> struct category<Windows::AI::MachineLearning::LearningModel>
    {
        using type = class_category;
    };
    template <> struct category<Windows::AI::MachineLearning::LearningModelBinding>
    {
        using type = class_category;
    };
    template <> struct category<Windows::AI::MachineLearning::LearningModelDevice>
    {
        using type = class_category;
    };
    template <> struct category<Windows::AI::MachineLearning::LearningModelEvaluationResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::AI::MachineLearning::LearningModelSession>
    {
        using type = class_category;
    };
    template <> struct category<Windows::AI::MachineLearning::LearningModelSessionOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::AI::MachineLearning::MapFeatureDescriptor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::AI::MachineLearning::SequenceFeatureDescriptor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::AI::MachineLearning::TensorBoolean>
    {
        using type = class_category;
    };
    template <> struct category<Windows::AI::MachineLearning::TensorDouble>
    {
        using type = class_category;
    };
    template <> struct category<Windows::AI::MachineLearning::TensorFeatureDescriptor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::AI::MachineLearning::TensorFloat>
    {
        using type = class_category;
    };
    template <> struct category<Windows::AI::MachineLearning::TensorFloat16Bit>
    {
        using type = class_category;
    };
    template <> struct category<Windows::AI::MachineLearning::TensorInt16Bit>
    {
        using type = class_category;
    };
    template <> struct category<Windows::AI::MachineLearning::TensorInt32Bit>
    {
        using type = class_category;
    };
    template <> struct category<Windows::AI::MachineLearning::TensorInt64Bit>
    {
        using type = class_category;
    };
    template <> struct category<Windows::AI::MachineLearning::TensorInt8Bit>
    {
        using type = class_category;
    };
    template <> struct category<Windows::AI::MachineLearning::TensorString>
    {
        using type = class_category;
    };
    template <> struct category<Windows::AI::MachineLearning::TensorUInt16Bit>
    {
        using type = class_category;
    };
    template <> struct category<Windows::AI::MachineLearning::TensorUInt32Bit>
    {
        using type = class_category;
    };
    template <> struct category<Windows::AI::MachineLearning::TensorUInt64Bit>
    {
        using type = class_category;
    };
    template <> struct category<Windows::AI::MachineLearning::TensorUInt8Bit>
    {
        using type = class_category;
    };
    template <> struct category<Windows::AI::MachineLearning::LearningModelDeviceKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::AI::MachineLearning::LearningModelFeatureKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::AI::MachineLearning::TensorKind>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::AI::MachineLearning::IImageFeatureDescriptor>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.IImageFeatureDescriptor" };
    };
    template <> struct name<Windows::AI::MachineLearning::IImageFeatureValue>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.IImageFeatureValue" };
    };
    template <> struct name<Windows::AI::MachineLearning::IImageFeatureValueStatics>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.IImageFeatureValueStatics" };
    };
    template <> struct name<Windows::AI::MachineLearning::ILearningModel>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ILearningModel" };
    };
    template <> struct name<Windows::AI::MachineLearning::ILearningModelBinding>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ILearningModelBinding" };
    };
    template <> struct name<Windows::AI::MachineLearning::ILearningModelBindingFactory>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ILearningModelBindingFactory" };
    };
    template <> struct name<Windows::AI::MachineLearning::ILearningModelDevice>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ILearningModelDevice" };
    };
    template <> struct name<Windows::AI::MachineLearning::ILearningModelDeviceFactory>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ILearningModelDeviceFactory" };
    };
    template <> struct name<Windows::AI::MachineLearning::ILearningModelDeviceStatics>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ILearningModelDeviceStatics" };
    };
    template <> struct name<Windows::AI::MachineLearning::ILearningModelEvaluationResult>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ILearningModelEvaluationResult" };
    };
    template <> struct name<Windows::AI::MachineLearning::ILearningModelFeatureDescriptor>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ILearningModelFeatureDescriptor" };
    };
    template <> struct name<Windows::AI::MachineLearning::ILearningModelFeatureValue>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ILearningModelFeatureValue" };
    };
    template <> struct name<Windows::AI::MachineLearning::ILearningModelOperatorProvider>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ILearningModelOperatorProvider" };
    };
    template <> struct name<Windows::AI::MachineLearning::ILearningModelSession>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ILearningModelSession" };
    };
    template <> struct name<Windows::AI::MachineLearning::ILearningModelSessionFactory>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ILearningModelSessionFactory" };
    };
    template <> struct name<Windows::AI::MachineLearning::ILearningModelSessionFactory2>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ILearningModelSessionFactory2" };
    };
    template <> struct name<Windows::AI::MachineLearning::ILearningModelSessionOptions>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ILearningModelSessionOptions" };
    };
    template <> struct name<Windows::AI::MachineLearning::ILearningModelSessionOptions2>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ILearningModelSessionOptions2" };
    };
    template <> struct name<Windows::AI::MachineLearning::ILearningModelStatics>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ILearningModelStatics" };
    };
    template <> struct name<Windows::AI::MachineLearning::IMapFeatureDescriptor>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.IMapFeatureDescriptor" };
    };
    template <> struct name<Windows::AI::MachineLearning::ISequenceFeatureDescriptor>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ISequenceFeatureDescriptor" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensor>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensor" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorBoolean>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorBoolean" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorBooleanStatics>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorBooleanStatics" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorBooleanStatics2>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorBooleanStatics2" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorDouble>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorDouble" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorDoubleStatics>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorDoubleStatics" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorDoubleStatics2>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorDoubleStatics2" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorFeatureDescriptor>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorFeatureDescriptor" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorFloat>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorFloat" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorFloat16Bit>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorFloat16Bit" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorFloat16BitStatics>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorFloat16BitStatics" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorFloat16BitStatics2>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorFloat16BitStatics2" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorFloatStatics>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorFloatStatics" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorFloatStatics2>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorFloatStatics2" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorInt16Bit>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorInt16Bit" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorInt16BitStatics>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorInt16BitStatics" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorInt16BitStatics2>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorInt16BitStatics2" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorInt32Bit>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorInt32Bit" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorInt32BitStatics>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorInt32BitStatics" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorInt32BitStatics2>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorInt32BitStatics2" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorInt64Bit>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorInt64Bit" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorInt64BitStatics>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorInt64BitStatics" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorInt64BitStatics2>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorInt64BitStatics2" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorInt8Bit>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorInt8Bit" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorInt8BitStatics>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorInt8BitStatics" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorInt8BitStatics2>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorInt8BitStatics2" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorString>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorString" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorStringStatics>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorStringStatics" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorStringStatics2>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorStringStatics2" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorUInt16Bit>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorUInt16Bit" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorUInt16BitStatics>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorUInt16BitStatics" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorUInt16BitStatics2>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorUInt16BitStatics2" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorUInt32Bit>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorUInt32Bit" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorUInt32BitStatics>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorUInt32BitStatics" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorUInt32BitStatics2>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorUInt32BitStatics2" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorUInt64Bit>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorUInt64Bit" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorUInt64BitStatics>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorUInt64BitStatics" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorUInt64BitStatics2>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorUInt64BitStatics2" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorUInt8Bit>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorUInt8Bit" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorUInt8BitStatics>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorUInt8BitStatics" };
    };
    template <> struct name<Windows::AI::MachineLearning::ITensorUInt8BitStatics2>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ITensorUInt8BitStatics2" };
    };
    template <> struct name<Windows::AI::MachineLearning::ImageFeatureDescriptor>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ImageFeatureDescriptor" };
    };
    template <> struct name<Windows::AI::MachineLearning::ImageFeatureValue>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.ImageFeatureValue" };
    };
    template <> struct name<Windows::AI::MachineLearning::LearningModel>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.LearningModel" };
    };
    template <> struct name<Windows::AI::MachineLearning::LearningModelBinding>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.LearningModelBinding" };
    };
    template <> struct name<Windows::AI::MachineLearning::LearningModelDevice>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.LearningModelDevice" };
    };
    template <> struct name<Windows::AI::MachineLearning::LearningModelEvaluationResult>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.LearningModelEvaluationResult" };
    };
    template <> struct name<Windows::AI::MachineLearning::LearningModelSession>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.LearningModelSession" };
    };
    template <> struct name<Windows::AI::MachineLearning::LearningModelSessionOptions>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.LearningModelSessionOptions" };
    };
    template <> struct name<Windows::AI::MachineLearning::MapFeatureDescriptor>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.MapFeatureDescriptor" };
    };
    template <> struct name<Windows::AI::MachineLearning::SequenceFeatureDescriptor>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.SequenceFeatureDescriptor" };
    };
    template <> struct name<Windows::AI::MachineLearning::TensorBoolean>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.TensorBoolean" };
    };
    template <> struct name<Windows::AI::MachineLearning::TensorDouble>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.TensorDouble" };
    };
    template <> struct name<Windows::AI::MachineLearning::TensorFeatureDescriptor>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.TensorFeatureDescriptor" };
    };
    template <> struct name<Windows::AI::MachineLearning::TensorFloat>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.TensorFloat" };
    };
    template <> struct name<Windows::AI::MachineLearning::TensorFloat16Bit>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.TensorFloat16Bit" };
    };
    template <> struct name<Windows::AI::MachineLearning::TensorInt16Bit>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.TensorInt16Bit" };
    };
    template <> struct name<Windows::AI::MachineLearning::TensorInt32Bit>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.TensorInt32Bit" };
    };
    template <> struct name<Windows::AI::MachineLearning::TensorInt64Bit>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.TensorInt64Bit" };
    };
    template <> struct name<Windows::AI::MachineLearning::TensorInt8Bit>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.TensorInt8Bit" };
    };
    template <> struct name<Windows::AI::MachineLearning::TensorString>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.TensorString" };
    };
    template <> struct name<Windows::AI::MachineLearning::TensorUInt16Bit>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.TensorUInt16Bit" };
    };
    template <> struct name<Windows::AI::MachineLearning::TensorUInt32Bit>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.TensorUInt32Bit" };
    };
    template <> struct name<Windows::AI::MachineLearning::TensorUInt64Bit>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.TensorUInt64Bit" };
    };
    template <> struct name<Windows::AI::MachineLearning::TensorUInt8Bit>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.TensorUInt8Bit" };
    };
    template <> struct name<Windows::AI::MachineLearning::LearningModelDeviceKind>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.LearningModelDeviceKind" };
    };
    template <> struct name<Windows::AI::MachineLearning::LearningModelFeatureKind>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.LearningModelFeatureKind" };
    };
    template <> struct name<Windows::AI::MachineLearning::TensorKind>
    {
        static constexpr auto & value{ L"Windows.AI.MachineLearning.TensorKind" };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::IImageFeatureDescriptor>
    {
        static constexpr guid value{ 0x365585A5,0x171A,0x4A2A,{ 0x98,0x5F,0x26,0x51,0x59,0xD3,0x89,0x5A } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::IImageFeatureValue>
    {
        static constexpr guid value{ 0xF0414FD9,0xC9AA,0x4405,{ 0xB7,0xFB,0x94,0xF8,0x7C,0x8A,0x30,0x37 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::IImageFeatureValueStatics>
    {
        static constexpr guid value{ 0x1BC317FD,0x23CB,0x4610,{ 0xB0,0x85,0xC8,0xE1,0xC8,0x7E,0xBA,0xA0 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ILearningModel>
    {
        static constexpr guid value{ 0x5B8E4920,0x489F,0x4E86,{ 0x91,0x28,0x26,0x5A,0x32,0x7B,0x78,0xFA } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ILearningModelBinding>
    {
        static constexpr guid value{ 0xEA312F20,0x168F,0x4F8C,{ 0x94,0xFE,0x2E,0x7A,0xC3,0x1B,0x4A,0xA8 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ILearningModelBindingFactory>
    {
        static constexpr guid value{ 0xC95F7A7A,0xE788,0x475E,{ 0x89,0x17,0x23,0xAA,0x38,0x1F,0xAF,0x0B } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ILearningModelDevice>
    {
        static constexpr guid value{ 0xF5C2C8FE,0x3F56,0x4A8C,{ 0xAC,0x5F,0xFD,0xB9,0x2D,0x8B,0x82,0x52 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ILearningModelDeviceFactory>
    {
        static constexpr guid value{ 0x9CFFD74D,0xB1E5,0x4F20,{ 0x80,0xAD,0x0A,0x56,0x69,0x0D,0xB0,0x6B } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ILearningModelDeviceStatics>
    {
        static constexpr guid value{ 0x49F32107,0xA8BF,0x42BB,{ 0x92,0xC7,0x10,0xB1,0x2D,0xC5,0xD2,0x1F } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ILearningModelEvaluationResult>
    {
        static constexpr guid value{ 0xB2F9BFCD,0x960E,0x49C0,{ 0x85,0x93,0xEB,0x19,0x0A,0xE3,0xEE,0xE2 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ILearningModelFeatureDescriptor>
    {
        static constexpr guid value{ 0xBC08CF7C,0x6ED0,0x4004,{ 0x97,0xBA,0xB9,0xA2,0xEE,0xCD,0x2B,0x4F } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ILearningModelFeatureValue>
    {
        static constexpr guid value{ 0xF51005DB,0x4085,0x4DFE,{ 0x9F,0xED,0x95,0xEB,0x0C,0x0C,0xF7,0x5C } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ILearningModelOperatorProvider>
    {
        static constexpr guid value{ 0x2A222E5D,0xAFB1,0x47ED,{ 0xBF,0xAD,0xB5,0xB3,0xA4,0x59,0xEC,0x04 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ILearningModelSession>
    {
        static constexpr guid value{ 0x8E58F8F6,0xB787,0x4C11,{ 0x90,0xF0,0x71,0x29,0xAE,0xCA,0x74,0xA9 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ILearningModelSessionFactory>
    {
        static constexpr guid value{ 0x0F6B881D,0x1C9B,0x47B6,{ 0xBF,0xE0,0xF1,0xCF,0x62,0xA6,0x75,0x79 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ILearningModelSessionFactory2>
    {
        static constexpr guid value{ 0x4E5C88BF,0x0A1F,0x5FEC,{ 0xAD,0xE0,0x2F,0xD9,0x1E,0x4E,0xF2,0x9B } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ILearningModelSessionOptions>
    {
        static constexpr guid value{ 0xB8F63FA1,0x134D,0x5133,{ 0x8C,0xFF,0x3A,0x5C,0x3C,0x26,0x3B,0xEB } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ILearningModelSessionOptions2>
    {
        static constexpr guid value{ 0x6FCD1DC4,0x175F,0x5BD2,{ 0x8D,0xE5,0x2F,0x20,0x06,0xA2,0x5A,0xDF } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ILearningModelStatics>
    {
        static constexpr guid value{ 0xE3B977E8,0x6952,0x4E47,{ 0x8E,0xF4,0x1F,0x7F,0x07,0x89,0x7C,0x6D } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::IMapFeatureDescriptor>
    {
        static constexpr guid value{ 0x530424BD,0xA257,0x436D,{ 0x9E,0x60,0xC2,0x98,0x1F,0x7C,0xC5,0xC4 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ISequenceFeatureDescriptor>
    {
        static constexpr guid value{ 0x84F6945A,0x562B,0x4D62,{ 0xA8,0x51,0x73,0x9A,0xCE,0xD9,0x66,0x68 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensor>
    {
        static constexpr guid value{ 0x05489593,0xA305,0x4A25,{ 0xAD,0x09,0x44,0x01,0x19,0xB4,0xB7,0xF6 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorBoolean>
    {
        static constexpr guid value{ 0x50F311ED,0x29E9,0x4A5C,{ 0xA4,0x4D,0x8F,0xC5,0x12,0x58,0x4E,0xED } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorBooleanStatics>
    {
        static constexpr guid value{ 0x2796862C,0x2357,0x49A7,{ 0xB4,0x76,0xD0,0xAA,0x3D,0xFE,0x68,0x66 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorBooleanStatics2>
    {
        static constexpr guid value{ 0xA3A4A501,0x6A2D,0x52D7,{ 0xB0,0x4B,0xC4,0x35,0xBA,0xEE,0x01,0x15 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorDouble>
    {
        static constexpr guid value{ 0x91E41252,0x7A8F,0x4F0E,{ 0xA2,0x8F,0x96,0x37,0xFF,0xC8,0xA3,0xD0 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorDoubleStatics>
    {
        static constexpr guid value{ 0xA86693C5,0x9538,0x44E7,{ 0xA3,0xCA,0x5D,0xF3,0x74,0xA5,0xA7,0x0C } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorDoubleStatics2>
    {
        static constexpr guid value{ 0x93A570DE,0x5E9A,0x5094,{ 0x85,0xC8,0x59,0x2C,0x65,0x5E,0x68,0xAC } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorFeatureDescriptor>
    {
        static constexpr guid value{ 0x74455C80,0x946A,0x4310,{ 0xA1,0x9C,0xEE,0x0A,0xF0,0x28,0xFC,0xE4 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorFloat>
    {
        static constexpr guid value{ 0xF2282D82,0xAA02,0x42C8,{ 0xA0,0xC8,0xDF,0x1E,0xFC,0x96,0x76,0xE1 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorFloat16Bit>
    {
        static constexpr guid value{ 0x0AB994FC,0x5B89,0x4C3C,{ 0xB5,0xE4,0x52,0x82,0xA5,0x31,0x6C,0x0A } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorFloat16BitStatics>
    {
        static constexpr guid value{ 0xA52DB6F5,0x318A,0x44D4,{ 0x82,0x0B,0x0C,0xDC,0x70,0x54,0xA8,0x4A } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorFloat16BitStatics2>
    {
        static constexpr guid value{ 0x68545726,0x2DC7,0x51BF,{ 0xB4,0x70,0x0B,0x34,0x4C,0xC2,0xA1,0xBC } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorFloatStatics>
    {
        static constexpr guid value{ 0xDBCD395B,0x3BA3,0x452F,{ 0xB1,0x0D,0x3C,0x13,0x5E,0x57,0x3F,0xA9 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorFloatStatics2>
    {
        static constexpr guid value{ 0x24610BC1,0x5E44,0x5713,{ 0xB2,0x81,0x8F,0x4A,0xD4,0xD5,0x55,0xE8 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorInt16Bit>
    {
        static constexpr guid value{ 0x98A32D39,0xE6D6,0x44AF,{ 0x8A,0xFA,0xBA,0xEB,0xC4,0x4D,0xC0,0x20 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorInt16BitStatics>
    {
        static constexpr guid value{ 0x98646293,0x266E,0x4B1A,{ 0x82,0x1F,0xE6,0x0D,0x70,0x89,0x8B,0x91 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorInt16BitStatics2>
    {
        static constexpr guid value{ 0x0CD70CF4,0x696C,0x5E5F,{ 0x95,0xD8,0x5E,0xBF,0x96,0x70,0x14,0x8B } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorInt32Bit>
    {
        static constexpr guid value{ 0x2C0C28D3,0x207C,0x4486,{ 0xA7,0xD2,0x88,0x45,0x22,0xC5,0xE5,0x89 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorInt32BitStatics>
    {
        static constexpr guid value{ 0x6539864B,0x52FA,0x4E35,{ 0x90,0x7C,0x83,0x4C,0xAC,0x41,0x7B,0x50 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorInt32BitStatics2>
    {
        static constexpr guid value{ 0x7C4B079A,0xE956,0x5CE0,{ 0xA3,0xBD,0x15,0x7D,0x9D,0x79,0xB5,0xEC } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorInt64Bit>
    {
        static constexpr guid value{ 0x499665BA,0x1FA2,0x45AD,{ 0xAF,0x25,0xA0,0xBD,0x9B,0xDA,0x4C,0x87 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorInt64BitStatics>
    {
        static constexpr guid value{ 0x9648AD9D,0x1198,0x4D74,{ 0x95,0x17,0x78,0x3A,0xB6,0x2B,0x9C,0xC2 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorInt64BitStatics2>
    {
        static constexpr guid value{ 0x6D3D9DCB,0xFF40,0x5EC2,{ 0x89,0xFE,0x08,0x4E,0x2B,0x6B,0xC6,0xDB } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorInt8Bit>
    {
        static constexpr guid value{ 0xCDDD97C5,0xFFD8,0x4FEF,{ 0xAE,0xFB,0x30,0xE1,0xA4,0x85,0xB2,0xEE } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorInt8BitStatics>
    {
        static constexpr guid value{ 0xB1A12284,0x095C,0x4C76,{ 0xA6,0x61,0xAC,0x4C,0xEE,0x1F,0x3E,0x8B } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorInt8BitStatics2>
    {
        static constexpr guid value{ 0xC0D59637,0xC468,0x56FB,{ 0x95,0x35,0xC0,0x52,0xBD,0xB9,0x3D,0xC0 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorString>
    {
        static constexpr guid value{ 0x582335C8,0xBDB1,0x4610,{ 0xBC,0x75,0x35,0xE9,0xCB,0xF0,0x09,0xB7 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorStringStatics>
    {
        static constexpr guid value{ 0x83623324,0xCF26,0x4F17,{ 0xA2,0xD4,0x20,0xEF,0x8D,0x09,0x7D,0x53 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorStringStatics2>
    {
        static constexpr guid value{ 0x9E355ED0,0xC8E2,0x5254,{ 0x91,0x37,0x01,0x93,0xA3,0x66,0x8F,0xD8 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorUInt16Bit>
    {
        static constexpr guid value{ 0x68140F4B,0x23C0,0x42F3,{ 0x81,0xF6,0xA8,0x91,0xC0,0x11,0xBC,0x3F } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorUInt16BitStatics>
    {
        static constexpr guid value{ 0x5DF745DD,0x028A,0x481A,{ 0xA2,0x7C,0xC7,0xE6,0x43,0x5E,0x52,0xDD } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorUInt16BitStatics2>
    {
        static constexpr guid value{ 0x8AF40C64,0xD69F,0x5315,{ 0x93,0x48,0x49,0x08,0x77,0xBB,0xD6,0x42 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorUInt32Bit>
    {
        static constexpr guid value{ 0xD8C9C2FF,0x7511,0x45A3,{ 0xBF,0xAC,0xC3,0x8F,0x37,0x0D,0x22,0x37 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorUInt32BitStatics>
    {
        static constexpr guid value{ 0x417C3837,0xE773,0x4378,{ 0x8E,0x7F,0x0C,0xC3,0x3D,0xBE,0xA6,0x97 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorUInt32BitStatics2>
    {
        static constexpr guid value{ 0xEF1A1F1C,0x314E,0x569D,{ 0xB4,0x96,0x5C,0x84,0x47,0xD2,0x0C,0xD2 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorUInt64Bit>
    {
        static constexpr guid value{ 0x2E70FFAD,0x04BF,0x4825,{ 0x83,0x9A,0x82,0xBA,0xEF,0x8C,0x78,0x86 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorUInt64BitStatics>
    {
        static constexpr guid value{ 0x7A7E20EB,0x242F,0x47CB,{ 0xA9,0xC6,0xF6,0x02,0xEC,0xFB,0xFE,0xE4 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorUInt64BitStatics2>
    {
        static constexpr guid value{ 0x085A687D,0x67E1,0x5B1E,{ 0xB2,0x32,0x4F,0xAB,0xE9,0xCA,0x20,0xB3 } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorUInt8Bit>
    {
        static constexpr guid value{ 0x58E1AE27,0x622B,0x48E3,{ 0xBE,0x22,0xD8,0x67,0xAE,0xD1,0xDA,0xAC } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorUInt8BitStatics>
    {
        static constexpr guid value{ 0x05F67583,0xBC24,0x4220,{ 0x8A,0x41,0x2D,0xCD,0x8C,0x5E,0xD3,0x3C } };
    };
    template <> struct guid_storage<Windows::AI::MachineLearning::ITensorUInt8BitStatics2>
    {
        static constexpr guid value{ 0x2BA042D6,0x373E,0x5A3A,{ 0xA2,0xFC,0xA6,0xC4,0x1B,0xD5,0x27,0x89 } };
    };
    template <> struct default_interface<Windows::AI::MachineLearning::ImageFeatureDescriptor>
    {
        using type = Windows::AI::MachineLearning::IImageFeatureDescriptor;
    };
    template <> struct default_interface<Windows::AI::MachineLearning::ImageFeatureValue>
    {
        using type = Windows::AI::MachineLearning::IImageFeatureValue;
    };
    template <> struct default_interface<Windows::AI::MachineLearning::LearningModel>
    {
        using type = Windows::AI::MachineLearning::ILearningModel;
    };
    template <> struct default_interface<Windows::AI::MachineLearning::LearningModelBinding>
    {
        using type = Windows::AI::MachineLearning::ILearningModelBinding;
    };
    template <> struct default_interface<Windows::AI::MachineLearning::LearningModelDevice>
    {
        using type = Windows::AI::MachineLearning::ILearningModelDevice;
    };
    template <> struct default_interface<Windows::AI::MachineLearning::LearningModelEvaluationResult>
    {
        using type = Windows::AI::MachineLearning::ILearningModelEvaluationResult;
    };
    template <> struct default_interface<Windows::AI::MachineLearning::LearningModelSession>
    {
        using type = Windows::AI::MachineLearning::ILearningModelSession;
    };
    template <> struct default_interface<Windows::AI::MachineLearning::LearningModelSessionOptions>
    {
        using type = Windows::AI::MachineLearning::ILearningModelSessionOptions;
    };
    template <> struct default_interface<Windows::AI::MachineLearning::MapFeatureDescriptor>
    {
        using type = Windows::AI::MachineLearning::IMapFeatureDescriptor;
    };
    template <> struct default_interface<Windows::AI::MachineLearning::SequenceFeatureDescriptor>
    {
        using type = Windows::AI::MachineLearning::ISequenceFeatureDescriptor;
    };
    template <> struct default_interface<Windows::AI::MachineLearning::TensorBoolean>
    {
        using type = Windows::AI::MachineLearning::ITensorBoolean;
    };
    template <> struct default_interface<Windows::AI::MachineLearning::TensorDouble>
    {
        using type = Windows::AI::MachineLearning::ITensorDouble;
    };
    template <> struct default_interface<Windows::AI::MachineLearning::TensorFeatureDescriptor>
    {
        using type = Windows::AI::MachineLearning::ITensorFeatureDescriptor;
    };
    template <> struct default_interface<Windows::AI::MachineLearning::TensorFloat>
    {
        using type = Windows::AI::MachineLearning::ITensorFloat;
    };
    template <> struct default_interface<Windows::AI::MachineLearning::TensorFloat16Bit>
    {
        using type = Windows::AI::MachineLearning::ITensorFloat16Bit;
    };
    template <> struct default_interface<Windows::AI::MachineLearning::TensorInt16Bit>
    {
        using type = Windows::AI::MachineLearning::ITensorInt16Bit;
    };
    template <> struct default_interface<Windows::AI::MachineLearning::TensorInt32Bit>
    {
        using type = Windows::AI::MachineLearning::ITensorInt32Bit;
    };
    template <> struct default_interface<Windows::AI::MachineLearning::TensorInt64Bit>
    {
        using type = Windows::AI::MachineLearning::ITensorInt64Bit;
    };
    template <> struct default_interface<Windows::AI::MachineLearning::TensorInt8Bit>
    {
        using type = Windows::AI::MachineLearning::ITensorInt8Bit;
    };
    template <> struct default_interface<Windows::AI::MachineLearning::TensorString>
    {
        using type = Windows::AI::MachineLearning::ITensorString;
    };
    template <> struct default_interface<Windows::AI::MachineLearning::TensorUInt16Bit>
    {
        using type = Windows::AI::MachineLearning::ITensorUInt16Bit;
    };
    template <> struct default_interface<Windows::AI::MachineLearning::TensorUInt32Bit>
    {
        using type = Windows::AI::MachineLearning::ITensorUInt32Bit;
    };
    template <> struct default_interface<Windows::AI::MachineLearning::TensorUInt64Bit>
    {
        using type = Windows::AI::MachineLearning::ITensorUInt64Bit;
    };
    template <> struct default_interface<Windows::AI::MachineLearning::TensorUInt8Bit>
    {
        using type = Windows::AI::MachineLearning::ITensorUInt8Bit;
    };
    template <> struct abi<Windows::AI::MachineLearning::IImageFeatureDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BitmapPixelFormat(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_BitmapAlphaMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Width(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Height(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::IImageFeatureValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VideoFrame(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::IImageFeatureValueStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromVideoFrame(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ILearningModel>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Author(void**) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_Domain(void**) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall get_Version(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Metadata(void**) noexcept = 0;
            virtual int32_t __stdcall get_InputFeatures(void**) noexcept = 0;
            virtual int32_t __stdcall get_OutputFeatures(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ILearningModelBinding>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Bind(void*, void*) noexcept = 0;
            virtual int32_t __stdcall BindWithProperties(void*, void*, void*) noexcept = 0;
            virtual int32_t __stdcall Clear() noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ILearningModelBindingFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromSession(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ILearningModelDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AdapterId(struct struct_Windows_Graphics_DisplayAdapterId*) noexcept = 0;
            virtual int32_t __stdcall get_Direct3D11Device(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ILearningModelDeviceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ILearningModelDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromDirect3D11Device(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ILearningModelEvaluationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CorrelationId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ErrorStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Succeeded(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Outputs(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ILearningModelFeatureDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsRequired(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ILearningModelFeatureValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ILearningModelOperatorProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ILearningModelSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Model(void**) noexcept = 0;
            virtual int32_t __stdcall get_Device(void**) noexcept = 0;
            virtual int32_t __stdcall get_EvaluationProperties(void**) noexcept = 0;
            virtual int32_t __stdcall EvaluateAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall EvaluateFeaturesAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall Evaluate(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall EvaluateFeatures(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ILearningModelSessionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromModel(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromModelOnDevice(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ILearningModelSessionFactory2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromModelOnDeviceWithSessionOptions(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ILearningModelSessionOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BatchSizeOverride(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_BatchSizeOverride(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ILearningModelSessionOptions2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CloseModelOnSessionCreation(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CloseModelOnSessionCreation(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ILearningModelStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall LoadFromStorageFileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall LoadFromStreamAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall LoadFromFilePath(void*, void**) noexcept = 0;
            virtual int32_t __stdcall LoadFromStream(void*, void**) noexcept = 0;
            virtual int32_t __stdcall LoadFromStorageFileWithOperatorProviderAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall LoadFromStreamWithOperatorProviderAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall LoadFromFilePathWithOperatorProvider(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall LoadFromStreamWithOperatorProvider(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::IMapFeatureDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeyKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ValueDescriptor(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ISequenceFeatureDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ElementDescriptor(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TensorKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Shape(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorBoolean>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsVectorView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorBooleanStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void**) noexcept = 0;
            virtual int32_t __stdcall Create2(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromArray(void*, uint32_t, bool*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIterable(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorBooleanStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t, int64_t*, uint32_t, bool*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromBuffer(uint32_t, int64_t*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorDouble>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsVectorView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorDoubleStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void**) noexcept = 0;
            virtual int32_t __stdcall Create2(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromArray(void*, uint32_t, double*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIterable(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorDoubleStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t, int64_t*, uint32_t, double*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromBuffer(uint32_t, int64_t*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorFeatureDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TensorKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Shape(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorFloat>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsVectorView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorFloat16Bit>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsVectorView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorFloat16BitStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void**) noexcept = 0;
            virtual int32_t __stdcall Create2(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromArray(void*, uint32_t, float*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIterable(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorFloat16BitStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t, int64_t*, uint32_t, float*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromBuffer(uint32_t, int64_t*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorFloatStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void**) noexcept = 0;
            virtual int32_t __stdcall Create2(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromArray(void*, uint32_t, float*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIterable(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorFloatStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t, int64_t*, uint32_t, float*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromBuffer(uint32_t, int64_t*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorInt16Bit>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsVectorView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorInt16BitStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void**) noexcept = 0;
            virtual int32_t __stdcall Create2(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromArray(void*, uint32_t, int16_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIterable(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorInt16BitStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t, int64_t*, uint32_t, int16_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromBuffer(uint32_t, int64_t*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorInt32Bit>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsVectorView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorInt32BitStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void**) noexcept = 0;
            virtual int32_t __stdcall Create2(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromArray(void*, uint32_t, int32_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIterable(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorInt32BitStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t, int64_t*, uint32_t, int32_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromBuffer(uint32_t, int64_t*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorInt64Bit>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsVectorView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorInt64BitStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void**) noexcept = 0;
            virtual int32_t __stdcall Create2(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromArray(void*, uint32_t, int64_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIterable(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorInt64BitStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t, int64_t*, uint32_t, int64_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromBuffer(uint32_t, int64_t*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorInt8Bit>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsVectorView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorInt8BitStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void**) noexcept = 0;
            virtual int32_t __stdcall Create2(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromArray(void*, uint32_t, uint8_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIterable(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorInt8BitStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t, int64_t*, uint32_t, uint8_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromBuffer(uint32_t, int64_t*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorString>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsVectorView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorStringStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void**) noexcept = 0;
            virtual int32_t __stdcall Create2(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromArray(void*, uint32_t, void**, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIterable(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorStringStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t, int64_t*, uint32_t, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorUInt16Bit>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsVectorView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorUInt16BitStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void**) noexcept = 0;
            virtual int32_t __stdcall Create2(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromArray(void*, uint32_t, uint16_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIterable(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorUInt16BitStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t, int64_t*, uint32_t, uint16_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromBuffer(uint32_t, int64_t*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorUInt32Bit>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsVectorView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorUInt32BitStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void**) noexcept = 0;
            virtual int32_t __stdcall Create2(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromArray(void*, uint32_t, uint32_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIterable(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorUInt32BitStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t, int64_t*, uint32_t, uint32_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromBuffer(uint32_t, int64_t*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorUInt64Bit>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsVectorView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorUInt64BitStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void**) noexcept = 0;
            virtual int32_t __stdcall Create2(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromArray(void*, uint32_t, uint64_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIterable(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorUInt64BitStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t, int64_t*, uint32_t, uint64_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromBuffer(uint32_t, int64_t*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorUInt8Bit>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsVectorView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorUInt8BitStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void**) noexcept = 0;
            virtual int32_t __stdcall Create2(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromArray(void*, uint32_t, uint8_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIterable(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::AI::MachineLearning::ITensorUInt8BitStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t, int64_t*, uint32_t, uint8_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromBuffer(uint32_t, int64_t*, void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_IImageFeatureDescriptor
    {
        [[nodiscard]] auto BitmapPixelFormat() const;
        [[nodiscard]] auto BitmapAlphaMode() const;
        [[nodiscard]] auto Width() const;
        [[nodiscard]] auto Height() const;
    };
    template <> struct consume<Windows::AI::MachineLearning::IImageFeatureDescriptor>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_IImageFeatureDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_IImageFeatureValue
    {
        [[nodiscard]] auto VideoFrame() const;
    };
    template <> struct consume<Windows::AI::MachineLearning::IImageFeatureValue>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_IImageFeatureValue<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_IImageFeatureValueStatics
    {
        auto CreateFromVideoFrame(Windows::Media::VideoFrame const& image) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::IImageFeatureValueStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_IImageFeatureValueStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModel
    {
        [[nodiscard]] auto Author() const;
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto Domain() const;
        [[nodiscard]] auto Description() const;
        [[nodiscard]] auto Version() const;
        [[nodiscard]] auto Metadata() const;
        [[nodiscard]] auto InputFeatures() const;
        [[nodiscard]] auto OutputFeatures() const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ILearningModel>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModel<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelBinding
    {
        auto Bind(param::hstring const& name, Windows::Foundation::IInspectable const& value) const;
        auto Bind(param::hstring const& name, Windows::Foundation::IInspectable const& value, Windows::Foundation::Collections::IPropertySet const& props) const;
        auto Clear() const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ILearningModelBinding>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelBinding<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelBindingFactory
    {
        auto CreateFromSession(Windows::AI::MachineLearning::LearningModelSession const& session) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ILearningModelBindingFactory>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelBindingFactory<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelDevice
    {
        [[nodiscard]] auto AdapterId() const;
        [[nodiscard]] auto Direct3D11Device() const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ILearningModelDevice>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelDevice<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelDeviceFactory
    {
        auto Create(Windows::AI::MachineLearning::LearningModelDeviceKind const& deviceKind) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ILearningModelDeviceFactory>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelDeviceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelDeviceStatics
    {
        auto CreateFromDirect3D11Device(Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ILearningModelDeviceStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelDeviceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelEvaluationResult
    {
        [[nodiscard]] auto CorrelationId() const;
        [[nodiscard]] auto ErrorStatus() const;
        [[nodiscard]] auto Succeeded() const;
        [[nodiscard]] auto Outputs() const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ILearningModelEvaluationResult>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelEvaluationResult<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelFeatureDescriptor
    {
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto Description() const;
        [[nodiscard]] auto Kind() const;
        [[nodiscard]] auto IsRequired() const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ILearningModelFeatureDescriptor>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelFeatureDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelFeatureValue
    {
        [[nodiscard]] auto Kind() const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ILearningModelFeatureValue>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelFeatureValue<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelOperatorProvider
    {
    };
    template <> struct consume<Windows::AI::MachineLearning::ILearningModelOperatorProvider>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelOperatorProvider<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelSession
    {
        [[nodiscard]] auto Model() const;
        [[nodiscard]] auto Device() const;
        [[nodiscard]] auto EvaluationProperties() const;
        auto EvaluateAsync(Windows::AI::MachineLearning::LearningModelBinding const& bindings, param::hstring const& correlationId) const;
        auto EvaluateFeaturesAsync(param::map<hstring, Windows::Foundation::IInspectable> const& features, param::hstring const& correlationId) const;
        auto Evaluate(Windows::AI::MachineLearning::LearningModelBinding const& bindings, param::hstring const& correlationId) const;
        auto EvaluateFeatures(param::map<hstring, Windows::Foundation::IInspectable> const& features, param::hstring const& correlationId) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ILearningModelSession>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelSession<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelSessionFactory
    {
        auto CreateFromModel(Windows::AI::MachineLearning::LearningModel const& model) const;
        auto CreateFromModelOnDevice(Windows::AI::MachineLearning::LearningModel const& model, Windows::AI::MachineLearning::LearningModelDevice const& deviceToRunOn) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ILearningModelSessionFactory>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelSessionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelSessionFactory2
    {
        auto CreateFromModelOnDeviceWithSessionOptions(Windows::AI::MachineLearning::LearningModel const& model, Windows::AI::MachineLearning::LearningModelDevice const& deviceToRunOn, Windows::AI::MachineLearning::LearningModelSessionOptions const& learningModelSessionOptions) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ILearningModelSessionFactory2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelSessionFactory2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelSessionOptions
    {
        [[nodiscard]] auto BatchSizeOverride() const;
        auto BatchSizeOverride(uint32_t value) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ILearningModelSessionOptions>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelSessionOptions<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelSessionOptions2
    {
        [[nodiscard]] auto CloseModelOnSessionCreation() const;
        auto CloseModelOnSessionCreation(bool value) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ILearningModelSessionOptions2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelSessionOptions2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelStatics
    {
        auto LoadFromStorageFileAsync(Windows::Storage::IStorageFile const& modelFile) const;
        auto LoadFromStreamAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& modelStream) const;
        auto LoadFromFilePath(param::hstring const& filePath) const;
        auto LoadFromStream(Windows::Storage::Streams::IRandomAccessStreamReference const& modelStream) const;
        auto LoadFromStorageFileAsync(Windows::Storage::IStorageFile const& modelFile, Windows::AI::MachineLearning::ILearningModelOperatorProvider const& operatorProvider) const;
        auto LoadFromStreamAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& modelStream, Windows::AI::MachineLearning::ILearningModelOperatorProvider const& operatorProvider) const;
        auto LoadFromFilePath(param::hstring const& filePath, Windows::AI::MachineLearning::ILearningModelOperatorProvider const& operatorProvider) const;
        auto LoadFromStream(Windows::Storage::Streams::IRandomAccessStreamReference const& modelStream, Windows::AI::MachineLearning::ILearningModelOperatorProvider const& operatorProvider) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ILearningModelStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_IMapFeatureDescriptor
    {
        [[nodiscard]] auto KeyKind() const;
        [[nodiscard]] auto ValueDescriptor() const;
    };
    template <> struct consume<Windows::AI::MachineLearning::IMapFeatureDescriptor>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_IMapFeatureDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ISequenceFeatureDescriptor
    {
        [[nodiscard]] auto ElementDescriptor() const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ISequenceFeatureDescriptor>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ISequenceFeatureDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensor
    {
        [[nodiscard]] auto TensorKind() const;
        [[nodiscard]] auto Shape() const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensor>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensor<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorBoolean
    {
        auto GetAsVectorView() const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorBoolean>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorBoolean<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorBooleanStatics
    {
        auto Create() const;
        auto Create(param::iterable<int64_t> const& shape) const;
        auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<bool const> data) const;
        auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<bool> const& data) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorBooleanStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorBooleanStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorBooleanStatics2
    {
        auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<bool const> data) const;
        auto CreateFromBuffer(array_view<int64_t const> shape, Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorBooleanStatics2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorBooleanStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorDouble
    {
        auto GetAsVectorView() const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorDouble>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorDouble<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorDoubleStatics
    {
        auto Create() const;
        auto Create(param::iterable<int64_t> const& shape) const;
        auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<double const> data) const;
        auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<double> const& data) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorDoubleStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorDoubleStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorDoubleStatics2
    {
        auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<double const> data) const;
        auto CreateFromBuffer(array_view<int64_t const> shape, Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorDoubleStatics2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorDoubleStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorFeatureDescriptor
    {
        [[nodiscard]] auto TensorKind() const;
        [[nodiscard]] auto Shape() const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorFeatureDescriptor>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorFeatureDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorFloat
    {
        auto GetAsVectorView() const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorFloat>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorFloat<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorFloat16Bit
    {
        auto GetAsVectorView() const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorFloat16Bit>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorFloat16Bit<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorFloat16BitStatics
    {
        auto Create() const;
        auto Create(param::iterable<int64_t> const& shape) const;
        auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<float const> data) const;
        auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<float> const& data) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorFloat16BitStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorFloat16BitStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorFloat16BitStatics2
    {
        auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<float const> data) const;
        auto CreateFromBuffer(array_view<int64_t const> shape, Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorFloat16BitStatics2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorFloat16BitStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorFloatStatics
    {
        auto Create() const;
        auto Create(param::iterable<int64_t> const& shape) const;
        auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<float const> data) const;
        auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<float> const& data) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorFloatStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorFloatStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorFloatStatics2
    {
        auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<float const> data) const;
        auto CreateFromBuffer(array_view<int64_t const> shape, Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorFloatStatics2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorFloatStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorInt16Bit
    {
        auto GetAsVectorView() const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorInt16Bit>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorInt16Bit<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorInt16BitStatics
    {
        auto Create() const;
        auto Create(param::iterable<int64_t> const& shape) const;
        auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<int16_t const> data) const;
        auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<int16_t> const& data) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorInt16BitStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorInt16BitStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorInt16BitStatics2
    {
        auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<int16_t const> data) const;
        auto CreateFromBuffer(array_view<int64_t const> shape, Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorInt16BitStatics2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorInt16BitStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorInt32Bit
    {
        auto GetAsVectorView() const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorInt32Bit>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorInt32Bit<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorInt32BitStatics
    {
        auto Create() const;
        auto Create(param::iterable<int64_t> const& shape) const;
        auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<int32_t const> data) const;
        auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<int32_t> const& data) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorInt32BitStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorInt32BitStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorInt32BitStatics2
    {
        auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<int32_t const> data) const;
        auto CreateFromBuffer(array_view<int64_t const> shape, Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorInt32BitStatics2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorInt32BitStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorInt64Bit
    {
        auto GetAsVectorView() const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorInt64Bit>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorInt64Bit<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorInt64BitStatics
    {
        auto Create() const;
        auto Create(param::iterable<int64_t> const& shape) const;
        auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<int64_t const> data) const;
        auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<int64_t> const& data) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorInt64BitStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorInt64BitStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorInt64BitStatics2
    {
        auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<int64_t const> data) const;
        auto CreateFromBuffer(array_view<int64_t const> shape, Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorInt64BitStatics2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorInt64BitStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorInt8Bit
    {
        auto GetAsVectorView() const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorInt8Bit>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorInt8Bit<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorInt8BitStatics
    {
        auto Create() const;
        auto Create(param::iterable<int64_t> const& shape) const;
        auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<uint8_t const> data) const;
        auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<uint8_t> const& data) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorInt8BitStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorInt8BitStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorInt8BitStatics2
    {
        auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<uint8_t const> data) const;
        auto CreateFromBuffer(array_view<int64_t const> shape, Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorInt8BitStatics2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorInt8BitStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorString
    {
        auto GetAsVectorView() const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorString>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorString<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorStringStatics
    {
        auto Create() const;
        auto Create(param::iterable<int64_t> const& shape) const;
        auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<hstring const> data) const;
        auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<hstring> const& data) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorStringStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorStringStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorStringStatics2
    {
        auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<hstring const> data) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorStringStatics2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorStringStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorUInt16Bit
    {
        auto GetAsVectorView() const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorUInt16Bit>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorUInt16Bit<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorUInt16BitStatics
    {
        auto Create() const;
        auto Create(param::iterable<int64_t> const& shape) const;
        auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<uint16_t const> data) const;
        auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<uint16_t> const& data) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorUInt16BitStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorUInt16BitStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorUInt16BitStatics2
    {
        auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<uint16_t const> data) const;
        auto CreateFromBuffer(array_view<int64_t const> shape, Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorUInt16BitStatics2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorUInt16BitStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorUInt32Bit
    {
        auto GetAsVectorView() const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorUInt32Bit>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorUInt32Bit<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorUInt32BitStatics
    {
        auto Create() const;
        auto Create(param::iterable<int64_t> const& shape) const;
        auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<uint32_t const> data) const;
        auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<uint32_t> const& data) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorUInt32BitStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorUInt32BitStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorUInt32BitStatics2
    {
        auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<uint32_t const> data) const;
        auto CreateFromBuffer(array_view<int64_t const> shape, Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorUInt32BitStatics2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorUInt32BitStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorUInt64Bit
    {
        auto GetAsVectorView() const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorUInt64Bit>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorUInt64Bit<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorUInt64BitStatics
    {
        auto Create() const;
        auto Create(param::iterable<int64_t> const& shape) const;
        auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<uint64_t const> data) const;
        auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<uint64_t> const& data) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorUInt64BitStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorUInt64BitStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorUInt64BitStatics2
    {
        auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<uint64_t const> data) const;
        auto CreateFromBuffer(array_view<int64_t const> shape, Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorUInt64BitStatics2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorUInt64BitStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorUInt8Bit
    {
        auto GetAsVectorView() const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorUInt8Bit>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorUInt8Bit<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorUInt8BitStatics
    {
        auto Create() const;
        auto Create(param::iterable<int64_t> const& shape) const;
        auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<uint8_t const> data) const;
        auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<uint8_t> const& data) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorUInt8BitStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorUInt8BitStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorUInt8BitStatics2
    {
        auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<uint8_t const> data) const;
        auto CreateFromBuffer(array_view<int64_t const> shape, Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<Windows::AI::MachineLearning::ITensorUInt8BitStatics2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorUInt8BitStatics2<D>;
    };
}
#endif
