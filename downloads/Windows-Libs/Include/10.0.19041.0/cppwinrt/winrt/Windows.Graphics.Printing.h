// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Printing_H
#define WINRT_Windows_Graphics_Printing_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Graphics.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Graphics.Printing.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintManager<D>::PrintTaskRequested(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintManager, Windows::Graphics::Printing::PrintTaskRequestedEventArgs> const& eventHandler) const
    {
        winrt::event_token eventCookie;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintManager)->add_PrintTaskRequested(*(void**)(&eventHandler), put_abi(eventCookie)));
        return eventCookie;
    }
    template <typename D> typename consume_Windows_Graphics_Printing_IPrintManager<D>::PrintTaskRequested_revoker consume_Windows_Graphics_Printing_IPrintManager<D>::PrintTaskRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintManager, Windows::Graphics::Printing::PrintTaskRequestedEventArgs> const& eventHandler) const
    {
        return impl::make_event_revoker<D, PrintTaskRequested_revoker>(this, PrintTaskRequested(eventHandler));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintManager<D>::PrintTaskRequested(winrt::event_token const& eventCookie) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintManager)->remove_PrintTaskRequested(impl::bind_in(eventCookie)));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintManagerStatic<D>::GetForCurrentView() const
    {
        void* printingManager{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintManagerStatic)->GetForCurrentView(&printingManager));
        return Windows::Graphics::Printing::PrintManager{ printingManager, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintManagerStatic<D>::ShowPrintUIAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintManagerStatic)->ShowPrintUIAsync(&operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintManagerStatic2<D>::IsSupported() const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintManagerStatic2)->IsSupported(&result));
        return result;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintPageInfo<D>::MediaSize(Windows::Graphics::Printing::PrintMediaSize const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintPageInfo)->put_MediaSize(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintPageInfo<D>::MediaSize() const
    {
        Windows::Graphics::Printing::PrintMediaSize value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintPageInfo)->get_MediaSize(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintPageInfo<D>::PageSize(Windows::Foundation::Size const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintPageInfo)->put_PageSize(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintPageInfo<D>::PageSize() const
    {
        Windows::Foundation::Size value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintPageInfo)->get_PageSize(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintPageInfo<D>::DpiX(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintPageInfo)->put_DpiX(value));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintPageInfo<D>::DpiX() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintPageInfo)->get_DpiX(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintPageInfo<D>::DpiY(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintPageInfo)->put_DpiY(value));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintPageInfo<D>::DpiY() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintPageInfo)->get_DpiY(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintPageInfo<D>::Orientation(Windows::Graphics::Printing::PrintOrientation const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintPageInfo)->put_Orientation(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintPageInfo<D>::Orientation() const
    {
        Windows::Graphics::Printing::PrintOrientation value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintPageInfo)->get_Orientation(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintPageRange<D>::FirstPageNumber() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintPageRange)->get_FirstPageNumber(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintPageRange<D>::LastPageNumber() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintPageRange)->get_LastPageNumber(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintPageRangeFactory<D>::Create(int32_t firstPage, int32_t lastPage) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintPageRangeFactory)->Create(firstPage, lastPage, &result));
        return Windows::Graphics::Printing::PrintPageRange{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintPageRangeFactory<D>::CreateWithSinglePage(int32_t page) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintPageRangeFactory)->CreateWithSinglePage(page, &result));
        return Windows::Graphics::Printing::PrintPageRange{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintPageRangeOptions<D>::AllowAllPages(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintPageRangeOptions)->put_AllowAllPages(value));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintPageRangeOptions<D>::AllowAllPages() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintPageRangeOptions)->get_AllowAllPages(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintPageRangeOptions<D>::AllowCurrentPage(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintPageRangeOptions)->put_AllowCurrentPage(value));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintPageRangeOptions<D>::AllowCurrentPage() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintPageRangeOptions)->get_AllowCurrentPage(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintPageRangeOptions<D>::AllowCustomSetOfPages(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintPageRangeOptions)->put_AllowCustomSetOfPages(value));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintPageRangeOptions<D>::AllowCustomSetOfPages() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintPageRangeOptions)->get_AllowCustomSetOfPages(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTask<D>::Properties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTask)->get_Properties(&value));
        return Windows::ApplicationModel::DataTransfer::DataPackagePropertySet{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTask<D>::Source() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTask)->get_Source(&value));
        return Windows::Graphics::Printing::IPrintDocumentSource{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTask<D>::Options() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTask)->get_Options(&value));
        return Windows::Graphics::Printing::PrintTaskOptions{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTask<D>::Previewing(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Foundation::IInspectable> const& eventHandler) const
    {
        winrt::event_token eventCookie;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTask)->add_Previewing(*(void**)(&eventHandler), put_abi(eventCookie)));
        return eventCookie;
    }
    template <typename D> typename consume_Windows_Graphics_Printing_IPrintTask<D>::Previewing_revoker consume_Windows_Graphics_Printing_IPrintTask<D>::Previewing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Foundation::IInspectable> const& eventHandler) const
    {
        return impl::make_event_revoker<D, Previewing_revoker>(this, Previewing(eventHandler));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTask<D>::Previewing(winrt::event_token const& eventCookie) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTask)->remove_Previewing(impl::bind_in(eventCookie)));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTask<D>::Submitting(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Foundation::IInspectable> const& eventHandler) const
    {
        winrt::event_token eventCookie;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTask)->add_Submitting(*(void**)(&eventHandler), put_abi(eventCookie)));
        return eventCookie;
    }
    template <typename D> typename consume_Windows_Graphics_Printing_IPrintTask<D>::Submitting_revoker consume_Windows_Graphics_Printing_IPrintTask<D>::Submitting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Foundation::IInspectable> const& eventHandler) const
    {
        return impl::make_event_revoker<D, Submitting_revoker>(this, Submitting(eventHandler));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTask<D>::Submitting(winrt::event_token const& eventCookie) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTask)->remove_Submitting(impl::bind_in(eventCookie)));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTask<D>::Progressing(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskProgressingEventArgs> const& eventHandler) const
    {
        winrt::event_token eventCookie;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTask)->add_Progressing(*(void**)(&eventHandler), put_abi(eventCookie)));
        return eventCookie;
    }
    template <typename D> typename consume_Windows_Graphics_Printing_IPrintTask<D>::Progressing_revoker consume_Windows_Graphics_Printing_IPrintTask<D>::Progressing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskProgressingEventArgs> const& eventHandler) const
    {
        return impl::make_event_revoker<D, Progressing_revoker>(this, Progressing(eventHandler));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTask<D>::Progressing(winrt::event_token const& eventCookie) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTask)->remove_Progressing(impl::bind_in(eventCookie)));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTask<D>::Completed(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskCompletedEventArgs> const& eventHandler) const
    {
        winrt::event_token eventCookie;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTask)->add_Completed(*(void**)(&eventHandler), put_abi(eventCookie)));
        return eventCookie;
    }
    template <typename D> typename consume_Windows_Graphics_Printing_IPrintTask<D>::Completed_revoker consume_Windows_Graphics_Printing_IPrintTask<D>::Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskCompletedEventArgs> const& eventHandler) const
    {
        return impl::make_event_revoker<D, Completed_revoker>(this, Completed(eventHandler));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTask<D>::Completed(winrt::event_token const& eventCookie) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTask)->remove_Completed(impl::bind_in(eventCookie)));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTask2<D>::IsPreviewEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTask2)->put_IsPreviewEnabled(value));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTask2<D>::IsPreviewEnabled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTask2)->get_IsPreviewEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskCompletedEventArgs<D>::Completion() const
    {
        Windows::Graphics::Printing::PrintTaskCompletion value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskCompletedEventArgs)->get_Completion(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptions<D>::Bordering(Windows::Graphics::Printing::PrintBordering const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptions)->put_Bordering(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptions<D>::Bordering() const
    {
        Windows::Graphics::Printing::PrintBordering value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptions)->get_Bordering(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptions<D>::GetPagePrintTicket(Windows::Graphics::Printing::PrintPageInfo const& printPageInfo) const
    {
        void* printTicket{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptions)->GetPagePrintTicket(*(void**)(&printPageInfo), &printTicket));
        return Windows::Storage::Streams::IRandomAccessStream{ printTicket, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptions2<D>::PageRangeOptions() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptions2)->get_PageRangeOptions(&value));
        return Windows::Graphics::Printing::PrintPageRangeOptions{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptions2<D>::CustomPageRanges() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptions2)->get_CustomPageRanges(&value));
        return Windows::Foundation::Collections::IVector<Windows::Graphics::Printing::PrintPageRange>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptionsCore<D>::GetPageDescription(uint32_t jobPageNumber) const
    {
        Windows::Graphics::Printing::PrintPageDescription description;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCore)->GetPageDescription(jobPageNumber, put_abi(description)));
        return description;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::MediaSize(Windows::Graphics::Printing::PrintMediaSize const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_MediaSize(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::MediaSize() const
    {
        Windows::Graphics::Printing::PrintMediaSize value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_MediaSize(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::MediaType(Windows::Graphics::Printing::PrintMediaType const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_MediaType(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::MediaType() const
    {
        Windows::Graphics::Printing::PrintMediaType value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_MediaType(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Orientation(Windows::Graphics::Printing::PrintOrientation const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_Orientation(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Orientation() const
    {
        Windows::Graphics::Printing::PrintOrientation value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_Orientation(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::PrintQuality(Windows::Graphics::Printing::PrintQuality const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_PrintQuality(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::PrintQuality() const
    {
        Windows::Graphics::Printing::PrintQuality value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_PrintQuality(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::ColorMode(Windows::Graphics::Printing::PrintColorMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_ColorMode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::ColorMode() const
    {
        Windows::Graphics::Printing::PrintColorMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_ColorMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Duplex(Windows::Graphics::Printing::PrintDuplex const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_Duplex(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Duplex() const
    {
        Windows::Graphics::Printing::PrintDuplex value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_Duplex(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Collation(Windows::Graphics::Printing::PrintCollation const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_Collation(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Collation() const
    {
        Windows::Graphics::Printing::PrintCollation value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_Collation(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Staple(Windows::Graphics::Printing::PrintStaple const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_Staple(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Staple() const
    {
        Windows::Graphics::Printing::PrintStaple value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_Staple(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::HolePunch(Windows::Graphics::Printing::PrintHolePunch const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_HolePunch(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::HolePunch() const
    {
        Windows::Graphics::Printing::PrintHolePunch value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_HolePunch(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Binding(Windows::Graphics::Printing::PrintBinding const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_Binding(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Binding() const
    {
        Windows::Graphics::Printing::PrintBinding value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_Binding(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::MinCopies() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_MinCopies(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::MaxCopies() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_MaxCopies(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::NumberOfCopies(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_NumberOfCopies(value));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::NumberOfCopies() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_NumberOfCopies(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreUIConfiguration<D>::DisplayedOptions() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration)->get_DisplayedOptions(&value));
        return Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskProgressingEventArgs<D>::DocumentPageCount() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskProgressingEventArgs)->get_DocumentPageCount(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskRequest<D>::Deadline() const
    {
        Windows::Foundation::DateTime value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskRequest)->get_Deadline(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskRequest<D>::CreatePrintTask(param::hstring const& title, Windows::Graphics::Printing::PrintTaskSourceRequestedHandler const& handler) const
    {
        void* task{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskRequest)->CreatePrintTask(*(void**)(&title), *(void**)(&handler), &task));
        return Windows::Graphics::Printing::PrintTask{ task, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskRequest<D>::GetDeferral() const
    {
        void* deferral{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskRequest)->GetDeferral(&deferral));
        return Windows::Graphics::Printing::PrintTaskRequestedDeferral{ deferral, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskRequestedDeferral<D>::Complete() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskRequestedDeferral)->Complete());
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskRequestedEventArgs<D>::Request() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskRequestedEventArgs)->get_Request(&value));
        return Windows::Graphics::Printing::PrintTaskRequest{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskSourceRequestedArgs<D>::Deadline() const
    {
        Windows::Foundation::DateTime value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs)->get_Deadline(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskSourceRequestedArgs<D>::SetSource(Windows::Graphics::Printing::IPrintDocumentSource const& source) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs)->SetSource(*(void**)(&source)));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskSourceRequestedArgs<D>::GetDeferral() const
    {
        void* deferral{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs)->GetDeferral(&deferral));
        return Windows::Graphics::Printing::PrintTaskSourceRequestedDeferral{ deferral, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskSourceRequestedDeferral<D>::Complete() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral)->Complete());
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskTargetDeviceSupport<D>::IsPrinterTargetEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport)->put_IsPrinterTargetEnabled(value));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskTargetDeviceSupport<D>::IsPrinterTargetEnabled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport)->get_IsPrinterTargetEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskTargetDeviceSupport<D>::Is3DManufacturingTargetEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport)->put_Is3DManufacturingTargetEnabled(value));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IPrintTaskTargetDeviceSupport<D>::Is3DManufacturingTargetEnabled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport)->get_Is3DManufacturingTargetEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::MediaSize() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_MediaSize(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::MediaType() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_MediaType(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::Orientation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_Orientation(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::PrintQuality() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_PrintQuality(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::ColorMode() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_ColorMode(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::Duplex() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_Duplex(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::Collation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_Collation(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::Staple() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_Staple(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::HolePunch() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_HolePunch(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::Binding() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_Binding(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::Copies() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_Copies(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::NUp() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_NUp(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::InputBin() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_InputBin(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic2<D>::Bordering() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic2)->get_Bordering(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic3<D>::CustomPageRanges() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic3)->get_CustomPageRanges(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename H> struct delegate<Windows::Graphics::Printing::PrintTaskSourceRequestedHandler, H> : implements_delegate<Windows::Graphics::Printing::PrintTaskSourceRequestedHandler, H>
    {
        delegate(H&& handler) : implements_delegate<Windows::Graphics::Printing::PrintTaskSourceRequestedHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* args) noexcept final try
        {
            (*this)(*reinterpret_cast<Windows::Graphics::Printing::PrintTaskSourceRequestedArgs const*>(&args));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::IPrintDocumentSource> : produce_base<D, Windows::Graphics::Printing::IPrintDocumentSource>
    {
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::IPrintManager> : produce_base<D, Windows::Graphics::Printing::IPrintManager>
    {
        int32_t __stdcall add_PrintTaskRequested(void* eventHandler, winrt::event_token* eventCookie) noexcept final try
        {
            zero_abi<winrt::event_token>(eventCookie);
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<winrt::event_token>(this->shim().PrintTaskRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintManager, Windows::Graphics::Printing::PrintTaskRequestedEventArgs> const*>(&eventHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_PrintTaskRequested(winrt::event_token eventCookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrintTaskRequested(*reinterpret_cast<winrt::event_token const*>(&eventCookie));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::IPrintManagerStatic> : produce_base<D, Windows::Graphics::Printing::IPrintManagerStatic>
    {
        int32_t __stdcall GetForCurrentView(void** printingManager) noexcept final try
        {
            clear_abi(printingManager);
            typename D::abi_guard guard(this->shim());
            *printingManager = detach_from<Windows::Graphics::Printing::PrintManager>(this->shim().GetForCurrentView());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowPrintUIAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().ShowPrintUIAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::IPrintManagerStatic2> : produce_base<D, Windows::Graphics::Printing::IPrintManagerStatic2>
    {
        int32_t __stdcall IsSupported(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::IPrintPageInfo> : produce_base<D, Windows::Graphics::Printing::IPrintPageInfo>
    {
        int32_t __stdcall put_MediaSize(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MediaSize(*reinterpret_cast<Windows::Graphics::Printing::PrintMediaSize const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MediaSize(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintMediaSize>(this->shim().MediaSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PageSize(Windows::Foundation::Size value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PageSize(*reinterpret_cast<Windows::Foundation::Size const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PageSize(Windows::Foundation::Size* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Size>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Size>(this->shim().PageSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DpiX(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DpiX(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DpiX(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().DpiX());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DpiY(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DpiY(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DpiY(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().DpiY());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Orientation(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Orientation(*reinterpret_cast<Windows::Graphics::Printing::PrintOrientation const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Orientation(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintOrientation>(this->shim().Orientation());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::IPrintPageRange> : produce_base<D, Windows::Graphics::Printing::IPrintPageRange>
    {
        int32_t __stdcall get_FirstPageNumber(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().FirstPageNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LastPageNumber(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().LastPageNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::IPrintPageRangeFactory> : produce_base<D, Windows::Graphics::Printing::IPrintPageRangeFactory>
    {
        int32_t __stdcall Create(int32_t firstPage, int32_t lastPage, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing::PrintPageRange>(this->shim().Create(firstPage, lastPage));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithSinglePage(int32_t page, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing::PrintPageRange>(this->shim().CreateWithSinglePage(page));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::IPrintPageRangeOptions> : produce_base<D, Windows::Graphics::Printing::IPrintPageRangeOptions>
    {
        int32_t __stdcall put_AllowAllPages(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowAllPages(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AllowAllPages(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowAllPages());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AllowCurrentPage(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowCurrentPage(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AllowCurrentPage(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowCurrentPage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AllowCustomSetOfPages(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowCustomSetOfPages(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AllowCustomSetOfPages(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowCustomSetOfPages());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::IPrintTask> : produce_base<D, Windows::Graphics::Printing::IPrintTask>
    {
        int32_t __stdcall get_Properties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DataPackagePropertySet>(this->shim().Properties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Source(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::IPrintDocumentSource>(this->shim().Source());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Options(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTaskOptions>(this->shim().Options());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_Previewing(void* eventHandler, winrt::event_token* eventCookie) noexcept final try
        {
            zero_abi<winrt::event_token>(eventCookie);
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<winrt::event_token>(this->shim().Previewing(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Foundation::IInspectable> const*>(&eventHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Previewing(winrt::event_token eventCookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Previewing(*reinterpret_cast<winrt::event_token const*>(&eventCookie));
            return 0;
        }
        int32_t __stdcall add_Submitting(void* eventHandler, winrt::event_token* eventCookie) noexcept final try
        {
            zero_abi<winrt::event_token>(eventCookie);
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<winrt::event_token>(this->shim().Submitting(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Foundation::IInspectable> const*>(&eventHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Submitting(winrt::event_token eventCookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Submitting(*reinterpret_cast<winrt::event_token const*>(&eventCookie));
            return 0;
        }
        int32_t __stdcall add_Progressing(void* eventHandler, winrt::event_token* eventCookie) noexcept final try
        {
            zero_abi<winrt::event_token>(eventCookie);
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<winrt::event_token>(this->shim().Progressing(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskProgressingEventArgs> const*>(&eventHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Progressing(winrt::event_token eventCookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Progressing(*reinterpret_cast<winrt::event_token const*>(&eventCookie));
            return 0;
        }
        int32_t __stdcall add_Completed(void* eventHandler, winrt::event_token* eventCookie) noexcept final try
        {
            zero_abi<winrt::event_token>(eventCookie);
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<winrt::event_token>(this->shim().Completed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskCompletedEventArgs> const*>(&eventHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Completed(winrt::event_token eventCookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Completed(*reinterpret_cast<winrt::event_token const*>(&eventCookie));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::IPrintTask2> : produce_base<D, Windows::Graphics::Printing::IPrintTask2>
    {
        int32_t __stdcall put_IsPreviewEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsPreviewEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsPreviewEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPreviewEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::IPrintTaskCompletedEventArgs> : produce_base<D, Windows::Graphics::Printing::IPrintTaskCompletedEventArgs>
    {
        int32_t __stdcall get_Completion(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTaskCompletion>(this->shim().Completion());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::IPrintTaskOptions> : produce_base<D, Windows::Graphics::Printing::IPrintTaskOptions>
    {
        int32_t __stdcall put_Bordering(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Bordering(*reinterpret_cast<Windows::Graphics::Printing::PrintBordering const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Bordering(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintBordering>(this->shim().Bordering());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPagePrintTicket(void* printPageInfo, void** printTicket) noexcept final try
        {
            clear_abi(printTicket);
            typename D::abi_guard guard(this->shim());
            *printTicket = detach_from<Windows::Storage::Streams::IRandomAccessStream>(this->shim().GetPagePrintTicket(*reinterpret_cast<Windows::Graphics::Printing::PrintPageInfo const*>(&printPageInfo)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::IPrintTaskOptions2> : produce_base<D, Windows::Graphics::Printing::IPrintTaskOptions2>
    {
        int32_t __stdcall get_PageRangeOptions(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintPageRangeOptions>(this->shim().PageRangeOptions());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CustomPageRanges(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Graphics::Printing::PrintPageRange>>(this->shim().CustomPageRanges());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::IPrintTaskOptionsCore> : produce_base<D, Windows::Graphics::Printing::IPrintTaskOptionsCore>
    {
        int32_t __stdcall GetPageDescription(uint32_t jobPageNumber, struct struct_Windows_Graphics_Printing_PrintPageDescription* description) noexcept final try
        {
            zero_abi<Windows::Graphics::Printing::PrintPageDescription>(description);
            typename D::abi_guard guard(this->shim());
            *description = detach_from<Windows::Graphics::Printing::PrintPageDescription>(this->shim().GetPageDescription(jobPageNumber));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties> : produce_base<D, Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties>
    {
        int32_t __stdcall put_MediaSize(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MediaSize(*reinterpret_cast<Windows::Graphics::Printing::PrintMediaSize const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MediaSize(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintMediaSize>(this->shim().MediaSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MediaType(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MediaType(*reinterpret_cast<Windows::Graphics::Printing::PrintMediaType const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MediaType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintMediaType>(this->shim().MediaType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Orientation(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Orientation(*reinterpret_cast<Windows::Graphics::Printing::PrintOrientation const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Orientation(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintOrientation>(this->shim().Orientation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PrintQuality(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrintQuality(*reinterpret_cast<Windows::Graphics::Printing::PrintQuality const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PrintQuality(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintQuality>(this->shim().PrintQuality());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ColorMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ColorMode(*reinterpret_cast<Windows::Graphics::Printing::PrintColorMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ColorMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintColorMode>(this->shim().ColorMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Duplex(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Duplex(*reinterpret_cast<Windows::Graphics::Printing::PrintDuplex const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Duplex(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintDuplex>(this->shim().Duplex());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Collation(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Collation(*reinterpret_cast<Windows::Graphics::Printing::PrintCollation const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Collation(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintCollation>(this->shim().Collation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Staple(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Staple(*reinterpret_cast<Windows::Graphics::Printing::PrintStaple const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Staple(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintStaple>(this->shim().Staple());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_HolePunch(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HolePunch(*reinterpret_cast<Windows::Graphics::Printing::PrintHolePunch const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HolePunch(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintHolePunch>(this->shim().HolePunch());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Binding(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Binding(*reinterpret_cast<Windows::Graphics::Printing::PrintBinding const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Binding(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintBinding>(this->shim().Binding());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MinCopies(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MinCopies());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxCopies(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxCopies());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_NumberOfCopies(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NumberOfCopies(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NumberOfCopies(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().NumberOfCopies());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration> : produce_base<D, Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration>
    {
        int32_t __stdcall get_DisplayedOptions(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().DisplayedOptions());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::IPrintTaskProgressingEventArgs> : produce_base<D, Windows::Graphics::Printing::IPrintTaskProgressingEventArgs>
    {
        int32_t __stdcall get_DocumentPageCount(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().DocumentPageCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::IPrintTaskRequest> : produce_base<D, Windows::Graphics::Printing::IPrintTaskRequest>
    {
        int32_t __stdcall get_Deadline(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Deadline());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreatePrintTask(void* title, void* handler, void** task) noexcept final try
        {
            clear_abi(task);
            typename D::abi_guard guard(this->shim());
            *task = detach_from<Windows::Graphics::Printing::PrintTask>(this->shim().CreatePrintTask(*reinterpret_cast<hstring const*>(&title), *reinterpret_cast<Windows::Graphics::Printing::PrintTaskSourceRequestedHandler const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** deferral) noexcept final try
        {
            clear_abi(deferral);
            typename D::abi_guard guard(this->shim());
            *deferral = detach_from<Windows::Graphics::Printing::PrintTaskRequestedDeferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::IPrintTaskRequestedDeferral> : produce_base<D, Windows::Graphics::Printing::IPrintTaskRequestedDeferral>
    {
        int32_t __stdcall Complete() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::IPrintTaskRequestedEventArgs> : produce_base<D, Windows::Graphics::Printing::IPrintTaskRequestedEventArgs>
    {
        int32_t __stdcall get_Request(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTaskRequest>(this->shim().Request());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs> : produce_base<D, Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs>
    {
        int32_t __stdcall get_Deadline(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Deadline());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetSource(void* source) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSource(*reinterpret_cast<Windows::Graphics::Printing::IPrintDocumentSource const*>(&source));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** deferral) noexcept final try
        {
            clear_abi(deferral);
            typename D::abi_guard guard(this->shim());
            *deferral = detach_from<Windows::Graphics::Printing::PrintTaskSourceRequestedDeferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral> : produce_base<D, Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral>
    {
        int32_t __stdcall Complete() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport> : produce_base<D, Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport>
    {
        int32_t __stdcall put_IsPrinterTargetEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsPrinterTargetEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsPrinterTargetEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPrinterTargetEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Is3DManufacturingTargetEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Is3DManufacturingTargetEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Is3DManufacturingTargetEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Is3DManufacturingTargetEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic> : produce_base<D, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>
    {
        int32_t __stdcall get_MediaSize(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().MediaSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MediaType(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().MediaType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Orientation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Orientation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PrintQuality(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PrintQuality());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ColorMode(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ColorMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Duplex(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Duplex());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Collation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Collation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Staple(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Staple());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HolePunch(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HolePunch());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Binding(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Binding());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Copies(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Copies());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NUp(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NUp());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InputBin(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().InputBin());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic2> : produce_base<D, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic2>
    {
        int32_t __stdcall get_Bordering(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Bordering());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic3> : produce_base<D, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic3>
    {
        int32_t __stdcall get_CustomPageRanges(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CustomPageRanges());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Graphics::Printing
{
    inline auto PrintManager::GetForCurrentView()
    {
        return impl::call_factory<PrintManager, Windows::Graphics::Printing::IPrintManagerStatic>([&](auto&& f) { return f.GetForCurrentView(); });
    }
    inline auto PrintManager::ShowPrintUIAsync()
    {
        return impl::call_factory<PrintManager, Windows::Graphics::Printing::IPrintManagerStatic>([&](auto&& f) { return f.ShowPrintUIAsync(); });
    }
    inline auto PrintManager::IsSupported()
    {
        return impl::call_factory<PrintManager, Windows::Graphics::Printing::IPrintManagerStatic2>([&](auto&& f) { return f.IsSupported(); });
    }
    inline PrintPageInfo::PrintPageInfo() :
        PrintPageInfo(impl::call_factory<PrintPageInfo>([](auto&& f) { return f.template ActivateInstance<PrintPageInfo>(); }))
    {
    }
    inline PrintPageRange::PrintPageRange(int32_t firstPage, int32_t lastPage) :
        PrintPageRange(impl::call_factory<PrintPageRange, Windows::Graphics::Printing::IPrintPageRangeFactory>([&](auto&& f) { return f.Create(firstPage, lastPage); }))
    {
    }
    inline PrintPageRange::PrintPageRange(int32_t page) :
        PrintPageRange(impl::call_factory<PrintPageRange, Windows::Graphics::Printing::IPrintPageRangeFactory>([&](auto&& f) { return f.CreateWithSinglePage(page); }))
    {
    }
    inline auto StandardPrintTaskOptions::MediaSize()
    {
        return impl::call_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>([&](auto&& f) { return f.MediaSize(); });
    }
    inline auto StandardPrintTaskOptions::MediaType()
    {
        return impl::call_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>([&](auto&& f) { return f.MediaType(); });
    }
    inline auto StandardPrintTaskOptions::Orientation()
    {
        return impl::call_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>([&](auto&& f) { return f.Orientation(); });
    }
    inline auto StandardPrintTaskOptions::PrintQuality()
    {
        return impl::call_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>([&](auto&& f) { return f.PrintQuality(); });
    }
    inline auto StandardPrintTaskOptions::ColorMode()
    {
        return impl::call_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>([&](auto&& f) { return f.ColorMode(); });
    }
    inline auto StandardPrintTaskOptions::Duplex()
    {
        return impl::call_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>([&](auto&& f) { return f.Duplex(); });
    }
    inline auto StandardPrintTaskOptions::Collation()
    {
        return impl::call_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>([&](auto&& f) { return f.Collation(); });
    }
    inline auto StandardPrintTaskOptions::Staple()
    {
        return impl::call_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>([&](auto&& f) { return f.Staple(); });
    }
    inline auto StandardPrintTaskOptions::HolePunch()
    {
        return impl::call_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>([&](auto&& f) { return f.HolePunch(); });
    }
    inline auto StandardPrintTaskOptions::Binding()
    {
        return impl::call_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>([&](auto&& f) { return f.Binding(); });
    }
    inline auto StandardPrintTaskOptions::Copies()
    {
        return impl::call_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>([&](auto&& f) { return f.Copies(); });
    }
    inline auto StandardPrintTaskOptions::NUp()
    {
        return impl::call_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>([&](auto&& f) { return f.NUp(); });
    }
    inline auto StandardPrintTaskOptions::InputBin()
    {
        return impl::call_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>([&](auto&& f) { return f.InputBin(); });
    }
    inline auto StandardPrintTaskOptions::Bordering()
    {
        return impl::call_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic2>([&](auto&& f) { return f.Bordering(); });
    }
    inline auto StandardPrintTaskOptions::CustomPageRanges()
    {
        return impl::call_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic3>([&](auto&& f) { return f.CustomPageRanges(); });
    }
    template <typename L> PrintTaskSourceRequestedHandler::PrintTaskSourceRequestedHandler(L handler) :
        PrintTaskSourceRequestedHandler(impl::make_delegate<PrintTaskSourceRequestedHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> PrintTaskSourceRequestedHandler::PrintTaskSourceRequestedHandler(F* handler) :
        PrintTaskSourceRequestedHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> PrintTaskSourceRequestedHandler::PrintTaskSourceRequestedHandler(O* object, M method) :
        PrintTaskSourceRequestedHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> PrintTaskSourceRequestedHandler::PrintTaskSourceRequestedHandler(com_ptr<O>&& object, M method) :
        PrintTaskSourceRequestedHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> PrintTaskSourceRequestedHandler::PrintTaskSourceRequestedHandler(weak_ref<O>&& object, M method) :
        PrintTaskSourceRequestedHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto PrintTaskSourceRequestedHandler::operator()(Windows::Graphics::Printing::PrintTaskSourceRequestedArgs const& args) const
    {
        check_hresult((*(impl::abi_t<PrintTaskSourceRequestedHandler>**)this)->Invoke(*(void**)(&args)));
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Graphics::Printing::IPrintDocumentSource> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintDocumentSource> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::IPrintManager> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintManager> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::IPrintManagerStatic> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintManagerStatic> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::IPrintManagerStatic2> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintManagerStatic2> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::IPrintPageInfo> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintPageInfo> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::IPrintPageRange> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintPageRange> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::IPrintPageRangeFactory> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintPageRangeFactory> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::IPrintPageRangeOptions> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintPageRangeOptions> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTask> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTask> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTask2> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTask2> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTaskCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTaskCompletedEventArgs> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTaskOptions> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTaskOptions> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTaskOptions2> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTaskOptions2> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTaskOptionsCore> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTaskOptionsCore> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTaskProgressingEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTaskProgressingEventArgs> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTaskRequest> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTaskRequest> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTaskRequestedDeferral> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTaskRequestedDeferral> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTaskRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTaskRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic2> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic2> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic3> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic3> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::PrintManager> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintManager> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::PrintPageInfo> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintPageInfo> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::PrintPageRange> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintPageRange> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::PrintPageRangeOptions> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintPageRangeOptions> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::PrintTask> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTask> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::PrintTaskCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTaskCompletedEventArgs> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::PrintTaskOptions> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTaskOptions> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::PrintTaskProgressingEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTaskProgressingEventArgs> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::PrintTaskRequest> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTaskRequest> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::PrintTaskRequestedDeferral> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTaskRequestedDeferral> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::PrintTaskRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTaskRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::PrintTaskSourceRequestedArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTaskSourceRequestedArgs> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::PrintTaskSourceRequestedDeferral> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTaskSourceRequestedDeferral> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::StandardPrintTaskOptions> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::StandardPrintTaskOptions> {};
}
#endif
