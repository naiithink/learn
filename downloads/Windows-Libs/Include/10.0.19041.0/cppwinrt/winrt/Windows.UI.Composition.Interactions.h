// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Composition_Interactions_H
#define WINRT_Windows_UI_Composition_Interactions_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.UI.Composition.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Foundation.Numerics.2.h"
#include "winrt/impl/Windows.UI.Composition.2.h"
#include "winrt/impl/Windows.UI.Input.2.h"
#include "winrt/impl/Windows.UI.Composition.Interactions.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_UI_Composition_Interactions_ICompositionConditionalValue<D>::Condition() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::ICompositionConditionalValue)->get_Condition(&value));
        return Windows::UI::Composition::ExpressionAnimation{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_ICompositionConditionalValue<D>::Condition(Windows::UI::Composition::ExpressionAnimation const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::ICompositionConditionalValue)->put_Condition(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_ICompositionConditionalValue<D>::Value() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::ICompositionConditionalValue)->get_Value(&value));
        return Windows::UI::Composition::ExpressionAnimation{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_ICompositionConditionalValue<D>::Value(Windows::UI::Composition::ExpressionAnimation const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::ICompositionConditionalValue)->put_Value(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_ICompositionConditionalValueStatics<D>::Create(Windows::UI::Composition::Compositor const& compositor) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::ICompositionConditionalValueStatics)->Create(*(void**)(&compositor), &result));
        return Windows::UI::Composition::Interactions::CompositionConditionalValue{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_ICompositionInteractionSourceCollection<D>::Count() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection)->get_Count(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_ICompositionInteractionSourceCollection<D>::Add(Windows::UI::Composition::Interactions::ICompositionInteractionSource const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection)->Add(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_ICompositionInteractionSourceCollection<D>::Remove(Windows::UI::Composition::Interactions::ICompositionInteractionSource const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection)->Remove(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_ICompositionInteractionSourceCollection<D>::RemoveAll() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection)->RemoveAll());
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionSourceConfiguration<D>::PositionXSourceMode() const
    {
        Windows::UI::Composition::Interactions::InteractionSourceRedirectionMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionSourceConfiguration)->get_PositionXSourceMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionSourceConfiguration<D>::PositionXSourceMode(Windows::UI::Composition::Interactions::InteractionSourceRedirectionMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionSourceConfiguration)->put_PositionXSourceMode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionSourceConfiguration<D>::PositionYSourceMode() const
    {
        Windows::UI::Composition::Interactions::InteractionSourceRedirectionMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionSourceConfiguration)->get_PositionYSourceMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionSourceConfiguration<D>::PositionYSourceMode(Windows::UI::Composition::Interactions::InteractionSourceRedirectionMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionSourceConfiguration)->put_PositionYSourceMode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionSourceConfiguration<D>::ScaleSourceMode() const
    {
        Windows::UI::Composition::Interactions::InteractionSourceRedirectionMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionSourceConfiguration)->get_ScaleSourceMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionSourceConfiguration<D>::ScaleSourceMode(Windows::UI::Composition::Interactions::InteractionSourceRedirectionMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionSourceConfiguration)->put_ScaleSourceMode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::InteractionSources() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_InteractionSources(&value));
        return Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::IsPositionRoundingSuggested() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_IsPositionRoundingSuggested(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::MaxPosition() const
    {
        Windows::Foundation::Numerics::float3 value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_MaxPosition(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::MaxPosition(Windows::Foundation::Numerics::float3 const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->put_MaxPosition(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::MaxScale() const
    {
        float value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_MaxScale(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::MaxScale(float value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->put_MaxScale(value));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::MinPosition() const
    {
        Windows::Foundation::Numerics::float3 value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_MinPosition(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::MinPosition(Windows::Foundation::Numerics::float3 const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->put_MinPosition(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::MinScale() const
    {
        float value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_MinScale(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::MinScale(float value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->put_MinScale(value));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::NaturalRestingPosition() const
    {
        Windows::Foundation::Numerics::float3 value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_NaturalRestingPosition(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::NaturalRestingScale() const
    {
        float value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_NaturalRestingScale(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::Owner() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_Owner(&value));
        return Windows::UI::Composition::Interactions::IInteractionTrackerOwner{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::Position() const
    {
        Windows::Foundation::Numerics::float3 value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_Position(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::PositionInertiaDecayRate() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_PositionInertiaDecayRate(&value));
        return Windows::Foundation::IReference<Windows::Foundation::Numerics::float3>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::PositionInertiaDecayRate(Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->put_PositionInertiaDecayRate(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::PositionVelocityInPixelsPerSecond() const
    {
        Windows::Foundation::Numerics::float3 value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_PositionVelocityInPixelsPerSecond(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::Scale() const
    {
        float value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_Scale(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::ScaleInertiaDecayRate() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_ScaleInertiaDecayRate(&value));
        return Windows::Foundation::IReference<float>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::ScaleInertiaDecayRate(Windows::Foundation::IReference<float> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->put_ScaleInertiaDecayRate(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::ScaleVelocityInPercentPerSecond() const
    {
        float value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_ScaleVelocityInPercentPerSecond(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::AdjustPositionXIfGreaterThanThreshold(float adjustment, float positionThreshold) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->AdjustPositionXIfGreaterThanThreshold(adjustment, positionThreshold));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::AdjustPositionYIfGreaterThanThreshold(float adjustment, float positionThreshold) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->AdjustPositionYIfGreaterThanThreshold(adjustment, positionThreshold));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::ConfigurePositionXInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> const& modifiers) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->ConfigurePositionXInertiaModifiers(*(void**)(&modifiers)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::ConfigurePositionYInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> const& modifiers) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->ConfigurePositionYInertiaModifiers(*(void**)(&modifiers)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::ConfigureScaleInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> const& modifiers) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->ConfigureScaleInertiaModifiers(*(void**)(&modifiers)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::TryUpdatePosition(Windows::Foundation::Numerics::float3 const& value) const
    {
        int32_t result;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->TryUpdatePosition(impl::bind_in(value), &result));
        return result;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::TryUpdatePositionBy(Windows::Foundation::Numerics::float3 const& amount) const
    {
        int32_t result;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->TryUpdatePositionBy(impl::bind_in(amount), &result));
        return result;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::TryUpdatePositionWithAnimation(Windows::UI::Composition::CompositionAnimation const& animation) const
    {
        int32_t result;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->TryUpdatePositionWithAnimation(*(void**)(&animation), &result));
        return result;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::TryUpdatePositionWithAdditionalVelocity(Windows::Foundation::Numerics::float3 const& velocityInPixelsPerSecond) const
    {
        int32_t result;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->TryUpdatePositionWithAdditionalVelocity(impl::bind_in(velocityInPixelsPerSecond), &result));
        return result;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::TryUpdateScale(float value, Windows::Foundation::Numerics::float3 const& centerPoint) const
    {
        int32_t result;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->TryUpdateScale(value, impl::bind_in(centerPoint), &result));
        return result;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::TryUpdateScaleWithAnimation(Windows::UI::Composition::CompositionAnimation const& animation, Windows::Foundation::Numerics::float3 const& centerPoint) const
    {
        int32_t result;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->TryUpdateScaleWithAnimation(*(void**)(&animation), impl::bind_in(centerPoint), &result));
        return result;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::TryUpdateScaleWithAdditionalVelocity(float velocityInPercentPerSecond, Windows::Foundation::Numerics::float3 const& centerPoint) const
    {
        int32_t result;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->TryUpdateScaleWithAdditionalVelocity(velocityInPercentPerSecond, impl::bind_in(centerPoint), &result));
        return result;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker2<D>::ConfigureCenterPointXInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker2)->ConfigureCenterPointXInertiaModifiers(*(void**)(&conditionalValues)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker2<D>::ConfigureCenterPointYInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker2)->ConfigureCenterPointYInertiaModifiers(*(void**)(&conditionalValues)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker3<D>::ConfigureVector2PositionInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier> const& modifiers) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker3)->ConfigureVector2PositionInertiaModifiers(*(void**)(&modifiers)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker4<D>::TryUpdatePosition(Windows::Foundation::Numerics::float3 const& value, Windows::UI::Composition::Interactions::InteractionTrackerClampingOption const& option) const
    {
        int32_t result;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker4)->TryUpdatePositionWithOption(impl::bind_in(value), static_cast<int32_t>(option), &result));
        return result;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker4<D>::TryUpdatePositionBy(Windows::Foundation::Numerics::float3 const& amount, Windows::UI::Composition::Interactions::InteractionTrackerClampingOption const& option) const
    {
        int32_t result;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker4)->TryUpdatePositionByWithOption(impl::bind_in(amount), static_cast<int32_t>(option), &result));
        return result;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker4<D>::IsInertiaFromImpulse() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker4)->get_IsInertiaFromImpulse(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTracker5<D>::TryUpdatePosition(Windows::Foundation::Numerics::float3 const& value, Windows::UI::Composition::Interactions::InteractionTrackerClampingOption const& option, Windows::UI::Composition::Interactions::InteractionTrackerPositionUpdateOption const& posUpdateOption) const
    {
        int32_t result;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker5)->TryUpdatePositionWithOption(impl::bind_in(value), static_cast<int32_t>(option), static_cast<int32_t>(posUpdateOption), &result));
        return result;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerCustomAnimationStateEnteredArgs<D>::RequestId() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs)->get_RequestId(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerCustomAnimationStateEnteredArgs2<D>::IsFromBinding() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2)->get_IsFromBinding(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerIdleStateEnteredArgs<D>::RequestId() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs)->get_RequestId(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerIdleStateEnteredArgs2<D>::IsFromBinding() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs2)->get_IsFromBinding(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaMotion<D>::Condition() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion)->get_Condition(&value));
        return Windows::UI::Composition::ExpressionAnimation{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaMotion<D>::Condition(Windows::UI::Composition::ExpressionAnimation const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion)->put_Condition(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaMotion<D>::Motion() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion)->get_Motion(&value));
        return Windows::UI::Composition::ExpressionAnimation{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaMotion<D>::Motion(Windows::UI::Composition::ExpressionAnimation const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion)->put_Motion(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaMotionStatics<D>::Create(Windows::UI::Composition::Compositor const& compositor) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics)->Create(*(void**)(&compositor), &result));
        return Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaNaturalMotion<D>::Condition() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion)->get_Condition(&value));
        return Windows::UI::Composition::ExpressionAnimation{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaNaturalMotion<D>::Condition(Windows::UI::Composition::ExpressionAnimation const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion)->put_Condition(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaNaturalMotion<D>::NaturalMotion() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion)->get_NaturalMotion(&value));
        return Windows::UI::Composition::ScalarNaturalMotionAnimation{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaNaturalMotion<D>::NaturalMotion(Windows::UI::Composition::ScalarNaturalMotionAnimation const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion)->put_NaturalMotion(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaNaturalMotionStatics<D>::Create(Windows::UI::Composition::Compositor const& compositor) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotionStatics)->Create(*(void**)(&compositor), &result));
        return Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaRestingValue<D>::Condition() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue)->get_Condition(&value));
        return Windows::UI::Composition::ExpressionAnimation{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaRestingValue<D>::Condition(Windows::UI::Composition::ExpressionAnimation const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue)->put_Condition(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaRestingValue<D>::RestingValue() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue)->get_RestingValue(&value));
        return Windows::UI::Composition::ExpressionAnimation{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaRestingValue<D>::RestingValue(Windows::UI::Composition::ExpressionAnimation const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue)->put_RestingValue(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaRestingValueStatics<D>::Create(Windows::UI::Composition::Compositor const& compositor) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics)->Create(*(void**)(&compositor), &result));
        return Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs<D>::ModifiedRestingPosition() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs)->get_ModifiedRestingPosition(&value));
        return Windows::Foundation::IReference<Windows::Foundation::Numerics::float3>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs<D>::ModifiedRestingScale() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs)->get_ModifiedRestingScale(&value));
        return Windows::Foundation::IReference<float>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs<D>::NaturalRestingPosition() const
    {
        Windows::Foundation::Numerics::float3 value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs)->get_NaturalRestingPosition(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs<D>::NaturalRestingScale() const
    {
        float value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs)->get_NaturalRestingScale(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs<D>::PositionVelocityInPixelsPerSecond() const
    {
        Windows::Foundation::Numerics::float3 value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs)->get_PositionVelocityInPixelsPerSecond(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs<D>::RequestId() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs)->get_RequestId(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs<D>::ScaleVelocityInPercentPerSecond() const
    {
        float value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs)->get_ScaleVelocityInPercentPerSecond(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs2<D>::IsInertiaFromImpulse() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs2)->get_IsInertiaFromImpulse(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs3<D>::IsFromBinding() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs3)->get_IsFromBinding(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerInteractingStateEnteredArgs<D>::RequestId() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs)->get_RequestId(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerInteractingStateEnteredArgs2<D>::IsFromBinding() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs2)->get_IsFromBinding(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerOwner<D>::CustomAnimationStateEntered(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs const& args) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerOwner)->CustomAnimationStateEntered(*(void**)(&sender), *(void**)(&args)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerOwner<D>::IdleStateEntered(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs const& args) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerOwner)->IdleStateEntered(*(void**)(&sender), *(void**)(&args)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerOwner<D>::InertiaStateEntered(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs const& args) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerOwner)->InertiaStateEntered(*(void**)(&sender), *(void**)(&args)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerOwner<D>::InteractingStateEntered(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs const& args) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerOwner)->InteractingStateEntered(*(void**)(&sender), *(void**)(&args)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerOwner<D>::RequestIgnored(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs const& args) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerOwner)->RequestIgnored(*(void**)(&sender), *(void**)(&args)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerOwner<D>::ValuesChanged(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs const& args) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerOwner)->ValuesChanged(*(void**)(&sender), *(void**)(&args)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerRequestIgnoredArgs<D>::RequestId() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs)->get_RequestId(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerStatics<D>::Create(Windows::UI::Composition::Compositor const& compositor) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerStatics)->Create(*(void**)(&compositor), &result));
        return Windows::UI::Composition::Interactions::InteractionTracker{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerStatics<D>::CreateWithOwner(Windows::UI::Composition::Compositor const& compositor, Windows::UI::Composition::Interactions::IInteractionTrackerOwner const& owner) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerStatics)->CreateWithOwner(*(void**)(&compositor), *(void**)(&owner), &result));
        return Windows::UI::Composition::Interactions::InteractionTracker{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerStatics2<D>::SetBindingMode(Windows::UI::Composition::Interactions::InteractionTracker const& boundTracker1, Windows::UI::Composition::Interactions::InteractionTracker const& boundTracker2, Windows::UI::Composition::Interactions::InteractionBindingAxisModes const& axisMode) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerStatics2)->SetBindingMode(*(void**)(&boundTracker1), *(void**)(&boundTracker2), static_cast<uint32_t>(axisMode)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerStatics2<D>::GetBindingMode(Windows::UI::Composition::Interactions::InteractionTracker const& boundTracker1, Windows::UI::Composition::Interactions::InteractionTracker const& boundTracker2) const
    {
        Windows::UI::Composition::Interactions::InteractionBindingAxisModes result;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerStatics2)->GetBindingMode(*(void**)(&boundTracker1), *(void**)(&boundTracker2), put_abi(result)));
        return result;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerValuesChangedArgs<D>::Position() const
    {
        Windows::Foundation::Numerics::float3 value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs)->get_Position(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerValuesChangedArgs<D>::RequestId() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs)->get_RequestId(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerValuesChangedArgs<D>::Scale() const
    {
        float value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs)->get_Scale(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaNaturalMotion<D>::Condition() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion)->get_Condition(&value));
        return Windows::UI::Composition::ExpressionAnimation{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaNaturalMotion<D>::Condition(Windows::UI::Composition::ExpressionAnimation const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion)->put_Condition(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaNaturalMotion<D>::NaturalMotion() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion)->get_NaturalMotion(&value));
        return Windows::UI::Composition::Vector2NaturalMotionAnimation{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaNaturalMotion<D>::NaturalMotion(Windows::UI::Composition::Vector2NaturalMotionAnimation const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion)->put_NaturalMotion(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaNaturalMotionStatics<D>::Create(Windows::UI::Composition::Compositor const& compositor) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotionStatics)->Create(*(void**)(&compositor), &result));
        return Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaNaturalMotion{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::IsPositionXRailsEnabled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->get_IsPositionXRailsEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::IsPositionXRailsEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->put_IsPositionXRailsEnabled(value));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::IsPositionYRailsEnabled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->get_IsPositionYRailsEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::IsPositionYRailsEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->put_IsPositionYRailsEnabled(value));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::ManipulationRedirectionMode() const
    {
        Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->get_ManipulationRedirectionMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::ManipulationRedirectionMode(Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->put_ManipulationRedirectionMode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::PositionXChainingMode() const
    {
        Windows::UI::Composition::Interactions::InteractionChainingMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->get_PositionXChainingMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::PositionXChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->put_PositionXChainingMode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::PositionXSourceMode() const
    {
        Windows::UI::Composition::Interactions::InteractionSourceMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->get_PositionXSourceMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::PositionXSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->put_PositionXSourceMode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::PositionYChainingMode() const
    {
        Windows::UI::Composition::Interactions::InteractionChainingMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->get_PositionYChainingMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::PositionYChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->put_PositionYChainingMode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::PositionYSourceMode() const
    {
        Windows::UI::Composition::Interactions::InteractionSourceMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->get_PositionYSourceMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::PositionYSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->put_PositionYSourceMode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::ScaleChainingMode() const
    {
        Windows::UI::Composition::Interactions::InteractionChainingMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->get_ScaleChainingMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::ScaleChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->put_ScaleChainingMode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::ScaleSourceMode() const
    {
        Windows::UI::Composition::Interactions::InteractionSourceMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->get_ScaleSourceMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::ScaleSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->put_ScaleSourceMode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::Source() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->get_Source(&value));
        return Windows::UI::Composition::Visual{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::TryRedirectForManipulation(Windows::UI::Input::PointerPoint const& pointerPoint) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->TryRedirectForManipulation(*(void**)(&pointerPoint)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2<D>::DeltaPosition() const
    {
        Windows::Foundation::Numerics::float3 value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource2)->get_DeltaPosition(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2<D>::DeltaScale() const
    {
        float value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource2)->get_DeltaScale(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2<D>::Position() const
    {
        Windows::Foundation::Numerics::float3 value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource2)->get_Position(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2<D>::PositionVelocity() const
    {
        Windows::Foundation::Numerics::float3 value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource2)->get_PositionVelocity(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2<D>::Scale() const
    {
        float value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource2)->get_Scale(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2<D>::ScaleVelocity() const
    {
        float value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource2)->get_ScaleVelocity(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2<D>::ConfigureCenterPointXModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource2)->ConfigureCenterPointXModifiers(*(void**)(&conditionalValues)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2<D>::ConfigureCenterPointYModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource2)->ConfigureCenterPointYModifiers(*(void**)(&conditionalValues)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2<D>::ConfigureDeltaPositionXModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource2)->ConfigureDeltaPositionXModifiers(*(void**)(&conditionalValues)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2<D>::ConfigureDeltaPositionYModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource2)->ConfigureDeltaPositionYModifiers(*(void**)(&conditionalValues)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2<D>::ConfigureDeltaScaleModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource2)->ConfigureDeltaScaleModifiers(*(void**)(&conditionalValues)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSource3<D>::PointerWheelConfig() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource3)->get_PointerWheelConfig(&value));
        return Windows::UI::Composition::Interactions::InteractionSourceConfiguration{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSourceStatics<D>::Create(Windows::UI::Composition::Visual const& source) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics)->Create(*(void**)(&source), &result));
        return Windows::UI::Composition::Interactions::VisualInteractionSource{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Composition_Interactions_IVisualInteractionSourceStatics2<D>::CreateFromIVisualElement(Windows::UI::Composition::IVisualElement const& source) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics2)->CreateFromIVisualElement(*(void**)(&source), &result));
        return Windows::UI::Composition::Interactions::VisualInteractionSource{ result, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::ICompositionConditionalValue> : produce_base<D, Windows::UI::Composition::Interactions::ICompositionConditionalValue>
    {
        int32_t __stdcall get_Condition(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::ExpressionAnimation>(this->shim().Condition());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Condition(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Condition(*reinterpret_cast<Windows::UI::Composition::ExpressionAnimation const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::ExpressionAnimation>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Value(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<Windows::UI::Composition::ExpressionAnimation const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::ICompositionConditionalValueStatics> : produce_base<D, Windows::UI::Composition::Interactions::ICompositionConditionalValueStatics>
    {
        int32_t __stdcall Create(void* compositor, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::Interactions::CompositionConditionalValue>(this->shim().Create(*reinterpret_cast<Windows::UI::Composition::Compositor const*>(&compositor)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::ICompositionInteractionSource> : produce_base<D, Windows::UI::Composition::Interactions::ICompositionInteractionSource>
    {
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection> : produce_base<D, Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection>
    {
        int32_t __stdcall get_Count(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Count());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Add(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Add(*reinterpret_cast<Windows::UI::Composition::Interactions::ICompositionInteractionSource const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Remove(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Remove(*reinterpret_cast<Windows::UI::Composition::Interactions::ICompositionInteractionSource const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemoveAll() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveAll();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionSourceConfiguration> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionSourceConfiguration>
    {
        int32_t __stdcall get_PositionXSourceMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::Interactions::InteractionSourceRedirectionMode>(this->shim().PositionXSourceMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PositionXSourceMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PositionXSourceMode(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionSourceRedirectionMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PositionYSourceMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::Interactions::InteractionSourceRedirectionMode>(this->shim().PositionYSourceMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PositionYSourceMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PositionYSourceMode(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionSourceRedirectionMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ScaleSourceMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::Interactions::InteractionSourceRedirectionMode>(this->shim().ScaleSourceMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ScaleSourceMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScaleSourceMode(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionSourceRedirectionMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTracker> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTracker>
    {
        int32_t __stdcall get_InteractionSources(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection>(this->shim().InteractionSources());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsPositionRoundingSuggested(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPositionRoundingSuggested());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxPosition(Windows::Foundation::Numerics::float3* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float3>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().MaxPosition());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MaxPosition(Windows::Foundation::Numerics::float3 value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxPosition(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxScale(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().MaxScale());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MaxScale(float value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxScale(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MinPosition(Windows::Foundation::Numerics::float3* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float3>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().MinPosition());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MinPosition(Windows::Foundation::Numerics::float3 value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MinPosition(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MinScale(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().MinScale());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MinScale(float value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MinScale(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NaturalRestingPosition(Windows::Foundation::Numerics::float3* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float3>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().NaturalRestingPosition());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NaturalRestingScale(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().NaturalRestingScale());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Owner(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::Interactions::IInteractionTrackerOwner>(this->shim().Owner());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Position(Windows::Foundation::Numerics::float3* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float3>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().Position());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PositionInertiaDecayRate(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::Numerics::float3>>(this->shim().PositionInertiaDecayRate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PositionInertiaDecayRate(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PositionInertiaDecayRate(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PositionVelocityInPixelsPerSecond(Windows::Foundation::Numerics::float3* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float3>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().PositionVelocityInPixelsPerSecond());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Scale(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Scale());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ScaleInertiaDecayRate(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<float>>(this->shim().ScaleInertiaDecayRate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ScaleInertiaDecayRate(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScaleInertiaDecayRate(*reinterpret_cast<Windows::Foundation::IReference<float> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ScaleVelocityInPercentPerSecond(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().ScaleVelocityInPercentPerSecond());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AdjustPositionXIfGreaterThanThreshold(float adjustment, float positionThreshold) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AdjustPositionXIfGreaterThanThreshold(adjustment, positionThreshold);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AdjustPositionYIfGreaterThanThreshold(float adjustment, float positionThreshold) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AdjustPositionYIfGreaterThanThreshold(adjustment, positionThreshold);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ConfigurePositionXInertiaModifiers(void* modifiers) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConfigurePositionXInertiaModifiers(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> const*>(&modifiers));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ConfigurePositionYInertiaModifiers(void* modifiers) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConfigurePositionYInertiaModifiers(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> const*>(&modifiers));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ConfigureScaleInertiaModifiers(void* modifiers) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConfigureScaleInertiaModifiers(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> const*>(&modifiers));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryUpdatePosition(Windows::Foundation::Numerics::float3 value, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().TryUpdatePosition(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryUpdatePositionBy(Windows::Foundation::Numerics::float3 amount, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().TryUpdatePositionBy(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&amount)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryUpdatePositionWithAnimation(void* animation, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().TryUpdatePositionWithAnimation(*reinterpret_cast<Windows::UI::Composition::CompositionAnimation const*>(&animation)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryUpdatePositionWithAdditionalVelocity(Windows::Foundation::Numerics::float3 velocityInPixelsPerSecond, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().TryUpdatePositionWithAdditionalVelocity(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&velocityInPixelsPerSecond)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryUpdateScale(float value, Windows::Foundation::Numerics::float3 centerPoint, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().TryUpdateScale(value, *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&centerPoint)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryUpdateScaleWithAnimation(void* animation, Windows::Foundation::Numerics::float3 centerPoint, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().TryUpdateScaleWithAnimation(*reinterpret_cast<Windows::UI::Composition::CompositionAnimation const*>(&animation), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&centerPoint)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryUpdateScaleWithAdditionalVelocity(float velocityInPercentPerSecond, Windows::Foundation::Numerics::float3 centerPoint, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().TryUpdateScaleWithAdditionalVelocity(velocityInPercentPerSecond, *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&centerPoint)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTracker2> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTracker2>
    {
        int32_t __stdcall ConfigureCenterPointXInertiaModifiers(void* conditionalValues) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConfigureCenterPointXInertiaModifiers(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const*>(&conditionalValues));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ConfigureCenterPointYInertiaModifiers(void* conditionalValues) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConfigureCenterPointYInertiaModifiers(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const*>(&conditionalValues));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTracker3> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTracker3>
    {
        int32_t __stdcall ConfigureVector2PositionInertiaModifiers(void* modifiers) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConfigureVector2PositionInertiaModifiers(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier> const*>(&modifiers));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTracker4> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTracker4>
    {
        int32_t __stdcall TryUpdatePositionWithOption(Windows::Foundation::Numerics::float3 value, int32_t option, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().TryUpdatePosition(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value), *reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTrackerClampingOption const*>(&option)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryUpdatePositionByWithOption(Windows::Foundation::Numerics::float3 amount, int32_t option, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().TryUpdatePositionBy(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&amount), *reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTrackerClampingOption const*>(&option)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsInertiaFromImpulse(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsInertiaFromImpulse());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTracker5> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTracker5>
    {
        int32_t __stdcall TryUpdatePositionWithOption(Windows::Foundation::Numerics::float3 value, int32_t option, int32_t posUpdateOption, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().TryUpdatePosition(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value), *reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTrackerClampingOption const*>(&option), *reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTrackerPositionUpdateOption const*>(&posUpdateOption)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs>
    {
        int32_t __stdcall get_RequestId(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().RequestId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2>
    {
        int32_t __stdcall get_IsFromBinding(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsFromBinding());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs>
    {
        int32_t __stdcall get_RequestId(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().RequestId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs2> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs2>
    {
        int32_t __stdcall get_IsFromBinding(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsFromBinding());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier>
    {
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifierFactory> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifierFactory>
    {
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion>
    {
        int32_t __stdcall get_Condition(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::ExpressionAnimation>(this->shim().Condition());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Condition(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Condition(*reinterpret_cast<Windows::UI::Composition::ExpressionAnimation const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Motion(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::ExpressionAnimation>(this->shim().Motion());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Motion(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Motion(*reinterpret_cast<Windows::UI::Composition::ExpressionAnimation const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics>
    {
        int32_t __stdcall Create(void* compositor, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion>(this->shim().Create(*reinterpret_cast<Windows::UI::Composition::Compositor const*>(&compositor)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion>
    {
        int32_t __stdcall get_Condition(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::ExpressionAnimation>(this->shim().Condition());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Condition(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Condition(*reinterpret_cast<Windows::UI::Composition::ExpressionAnimation const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NaturalMotion(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::ScalarNaturalMotionAnimation>(this->shim().NaturalMotion());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_NaturalMotion(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NaturalMotion(*reinterpret_cast<Windows::UI::Composition::ScalarNaturalMotionAnimation const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotionStatics> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotionStatics>
    {
        int32_t __stdcall Create(void* compositor, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(this->shim().Create(*reinterpret_cast<Windows::UI::Composition::Compositor const*>(&compositor)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue>
    {
        int32_t __stdcall get_Condition(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::ExpressionAnimation>(this->shim().Condition());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Condition(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Condition(*reinterpret_cast<Windows::UI::Composition::ExpressionAnimation const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RestingValue(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::ExpressionAnimation>(this->shim().RestingValue());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RestingValue(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RestingValue(*reinterpret_cast<Windows::UI::Composition::ExpressionAnimation const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics>
    {
        int32_t __stdcall Create(void* compositor, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue>(this->shim().Create(*reinterpret_cast<Windows::UI::Composition::Compositor const*>(&compositor)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs>
    {
        int32_t __stdcall get_ModifiedRestingPosition(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::Numerics::float3>>(this->shim().ModifiedRestingPosition());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ModifiedRestingScale(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<float>>(this->shim().ModifiedRestingScale());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NaturalRestingPosition(Windows::Foundation::Numerics::float3* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float3>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().NaturalRestingPosition());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NaturalRestingScale(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().NaturalRestingScale());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PositionVelocityInPixelsPerSecond(Windows::Foundation::Numerics::float3* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float3>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().PositionVelocityInPixelsPerSecond());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RequestId(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().RequestId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ScaleVelocityInPercentPerSecond(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().ScaleVelocityInPercentPerSecond());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs2> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs2>
    {
        int32_t __stdcall get_IsInertiaFromImpulse(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsInertiaFromImpulse());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs3> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs3>
    {
        int32_t __stdcall get_IsFromBinding(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsFromBinding());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs>
    {
        int32_t __stdcall get_RequestId(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().RequestId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs2> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs2>
    {
        int32_t __stdcall get_IsFromBinding(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsFromBinding());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerOwner> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerOwner>
    {
        int32_t __stdcall CustomAnimationStateEntered(void* sender, void* args) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomAnimationStateEntered(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTracker const*>(&sender), *reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs const*>(&args));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IdleStateEntered(void* sender, void* args) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IdleStateEntered(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTracker const*>(&sender), *reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs const*>(&args));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall InertiaStateEntered(void* sender, void* args) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InertiaStateEntered(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTracker const*>(&sender), *reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs const*>(&args));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall InteractingStateEntered(void* sender, void* args) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InteractingStateEntered(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTracker const*>(&sender), *reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs const*>(&args));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestIgnored(void* sender, void* args) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestIgnored(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTracker const*>(&sender), *reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs const*>(&args));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ValuesChanged(void* sender, void* args) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ValuesChanged(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTracker const*>(&sender), *reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs const*>(&args));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs>
    {
        int32_t __stdcall get_RequestId(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().RequestId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerStatics> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerStatics>
    {
        int32_t __stdcall Create(void* compositor, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::Interactions::InteractionTracker>(this->shim().Create(*reinterpret_cast<Windows::UI::Composition::Compositor const*>(&compositor)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithOwner(void* compositor, void* owner, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::Interactions::InteractionTracker>(this->shim().CreateWithOwner(*reinterpret_cast<Windows::UI::Composition::Compositor const*>(&compositor), *reinterpret_cast<Windows::UI::Composition::Interactions::IInteractionTrackerOwner const*>(&owner)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerStatics2> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerStatics2>
    {
        int32_t __stdcall SetBindingMode(void* boundTracker1, void* boundTracker2, uint32_t axisMode) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetBindingMode(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTracker const*>(&boundTracker1), *reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTracker const*>(&boundTracker2), *reinterpret_cast<Windows::UI::Composition::Interactions::InteractionBindingAxisModes const*>(&axisMode));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetBindingMode(void* boundTracker1, void* boundTracker2, uint32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::Interactions::InteractionBindingAxisModes>(this->shim().GetBindingMode(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTracker const*>(&boundTracker1), *reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTracker const*>(&boundTracker2)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs>
    {
        int32_t __stdcall get_Position(Windows::Foundation::Numerics::float3* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float3>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().Position());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RequestId(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().RequestId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Scale(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Scale());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier>
    {
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifierFactory> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifierFactory>
    {
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion>
    {
        int32_t __stdcall get_Condition(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::ExpressionAnimation>(this->shim().Condition());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Condition(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Condition(*reinterpret_cast<Windows::UI::Composition::ExpressionAnimation const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NaturalMotion(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::Vector2NaturalMotionAnimation>(this->shim().NaturalMotion());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_NaturalMotion(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NaturalMotion(*reinterpret_cast<Windows::UI::Composition::Vector2NaturalMotionAnimation const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotionStatics> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotionStatics>
    {
        int32_t __stdcall Create(void* compositor, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaNaturalMotion>(this->shim().Create(*reinterpret_cast<Windows::UI::Composition::Compositor const*>(&compositor)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IVisualInteractionSource> : produce_base<D, Windows::UI::Composition::Interactions::IVisualInteractionSource>
    {
        int32_t __stdcall get_IsPositionXRailsEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPositionXRailsEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsPositionXRailsEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsPositionXRailsEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsPositionYRailsEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPositionYRailsEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsPositionYRailsEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsPositionYRailsEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ManipulationRedirectionMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode>(this->shim().ManipulationRedirectionMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ManipulationRedirectionMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ManipulationRedirectionMode(*reinterpret_cast<Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PositionXChainingMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::Interactions::InteractionChainingMode>(this->shim().PositionXChainingMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PositionXChainingMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PositionXChainingMode(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionChainingMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PositionXSourceMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::Interactions::InteractionSourceMode>(this->shim().PositionXSourceMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PositionXSourceMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PositionXSourceMode(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionSourceMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PositionYChainingMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::Interactions::InteractionChainingMode>(this->shim().PositionYChainingMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PositionYChainingMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PositionYChainingMode(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionChainingMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PositionYSourceMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::Interactions::InteractionSourceMode>(this->shim().PositionYSourceMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PositionYSourceMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PositionYSourceMode(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionSourceMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ScaleChainingMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::Interactions::InteractionChainingMode>(this->shim().ScaleChainingMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ScaleChainingMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScaleChainingMode(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionChainingMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ScaleSourceMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::Interactions::InteractionSourceMode>(this->shim().ScaleSourceMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ScaleSourceMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScaleSourceMode(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionSourceMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Source(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::Visual>(this->shim().Source());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryRedirectForManipulation(void* pointerPoint) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TryRedirectForManipulation(*reinterpret_cast<Windows::UI::Input::PointerPoint const*>(&pointerPoint));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IVisualInteractionSource2> : produce_base<D, Windows::UI::Composition::Interactions::IVisualInteractionSource2>
    {
        int32_t __stdcall get_DeltaPosition(Windows::Foundation::Numerics::float3* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float3>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().DeltaPosition());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DeltaScale(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().DeltaScale());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Position(Windows::Foundation::Numerics::float3* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float3>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().Position());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PositionVelocity(Windows::Foundation::Numerics::float3* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float3>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().PositionVelocity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Scale(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Scale());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ScaleVelocity(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().ScaleVelocity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ConfigureCenterPointXModifiers(void* conditionalValues) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConfigureCenterPointXModifiers(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const*>(&conditionalValues));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ConfigureCenterPointYModifiers(void* conditionalValues) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConfigureCenterPointYModifiers(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const*>(&conditionalValues));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ConfigureDeltaPositionXModifiers(void* conditionalValues) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConfigureDeltaPositionXModifiers(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const*>(&conditionalValues));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ConfigureDeltaPositionYModifiers(void* conditionalValues) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConfigureDeltaPositionYModifiers(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const*>(&conditionalValues));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ConfigureDeltaScaleModifiers(void* conditionalValues) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConfigureDeltaScaleModifiers(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const*>(&conditionalValues));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IVisualInteractionSource3> : produce_base<D, Windows::UI::Composition::Interactions::IVisualInteractionSource3>
    {
        int32_t __stdcall get_PointerWheelConfig(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::Interactions::InteractionSourceConfiguration>(this->shim().PointerWheelConfig());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IVisualInteractionSourceObjectFactory> : produce_base<D, Windows::UI::Composition::Interactions::IVisualInteractionSourceObjectFactory>
    {
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics> : produce_base<D, Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics>
    {
        int32_t __stdcall Create(void* source, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::Interactions::VisualInteractionSource>(this->shim().Create(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&source)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics2> : produce_base<D, Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics2>
    {
        int32_t __stdcall CreateFromIVisualElement(void* source, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::Interactions::VisualInteractionSource>(this->shim().CreateFromIVisualElement(*reinterpret_cast<Windows::UI::Composition::IVisualElement const*>(&source)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::UI::Composition::Interactions
{
    constexpr auto operator|(InteractionBindingAxisModes const left, InteractionBindingAxisModes const right) noexcept
    {
        return static_cast<InteractionBindingAxisModes>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(InteractionBindingAxisModes& left, InteractionBindingAxisModes const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(InteractionBindingAxisModes const left, InteractionBindingAxisModes const right) noexcept
    {
        return static_cast<InteractionBindingAxisModes>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(InteractionBindingAxisModes& left, InteractionBindingAxisModes const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(InteractionBindingAxisModes const value) noexcept
    {
        return static_cast<InteractionBindingAxisModes>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(InteractionBindingAxisModes const left, InteractionBindingAxisModes const right) noexcept
    {
        return static_cast<InteractionBindingAxisModes>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(InteractionBindingAxisModes& left, InteractionBindingAxisModes const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline auto CompositionConditionalValue::Create(Windows::UI::Composition::Compositor const& compositor)
    {
        return impl::call_factory<CompositionConditionalValue, Windows::UI::Composition::Interactions::ICompositionConditionalValueStatics>([&](auto&& f) { return f.Create(compositor); });
    }
    inline auto InteractionTracker::Create(Windows::UI::Composition::Compositor const& compositor)
    {
        return impl::call_factory<InteractionTracker, Windows::UI::Composition::Interactions::IInteractionTrackerStatics>([&](auto&& f) { return f.Create(compositor); });
    }
    inline auto InteractionTracker::CreateWithOwner(Windows::UI::Composition::Compositor const& compositor, Windows::UI::Composition::Interactions::IInteractionTrackerOwner const& owner)
    {
        return impl::call_factory<InteractionTracker, Windows::UI::Composition::Interactions::IInteractionTrackerStatics>([&](auto&& f) { return f.CreateWithOwner(compositor, owner); });
    }
    inline auto InteractionTracker::SetBindingMode(Windows::UI::Composition::Interactions::InteractionTracker const& boundTracker1, Windows::UI::Composition::Interactions::InteractionTracker const& boundTracker2, Windows::UI::Composition::Interactions::InteractionBindingAxisModes const& axisMode)
    {
        impl::call_factory<InteractionTracker, Windows::UI::Composition::Interactions::IInteractionTrackerStatics2>([&](auto&& f) { return f.SetBindingMode(boundTracker1, boundTracker2, axisMode); });
    }
    inline auto InteractionTracker::GetBindingMode(Windows::UI::Composition::Interactions::InteractionTracker const& boundTracker1, Windows::UI::Composition::Interactions::InteractionTracker const& boundTracker2)
    {
        return impl::call_factory<InteractionTracker, Windows::UI::Composition::Interactions::IInteractionTrackerStatics2>([&](auto&& f) { return f.GetBindingMode(boundTracker1, boundTracker2); });
    }
    inline auto InteractionTrackerInertiaMotion::Create(Windows::UI::Composition::Compositor const& compositor)
    {
        return impl::call_factory<InteractionTrackerInertiaMotion, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics>([&](auto&& f) { return f.Create(compositor); });
    }
    inline auto InteractionTrackerInertiaNaturalMotion::Create(Windows::UI::Composition::Compositor const& compositor)
    {
        return impl::call_factory<InteractionTrackerInertiaNaturalMotion, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotionStatics>([&](auto&& f) { return f.Create(compositor); });
    }
    inline auto InteractionTrackerInertiaRestingValue::Create(Windows::UI::Composition::Compositor const& compositor)
    {
        return impl::call_factory<InteractionTrackerInertiaRestingValue, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics>([&](auto&& f) { return f.Create(compositor); });
    }
    inline auto InteractionTrackerVector2InertiaNaturalMotion::Create(Windows::UI::Composition::Compositor const& compositor)
    {
        return impl::call_factory<InteractionTrackerVector2InertiaNaturalMotion, Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotionStatics>([&](auto&& f) { return f.Create(compositor); });
    }
    inline auto VisualInteractionSource::Create(Windows::UI::Composition::Visual const& source)
    {
        return impl::call_factory<VisualInteractionSource, Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics>([&](auto&& f) { return f.Create(source); });
    }
    inline auto VisualInteractionSource::CreateFromIVisualElement(Windows::UI::Composition::IVisualElement const& source)
    {
        return impl::call_factory<VisualInteractionSource, Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics2>([&](auto&& f) { return f.CreateFromIVisualElement(source); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::ICompositionConditionalValue> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::ICompositionConditionalValue> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::ICompositionConditionalValueStatics> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::ICompositionConditionalValueStatics> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::ICompositionInteractionSource> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::ICompositionInteractionSource> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionSourceConfiguration> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionSourceConfiguration> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTracker> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTracker> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTracker2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTracker2> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTracker3> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTracker3> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTracker4> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTracker4> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTracker5> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTracker5> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs2> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifierFactory> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifierFactory> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotionStatics> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotionStatics> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs2> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs3> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs3> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs2> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerOwner> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerOwner> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerStatics> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerStatics> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerStatics2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerStatics2> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifierFactory> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifierFactory> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotionStatics> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotionStatics> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IVisualInteractionSource> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IVisualInteractionSource> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IVisualInteractionSource2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IVisualInteractionSource2> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IVisualInteractionSource3> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IVisualInteractionSource3> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IVisualInteractionSourceObjectFactory> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IVisualInteractionSourceObjectFactory> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics2> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::CompositionConditionalValue> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::CompositionConditionalValue> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::InteractionSourceConfiguration> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::InteractionSourceConfiguration> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::InteractionTracker> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::InteractionTracker> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaNaturalMotion> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaNaturalMotion> {};
    template<> struct hash<winrt::Windows::UI::Composition::Interactions::VisualInteractionSource> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Interactions::VisualInteractionSource> {};
}
#endif