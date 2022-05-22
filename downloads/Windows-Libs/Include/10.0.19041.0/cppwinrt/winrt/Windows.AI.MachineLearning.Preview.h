// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_AI_MachineLearning_Preview_H
#define WINRT_Windows_AI_MachineLearning_Preview_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.AI.MachineLearning.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.AI.MachineLearning.Preview.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_IImageVariableDescriptorPreview<D>::BitmapPixelFormat() const
    {
        Windows::Graphics::Imaging::BitmapPixelFormat value;
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::IImageVariableDescriptorPreview)->get_BitmapPixelFormat(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_IImageVariableDescriptorPreview<D>::Width() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::IImageVariableDescriptorPreview)->get_Width(&value));
        return value;
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_IImageVariableDescriptorPreview<D>::Height() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::IImageVariableDescriptorPreview)->get_Height(&value));
        return value;
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_IInferencingOptionsPreview<D>::PreferredDeviceKind() const
    {
        Windows::AI::MachineLearning::Preview::LearningModelDeviceKindPreview value;
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview)->get_PreferredDeviceKind(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_IInferencingOptionsPreview<D>::PreferredDeviceKind(Windows::AI::MachineLearning::Preview::LearningModelDeviceKindPreview const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview)->put_PreferredDeviceKind(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_IInferencingOptionsPreview<D>::IsTracingEnabled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview)->get_IsTracingEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_IInferencingOptionsPreview<D>::IsTracingEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview)->put_IsTracingEnabled(value));
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_IInferencingOptionsPreview<D>::MaxBatchSize() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview)->get_MaxBatchSize(&value));
        return value;
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_IInferencingOptionsPreview<D>::MaxBatchSize(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview)->put_MaxBatchSize(value));
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_IInferencingOptionsPreview<D>::MinimizeMemoryAllocation() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview)->get_MinimizeMemoryAllocation(&value));
        return value;
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_IInferencingOptionsPreview<D>::MinimizeMemoryAllocation(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview)->put_MinimizeMemoryAllocation(value));
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_IInferencingOptionsPreview<D>::ReclaimMemoryAfterEvaluation() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview)->get_ReclaimMemoryAfterEvaluation(&value));
        return value;
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_IInferencingOptionsPreview<D>::ReclaimMemoryAfterEvaluation(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview)->put_ReclaimMemoryAfterEvaluation(value));
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ILearningModelBindingPreview<D>::Bind(param::hstring const& name, Windows::Foundation::IInspectable const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelBindingPreview)->Bind(*(void**)(&name), *(void**)(&value)));
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ILearningModelBindingPreview<D>::Bind(param::hstring const& name, Windows::Foundation::IInspectable const& value, Windows::Foundation::Collections::IPropertySet const& metadata) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelBindingPreview)->BindWithProperties(*(void**)(&name), *(void**)(&value), *(void**)(&metadata)));
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ILearningModelBindingPreview<D>::Clear() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelBindingPreview)->Clear());
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ILearningModelBindingPreviewFactory<D>::CreateFromModel(Windows::AI::MachineLearning::Preview::LearningModelPreview const& model) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelBindingPreviewFactory)->CreateFromModel(*(void**)(&model), &value));
        return Windows::AI::MachineLearning::Preview::LearningModelBindingPreview{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ILearningModelDescriptionPreview<D>::Author() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelDescriptionPreview)->get_Author(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ILearningModelDescriptionPreview<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelDescriptionPreview)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ILearningModelDescriptionPreview<D>::Domain() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelDescriptionPreview)->get_Domain(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ILearningModelDescriptionPreview<D>::Description() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelDescriptionPreview)->get_Description(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ILearningModelDescriptionPreview<D>::Version() const
    {
        int64_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelDescriptionPreview)->get_Version(&value));
        return value;
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ILearningModelDescriptionPreview<D>::Metadata() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelDescriptionPreview)->get_Metadata(&value));
        return Windows::Foundation::Collections::IMapView<hstring, hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ILearningModelDescriptionPreview<D>::InputFeatures() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelDescriptionPreview)->get_InputFeatures(&value));
        return Windows::Foundation::Collections::IIterable<Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ILearningModelDescriptionPreview<D>::OutputFeatures() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelDescriptionPreview)->get_OutputFeatures(&value));
        return Windows::Foundation::Collections::IIterable<Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ILearningModelEvaluationResultPreview<D>::CorrelationId() const
    {
        void* correlationId{};
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelEvaluationResultPreview)->get_CorrelationId(&correlationId));
        return hstring{ correlationId, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ILearningModelEvaluationResultPreview<D>::Outputs() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelEvaluationResultPreview)->get_Outputs(&value));
        return Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ILearningModelPreview<D>::EvaluateAsync(Windows::AI::MachineLearning::Preview::LearningModelBindingPreview const& binding, param::hstring const& correlationId) const
    {
        void* evalOperation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelPreview)->EvaluateAsync(*(void**)(&binding), *(void**)(&correlationId), &evalOperation));
        return Windows::Foundation::IAsyncOperation<Windows::AI::MachineLearning::Preview::LearningModelEvaluationResultPreview>{ evalOperation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ILearningModelPreview<D>::EvaluateFeaturesAsync(param::map<hstring, Windows::Foundation::IInspectable> const& features, param::hstring const& correlationId) const
    {
        void* evalOperation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelPreview)->EvaluateFeaturesAsync(*(void**)(&features), *(void**)(&correlationId), &evalOperation));
        return Windows::Foundation::IAsyncOperation<Windows::AI::MachineLearning::Preview::LearningModelEvaluationResultPreview>{ evalOperation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ILearningModelPreview<D>::Description() const
    {
        void* returnValue{};
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelPreview)->get_Description(&returnValue));
        return Windows::AI::MachineLearning::Preview::LearningModelDescriptionPreview{ returnValue, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ILearningModelPreview<D>::InferencingOptions() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelPreview)->get_InferencingOptions(&value));
        return Windows::AI::MachineLearning::Preview::InferencingOptionsPreview{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ILearningModelPreview<D>::InferencingOptions(Windows::AI::MachineLearning::Preview::InferencingOptionsPreview const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelPreview)->put_InferencingOptions(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ILearningModelPreviewStatics<D>::LoadModelFromStorageFileAsync(Windows::Storage::IStorageFile const& modelFile) const
    {
        void* modelCreationOperation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelPreviewStatics)->LoadModelFromStorageFileAsync(*(void**)(&modelFile), &modelCreationOperation));
        return Windows::Foundation::IAsyncOperation<Windows::AI::MachineLearning::Preview::LearningModelPreview>{ modelCreationOperation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ILearningModelPreviewStatics<D>::LoadModelFromStreamAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& modelStream) const
    {
        void* modelCreationOperation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelPreviewStatics)->LoadModelFromStreamAsync(*(void**)(&modelStream), &modelCreationOperation));
        return Windows::Foundation::IAsyncOperation<Windows::AI::MachineLearning::Preview::LearningModelPreview>{ modelCreationOperation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ILearningModelVariableDescriptorPreview<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ILearningModelVariableDescriptorPreview<D>::Description() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview)->get_Description(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ILearningModelVariableDescriptorPreview<D>::ModelFeatureKind() const
    {
        Windows::AI::MachineLearning::Preview::LearningModelFeatureKindPreview value;
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview)->get_ModelFeatureKind(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ILearningModelVariableDescriptorPreview<D>::IsRequired() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview)->get_IsRequired(&value));
        return value;
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_IMapVariableDescriptorPreview<D>::KeyKind() const
    {
        Windows::AI::MachineLearning::Preview::FeatureElementKindPreview value;
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::IMapVariableDescriptorPreview)->get_KeyKind(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_IMapVariableDescriptorPreview<D>::ValidStringKeys() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::IMapVariableDescriptorPreview)->get_ValidStringKeys(&value));
        return Windows::Foundation::Collections::IIterable<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_IMapVariableDescriptorPreview<D>::ValidIntegerKeys() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::IMapVariableDescriptorPreview)->get_ValidIntegerKeys(&value));
        return Windows::Foundation::Collections::IIterable<int64_t>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_IMapVariableDescriptorPreview<D>::Fields() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::IMapVariableDescriptorPreview)->get_Fields(&value));
        return Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ISequenceVariableDescriptorPreview<D>::ElementType() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ISequenceVariableDescriptorPreview)->get_ElementType(&value));
        return Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ITensorVariableDescriptorPreview<D>::DataType() const
    {
        Windows::AI::MachineLearning::Preview::FeatureElementKindPreview value;
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ITensorVariableDescriptorPreview)->get_DataType(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_AI_MachineLearning_Preview_ITensorVariableDescriptorPreview<D>::Shape() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::AI::MachineLearning::Preview::ITensorVariableDescriptorPreview)->get_Shape(&value));
        return Windows::Foundation::Collections::IIterable<int64_t>{ value, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::AI::MachineLearning::Preview::IImageVariableDescriptorPreview> : produce_base<D, Windows::AI::MachineLearning::Preview::IImageVariableDescriptorPreview>
    {
        int32_t __stdcall get_BitmapPixelFormat(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapPixelFormat>(this->shim().BitmapPixelFormat());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Width(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Width());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Height(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Height());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview> : produce_base<D, Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview>
    {
        int32_t __stdcall get_PreferredDeviceKind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::AI::MachineLearning::Preview::LearningModelDeviceKindPreview>(this->shim().PreferredDeviceKind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PreferredDeviceKind(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PreferredDeviceKind(*reinterpret_cast<Windows::AI::MachineLearning::Preview::LearningModelDeviceKindPreview const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsTracingEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsTracingEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsTracingEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsTracingEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxBatchSize(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().MaxBatchSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MaxBatchSize(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxBatchSize(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MinimizeMemoryAllocation(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().MinimizeMemoryAllocation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MinimizeMemoryAllocation(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MinimizeMemoryAllocation(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ReclaimMemoryAfterEvaluation(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ReclaimMemoryAfterEvaluation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ReclaimMemoryAfterEvaluation(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReclaimMemoryAfterEvaluation(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::AI::MachineLearning::Preview::ILearningModelBindingPreview> : produce_base<D, Windows::AI::MachineLearning::Preview::ILearningModelBindingPreview>
    {
        int32_t __stdcall Bind(void* name, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Bind(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall BindWithProperties(void* name, void* value, void* metadata) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Bind(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&value), *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&metadata));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Clear() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clear();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::AI::MachineLearning::Preview::ILearningModelBindingPreviewFactory> : produce_base<D, Windows::AI::MachineLearning::Preview::ILearningModelBindingPreviewFactory>
    {
        int32_t __stdcall CreateFromModel(void* model, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::AI::MachineLearning::Preview::LearningModelBindingPreview>(this->shim().CreateFromModel(*reinterpret_cast<Windows::AI::MachineLearning::Preview::LearningModelPreview const*>(&model)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::AI::MachineLearning::Preview::ILearningModelDescriptionPreview> : produce_base<D, Windows::AI::MachineLearning::Preview::ILearningModelDescriptionPreview>
    {
        int32_t __stdcall get_Author(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Author());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Domain(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Domain());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Description(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Version(int64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int64_t>(this->shim().Version());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Metadata(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, hstring>>(this->shim().Metadata());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InputFeatures(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IIterable<Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview>>(this->shim().InputFeatures());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OutputFeatures(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IIterable<Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview>>(this->shim().OutputFeatures());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::AI::MachineLearning::Preview::ILearningModelEvaluationResultPreview> : produce_base<D, Windows::AI::MachineLearning::Preview::ILearningModelEvaluationResultPreview>
    {
        int32_t __stdcall get_CorrelationId(void** correlationId) noexcept final try
        {
            clear_abi(correlationId);
            typename D::abi_guard guard(this->shim());
            *correlationId = detach_from<hstring>(this->shim().CorrelationId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Outputs(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>(this->shim().Outputs());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::AI::MachineLearning::Preview::ILearningModelPreview> : produce_base<D, Windows::AI::MachineLearning::Preview::ILearningModelPreview>
    {
        int32_t __stdcall EvaluateAsync(void* binding, void* correlationId, void** evalOperation) noexcept final try
        {
            clear_abi(evalOperation);
            typename D::abi_guard guard(this->shim());
            *evalOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::AI::MachineLearning::Preview::LearningModelEvaluationResultPreview>>(this->shim().EvaluateAsync(*reinterpret_cast<Windows::AI::MachineLearning::Preview::LearningModelBindingPreview const*>(&binding), *reinterpret_cast<hstring const*>(&correlationId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall EvaluateFeaturesAsync(void* features, void* correlationId, void** evalOperation) noexcept final try
        {
            clear_abi(evalOperation);
            typename D::abi_guard guard(this->shim());
            *evalOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::AI::MachineLearning::Preview::LearningModelEvaluationResultPreview>>(this->shim().EvaluateFeaturesAsync(*reinterpret_cast<Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable> const*>(&features), *reinterpret_cast<hstring const*>(&correlationId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Description(void** returnValue) noexcept final try
        {
            clear_abi(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::AI::MachineLearning::Preview::LearningModelDescriptionPreview>(this->shim().Description());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InferencingOptions(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::AI::MachineLearning::Preview::InferencingOptionsPreview>(this->shim().InferencingOptions());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_InferencingOptions(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InferencingOptions(*reinterpret_cast<Windows::AI::MachineLearning::Preview::InferencingOptionsPreview const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::AI::MachineLearning::Preview::ILearningModelPreviewStatics> : produce_base<D, Windows::AI::MachineLearning::Preview::ILearningModelPreviewStatics>
    {
        int32_t __stdcall LoadModelFromStorageFileAsync(void* modelFile, void** modelCreationOperation) noexcept final try
        {
            clear_abi(modelCreationOperation);
            typename D::abi_guard guard(this->shim());
            *modelCreationOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::AI::MachineLearning::Preview::LearningModelPreview>>(this->shim().LoadModelFromStorageFileAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&modelFile)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LoadModelFromStreamAsync(void* modelStream, void** modelCreationOperation) noexcept final try
        {
            clear_abi(modelCreationOperation);
            typename D::abi_guard guard(this->shim());
            *modelCreationOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::AI::MachineLearning::Preview::LearningModelPreview>>(this->shim().LoadModelFromStreamAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&modelStream)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview> : produce_base<D, Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview>
    {
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Description(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ModelFeatureKind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::AI::MachineLearning::Preview::LearningModelFeatureKindPreview>(this->shim().ModelFeatureKind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsRequired(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsRequired());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::AI::MachineLearning::Preview::IMapVariableDescriptorPreview> : produce_base<D, Windows::AI::MachineLearning::Preview::IMapVariableDescriptorPreview>
    {
        int32_t __stdcall get_KeyKind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::AI::MachineLearning::Preview::FeatureElementKindPreview>(this->shim().KeyKind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ValidStringKeys(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IIterable<hstring>>(this->shim().ValidStringKeys());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ValidIntegerKeys(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IIterable<int64_t>>(this->shim().ValidIntegerKeys());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Fields(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview>(this->shim().Fields());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::AI::MachineLearning::Preview::ISequenceVariableDescriptorPreview> : produce_base<D, Windows::AI::MachineLearning::Preview::ISequenceVariableDescriptorPreview>
    {
        int32_t __stdcall get_ElementType(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview>(this->shim().ElementType());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::AI::MachineLearning::Preview::ITensorVariableDescriptorPreview> : produce_base<D, Windows::AI::MachineLearning::Preview::ITensorVariableDescriptorPreview>
    {
        int32_t __stdcall get_DataType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::AI::MachineLearning::Preview::FeatureElementKindPreview>(this->shim().DataType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Shape(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IIterable<int64_t>>(this->shim().Shape());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::AI::MachineLearning::Preview
{
    inline LearningModelBindingPreview::LearningModelBindingPreview(Windows::AI::MachineLearning::Preview::LearningModelPreview const& model) :
        LearningModelBindingPreview(impl::call_factory<LearningModelBindingPreview, Windows::AI::MachineLearning::Preview::ILearningModelBindingPreviewFactory>([&](auto&& f) { return f.CreateFromModel(model); }))
    {
    }
    inline auto LearningModelPreview::LoadModelFromStorageFileAsync(Windows::Storage::IStorageFile const& modelFile)
    {
        return impl::call_factory<LearningModelPreview, Windows::AI::MachineLearning::Preview::ILearningModelPreviewStatics>([&](auto&& f) { return f.LoadModelFromStorageFileAsync(modelFile); });
    }
    inline auto LearningModelPreview::LoadModelFromStreamAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& modelStream)
    {
        return impl::call_factory<LearningModelPreview, Windows::AI::MachineLearning::Preview::ILearningModelPreviewStatics>([&](auto&& f) { return f.LoadModelFromStreamAsync(modelStream); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::IImageVariableDescriptorPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::IImageVariableDescriptorPreview> {};
    template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview> {};
    template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::ILearningModelBindingPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::ILearningModelBindingPreview> {};
    template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::ILearningModelBindingPreviewFactory> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::ILearningModelBindingPreviewFactory> {};
    template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::ILearningModelDescriptionPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::ILearningModelDescriptionPreview> {};
    template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::ILearningModelEvaluationResultPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::ILearningModelEvaluationResultPreview> {};
    template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::ILearningModelPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::ILearningModelPreview> {};
    template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::ILearningModelPreviewStatics> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::ILearningModelPreviewStatics> {};
    template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview> {};
    template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::IMapVariableDescriptorPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::IMapVariableDescriptorPreview> {};
    template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::ISequenceVariableDescriptorPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::ISequenceVariableDescriptorPreview> {};
    template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::ITensorVariableDescriptorPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::ITensorVariableDescriptorPreview> {};
    template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::ImageVariableDescriptorPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::ImageVariableDescriptorPreview> {};
    template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::InferencingOptionsPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::InferencingOptionsPreview> {};
    template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::LearningModelBindingPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::LearningModelBindingPreview> {};
    template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::LearningModelDescriptionPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::LearningModelDescriptionPreview> {};
    template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::LearningModelEvaluationResultPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::LearningModelEvaluationResultPreview> {};
    template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::LearningModelPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::LearningModelPreview> {};
    template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::LearningModelVariableDescriptorPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::LearningModelVariableDescriptorPreview> {};
    template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::MapVariableDescriptorPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::MapVariableDescriptorPreview> {};
    template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::SequenceVariableDescriptorPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::SequenceVariableDescriptorPreview> {};
    template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::TensorVariableDescriptorPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::TensorVariableDescriptorPreview> {};
}
#endif
