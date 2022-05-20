// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Web_Http_Headers_H
#define WINRT_Windows_Web_Http_Headers_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Web.Http.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Globalization.2.h"
#include "winrt/impl/Windows.Networking.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Web.Http.2.h"
#include "winrt/impl/Windows.Web.Http.Headers.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpCacheDirectiveHeaderValueCollection<D>::MaxAge() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection)->get_MaxAge(&value));
        return Windows::Foundation::IReference<Windows::Foundation::TimeSpan>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpCacheDirectiveHeaderValueCollection<D>::MaxAge(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection)->put_MaxAge(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpCacheDirectiveHeaderValueCollection<D>::MaxStale() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection)->get_MaxStale(&value));
        return Windows::Foundation::IReference<Windows::Foundation::TimeSpan>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpCacheDirectiveHeaderValueCollection<D>::MaxStale(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection)->put_MaxStale(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpCacheDirectiveHeaderValueCollection<D>::MinFresh() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection)->get_MinFresh(&value));
        return Windows::Foundation::IReference<Windows::Foundation::TimeSpan>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpCacheDirectiveHeaderValueCollection<D>::MinFresh(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection)->put_MinFresh(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpCacheDirectiveHeaderValueCollection<D>::SharedMaxAge() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection)->get_SharedMaxAge(&value));
        return Windows::Foundation::IReference<Windows::Foundation::TimeSpan>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpCacheDirectiveHeaderValueCollection<D>::SharedMaxAge(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection)->put_SharedMaxAge(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpCacheDirectiveHeaderValueCollection<D>::ParseAdd(param::hstring const& input) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection)->ParseAdd(*(void**)(&input)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpCacheDirectiveHeaderValueCollection<D>::TryParseAdd(param::hstring const& input) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection)->TryParseAdd(*(void**)(&input), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpChallengeHeaderValue<D>::Parameters() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpChallengeHeaderValue)->get_Parameters(&value));
        return Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpChallengeHeaderValue<D>::Scheme() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpChallengeHeaderValue)->get_Scheme(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpChallengeHeaderValue<D>::Token() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpChallengeHeaderValue)->get_Token(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpChallengeHeaderValueCollection<D>::ParseAdd(param::hstring const& input) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpChallengeHeaderValueCollection)->ParseAdd(*(void**)(&input)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpChallengeHeaderValueCollection<D>::TryParseAdd(param::hstring const& input) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpChallengeHeaderValueCollection)->TryParseAdd(*(void**)(&input), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpChallengeHeaderValueFactory<D>::CreateFromScheme(param::hstring const& scheme) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpChallengeHeaderValueFactory)->CreateFromScheme(*(void**)(&scheme), &value));
        return Windows::Web::Http::Headers::HttpChallengeHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpChallengeHeaderValueFactory<D>::CreateFromSchemeWithToken(param::hstring const& scheme, param::hstring const& token) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpChallengeHeaderValueFactory)->CreateFromSchemeWithToken(*(void**)(&scheme), *(void**)(&token), &value));
        return Windows::Web::Http::Headers::HttpChallengeHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpChallengeHeaderValueStatics<D>::Parse(param::hstring const& input) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpChallengeHeaderValueStatics)->Parse(*(void**)(&input), &result));
        return Windows::Web::Http::Headers::HttpChallengeHeaderValue{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpChallengeHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpChallengeHeaderValue& challengeHeaderValue) const
    {
        bool succeeded;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpChallengeHeaderValueStatics)->TryParse(*(void**)(&input), impl::bind_out(challengeHeaderValue), &succeeded));
        return succeeded;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpConnectionOptionHeaderValue<D>::Token() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValue)->get_Token(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpConnectionOptionHeaderValueCollection<D>::ParseAdd(param::hstring const& input) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueCollection)->ParseAdd(*(void**)(&input)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpConnectionOptionHeaderValueCollection<D>::TryParseAdd(param::hstring const& input) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueCollection)->TryParseAdd(*(void**)(&input), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpConnectionOptionHeaderValueFactory<D>::Create(param::hstring const& token) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueFactory)->Create(*(void**)(&token), &value));
        return Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpConnectionOptionHeaderValueStatics<D>::Parse(param::hstring const& input) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueStatics)->Parse(*(void**)(&input), &result));
        return Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpConnectionOptionHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue& connectionOptionHeaderValue) const
    {
        bool succeeded;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueStatics)->TryParse(*(void**)(&input), impl::bind_out(connectionOptionHeaderValue), &succeeded));
        return succeeded;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentCodingHeaderValue<D>::ContentCoding() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentCodingHeaderValue)->get_ContentCoding(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentCodingHeaderValueCollection<D>::ParseAdd(param::hstring const& input) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentCodingHeaderValueCollection)->ParseAdd(*(void**)(&input)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentCodingHeaderValueCollection<D>::TryParseAdd(param::hstring const& input) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentCodingHeaderValueCollection)->TryParseAdd(*(void**)(&input), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentCodingHeaderValueFactory<D>::Create(param::hstring const& contentCoding) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentCodingHeaderValueFactory)->Create(*(void**)(&contentCoding), &value));
        return Windows::Web::Http::Headers::HttpContentCodingHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentCodingHeaderValueStatics<D>::Parse(param::hstring const& input) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentCodingHeaderValueStatics)->Parse(*(void**)(&input), &result));
        return Windows::Web::Http::Headers::HttpContentCodingHeaderValue{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentCodingHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentCodingHeaderValue& contentCodingHeaderValue) const
    {
        bool succeeded;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentCodingHeaderValueStatics)->TryParse(*(void**)(&input), impl::bind_out(contentCodingHeaderValue), &succeeded));
        return succeeded;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValue<D>::ContentCoding() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValue)->get_ContentCoding(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValue<D>::Quality() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValue)->get_Quality(&value));
        return Windows::Foundation::IReference<double>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValueCollection<D>::ParseAdd(param::hstring const& input) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueCollection)->ParseAdd(*(void**)(&input)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValueCollection<D>::TryParseAdd(param::hstring const& input) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueCollection)->TryParseAdd(*(void**)(&input), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValueFactory<D>::CreateFromValue(param::hstring const& contentCoding) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueFactory)->CreateFromValue(*(void**)(&contentCoding), &value));
        return Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValueFactory<D>::CreateFromValueWithQuality(param::hstring const& contentCoding, double quality) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueFactory)->CreateFromValueWithQuality(*(void**)(&contentCoding), quality, &value));
        return Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValueStatics<D>::Parse(param::hstring const& input) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueStatics)->Parse(*(void**)(&input), &result));
        return Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue& contentCodingWithQualityHeaderValue) const
    {
        bool succeeded;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueStatics)->TryParse(*(void**)(&input), impl::bind_out(contentCodingWithQualityHeaderValue), &succeeded));
        return succeeded;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValue<D>::DispositionType() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue)->get_DispositionType(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValue<D>::DispositionType(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue)->put_DispositionType(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValue<D>::FileName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue)->get_FileName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValue<D>::FileName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue)->put_FileName(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValue<D>::FileNameStar() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue)->get_FileNameStar(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValue<D>::FileNameStar(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue)->put_FileNameStar(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValue<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValue<D>::Name(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue)->put_Name(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValue<D>::Parameters() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue)->get_Parameters(&value));
        return Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValue<D>::Size() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue)->get_Size(&value));
        return Windows::Foundation::IReference<uint64_t>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValue<D>::Size(Windows::Foundation::IReference<uint64_t> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue)->put_Size(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValueFactory<D>::Create(param::hstring const& dispositionType) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueFactory)->Create(*(void**)(&dispositionType), &value));
        return Windows::Web::Http::Headers::HttpContentDispositionHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValueStatics<D>::Parse(param::hstring const& input) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueStatics)->Parse(*(void**)(&input), &result));
        return Windows::Web::Http::Headers::HttpContentDispositionHeaderValue{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentDispositionHeaderValue& contentDispositionHeaderValue) const
    {
        bool succeeded;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueStatics)->TryParse(*(void**)(&input), impl::bind_out(contentDispositionHeaderValue), &succeeded));
        return succeeded;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentDisposition() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->get_ContentDisposition(&value));
        return Windows::Web::Http::Headers::HttpContentDispositionHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentDisposition(Windows::Web::Http::Headers::HttpContentDispositionHeaderValue const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->put_ContentDisposition(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentEncoding() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->get_ContentEncoding(&value));
        return Windows::Web::Http::Headers::HttpContentCodingHeaderValueCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentLanguage() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->get_ContentLanguage(&value));
        return Windows::Web::Http::Headers::HttpLanguageHeaderValueCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentLength() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->get_ContentLength(&value));
        return Windows::Foundation::IReference<uint64_t>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentLength(Windows::Foundation::IReference<uint64_t> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->put_ContentLength(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentLocation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->get_ContentLocation(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentLocation(Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->put_ContentLocation(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentMD5() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->get_ContentMD5(&value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentMD5(Windows::Storage::Streams::IBuffer const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->put_ContentMD5(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentRange() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->get_ContentRange(&value));
        return Windows::Web::Http::Headers::HttpContentRangeHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentRange(Windows::Web::Http::Headers::HttpContentRangeHeaderValue const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->put_ContentRange(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentType() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->get_ContentType(&value));
        return Windows::Web::Http::Headers::HttpMediaTypeHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentType(Windows::Web::Http::Headers::HttpMediaTypeHeaderValue const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->put_ContentType(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::Expires() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->get_Expires(&value));
        return Windows::Foundation::IReference<Windows::Foundation::DateTime>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::Expires(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->put_Expires(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::LastModified() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->get_LastModified(&value));
        return Windows::Foundation::IReference<Windows::Foundation::DateTime>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::LastModified(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->put_LastModified(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::Append(param::hstring const& name, param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->Append(*(void**)(&name), *(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::TryAppendWithoutValidation(param::hstring const& name, param::hstring const& value) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->TryAppendWithoutValidation(*(void**)(&name), *(void**)(&value), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentRangeHeaderValue<D>::FirstBytePosition() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentRangeHeaderValue)->get_FirstBytePosition(&value));
        return Windows::Foundation::IReference<uint64_t>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentRangeHeaderValue<D>::LastBytePosition() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentRangeHeaderValue)->get_LastBytePosition(&value));
        return Windows::Foundation::IReference<uint64_t>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentRangeHeaderValue<D>::Length() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentRangeHeaderValue)->get_Length(&value));
        return Windows::Foundation::IReference<uint64_t>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentRangeHeaderValue<D>::Unit() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentRangeHeaderValue)->get_Unit(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentRangeHeaderValue<D>::Unit(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentRangeHeaderValue)->put_Unit(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentRangeHeaderValueFactory<D>::CreateFromLength(uint64_t length) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentRangeHeaderValueFactory)->CreateFromLength(length, &value));
        return Windows::Web::Http::Headers::HttpContentRangeHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentRangeHeaderValueFactory<D>::CreateFromRange(uint64_t from, uint64_t to) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentRangeHeaderValueFactory)->CreateFromRange(from, to, &value));
        return Windows::Web::Http::Headers::HttpContentRangeHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentRangeHeaderValueFactory<D>::CreateFromRangeWithLength(uint64_t from, uint64_t to, uint64_t length) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentRangeHeaderValueFactory)->CreateFromRangeWithLength(from, to, length, &value));
        return Windows::Web::Http::Headers::HttpContentRangeHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentRangeHeaderValueStatics<D>::Parse(param::hstring const& input) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentRangeHeaderValueStatics)->Parse(*(void**)(&input), &result));
        return Windows::Web::Http::Headers::HttpContentRangeHeaderValue{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpContentRangeHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentRangeHeaderValue& contentRangeHeaderValue) const
    {
        bool succeeded;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpContentRangeHeaderValueStatics)->TryParse(*(void**)(&input), impl::bind_out(contentRangeHeaderValue), &succeeded));
        return succeeded;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpCookiePairHeaderValue<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpCookiePairHeaderValue)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpCookiePairHeaderValue<D>::Value() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpCookiePairHeaderValue)->get_Value(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpCookiePairHeaderValue<D>::Value(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpCookiePairHeaderValue)->put_Value(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpCookiePairHeaderValueCollection<D>::ParseAdd(param::hstring const& input) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpCookiePairHeaderValueCollection)->ParseAdd(*(void**)(&input)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpCookiePairHeaderValueCollection<D>::TryParseAdd(param::hstring const& input) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpCookiePairHeaderValueCollection)->TryParseAdd(*(void**)(&input), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpCookiePairHeaderValueFactory<D>::CreateFromName(param::hstring const& name) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpCookiePairHeaderValueFactory)->CreateFromName(*(void**)(&name), &value));
        return Windows::Web::Http::Headers::HttpCookiePairHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpCookiePairHeaderValueFactory<D>::CreateFromNameWithValue(param::hstring const& name, param::hstring const& value) const
    {
        void* cookiePairHeaderValue{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpCookiePairHeaderValueFactory)->CreateFromNameWithValue(*(void**)(&name), *(void**)(&value), &cookiePairHeaderValue));
        return Windows::Web::Http::Headers::HttpCookiePairHeaderValue{ cookiePairHeaderValue, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpCookiePairHeaderValueStatics<D>::Parse(param::hstring const& input) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpCookiePairHeaderValueStatics)->Parse(*(void**)(&input), &result));
        return Windows::Web::Http::Headers::HttpCookiePairHeaderValue{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpCookiePairHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpCookiePairHeaderValue& cookiePairHeaderValue) const
    {
        bool succeeded;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpCookiePairHeaderValueStatics)->TryParse(*(void**)(&input), impl::bind_out(cookiePairHeaderValue), &succeeded));
        return succeeded;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpCredentialsHeaderValue<D>::Parameters() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpCredentialsHeaderValue)->get_Parameters(&value));
        return Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpCredentialsHeaderValue<D>::Scheme() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpCredentialsHeaderValue)->get_Scheme(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpCredentialsHeaderValue<D>::Token() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpCredentialsHeaderValue)->get_Token(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpCredentialsHeaderValueFactory<D>::CreateFromScheme(param::hstring const& scheme) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpCredentialsHeaderValueFactory)->CreateFromScheme(*(void**)(&scheme), &value));
        return Windows::Web::Http::Headers::HttpCredentialsHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpCredentialsHeaderValueFactory<D>::CreateFromSchemeWithToken(param::hstring const& scheme, param::hstring const& token) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpCredentialsHeaderValueFactory)->CreateFromSchemeWithToken(*(void**)(&scheme), *(void**)(&token), &value));
        return Windows::Web::Http::Headers::HttpCredentialsHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpCredentialsHeaderValueStatics<D>::Parse(param::hstring const& input) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpCredentialsHeaderValueStatics)->Parse(*(void**)(&input), &result));
        return Windows::Web::Http::Headers::HttpCredentialsHeaderValue{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpCredentialsHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpCredentialsHeaderValue& credentialsHeaderValue) const
    {
        bool succeeded;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpCredentialsHeaderValueStatics)->TryParse(*(void**)(&input), impl::bind_out(credentialsHeaderValue), &succeeded));
        return succeeded;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpDateOrDeltaHeaderValue<D>::Date() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValue)->get_Date(&value));
        return Windows::Foundation::IReference<Windows::Foundation::DateTime>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpDateOrDeltaHeaderValue<D>::Delta() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValue)->get_Delta(&value));
        return Windows::Foundation::IReference<Windows::Foundation::TimeSpan>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpDateOrDeltaHeaderValueStatics<D>::Parse(param::hstring const& input) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValueStatics)->Parse(*(void**)(&input), &result));
        return Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpDateOrDeltaHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue& dateOrDeltaHeaderValue) const
    {
        bool succeeded;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValueStatics)->TryParse(*(void**)(&input), impl::bind_out(dateOrDeltaHeaderValue), &succeeded));
        return succeeded;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValue<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpExpectationHeaderValue)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValue<D>::Value() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpExpectationHeaderValue)->get_Value(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValue<D>::Value(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpExpectationHeaderValue)->put_Value(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValue<D>::Parameters() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpExpectationHeaderValue)->get_Parameters(&value));
        return Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValueCollection<D>::ParseAdd(param::hstring const& input) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpExpectationHeaderValueCollection)->ParseAdd(*(void**)(&input)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValueCollection<D>::TryParseAdd(param::hstring const& input) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpExpectationHeaderValueCollection)->TryParseAdd(*(void**)(&input), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValueFactory<D>::CreateFromName(param::hstring const& name) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpExpectationHeaderValueFactory)->CreateFromName(*(void**)(&name), &value));
        return Windows::Web::Http::Headers::HttpExpectationHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValueFactory<D>::CreateFromNameWithValue(param::hstring const& name, param::hstring const& value) const
    {
        void* expectationHeaderValue{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpExpectationHeaderValueFactory)->CreateFromNameWithValue(*(void**)(&name), *(void**)(&value), &expectationHeaderValue));
        return Windows::Web::Http::Headers::HttpExpectationHeaderValue{ expectationHeaderValue, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValueStatics<D>::Parse(param::hstring const& input) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpExpectationHeaderValueStatics)->Parse(*(void**)(&input), &result));
        return Windows::Web::Http::Headers::HttpExpectationHeaderValue{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpExpectationHeaderValue& expectationHeaderValue) const
    {
        bool succeeded;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpExpectationHeaderValueStatics)->TryParse(*(void**)(&input), impl::bind_out(expectationHeaderValue), &succeeded));
        return succeeded;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpLanguageHeaderValueCollection<D>::ParseAdd(param::hstring const& input) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpLanguageHeaderValueCollection)->ParseAdd(*(void**)(&input)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpLanguageHeaderValueCollection<D>::TryParseAdd(param::hstring const& input) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpLanguageHeaderValueCollection)->TryParseAdd(*(void**)(&input), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValue<D>::LanguageRange() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValue)->get_LanguageRange(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValue<D>::Quality() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValue)->get_Quality(&value));
        return Windows::Foundation::IReference<double>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValueCollection<D>::ParseAdd(param::hstring const& input) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueCollection)->ParseAdd(*(void**)(&input)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValueCollection<D>::TryParseAdd(param::hstring const& input) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueCollection)->TryParseAdd(*(void**)(&input), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValueFactory<D>::CreateFromLanguageRange(param::hstring const& languageRange) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueFactory)->CreateFromLanguageRange(*(void**)(&languageRange), &value));
        return Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValueFactory<D>::CreateFromLanguageRangeWithQuality(param::hstring const& languageRange, double quality) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueFactory)->CreateFromLanguageRangeWithQuality(*(void**)(&languageRange), quality, &value));
        return Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValueStatics<D>::Parse(param::hstring const& input) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueStatics)->Parse(*(void**)(&input), &result));
        return Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue& languageRangeWithQualityHeaderValue) const
    {
        bool succeeded;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueStatics)->TryParse(*(void**)(&input), impl::bind_out(languageRangeWithQualityHeaderValue), &succeeded));
        return succeeded;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpMediaTypeHeaderValue<D>::CharSet() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue)->get_CharSet(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpMediaTypeHeaderValue<D>::CharSet(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue)->put_CharSet(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpMediaTypeHeaderValue<D>::MediaType() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue)->get_MediaType(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpMediaTypeHeaderValue<D>::MediaType(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue)->put_MediaType(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpMediaTypeHeaderValue<D>::Parameters() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue)->get_Parameters(&value));
        return Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpMediaTypeHeaderValueFactory<D>::Create(param::hstring const& mediaType) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueFactory)->Create(*(void**)(&mediaType), &value));
        return Windows::Web::Http::Headers::HttpMediaTypeHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpMediaTypeHeaderValueStatics<D>::Parse(param::hstring const& input) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueStatics)->Parse(*(void**)(&input), &result));
        return Windows::Web::Http::Headers::HttpMediaTypeHeaderValue{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpMediaTypeHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpMediaTypeHeaderValue& mediaTypeHeaderValue) const
    {
        bool succeeded;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueStatics)->TryParse(*(void**)(&input), impl::bind_out(mediaTypeHeaderValue), &succeeded));
        return succeeded;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValue<D>::CharSet() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue)->get_CharSet(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValue<D>::CharSet(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue)->put_CharSet(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValue<D>::MediaType() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue)->get_MediaType(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValue<D>::MediaType(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue)->put_MediaType(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValue<D>::Parameters() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue)->get_Parameters(&value));
        return Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValue<D>::Quality() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue)->get_Quality(&value));
        return Windows::Foundation::IReference<double>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValue<D>::Quality(Windows::Foundation::IReference<double> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue)->put_Quality(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValueCollection<D>::ParseAdd(param::hstring const& input) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueCollection)->ParseAdd(*(void**)(&input)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValueCollection<D>::TryParseAdd(param::hstring const& input) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueCollection)->TryParseAdd(*(void**)(&input), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValueFactory<D>::CreateFromMediaType(param::hstring const& mediaType) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueFactory)->CreateFromMediaType(*(void**)(&mediaType), &value));
        return Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValueFactory<D>::CreateFromMediaTypeWithQuality(param::hstring const& mediaType, double quality) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueFactory)->CreateFromMediaTypeWithQuality(*(void**)(&mediaType), quality, &value));
        return Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValueStatics<D>::Parse(param::hstring const& input) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueStatics)->Parse(*(void**)(&input), &result));
        return Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue& mediaTypeWithQualityHeaderValue) const
    {
        bool succeeded;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueStatics)->TryParse(*(void**)(&input), impl::bind_out(mediaTypeWithQualityHeaderValue), &succeeded));
        return succeeded;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpMethodHeaderValueCollection<D>::ParseAdd(param::hstring const& input) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpMethodHeaderValueCollection)->ParseAdd(*(void**)(&input)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpMethodHeaderValueCollection<D>::TryParseAdd(param::hstring const& input) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpMethodHeaderValueCollection)->TryParseAdd(*(void**)(&input), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpNameValueHeaderValue<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpNameValueHeaderValue)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpNameValueHeaderValue<D>::Value() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpNameValueHeaderValue)->get_Value(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpNameValueHeaderValue<D>::Value(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpNameValueHeaderValue)->put_Value(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpNameValueHeaderValueFactory<D>::CreateFromName(param::hstring const& name) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpNameValueHeaderValueFactory)->CreateFromName(*(void**)(&name), &value));
        return Windows::Web::Http::Headers::HttpNameValueHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpNameValueHeaderValueFactory<D>::CreateFromNameWithValue(param::hstring const& name, param::hstring const& value) const
    {
        void* nameValueHeaderValue{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpNameValueHeaderValueFactory)->CreateFromNameWithValue(*(void**)(&name), *(void**)(&value), &nameValueHeaderValue));
        return Windows::Web::Http::Headers::HttpNameValueHeaderValue{ nameValueHeaderValue, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpNameValueHeaderValueStatics<D>::Parse(param::hstring const& input) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpNameValueHeaderValueStatics)->Parse(*(void**)(&input), &result));
        return Windows::Web::Http::Headers::HttpNameValueHeaderValue{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpNameValueHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpNameValueHeaderValue& nameValueHeaderValue) const
    {
        bool succeeded;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpNameValueHeaderValueStatics)->TryParse(*(void**)(&input), impl::bind_out(nameValueHeaderValue), &succeeded));
        return succeeded;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpProductHeaderValue<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpProductHeaderValue)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpProductHeaderValue<D>::Version() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpProductHeaderValue)->get_Version(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpProductHeaderValueFactory<D>::CreateFromName(param::hstring const& productName) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpProductHeaderValueFactory)->CreateFromName(*(void**)(&productName), &value));
        return Windows::Web::Http::Headers::HttpProductHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpProductHeaderValueFactory<D>::CreateFromNameWithVersion(param::hstring const& productName, param::hstring const& productVersion) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpProductHeaderValueFactory)->CreateFromNameWithVersion(*(void**)(&productName), *(void**)(&productVersion), &value));
        return Windows::Web::Http::Headers::HttpProductHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpProductHeaderValueStatics<D>::Parse(param::hstring const& input) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpProductHeaderValueStatics)->Parse(*(void**)(&input), &result));
        return Windows::Web::Http::Headers::HttpProductHeaderValue{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpProductHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpProductHeaderValue& productHeaderValue) const
    {
        bool succeeded;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpProductHeaderValueStatics)->TryParse(*(void**)(&input), impl::bind_out(productHeaderValue), &succeeded));
        return succeeded;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpProductInfoHeaderValue<D>::Product() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpProductInfoHeaderValue)->get_Product(&value));
        return Windows::Web::Http::Headers::HttpProductHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpProductInfoHeaderValue<D>::Comment() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpProductInfoHeaderValue)->get_Comment(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpProductInfoHeaderValueCollection<D>::ParseAdd(param::hstring const& input) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpProductInfoHeaderValueCollection)->ParseAdd(*(void**)(&input)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpProductInfoHeaderValueCollection<D>::TryParseAdd(param::hstring const& input) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpProductInfoHeaderValueCollection)->TryParseAdd(*(void**)(&input), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpProductInfoHeaderValueFactory<D>::CreateFromComment(param::hstring const& productComment) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpProductInfoHeaderValueFactory)->CreateFromComment(*(void**)(&productComment), &value));
        return Windows::Web::Http::Headers::HttpProductInfoHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpProductInfoHeaderValueFactory<D>::CreateFromNameWithVersion(param::hstring const& productName, param::hstring const& productVersion) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpProductInfoHeaderValueFactory)->CreateFromNameWithVersion(*(void**)(&productName), *(void**)(&productVersion), &value));
        return Windows::Web::Http::Headers::HttpProductInfoHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpProductInfoHeaderValueStatics<D>::Parse(param::hstring const& input) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpProductInfoHeaderValueStatics)->Parse(*(void**)(&input), &result));
        return Windows::Web::Http::Headers::HttpProductInfoHeaderValue{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpProductInfoHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpProductInfoHeaderValue& productInfoHeaderValue) const
    {
        bool succeeded;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpProductInfoHeaderValueStatics)->TryParse(*(void**)(&input), impl::bind_out(productInfoHeaderValue), &succeeded));
        return succeeded;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::Accept() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_Accept(&value));
        return Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValueCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::AcceptEncoding() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_AcceptEncoding(&value));
        return Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValueCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::AcceptLanguage() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_AcceptLanguage(&value));
        return Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValueCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::Authorization() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_Authorization(&value));
        return Windows::Web::Http::Headers::HttpCredentialsHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::Authorization(Windows::Web::Http::Headers::HttpCredentialsHeaderValue const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->put_Authorization(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::CacheControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_CacheControl(&value));
        return Windows::Web::Http::Headers::HttpCacheDirectiveHeaderValueCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::Connection() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_Connection(&value));
        return Windows::Web::Http::Headers::HttpConnectionOptionHeaderValueCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::Cookie() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_Cookie(&value));
        return Windows::Web::Http::Headers::HttpCookiePairHeaderValueCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::Date() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_Date(&value));
        return Windows::Foundation::IReference<Windows::Foundation::DateTime>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::Date(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->put_Date(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::Expect() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_Expect(&value));
        return Windows::Web::Http::Headers::HttpExpectationHeaderValueCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::From() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_From(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::From(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->put_From(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::Host() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_Host(&value));
        return Windows::Networking::HostName{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::Host(Windows::Networking::HostName const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->put_Host(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::IfModifiedSince() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_IfModifiedSince(&value));
        return Windows::Foundation::IReference<Windows::Foundation::DateTime>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::IfModifiedSince(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->put_IfModifiedSince(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::IfUnmodifiedSince() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_IfUnmodifiedSince(&value));
        return Windows::Foundation::IReference<Windows::Foundation::DateTime>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::IfUnmodifiedSince(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->put_IfUnmodifiedSince(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::MaxForwards() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_MaxForwards(&value));
        return Windows::Foundation::IReference<uint32_t>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::MaxForwards(Windows::Foundation::IReference<uint32_t> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->put_MaxForwards(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::ProxyAuthorization() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_ProxyAuthorization(&value));
        return Windows::Web::Http::Headers::HttpCredentialsHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::ProxyAuthorization(Windows::Web::Http::Headers::HttpCredentialsHeaderValue const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->put_ProxyAuthorization(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::Referer() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_Referer(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::Referer(Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->put_Referer(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::TransferEncoding() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_TransferEncoding(&value));
        return Windows::Web::Http::Headers::HttpTransferCodingHeaderValueCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::UserAgent() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_UserAgent(&value));
        return Windows::Web::Http::Headers::HttpProductInfoHeaderValueCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::Append(param::hstring const& name, param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->Append(*(void**)(&name), *(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::TryAppendWithoutValidation(param::hstring const& name, param::hstring const& value) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->TryAppendWithoutValidation(*(void**)(&name), *(void**)(&value), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::Age() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->get_Age(&value));
        return Windows::Foundation::IReference<Windows::Foundation::TimeSpan>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::Age(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->put_Age(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::Allow() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->get_Allow(&value));
        return Windows::Web::Http::Headers::HttpMethodHeaderValueCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::CacheControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->get_CacheControl(&value));
        return Windows::Web::Http::Headers::HttpCacheDirectiveHeaderValueCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::Connection() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->get_Connection(&value));
        return Windows::Web::Http::Headers::HttpConnectionOptionHeaderValueCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::Date() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->get_Date(&value));
        return Windows::Foundation::IReference<Windows::Foundation::DateTime>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::Date(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->put_Date(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::Location() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->get_Location(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::Location(Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->put_Location(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::ProxyAuthenticate() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->get_ProxyAuthenticate(&value));
        return Windows::Web::Http::Headers::HttpChallengeHeaderValueCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::RetryAfter() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->get_RetryAfter(&value));
        return Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::RetryAfter(Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->put_RetryAfter(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::TransferEncoding() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->get_TransferEncoding(&value));
        return Windows::Web::Http::Headers::HttpTransferCodingHeaderValueCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::WwwAuthenticate() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->get_WwwAuthenticate(&value));
        return Windows::Web::Http::Headers::HttpChallengeHeaderValueCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::Append(param::hstring const& name, param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->Append(*(void**)(&name), *(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::TryAppendWithoutValidation(param::hstring const& name, param::hstring const& value) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->TryAppendWithoutValidation(*(void**)(&name), *(void**)(&value), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpTransferCodingHeaderValue<D>::Parameters() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpTransferCodingHeaderValue)->get_Parameters(&value));
        return Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpTransferCodingHeaderValue<D>::Value() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpTransferCodingHeaderValue)->get_Value(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpTransferCodingHeaderValueCollection<D>::ParseAdd(param::hstring const& input) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueCollection)->ParseAdd(*(void**)(&input)));
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpTransferCodingHeaderValueCollection<D>::TryParseAdd(param::hstring const& input) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueCollection)->TryParseAdd(*(void**)(&input), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpTransferCodingHeaderValueFactory<D>::Create(param::hstring const& input) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueFactory)->Create(*(void**)(&input), &value));
        return Windows::Web::Http::Headers::HttpTransferCodingHeaderValue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpTransferCodingHeaderValueStatics<D>::Parse(param::hstring const& input) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueStatics)->Parse(*(void**)(&input), &result));
        return Windows::Web::Http::Headers::HttpTransferCodingHeaderValue{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Headers_IHttpTransferCodingHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpTransferCodingHeaderValue& transferCodingHeaderValue) const
    {
        bool succeeded;
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueStatics)->TryParse(*(void**)(&input), impl::bind_out(transferCodingHeaderValue), &succeeded));
        return succeeded;
    }
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection>
    {
        int32_t __stdcall get_MaxAge(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>>(this->shim().MaxAge());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MaxAge(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxAge(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxStale(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>>(this->shim().MaxStale());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MaxStale(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxStale(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MinFresh(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>>(this->shim().MinFresh());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MinFresh(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MinFresh(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SharedMaxAge(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>>(this->shim().SharedMaxAge());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SharedMaxAge(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SharedMaxAge(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ParseAdd(void* input) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParseAdd(*reinterpret_cast<hstring const*>(&input));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParseAdd(void* input, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryParseAdd(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpChallengeHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpChallengeHeaderValue>
    {
        int32_t __stdcall get_Parameters(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>>(this->shim().Parameters());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Scheme(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Scheme());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Token(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Token());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpChallengeHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpChallengeHeaderValueCollection>
    {
        int32_t __stdcall ParseAdd(void* input) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParseAdd(*reinterpret_cast<hstring const*>(&input));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParseAdd(void* input, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryParseAdd(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpChallengeHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpChallengeHeaderValueFactory>
    {
        int32_t __stdcall CreateFromScheme(void* scheme, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpChallengeHeaderValue>(this->shim().CreateFromScheme(*reinterpret_cast<hstring const*>(&scheme)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromSchemeWithToken(void* scheme, void* token, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpChallengeHeaderValue>(this->shim().CreateFromSchemeWithToken(*reinterpret_cast<hstring const*>(&scheme), *reinterpret_cast<hstring const*>(&token)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpChallengeHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpChallengeHeaderValueStatics>
    {
        int32_t __stdcall Parse(void* input, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Web::Http::Headers::HttpChallengeHeaderValue>(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParse(void* input, void** challengeHeaderValue, bool* succeeded) noexcept final try
        {
            clear_abi(challengeHeaderValue);
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpChallengeHeaderValue*>(challengeHeaderValue)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValue>
    {
        int32_t __stdcall get_Token(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Token());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueCollection>
    {
        int32_t __stdcall ParseAdd(void* input) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParseAdd(*reinterpret_cast<hstring const*>(&input));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParseAdd(void* input, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryParseAdd(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueFactory>
    {
        int32_t __stdcall Create(void* token, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue>(this->shim().Create(*reinterpret_cast<hstring const*>(&token)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueStatics>
    {
        int32_t __stdcall Parse(void* input, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue>(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParse(void* input, void** connectionOptionHeaderValue, bool* succeeded) noexcept final try
        {
            clear_abi(connectionOptionHeaderValue);
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue*>(connectionOptionHeaderValue)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpContentCodingHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpContentCodingHeaderValue>
    {
        int32_t __stdcall get_ContentCoding(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ContentCoding());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpContentCodingHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpContentCodingHeaderValueCollection>
    {
        int32_t __stdcall ParseAdd(void* input) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParseAdd(*reinterpret_cast<hstring const*>(&input));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParseAdd(void* input, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryParseAdd(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpContentCodingHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpContentCodingHeaderValueFactory>
    {
        int32_t __stdcall Create(void* contentCoding, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpContentCodingHeaderValue>(this->shim().Create(*reinterpret_cast<hstring const*>(&contentCoding)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpContentCodingHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpContentCodingHeaderValueStatics>
    {
        int32_t __stdcall Parse(void* input, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Web::Http::Headers::HttpContentCodingHeaderValue>(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParse(void* input, void** contentCodingHeaderValue, bool* succeeded) noexcept final try
        {
            clear_abi(contentCodingHeaderValue);
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpContentCodingHeaderValue*>(contentCodingHeaderValue)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValue>
    {
        int32_t __stdcall get_ContentCoding(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ContentCoding());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Quality(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<double>>(this->shim().Quality());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueCollection>
    {
        int32_t __stdcall ParseAdd(void* input) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParseAdd(*reinterpret_cast<hstring const*>(&input));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParseAdd(void* input, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryParseAdd(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueFactory>
    {
        int32_t __stdcall CreateFromValue(void* contentCoding, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue>(this->shim().CreateFromValue(*reinterpret_cast<hstring const*>(&contentCoding)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromValueWithQuality(void* contentCoding, double quality, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue>(this->shim().CreateFromValueWithQuality(*reinterpret_cast<hstring const*>(&contentCoding), quality));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueStatics>
    {
        int32_t __stdcall Parse(void* input, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue>(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParse(void* input, void** contentCodingWithQualityHeaderValue, bool* succeeded) noexcept final try
        {
            clear_abi(contentCodingWithQualityHeaderValue);
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue*>(contentCodingWithQualityHeaderValue)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue>
    {
        int32_t __stdcall get_DispositionType(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DispositionType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DispositionType(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DispositionType(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FileName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FileName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_FileName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FileName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FileNameStar(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FileNameStar());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_FileNameStar(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FileNameStar(*reinterpret_cast<hstring const*>(&value));
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
        int32_t __stdcall put_Name(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Parameters(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>>(this->shim().Parameters());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Size(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint64_t>>(this->shim().Size());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Size(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Size(*reinterpret_cast<Windows::Foundation::IReference<uint64_t> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueFactory>
    {
        int32_t __stdcall Create(void* dispositionType, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpContentDispositionHeaderValue>(this->shim().Create(*reinterpret_cast<hstring const*>(&dispositionType)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueStatics>
    {
        int32_t __stdcall Parse(void* input, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Web::Http::Headers::HttpContentDispositionHeaderValue>(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParse(void* input, void** contentDispositionHeaderValue, bool* succeeded) noexcept final try
        {
            clear_abi(contentDispositionHeaderValue);
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpContentDispositionHeaderValue*>(contentDispositionHeaderValue)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpContentHeaderCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpContentHeaderCollection>
    {
        int32_t __stdcall get_ContentDisposition(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpContentDispositionHeaderValue>(this->shim().ContentDisposition());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ContentDisposition(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentDisposition(*reinterpret_cast<Windows::Web::Http::Headers::HttpContentDispositionHeaderValue const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ContentEncoding(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpContentCodingHeaderValueCollection>(this->shim().ContentEncoding());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ContentLanguage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpLanguageHeaderValueCollection>(this->shim().ContentLanguage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ContentLength(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint64_t>>(this->shim().ContentLength());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ContentLength(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentLength(*reinterpret_cast<Windows::Foundation::IReference<uint64_t> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ContentLocation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().ContentLocation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ContentLocation(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentLocation(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ContentMD5(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().ContentMD5());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ContentMD5(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentMD5(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ContentRange(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpContentRangeHeaderValue>(this->shim().ContentRange());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ContentRange(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentRange(*reinterpret_cast<Windows::Web::Http::Headers::HttpContentRangeHeaderValue const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ContentType(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpMediaTypeHeaderValue>(this->shim().ContentType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ContentType(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentType(*reinterpret_cast<Windows::Web::Http::Headers::HttpMediaTypeHeaderValue const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Expires(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::DateTime>>(this->shim().Expires());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Expires(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Expires(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LastModified(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::DateTime>>(this->shim().LastModified());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_LastModified(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LastModified(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Append(void* name, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Append(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryAppendWithoutValidation(void* name, void* value, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryAppendWithoutValidation(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpContentRangeHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpContentRangeHeaderValue>
    {
        int32_t __stdcall get_FirstBytePosition(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint64_t>>(this->shim().FirstBytePosition());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LastBytePosition(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint64_t>>(this->shim().LastBytePosition());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Length(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint64_t>>(this->shim().Length());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Unit(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Unit());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Unit(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Unit(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpContentRangeHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpContentRangeHeaderValueFactory>
    {
        int32_t __stdcall CreateFromLength(uint64_t length, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpContentRangeHeaderValue>(this->shim().CreateFromLength(length));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromRange(uint64_t from, uint64_t to, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpContentRangeHeaderValue>(this->shim().CreateFromRange(from, to));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromRangeWithLength(uint64_t from, uint64_t to, uint64_t length, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpContentRangeHeaderValue>(this->shim().CreateFromRangeWithLength(from, to, length));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpContentRangeHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpContentRangeHeaderValueStatics>
    {
        int32_t __stdcall Parse(void* input, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Web::Http::Headers::HttpContentRangeHeaderValue>(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParse(void* input, void** contentRangeHeaderValue, bool* succeeded) noexcept final try
        {
            clear_abi(contentRangeHeaderValue);
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpContentRangeHeaderValue*>(contentRangeHeaderValue)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpCookiePairHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpCookiePairHeaderValue>
    {
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Value(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpCookiePairHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpCookiePairHeaderValueCollection>
    {
        int32_t __stdcall ParseAdd(void* input) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParseAdd(*reinterpret_cast<hstring const*>(&input));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParseAdd(void* input, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryParseAdd(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpCookiePairHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpCookiePairHeaderValueFactory>
    {
        int32_t __stdcall CreateFromName(void* name, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpCookiePairHeaderValue>(this->shim().CreateFromName(*reinterpret_cast<hstring const*>(&name)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromNameWithValue(void* name, void* value, void** cookiePairHeaderValue) noexcept final try
        {
            clear_abi(cookiePairHeaderValue);
            typename D::abi_guard guard(this->shim());
            *cookiePairHeaderValue = detach_from<Windows::Web::Http::Headers::HttpCookiePairHeaderValue>(this->shim().CreateFromNameWithValue(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpCookiePairHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpCookiePairHeaderValueStatics>
    {
        int32_t __stdcall Parse(void* input, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Web::Http::Headers::HttpCookiePairHeaderValue>(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParse(void* input, void** cookiePairHeaderValue, bool* succeeded) noexcept final try
        {
            clear_abi(cookiePairHeaderValue);
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpCookiePairHeaderValue*>(cookiePairHeaderValue)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpCredentialsHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpCredentialsHeaderValue>
    {
        int32_t __stdcall get_Parameters(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>>(this->shim().Parameters());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Scheme(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Scheme());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Token(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Token());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpCredentialsHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpCredentialsHeaderValueFactory>
    {
        int32_t __stdcall CreateFromScheme(void* scheme, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpCredentialsHeaderValue>(this->shim().CreateFromScheme(*reinterpret_cast<hstring const*>(&scheme)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromSchemeWithToken(void* scheme, void* token, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpCredentialsHeaderValue>(this->shim().CreateFromSchemeWithToken(*reinterpret_cast<hstring const*>(&scheme), *reinterpret_cast<hstring const*>(&token)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpCredentialsHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpCredentialsHeaderValueStatics>
    {
        int32_t __stdcall Parse(void* input, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Web::Http::Headers::HttpCredentialsHeaderValue>(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParse(void* input, void** credentialsHeaderValue, bool* succeeded) noexcept final try
        {
            clear_abi(credentialsHeaderValue);
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpCredentialsHeaderValue*>(credentialsHeaderValue)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValue>
    {
        int32_t __stdcall get_Date(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::DateTime>>(this->shim().Date());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Delta(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>>(this->shim().Delta());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValueStatics>
    {
        int32_t __stdcall Parse(void* input, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue>(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParse(void* input, void** dateOrDeltaHeaderValue, bool* succeeded) noexcept final try
        {
            clear_abi(dateOrDeltaHeaderValue);
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue*>(dateOrDeltaHeaderValue)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpExpectationHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpExpectationHeaderValue>
    {
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Value(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Parameters(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>>(this->shim().Parameters());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpExpectationHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpExpectationHeaderValueCollection>
    {
        int32_t __stdcall ParseAdd(void* input) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParseAdd(*reinterpret_cast<hstring const*>(&input));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParseAdd(void* input, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryParseAdd(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpExpectationHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpExpectationHeaderValueFactory>
    {
        int32_t __stdcall CreateFromName(void* name, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpExpectationHeaderValue>(this->shim().CreateFromName(*reinterpret_cast<hstring const*>(&name)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromNameWithValue(void* name, void* value, void** expectationHeaderValue) noexcept final try
        {
            clear_abi(expectationHeaderValue);
            typename D::abi_guard guard(this->shim());
            *expectationHeaderValue = detach_from<Windows::Web::Http::Headers::HttpExpectationHeaderValue>(this->shim().CreateFromNameWithValue(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpExpectationHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpExpectationHeaderValueStatics>
    {
        int32_t __stdcall Parse(void* input, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Web::Http::Headers::HttpExpectationHeaderValue>(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParse(void* input, void** expectationHeaderValue, bool* succeeded) noexcept final try
        {
            clear_abi(expectationHeaderValue);
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpExpectationHeaderValue*>(expectationHeaderValue)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpLanguageHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpLanguageHeaderValueCollection>
    {
        int32_t __stdcall ParseAdd(void* input) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParseAdd(*reinterpret_cast<hstring const*>(&input));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParseAdd(void* input, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryParseAdd(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValue>
    {
        int32_t __stdcall get_LanguageRange(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().LanguageRange());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Quality(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<double>>(this->shim().Quality());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueCollection>
    {
        int32_t __stdcall ParseAdd(void* input) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParseAdd(*reinterpret_cast<hstring const*>(&input));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParseAdd(void* input, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryParseAdd(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueFactory>
    {
        int32_t __stdcall CreateFromLanguageRange(void* languageRange, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue>(this->shim().CreateFromLanguageRange(*reinterpret_cast<hstring const*>(&languageRange)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromLanguageRangeWithQuality(void* languageRange, double quality, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue>(this->shim().CreateFromLanguageRangeWithQuality(*reinterpret_cast<hstring const*>(&languageRange), quality));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueStatics>
    {
        int32_t __stdcall Parse(void* input, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue>(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParse(void* input, void** languageRangeWithQualityHeaderValue, bool* succeeded) noexcept final try
        {
            clear_abi(languageRangeWithQualityHeaderValue);
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue*>(languageRangeWithQualityHeaderValue)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue>
    {
        int32_t __stdcall get_CharSet(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CharSet());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CharSet(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CharSet(*reinterpret_cast<hstring const*>(&value));
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
        int32_t __stdcall put_MediaType(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MediaType(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Parameters(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>>(this->shim().Parameters());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueFactory>
    {
        int32_t __stdcall Create(void* mediaType, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpMediaTypeHeaderValue>(this->shim().Create(*reinterpret_cast<hstring const*>(&mediaType)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueStatics>
    {
        int32_t __stdcall Parse(void* input, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Web::Http::Headers::HttpMediaTypeHeaderValue>(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParse(void* input, void** mediaTypeHeaderValue, bool* succeeded) noexcept final try
        {
            clear_abi(mediaTypeHeaderValue);
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpMediaTypeHeaderValue*>(mediaTypeHeaderValue)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue>
    {
        int32_t __stdcall get_CharSet(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CharSet());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CharSet(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CharSet(*reinterpret_cast<hstring const*>(&value));
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
        int32_t __stdcall put_MediaType(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MediaType(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Parameters(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>>(this->shim().Parameters());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Quality(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<double>>(this->shim().Quality());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Quality(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Quality(*reinterpret_cast<Windows::Foundation::IReference<double> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueCollection>
    {
        int32_t __stdcall ParseAdd(void* input) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParseAdd(*reinterpret_cast<hstring const*>(&input));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParseAdd(void* input, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryParseAdd(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueFactory>
    {
        int32_t __stdcall CreateFromMediaType(void* mediaType, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue>(this->shim().CreateFromMediaType(*reinterpret_cast<hstring const*>(&mediaType)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromMediaTypeWithQuality(void* mediaType, double quality, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue>(this->shim().CreateFromMediaTypeWithQuality(*reinterpret_cast<hstring const*>(&mediaType), quality));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueStatics>
    {
        int32_t __stdcall Parse(void* input, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue>(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParse(void* input, void** mediaTypeWithQualityHeaderValue, bool* succeeded) noexcept final try
        {
            clear_abi(mediaTypeWithQualityHeaderValue);
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue*>(mediaTypeWithQualityHeaderValue)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpMethodHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpMethodHeaderValueCollection>
    {
        int32_t __stdcall ParseAdd(void* input) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParseAdd(*reinterpret_cast<hstring const*>(&input));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParseAdd(void* input, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryParseAdd(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpNameValueHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpNameValueHeaderValue>
    {
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Value(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpNameValueHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpNameValueHeaderValueFactory>
    {
        int32_t __stdcall CreateFromName(void* name, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpNameValueHeaderValue>(this->shim().CreateFromName(*reinterpret_cast<hstring const*>(&name)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromNameWithValue(void* name, void* value, void** nameValueHeaderValue) noexcept final try
        {
            clear_abi(nameValueHeaderValue);
            typename D::abi_guard guard(this->shim());
            *nameValueHeaderValue = detach_from<Windows::Web::Http::Headers::HttpNameValueHeaderValue>(this->shim().CreateFromNameWithValue(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpNameValueHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpNameValueHeaderValueStatics>
    {
        int32_t __stdcall Parse(void* input, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Web::Http::Headers::HttpNameValueHeaderValue>(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParse(void* input, void** nameValueHeaderValue, bool* succeeded) noexcept final try
        {
            clear_abi(nameValueHeaderValue);
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpNameValueHeaderValue*>(nameValueHeaderValue)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpProductHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpProductHeaderValue>
    {
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Version(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Version());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpProductHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpProductHeaderValueFactory>
    {
        int32_t __stdcall CreateFromName(void* productName, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpProductHeaderValue>(this->shim().CreateFromName(*reinterpret_cast<hstring const*>(&productName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromNameWithVersion(void* productName, void* productVersion, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpProductHeaderValue>(this->shim().CreateFromNameWithVersion(*reinterpret_cast<hstring const*>(&productName), *reinterpret_cast<hstring const*>(&productVersion)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpProductHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpProductHeaderValueStatics>
    {
        int32_t __stdcall Parse(void* input, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Web::Http::Headers::HttpProductHeaderValue>(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParse(void* input, void** productHeaderValue, bool* succeeded) noexcept final try
        {
            clear_abi(productHeaderValue);
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpProductHeaderValue*>(productHeaderValue)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpProductInfoHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpProductInfoHeaderValue>
    {
        int32_t __stdcall get_Product(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpProductHeaderValue>(this->shim().Product());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Comment(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Comment());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpProductInfoHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpProductInfoHeaderValueCollection>
    {
        int32_t __stdcall ParseAdd(void* input) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParseAdd(*reinterpret_cast<hstring const*>(&input));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParseAdd(void* input, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryParseAdd(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpProductInfoHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpProductInfoHeaderValueFactory>
    {
        int32_t __stdcall CreateFromComment(void* productComment, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpProductInfoHeaderValue>(this->shim().CreateFromComment(*reinterpret_cast<hstring const*>(&productComment)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromNameWithVersion(void* productName, void* productVersion, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpProductInfoHeaderValue>(this->shim().CreateFromNameWithVersion(*reinterpret_cast<hstring const*>(&productName), *reinterpret_cast<hstring const*>(&productVersion)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpProductInfoHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpProductInfoHeaderValueStatics>
    {
        int32_t __stdcall Parse(void* input, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Web::Http::Headers::HttpProductInfoHeaderValue>(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParse(void* input, void** productInfoHeaderValue, bool* succeeded) noexcept final try
        {
            clear_abi(productInfoHeaderValue);
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpProductInfoHeaderValue*>(productInfoHeaderValue)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpRequestHeaderCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpRequestHeaderCollection>
    {
        int32_t __stdcall get_Accept(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValueCollection>(this->shim().Accept());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AcceptEncoding(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValueCollection>(this->shim().AcceptEncoding());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AcceptLanguage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValueCollection>(this->shim().AcceptLanguage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Authorization(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpCredentialsHeaderValue>(this->shim().Authorization());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Authorization(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Authorization(*reinterpret_cast<Windows::Web::Http::Headers::HttpCredentialsHeaderValue const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CacheControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpCacheDirectiveHeaderValueCollection>(this->shim().CacheControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Connection(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpConnectionOptionHeaderValueCollection>(this->shim().Connection());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Cookie(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpCookiePairHeaderValueCollection>(this->shim().Cookie());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Date(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::DateTime>>(this->shim().Date());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Date(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Date(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Expect(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpExpectationHeaderValueCollection>(this->shim().Expect());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_From(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().From());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_From(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().From(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Host(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::HostName>(this->shim().Host());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Host(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Host(*reinterpret_cast<Windows::Networking::HostName const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IfModifiedSince(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::DateTime>>(this->shim().IfModifiedSince());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IfModifiedSince(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IfModifiedSince(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IfUnmodifiedSince(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::DateTime>>(this->shim().IfUnmodifiedSince());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IfUnmodifiedSince(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IfUnmodifiedSince(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxForwards(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint32_t>>(this->shim().MaxForwards());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MaxForwards(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxForwards(*reinterpret_cast<Windows::Foundation::IReference<uint32_t> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProxyAuthorization(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpCredentialsHeaderValue>(this->shim().ProxyAuthorization());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ProxyAuthorization(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProxyAuthorization(*reinterpret_cast<Windows::Web::Http::Headers::HttpCredentialsHeaderValue const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Referer(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Referer());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Referer(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Referer(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TransferEncoding(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpTransferCodingHeaderValueCollection>(this->shim().TransferEncoding());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UserAgent(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpProductInfoHeaderValueCollection>(this->shim().UserAgent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Append(void* name, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Append(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryAppendWithoutValidation(void* name, void* value, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryAppendWithoutValidation(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpResponseHeaderCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpResponseHeaderCollection>
    {
        int32_t __stdcall get_Age(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>>(this->shim().Age());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Age(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Age(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Allow(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpMethodHeaderValueCollection>(this->shim().Allow());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CacheControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpCacheDirectiveHeaderValueCollection>(this->shim().CacheControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Connection(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpConnectionOptionHeaderValueCollection>(this->shim().Connection());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Date(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::DateTime>>(this->shim().Date());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Date(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Date(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Location(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Location());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Location(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Location(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProxyAuthenticate(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpChallengeHeaderValueCollection>(this->shim().ProxyAuthenticate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RetryAfter(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue>(this->shim().RetryAfter());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RetryAfter(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RetryAfter(*reinterpret_cast<Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TransferEncoding(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpTransferCodingHeaderValueCollection>(this->shim().TransferEncoding());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WwwAuthenticate(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpChallengeHeaderValueCollection>(this->shim().WwwAuthenticate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Append(void* name, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Append(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryAppendWithoutValidation(void* name, void* value, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryAppendWithoutValidation(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpTransferCodingHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpTransferCodingHeaderValue>
    {
        int32_t __stdcall get_Parameters(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>>(this->shim().Parameters());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueCollection>
    {
        int32_t __stdcall ParseAdd(void* input) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParseAdd(*reinterpret_cast<hstring const*>(&input));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParseAdd(void* input, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryParseAdd(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueFactory>
    {
        int32_t __stdcall Create(void* input, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Headers::HttpTransferCodingHeaderValue>(this->shim().Create(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueStatics>
    {
        int32_t __stdcall Parse(void* input, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Web::Http::Headers::HttpTransferCodingHeaderValue>(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParse(void* input, void** transferCodingHeaderValue, bool* succeeded) noexcept final try
        {
            clear_abi(transferCodingHeaderValue);
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpTransferCodingHeaderValue*>(transferCodingHeaderValue)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Web::Http::Headers
{
    inline HttpChallengeHeaderValue::HttpChallengeHeaderValue(param::hstring const& scheme) :
        HttpChallengeHeaderValue(impl::call_factory<HttpChallengeHeaderValue, Windows::Web::Http::Headers::IHttpChallengeHeaderValueFactory>([&](auto&& f) { return f.CreateFromScheme(scheme); }))
    {
    }
    inline HttpChallengeHeaderValue::HttpChallengeHeaderValue(param::hstring const& scheme, param::hstring const& token) :
        HttpChallengeHeaderValue(impl::call_factory<HttpChallengeHeaderValue, Windows::Web::Http::Headers::IHttpChallengeHeaderValueFactory>([&](auto&& f) { return f.CreateFromSchemeWithToken(scheme, token); }))
    {
    }
    inline auto HttpChallengeHeaderValue::Parse(param::hstring const& input)
    {
        return impl::call_factory<HttpChallengeHeaderValue, Windows::Web::Http::Headers::IHttpChallengeHeaderValueStatics>([&](auto&& f) { return f.Parse(input); });
    }
    inline auto HttpChallengeHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpChallengeHeaderValue& challengeHeaderValue)
    {
        return impl::call_factory<HttpChallengeHeaderValue, Windows::Web::Http::Headers::IHttpChallengeHeaderValueStatics>([&](auto&& f) { return f.TryParse(input, challengeHeaderValue); });
    }
    inline HttpConnectionOptionHeaderValue::HttpConnectionOptionHeaderValue(param::hstring const& token) :
        HttpConnectionOptionHeaderValue(impl::call_factory<HttpConnectionOptionHeaderValue, Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueFactory>([&](auto&& f) { return f.Create(token); }))
    {
    }
    inline auto HttpConnectionOptionHeaderValue::Parse(param::hstring const& input)
    {
        return impl::call_factory<HttpConnectionOptionHeaderValue, Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueStatics>([&](auto&& f) { return f.Parse(input); });
    }
    inline auto HttpConnectionOptionHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue& connectionOptionHeaderValue)
    {
        return impl::call_factory<HttpConnectionOptionHeaderValue, Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueStatics>([&](auto&& f) { return f.TryParse(input, connectionOptionHeaderValue); });
    }
    inline HttpContentCodingHeaderValue::HttpContentCodingHeaderValue(param::hstring const& contentCoding) :
        HttpContentCodingHeaderValue(impl::call_factory<HttpContentCodingHeaderValue, Windows::Web::Http::Headers::IHttpContentCodingHeaderValueFactory>([&](auto&& f) { return f.Create(contentCoding); }))
    {
    }
    inline auto HttpContentCodingHeaderValue::Parse(param::hstring const& input)
    {
        return impl::call_factory<HttpContentCodingHeaderValue, Windows::Web::Http::Headers::IHttpContentCodingHeaderValueStatics>([&](auto&& f) { return f.Parse(input); });
    }
    inline auto HttpContentCodingHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentCodingHeaderValue& contentCodingHeaderValue)
    {
        return impl::call_factory<HttpContentCodingHeaderValue, Windows::Web::Http::Headers::IHttpContentCodingHeaderValueStatics>([&](auto&& f) { return f.TryParse(input, contentCodingHeaderValue); });
    }
    inline HttpContentCodingWithQualityHeaderValue::HttpContentCodingWithQualityHeaderValue(param::hstring const& contentCoding) :
        HttpContentCodingWithQualityHeaderValue(impl::call_factory<HttpContentCodingWithQualityHeaderValue, Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueFactory>([&](auto&& f) { return f.CreateFromValue(contentCoding); }))
    {
    }
    inline HttpContentCodingWithQualityHeaderValue::HttpContentCodingWithQualityHeaderValue(param::hstring const& contentCoding, double quality) :
        HttpContentCodingWithQualityHeaderValue(impl::call_factory<HttpContentCodingWithQualityHeaderValue, Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueFactory>([&](auto&& f) { return f.CreateFromValueWithQuality(contentCoding, quality); }))
    {
    }
    inline auto HttpContentCodingWithQualityHeaderValue::Parse(param::hstring const& input)
    {
        return impl::call_factory<HttpContentCodingWithQualityHeaderValue, Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueStatics>([&](auto&& f) { return f.Parse(input); });
    }
    inline auto HttpContentCodingWithQualityHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue& contentCodingWithQualityHeaderValue)
    {
        return impl::call_factory<HttpContentCodingWithQualityHeaderValue, Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueStatics>([&](auto&& f) { return f.TryParse(input, contentCodingWithQualityHeaderValue); });
    }
    inline HttpContentDispositionHeaderValue::HttpContentDispositionHeaderValue(param::hstring const& dispositionType) :
        HttpContentDispositionHeaderValue(impl::call_factory<HttpContentDispositionHeaderValue, Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueFactory>([&](auto&& f) { return f.Create(dispositionType); }))
    {
    }
    inline auto HttpContentDispositionHeaderValue::Parse(param::hstring const& input)
    {
        return impl::call_factory<HttpContentDispositionHeaderValue, Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueStatics>([&](auto&& f) { return f.Parse(input); });
    }
    inline auto HttpContentDispositionHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentDispositionHeaderValue& contentDispositionHeaderValue)
    {
        return impl::call_factory<HttpContentDispositionHeaderValue, Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueStatics>([&](auto&& f) { return f.TryParse(input, contentDispositionHeaderValue); });
    }
    inline HttpContentHeaderCollection::HttpContentHeaderCollection() :
        HttpContentHeaderCollection(impl::call_factory<HttpContentHeaderCollection>([](auto&& f) { return f.template ActivateInstance<HttpContentHeaderCollection>(); }))
    {
    }
    inline HttpContentRangeHeaderValue::HttpContentRangeHeaderValue(uint64_t length) :
        HttpContentRangeHeaderValue(impl::call_factory<HttpContentRangeHeaderValue, Windows::Web::Http::Headers::IHttpContentRangeHeaderValueFactory>([&](auto&& f) { return f.CreateFromLength(length); }))
    {
    }
    inline HttpContentRangeHeaderValue::HttpContentRangeHeaderValue(uint64_t from, uint64_t to) :
        HttpContentRangeHeaderValue(impl::call_factory<HttpContentRangeHeaderValue, Windows::Web::Http::Headers::IHttpContentRangeHeaderValueFactory>([&](auto&& f) { return f.CreateFromRange(from, to); }))
    {
    }
    inline HttpContentRangeHeaderValue::HttpContentRangeHeaderValue(uint64_t from, uint64_t to, uint64_t length) :
        HttpContentRangeHeaderValue(impl::call_factory<HttpContentRangeHeaderValue, Windows::Web::Http::Headers::IHttpContentRangeHeaderValueFactory>([&](auto&& f) { return f.CreateFromRangeWithLength(from, to, length); }))
    {
    }
    inline auto HttpContentRangeHeaderValue::Parse(param::hstring const& input)
    {
        return impl::call_factory<HttpContentRangeHeaderValue, Windows::Web::Http::Headers::IHttpContentRangeHeaderValueStatics>([&](auto&& f) { return f.Parse(input); });
    }
    inline auto HttpContentRangeHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentRangeHeaderValue& contentRangeHeaderValue)
    {
        return impl::call_factory<HttpContentRangeHeaderValue, Windows::Web::Http::Headers::IHttpContentRangeHeaderValueStatics>([&](auto&& f) { return f.TryParse(input, contentRangeHeaderValue); });
    }
    inline HttpCookiePairHeaderValue::HttpCookiePairHeaderValue(param::hstring const& name) :
        HttpCookiePairHeaderValue(impl::call_factory<HttpCookiePairHeaderValue, Windows::Web::Http::Headers::IHttpCookiePairHeaderValueFactory>([&](auto&& f) { return f.CreateFromName(name); }))
    {
    }
    inline HttpCookiePairHeaderValue::HttpCookiePairHeaderValue(param::hstring const& name, param::hstring const& value) :
        HttpCookiePairHeaderValue(impl::call_factory<HttpCookiePairHeaderValue, Windows::Web::Http::Headers::IHttpCookiePairHeaderValueFactory>([&](auto&& f) { return f.CreateFromNameWithValue(name, value); }))
    {
    }
    inline auto HttpCookiePairHeaderValue::Parse(param::hstring const& input)
    {
        return impl::call_factory<HttpCookiePairHeaderValue, Windows::Web::Http::Headers::IHttpCookiePairHeaderValueStatics>([&](auto&& f) { return f.Parse(input); });
    }
    inline auto HttpCookiePairHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpCookiePairHeaderValue& cookiePairHeaderValue)
    {
        return impl::call_factory<HttpCookiePairHeaderValue, Windows::Web::Http::Headers::IHttpCookiePairHeaderValueStatics>([&](auto&& f) { return f.TryParse(input, cookiePairHeaderValue); });
    }
    inline HttpCredentialsHeaderValue::HttpCredentialsHeaderValue(param::hstring const& scheme) :
        HttpCredentialsHeaderValue(impl::call_factory<HttpCredentialsHeaderValue, Windows::Web::Http::Headers::IHttpCredentialsHeaderValueFactory>([&](auto&& f) { return f.CreateFromScheme(scheme); }))
    {
    }
    inline HttpCredentialsHeaderValue::HttpCredentialsHeaderValue(param::hstring const& scheme, param::hstring const& token) :
        HttpCredentialsHeaderValue(impl::call_factory<HttpCredentialsHeaderValue, Windows::Web::Http::Headers::IHttpCredentialsHeaderValueFactory>([&](auto&& f) { return f.CreateFromSchemeWithToken(scheme, token); }))
    {
    }
    inline auto HttpCredentialsHeaderValue::Parse(param::hstring const& input)
    {
        return impl::call_factory<HttpCredentialsHeaderValue, Windows::Web::Http::Headers::IHttpCredentialsHeaderValueStatics>([&](auto&& f) { return f.Parse(input); });
    }
    inline auto HttpCredentialsHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpCredentialsHeaderValue& credentialsHeaderValue)
    {
        return impl::call_factory<HttpCredentialsHeaderValue, Windows::Web::Http::Headers::IHttpCredentialsHeaderValueStatics>([&](auto&& f) { return f.TryParse(input, credentialsHeaderValue); });
    }
    inline auto HttpDateOrDeltaHeaderValue::Parse(param::hstring const& input)
    {
        return impl::call_factory<HttpDateOrDeltaHeaderValue, Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValueStatics>([&](auto&& f) { return f.Parse(input); });
    }
    inline auto HttpDateOrDeltaHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue& dateOrDeltaHeaderValue)
    {
        return impl::call_factory<HttpDateOrDeltaHeaderValue, Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValueStatics>([&](auto&& f) { return f.TryParse(input, dateOrDeltaHeaderValue); });
    }
    inline HttpExpectationHeaderValue::HttpExpectationHeaderValue(param::hstring const& name) :
        HttpExpectationHeaderValue(impl::call_factory<HttpExpectationHeaderValue, Windows::Web::Http::Headers::IHttpExpectationHeaderValueFactory>([&](auto&& f) { return f.CreateFromName(name); }))
    {
    }
    inline HttpExpectationHeaderValue::HttpExpectationHeaderValue(param::hstring const& name, param::hstring const& value) :
        HttpExpectationHeaderValue(impl::call_factory<HttpExpectationHeaderValue, Windows::Web::Http::Headers::IHttpExpectationHeaderValueFactory>([&](auto&& f) { return f.CreateFromNameWithValue(name, value); }))
    {
    }
    inline auto HttpExpectationHeaderValue::Parse(param::hstring const& input)
    {
        return impl::call_factory<HttpExpectationHeaderValue, Windows::Web::Http::Headers::IHttpExpectationHeaderValueStatics>([&](auto&& f) { return f.Parse(input); });
    }
    inline auto HttpExpectationHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpExpectationHeaderValue& expectationHeaderValue)
    {
        return impl::call_factory<HttpExpectationHeaderValue, Windows::Web::Http::Headers::IHttpExpectationHeaderValueStatics>([&](auto&& f) { return f.TryParse(input, expectationHeaderValue); });
    }
    inline HttpLanguageRangeWithQualityHeaderValue::HttpLanguageRangeWithQualityHeaderValue(param::hstring const& languageRange) :
        HttpLanguageRangeWithQualityHeaderValue(impl::call_factory<HttpLanguageRangeWithQualityHeaderValue, Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueFactory>([&](auto&& f) { return f.CreateFromLanguageRange(languageRange); }))
    {
    }
    inline HttpLanguageRangeWithQualityHeaderValue::HttpLanguageRangeWithQualityHeaderValue(param::hstring const& languageRange, double quality) :
        HttpLanguageRangeWithQualityHeaderValue(impl::call_factory<HttpLanguageRangeWithQualityHeaderValue, Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueFactory>([&](auto&& f) { return f.CreateFromLanguageRangeWithQuality(languageRange, quality); }))
    {
    }
    inline auto HttpLanguageRangeWithQualityHeaderValue::Parse(param::hstring const& input)
    {
        return impl::call_factory<HttpLanguageRangeWithQualityHeaderValue, Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueStatics>([&](auto&& f) { return f.Parse(input); });
    }
    inline auto HttpLanguageRangeWithQualityHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue& languageRangeWithQualityHeaderValue)
    {
        return impl::call_factory<HttpLanguageRangeWithQualityHeaderValue, Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueStatics>([&](auto&& f) { return f.TryParse(input, languageRangeWithQualityHeaderValue); });
    }
    inline HttpMediaTypeHeaderValue::HttpMediaTypeHeaderValue(param::hstring const& mediaType) :
        HttpMediaTypeHeaderValue(impl::call_factory<HttpMediaTypeHeaderValue, Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueFactory>([&](auto&& f) { return f.Create(mediaType); }))
    {
    }
    inline auto HttpMediaTypeHeaderValue::Parse(param::hstring const& input)
    {
        return impl::call_factory<HttpMediaTypeHeaderValue, Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueStatics>([&](auto&& f) { return f.Parse(input); });
    }
    inline auto HttpMediaTypeHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpMediaTypeHeaderValue& mediaTypeHeaderValue)
    {
        return impl::call_factory<HttpMediaTypeHeaderValue, Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueStatics>([&](auto&& f) { return f.TryParse(input, mediaTypeHeaderValue); });
    }
    inline HttpMediaTypeWithQualityHeaderValue::HttpMediaTypeWithQualityHeaderValue(param::hstring const& mediaType) :
        HttpMediaTypeWithQualityHeaderValue(impl::call_factory<HttpMediaTypeWithQualityHeaderValue, Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueFactory>([&](auto&& f) { return f.CreateFromMediaType(mediaType); }))
    {
    }
    inline HttpMediaTypeWithQualityHeaderValue::HttpMediaTypeWithQualityHeaderValue(param::hstring const& mediaType, double quality) :
        HttpMediaTypeWithQualityHeaderValue(impl::call_factory<HttpMediaTypeWithQualityHeaderValue, Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueFactory>([&](auto&& f) { return f.CreateFromMediaTypeWithQuality(mediaType, quality); }))
    {
    }
    inline auto HttpMediaTypeWithQualityHeaderValue::Parse(param::hstring const& input)
    {
        return impl::call_factory<HttpMediaTypeWithQualityHeaderValue, Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueStatics>([&](auto&& f) { return f.Parse(input); });
    }
    inline auto HttpMediaTypeWithQualityHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue& mediaTypeWithQualityHeaderValue)
    {
        return impl::call_factory<HttpMediaTypeWithQualityHeaderValue, Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueStatics>([&](auto&& f) { return f.TryParse(input, mediaTypeWithQualityHeaderValue); });
    }
    inline HttpNameValueHeaderValue::HttpNameValueHeaderValue(param::hstring const& name) :
        HttpNameValueHeaderValue(impl::call_factory<HttpNameValueHeaderValue, Windows::Web::Http::Headers::IHttpNameValueHeaderValueFactory>([&](auto&& f) { return f.CreateFromName(name); }))
    {
    }
    inline HttpNameValueHeaderValue::HttpNameValueHeaderValue(param::hstring const& name, param::hstring const& value) :
        HttpNameValueHeaderValue(impl::call_factory<HttpNameValueHeaderValue, Windows::Web::Http::Headers::IHttpNameValueHeaderValueFactory>([&](auto&& f) { return f.CreateFromNameWithValue(name, value); }))
    {
    }
    inline auto HttpNameValueHeaderValue::Parse(param::hstring const& input)
    {
        return impl::call_factory<HttpNameValueHeaderValue, Windows::Web::Http::Headers::IHttpNameValueHeaderValueStatics>([&](auto&& f) { return f.Parse(input); });
    }
    inline auto HttpNameValueHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpNameValueHeaderValue& nameValueHeaderValue)
    {
        return impl::call_factory<HttpNameValueHeaderValue, Windows::Web::Http::Headers::IHttpNameValueHeaderValueStatics>([&](auto&& f) { return f.TryParse(input, nameValueHeaderValue); });
    }
    inline HttpProductHeaderValue::HttpProductHeaderValue(param::hstring const& productName) :
        HttpProductHeaderValue(impl::call_factory<HttpProductHeaderValue, Windows::Web::Http::Headers::IHttpProductHeaderValueFactory>([&](auto&& f) { return f.CreateFromName(productName); }))
    {
    }
    inline HttpProductHeaderValue::HttpProductHeaderValue(param::hstring const& productName, param::hstring const& productVersion) :
        HttpProductHeaderValue(impl::call_factory<HttpProductHeaderValue, Windows::Web::Http::Headers::IHttpProductHeaderValueFactory>([&](auto&& f) { return f.CreateFromNameWithVersion(productName, productVersion); }))
    {
    }
    inline auto HttpProductHeaderValue::Parse(param::hstring const& input)
    {
        return impl::call_factory<HttpProductHeaderValue, Windows::Web::Http::Headers::IHttpProductHeaderValueStatics>([&](auto&& f) { return f.Parse(input); });
    }
    inline auto HttpProductHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpProductHeaderValue& productHeaderValue)
    {
        return impl::call_factory<HttpProductHeaderValue, Windows::Web::Http::Headers::IHttpProductHeaderValueStatics>([&](auto&& f) { return f.TryParse(input, productHeaderValue); });
    }
    inline HttpProductInfoHeaderValue::HttpProductInfoHeaderValue(param::hstring const& productComment) :
        HttpProductInfoHeaderValue(impl::call_factory<HttpProductInfoHeaderValue, Windows::Web::Http::Headers::IHttpProductInfoHeaderValueFactory>([&](auto&& f) { return f.CreateFromComment(productComment); }))
    {
    }
    inline HttpProductInfoHeaderValue::HttpProductInfoHeaderValue(param::hstring const& productName, param::hstring const& productVersion) :
        HttpProductInfoHeaderValue(impl::call_factory<HttpProductInfoHeaderValue, Windows::Web::Http::Headers::IHttpProductInfoHeaderValueFactory>([&](auto&& f) { return f.CreateFromNameWithVersion(productName, productVersion); }))
    {
    }
    inline auto HttpProductInfoHeaderValue::Parse(param::hstring const& input)
    {
        return impl::call_factory<HttpProductInfoHeaderValue, Windows::Web::Http::Headers::IHttpProductInfoHeaderValueStatics>([&](auto&& f) { return f.Parse(input); });
    }
    inline auto HttpProductInfoHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpProductInfoHeaderValue& productInfoHeaderValue)
    {
        return impl::call_factory<HttpProductInfoHeaderValue, Windows::Web::Http::Headers::IHttpProductInfoHeaderValueStatics>([&](auto&& f) { return f.TryParse(input, productInfoHeaderValue); });
    }
    inline HttpTransferCodingHeaderValue::HttpTransferCodingHeaderValue(param::hstring const& input) :
        HttpTransferCodingHeaderValue(impl::call_factory<HttpTransferCodingHeaderValue, Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueFactory>([&](auto&& f) { return f.Create(input); }))
    {
    }
    inline auto HttpTransferCodingHeaderValue::Parse(param::hstring const& input)
    {
        return impl::call_factory<HttpTransferCodingHeaderValue, Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueStatics>([&](auto&& f) { return f.Parse(input); });
    }
    inline auto HttpTransferCodingHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpTransferCodingHeaderValue& transferCodingHeaderValue)
    {
        return impl::call_factory<HttpTransferCodingHeaderValue, Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueStatics>([&](auto&& f) { return f.TryParse(input, transferCodingHeaderValue); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpChallengeHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpChallengeHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpChallengeHeaderValueCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpChallengeHeaderValueCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpChallengeHeaderValueFactory> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpChallengeHeaderValueFactory> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpChallengeHeaderValueStatics> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpChallengeHeaderValueStatics> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueFactory> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueFactory> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueStatics> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueStatics> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentCodingHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpContentCodingHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentCodingHeaderValueCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpContentCodingHeaderValueCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentCodingHeaderValueFactory> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpContentCodingHeaderValueFactory> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentCodingHeaderValueStatics> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpContentCodingHeaderValueStatics> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueFactory> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueFactory> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueStatics> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueStatics> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueFactory> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueFactory> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueStatics> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueStatics> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentHeaderCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpContentHeaderCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentRangeHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpContentRangeHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentRangeHeaderValueFactory> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpContentRangeHeaderValueFactory> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentRangeHeaderValueStatics> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpContentRangeHeaderValueStatics> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpCookiePairHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpCookiePairHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpCookiePairHeaderValueCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpCookiePairHeaderValueCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpCookiePairHeaderValueFactory> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpCookiePairHeaderValueFactory> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpCookiePairHeaderValueStatics> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpCookiePairHeaderValueStatics> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpCredentialsHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpCredentialsHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpCredentialsHeaderValueFactory> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpCredentialsHeaderValueFactory> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpCredentialsHeaderValueStatics> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpCredentialsHeaderValueStatics> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValueStatics> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValueStatics> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpExpectationHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpExpectationHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpExpectationHeaderValueCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpExpectationHeaderValueCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpExpectationHeaderValueFactory> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpExpectationHeaderValueFactory> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpExpectationHeaderValueStatics> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpExpectationHeaderValueStatics> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpLanguageHeaderValueCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpLanguageHeaderValueCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueFactory> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueFactory> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueStatics> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueStatics> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueFactory> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueFactory> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueStatics> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueStatics> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueFactory> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueFactory> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueStatics> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueStatics> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpMethodHeaderValueCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpMethodHeaderValueCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpNameValueHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpNameValueHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpNameValueHeaderValueFactory> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpNameValueHeaderValueFactory> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpNameValueHeaderValueStatics> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpNameValueHeaderValueStatics> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpProductHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpProductHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpProductHeaderValueFactory> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpProductHeaderValueFactory> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpProductHeaderValueStatics> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpProductHeaderValueStatics> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpProductInfoHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpProductInfoHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpProductInfoHeaderValueCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpProductInfoHeaderValueCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpProductInfoHeaderValueFactory> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpProductInfoHeaderValueFactory> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpProductInfoHeaderValueStatics> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpProductInfoHeaderValueStatics> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpRequestHeaderCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpRequestHeaderCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpResponseHeaderCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpResponseHeaderCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpTransferCodingHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpTransferCodingHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueFactory> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueFactory> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueStatics> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueStatics> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpCacheDirectiveHeaderValueCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpCacheDirectiveHeaderValueCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpChallengeHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpChallengeHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpChallengeHeaderValueCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpChallengeHeaderValueCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpConnectionOptionHeaderValueCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpConnectionOptionHeaderValueCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpContentCodingHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpContentCodingHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpContentCodingHeaderValueCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpContentCodingHeaderValueCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValueCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValueCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpContentDispositionHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpContentDispositionHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpContentHeaderCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpContentHeaderCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpContentRangeHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpContentRangeHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpCookiePairHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpCookiePairHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpCookiePairHeaderValueCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpCookiePairHeaderValueCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpCredentialsHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpCredentialsHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpExpectationHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpExpectationHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpExpectationHeaderValueCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpExpectationHeaderValueCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpLanguageHeaderValueCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpLanguageHeaderValueCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValueCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValueCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpMediaTypeHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpMediaTypeHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValueCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValueCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpMethodHeaderValueCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpMethodHeaderValueCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpNameValueHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpNameValueHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpProductHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpProductHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpProductInfoHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpProductInfoHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpProductInfoHeaderValueCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpProductInfoHeaderValueCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpRequestHeaderCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpRequestHeaderCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpResponseHeaderCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpResponseHeaderCollection> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpTransferCodingHeaderValue> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpTransferCodingHeaderValue> {};
    template<> struct hash<winrt::Windows::Web::Http::Headers::HttpTransferCodingHeaderValueCollection> : winrt::impl::hash_base<winrt::Windows::Web::Http::Headers::HttpTransferCodingHeaderValueCollection> {};
}
#endif
