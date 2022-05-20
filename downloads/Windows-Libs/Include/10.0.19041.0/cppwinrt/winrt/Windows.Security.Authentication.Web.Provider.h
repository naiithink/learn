// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Authentication_Web_Provider_H
#define WINRT_Windows_Security_Authentication_Web_Provider_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Security.Authentication.Web.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Security.Authentication.Web.2.h"
#include "winrt/impl/Windows.Security.Authentication.Web.Core.2.h"
#include "winrt/impl/Windows.Security.Credentials.2.h"
#include "winrt/impl/Windows.Security.Cryptography.Core.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.Web.Http.2.h"
#include "winrt/impl/Windows.Security.Authentication.Web.Provider.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountClientView<D>::ApplicationCallbackUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountClientView)->get_ApplicationCallbackUri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountClientView<D>::Type() const
    {
        Windows::Security::Authentication::Web::Provider::WebAccountClientViewType value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountClientView)->get_Type(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountClientView<D>::AccountPairwiseId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountClientView)->get_AccountPairwiseId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountClientViewFactory<D>::Create(Windows::Security::Authentication::Web::Provider::WebAccountClientViewType const& viewType, Windows::Foundation::Uri const& applicationCallbackUri) const
    {
        void* view{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory)->Create(static_cast<int32_t>(viewType), *(void**)(&applicationCallbackUri), &view));
        return Windows::Security::Authentication::Web::Provider::WebAccountClientView{ view, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountClientViewFactory<D>::CreateWithPairwiseId(Windows::Security::Authentication::Web::Provider::WebAccountClientViewType const& viewType, Windows::Foundation::Uri const& applicationCallbackUri, param::hstring const& accountPairwiseId) const
    {
        void* view{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory)->CreateWithPairwiseId(static_cast<int32_t>(viewType), *(void**)(&applicationCallbackUri), *(void**)(&accountPairwiseId), &view));
        return Windows::Security::Authentication::Web::Provider::WebAccountClientView{ view, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics<D>::UpdateWebAccountPropertiesAsync(Windows::Security::Credentials::WebAccount const& webAccount, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& additionalProperties) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics)->UpdateWebAccountPropertiesAsync(*(void**)(&webAccount), *(void**)(&webAccountUserName), *(void**)(&additionalProperties), &asyncInfo));
        return Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics<D>::AddWebAccountAsync(param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics)->AddWebAccountAsync(*(void**)(&webAccountId), *(void**)(&webAccountUserName), *(void**)(&props), &asyncInfo));
        return Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount>{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics<D>::DeleteWebAccountAsync(Windows::Security::Credentials::WebAccount const& webAccount) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics)->DeleteWebAccountAsync(*(void**)(&webAccount), &asyncInfo));
        return Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics<D>::FindAllProviderWebAccountsAsync() const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics)->FindAllProviderWebAccountsAsync(&asyncInfo));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount>>{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics<D>::PushCookiesAsync(Windows::Foundation::Uri const& uri, param::async_vector_view<Windows::Web::Http::HttpCookie> const& cookies) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics)->PushCookiesAsync(*(void**)(&uri), *(void**)(&cookies), &asyncInfo));
        return Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics<D>::SetViewAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Security::Authentication::Web::Provider::WebAccountClientView const& view) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics)->SetViewAsync(*(void**)(&webAccount), *(void**)(&view), &asyncInfo));
        return Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics<D>::ClearViewAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Foundation::Uri const& applicationCallbackUri) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics)->ClearViewAsync(*(void**)(&webAccount), *(void**)(&applicationCallbackUri), &asyncInfo));
        return Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics<D>::GetViewsAsync(Windows::Security::Credentials::WebAccount const& webAccount) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics)->GetViewsAsync(*(void**)(&webAccount), &asyncInfo));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Web::Provider::WebAccountClientView>>{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics<D>::SetWebAccountPictureAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Storage::Streams::IRandomAccessStream const& webAccountPicture) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics)->SetWebAccountPictureAsync(*(void**)(&webAccount), *(void**)(&webAccountPicture), &asyncInfo));
        return Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics<D>::ClearWebAccountPictureAsync(Windows::Security::Credentials::WebAccount const& webAccount) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics)->ClearWebAccountPictureAsync(*(void**)(&webAccount), &asyncInfo));
        return Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics2<D>::PullCookiesAsync(param::hstring const& uriString, param::hstring const& callerPFN) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics2)->PullCookiesAsync(*(void**)(&uriString), *(void**)(&callerPFN), &asyncInfo));
        return Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics3<D>::FindAllProviderWebAccountsForUserAsync(Windows::System::User const& user) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3)->FindAllProviderWebAccountsForUserAsync(*(void**)(&user), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount>>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics3<D>::AddWebAccountForUserAsync(Windows::System::User const& user, param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3)->AddWebAccountForUserAsync(*(void**)(&user), *(void**)(&webAccountId), *(void**)(&webAccountUserName), *(void**)(&props), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics3<D>::AddWebAccountForUserAsync(Windows::System::User const& user, param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3)->AddWebAccountWithScopeForUserAsync(*(void**)(&user), *(void**)(&webAccountId), *(void**)(&webAccountUserName), *(void**)(&props), static_cast<int32_t>(scope), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics3<D>::AddWebAccountForUserAsync(Windows::System::User const& user, param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope, param::hstring const& perUserWebAccountId) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3)->AddWebAccountWithScopeAndMapForUserAsync(*(void**)(&user), *(void**)(&webAccountId), *(void**)(&webAccountUserName), *(void**)(&props), static_cast<int32_t>(scope), *(void**)(&perUserWebAccountId), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics4<D>::InvalidateAppCacheForAllAccountsAsync() const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics4)->InvalidateAppCacheForAllAccountsAsync(&asyncInfo));
        return Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics4<D>::InvalidateAppCacheForAccountAsync(Windows::Security::Credentials::WebAccount const& webAccount) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics4)->InvalidateAppCacheForAccountAsync(*(void**)(&webAccount), &asyncInfo));
        return Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountMapManagerStatics<D>::AddWebAccountAsync(param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope, param::hstring const& perUserWebAccountId) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics)->AddWebAccountWithScopeAndMapAsync(*(void**)(&webAccountId), *(void**)(&webAccountUserName), *(void**)(&props), static_cast<int32_t>(scope), *(void**)(&perUserWebAccountId), &asyncInfo));
        return Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount>{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountMapManagerStatics<D>::SetPerAppToPerUserAccountAsync(Windows::Security::Credentials::WebAccount const& perAppAccount, param::hstring const& perUserWebAccountId) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics)->SetPerAppToPerUserAccountAsync(*(void**)(&perAppAccount), *(void**)(&perUserWebAccountId), &asyncInfo));
        return Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountMapManagerStatics<D>::GetPerUserFromPerAppAccountAsync(Windows::Security::Credentials::WebAccount const& perAppAccount) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics)->GetPerUserFromPerAppAccountAsync(*(void**)(&perAppAccount), &asyncInfo));
        return Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount>{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountMapManagerStatics<D>::ClearPerUserFromPerAppAccountAsync(Windows::Security::Credentials::WebAccount const& perAppAccount) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics)->ClearPerUserFromPerAppAccountAsync(*(void**)(&perAppAccount), &asyncInfo));
        return Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderAddAccountOperation<D>::ReportCompleted() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation)->ReportCompleted());
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderBaseReportOperation<D>::ReportCompleted() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation)->ReportCompleted());
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderBaseReportOperation<D>::ReportError(Windows::Security::Authentication::Web::Core::WebProviderError const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation)->ReportError(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderDeleteAccountOperation<D>::WebAccount() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation)->get_WebAccount(&value));
        return Windows::Security::Credentials::WebAccount{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderManageAccountOperation<D>::WebAccount() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation)->get_WebAccount(&value));
        return Windows::Security::Credentials::WebAccount{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderManageAccountOperation<D>::ReportCompleted() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation)->ReportCompleted());
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderOperation<D>::Kind() const
    {
        Windows::Security::Authentication::Web::Provider::WebAccountProviderOperationKind value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation)->get_Kind(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderRetrieveCookiesOperation<D>::Context() const
    {
        void* webCookieRequestContext{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation)->get_Context(&webCookieRequestContext));
        return Windows::Foundation::Uri{ webCookieRequestContext, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderRetrieveCookiesOperation<D>::Cookies() const
    {
        void* cookies{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation)->get_Cookies(&cookies));
        return Windows::Foundation::Collections::IVector<Windows::Web::Http::HttpCookie>{ cookies, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderRetrieveCookiesOperation<D>::Uri(Windows::Foundation::Uri const& uri) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation)->put_Uri(*(void**)(&uri)));
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderRetrieveCookiesOperation<D>::Uri() const
    {
        void* uri{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation)->get_Uri(&uri));
        return Windows::Foundation::Uri{ uri, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderRetrieveCookiesOperation<D>::ApplicationCallbackUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation)->get_ApplicationCallbackUri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderSignOutAccountOperation<D>::WebAccount() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation)->get_WebAccount(&value));
        return Windows::Security::Credentials::WebAccount{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderSignOutAccountOperation<D>::ApplicationCallbackUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation)->get_ApplicationCallbackUri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderSignOutAccountOperation<D>::ClientId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation)->get_ClientId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderSilentReportOperation<D>::ReportUserInteractionRequired() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation)->ReportUserInteractionRequired());
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderSilentReportOperation<D>::ReportUserInteractionRequired(Windows::Security::Authentication::Web::Core::WebProviderError const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation)->ReportUserInteractionRequiredWithError(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenObjects<D>::Operation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects)->get_Operation(&value));
        return Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenObjects2<D>::User() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects2)->get_User(&value));
        return Windows::System::User{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenOperation<D>::ProviderRequest() const
    {
        void* webTokenRequest{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation)->get_ProviderRequest(&webTokenRequest));
        return Windows::Security::Authentication::Web::Provider::WebProviderTokenRequest{ webTokenRequest, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenOperation<D>::ProviderResponses() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation)->get_ProviderResponses(&value));
        return Windows::Foundation::Collections::IVector<Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenOperation<D>::CacheExpirationTime(Windows::Foundation::DateTime const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation)->put_CacheExpirationTime(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenOperation<D>::CacheExpirationTime() const
    {
        Windows::Foundation::DateTime value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation)->get_CacheExpirationTime(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderUIReportOperation<D>::ReportUserCanceled() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation)->ReportUserCanceled());
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountScopeManagerStatics<D>::AddWebAccountAsync(param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics)->AddWebAccountWithScopeAsync(*(void**)(&webAccountId), *(void**)(&webAccountUserName), *(void**)(&props), static_cast<int32_t>(scope), &asyncInfo));
        return Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount>{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountScopeManagerStatics<D>::SetScopeAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics)->SetScopeAsync(*(void**)(&webAccount), static_cast<int32_t>(scope), &asyncInfo));
        return Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebAccountScopeManagerStatics<D>::GetScope(Windows::Security::Credentials::WebAccount const& webAccount) const
    {
        Windows::Security::Authentication::Web::Provider::WebAccountScope scope;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics)->GetScope(*(void**)(&webAccount), put_abi(scope)));
        return scope;
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest<D>::ClientRequest() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest)->get_ClientRequest(&value));
        return Windows::Security::Authentication::Web::Core::WebTokenRequest{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest<D>::WebAccounts() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest)->get_WebAccounts(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest<D>::WebAccountSelectionOptions() const
    {
        Windows::Security::Authentication::Web::Provider::WebAccountSelectionOptions value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest)->get_WebAccountSelectionOptions(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest<D>::ApplicationCallbackUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest)->get_ApplicationCallbackUri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest<D>::GetApplicationTokenBindingKeyAsync(Windows::Security::Authentication::Web::TokenBindingKeyType const& keyType, Windows::Foundation::Uri const& target) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest)->GetApplicationTokenBindingKeyAsync(static_cast<int32_t>(keyType), *(void**)(&target), &asyncInfo));
        return Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Core::CryptographicKey>{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest2<D>::GetApplicationTokenBindingKeyIdAsync(Windows::Security::Authentication::Web::TokenBindingKeyType const& keyType, Windows::Foundation::Uri const& target) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest2)->GetApplicationTokenBindingKeyIdAsync(static_cast<int32_t>(keyType), *(void**)(&target), &asyncInfo));
        return Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest3<D>::ApplicationPackageFamilyName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest3)->get_ApplicationPackageFamilyName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest3<D>::ApplicationProcessName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest3)->get_ApplicationProcessName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest3<D>::CheckApplicationForCapabilityAsync(param::hstring const& capabilityName) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest3)->CheckApplicationForCapabilityAsync(*(void**)(&capabilityName), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenResponse<D>::ClientResponse() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse)->get_ClientResponse(&value));
        return Windows::Security::Authentication::Web::Core::WebTokenResponse{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenResponseFactory<D>::Create(Windows::Security::Authentication::Web::Core::WebTokenResponse const& webTokenResponse) const
    {
        void* webProviderTokenResponse{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponseFactory)->Create(*(void**)(&webTokenResponse), &webProviderTokenResponse));
        return Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse{ webProviderTokenResponse, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountClientView> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountClientView>
    {
        int32_t __stdcall get_ApplicationCallbackUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().ApplicationCallbackUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Type(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Web::Provider::WebAccountClientViewType>(this->shim().Type());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AccountPairwiseId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AccountPairwiseId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory>
    {
        int32_t __stdcall Create(int32_t viewType, void* applicationCallbackUri, void** view) noexcept final try
        {
            clear_abi(view);
            typename D::abi_guard guard(this->shim());
            *view = detach_from<Windows::Security::Authentication::Web::Provider::WebAccountClientView>(this->shim().Create(*reinterpret_cast<Windows::Security::Authentication::Web::Provider::WebAccountClientViewType const*>(&viewType), *reinterpret_cast<Windows::Foundation::Uri const*>(&applicationCallbackUri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithPairwiseId(int32_t viewType, void* applicationCallbackUri, void* accountPairwiseId, void** view) noexcept final try
        {
            clear_abi(view);
            typename D::abi_guard guard(this->shim());
            *view = detach_from<Windows::Security::Authentication::Web::Provider::WebAccountClientView>(this->shim().CreateWithPairwiseId(*reinterpret_cast<Windows::Security::Authentication::Web::Provider::WebAccountClientViewType const*>(&viewType), *reinterpret_cast<Windows::Foundation::Uri const*>(&applicationCallbackUri), *reinterpret_cast<hstring const*>(&accountPairwiseId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>
    {
        int32_t __stdcall UpdateWebAccountPropertiesAsync(void* webAccount, void* webAccountUserName, void* additionalProperties, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().UpdateWebAccountPropertiesAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount), *reinterpret_cast<hstring const*>(&webAccountUserName), *reinterpret_cast<Windows::Foundation::Collections::IMapView<hstring, hstring> const*>(&additionalProperties)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddWebAccountAsync(void* webAccountId, void* webAccountUserName, void* props, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount>>(this->shim().AddWebAccountAsync(*reinterpret_cast<hstring const*>(&webAccountId), *reinterpret_cast<hstring const*>(&webAccountUserName), *reinterpret_cast<Windows::Foundation::Collections::IMapView<hstring, hstring> const*>(&props)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DeleteWebAccountAsync(void* webAccount, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().DeleteWebAccountAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindAllProviderWebAccountsAsync(void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount>>>(this->shim().FindAllProviderWebAccountsAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall PushCookiesAsync(void* uri, void* cookies, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().PushCookiesAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::Web::Http::HttpCookie> const*>(&cookies)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetViewAsync(void* webAccount, void* view, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SetViewAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount), *reinterpret_cast<Windows::Security::Authentication::Web::Provider::WebAccountClientView const*>(&view)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ClearViewAsync(void* webAccount, void* applicationCallbackUri, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ClearViewAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount), *reinterpret_cast<Windows::Foundation::Uri const*>(&applicationCallbackUri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetViewsAsync(void* webAccount, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Web::Provider::WebAccountClientView>>>(this->shim().GetViewsAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetWebAccountPictureAsync(void* webAccount, void* webAccountPicture, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SetWebAccountPictureAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&webAccountPicture)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ClearWebAccountPictureAsync(void* webAccount, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ClearWebAccountPictureAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics2> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics2>
    {
        int32_t __stdcall PullCookiesAsync(void* uriString, void* callerPFN, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().PullCookiesAsync(*reinterpret_cast<hstring const*>(&uriString), *reinterpret_cast<hstring const*>(&callerPFN)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3>
    {
        int32_t __stdcall FindAllProviderWebAccountsForUserAsync(void* user, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount>>>(this->shim().FindAllProviderWebAccountsForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddWebAccountForUserAsync(void* user, void* webAccountId, void* webAccountUserName, void* props, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount>>(this->shim().AddWebAccountForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&webAccountId), *reinterpret_cast<hstring const*>(&webAccountUserName), *reinterpret_cast<Windows::Foundation::Collections::IMapView<hstring, hstring> const*>(&props)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddWebAccountWithScopeForUserAsync(void* user, void* webAccountId, void* webAccountUserName, void* props, int32_t scope, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount>>(this->shim().AddWebAccountForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&webAccountId), *reinterpret_cast<hstring const*>(&webAccountUserName), *reinterpret_cast<Windows::Foundation::Collections::IMapView<hstring, hstring> const*>(&props), *reinterpret_cast<Windows::Security::Authentication::Web::Provider::WebAccountScope const*>(&scope)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddWebAccountWithScopeAndMapForUserAsync(void* user, void* webAccountId, void* webAccountUserName, void* props, int32_t scope, void* perUserWebAccountId, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount>>(this->shim().AddWebAccountForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&webAccountId), *reinterpret_cast<hstring const*>(&webAccountUserName), *reinterpret_cast<Windows::Foundation::Collections::IMapView<hstring, hstring> const*>(&props), *reinterpret_cast<Windows::Security::Authentication::Web::Provider::WebAccountScope const*>(&scope), *reinterpret_cast<hstring const*>(&perUserWebAccountId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics4> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics4>
    {
        int32_t __stdcall InvalidateAppCacheForAllAccountsAsync(void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().InvalidateAppCacheForAllAccountsAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall InvalidateAppCacheForAccountAsync(void* webAccount, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().InvalidateAppCacheForAccountAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics>
    {
        int32_t __stdcall AddWebAccountWithScopeAndMapAsync(void* webAccountId, void* webAccountUserName, void* props, int32_t scope, void* perUserWebAccountId, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount>>(this->shim().AddWebAccountAsync(*reinterpret_cast<hstring const*>(&webAccountId), *reinterpret_cast<hstring const*>(&webAccountUserName), *reinterpret_cast<Windows::Foundation::Collections::IMapView<hstring, hstring> const*>(&props), *reinterpret_cast<Windows::Security::Authentication::Web::Provider::WebAccountScope const*>(&scope), *reinterpret_cast<hstring const*>(&perUserWebAccountId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetPerAppToPerUserAccountAsync(void* perAppAccount, void* perUserWebAccountId, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SetPerAppToPerUserAccountAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&perAppAccount), *reinterpret_cast<hstring const*>(&perUserWebAccountId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPerUserFromPerAppAccountAsync(void* perAppAccount, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount>>(this->shim().GetPerUserFromPerAppAccountAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&perAppAccount)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ClearPerUserFromPerAppAccountAsync(void* perAppAccount, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ClearPerUserFromPerAppAccountAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&perAppAccount)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation>
    {
        int32_t __stdcall ReportCompleted() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCompleted();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>
    {
        int32_t __stdcall ReportCompleted() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCompleted();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ReportError(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportError(*reinterpret_cast<Windows::Security::Authentication::Web::Core::WebProviderError const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation>
    {
        int32_t __stdcall get_WebAccount(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Credentials::WebAccount>(this->shim().WebAccount());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation>
    {
        int32_t __stdcall get_WebAccount(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Credentials::WebAccount>(this->shim().WebAccount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ReportCompleted() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCompleted();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>
    {
        int32_t __stdcall get_Kind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Web::Provider::WebAccountProviderOperationKind>(this->shim().Kind());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation>
    {
        int32_t __stdcall get_Context(void** webCookieRequestContext) noexcept final try
        {
            clear_abi(webCookieRequestContext);
            typename D::abi_guard guard(this->shim());
            *webCookieRequestContext = detach_from<Windows::Foundation::Uri>(this->shim().Context());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Cookies(void** cookies) noexcept final try
        {
            clear_abi(cookies);
            typename D::abi_guard guard(this->shim());
            *cookies = detach_from<Windows::Foundation::Collections::IVector<Windows::Web::Http::HttpCookie>>(this->shim().Cookies());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Uri(void* uri) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Uri(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Uri(void** uri) noexcept final try
        {
            clear_abi(uri);
            typename D::abi_guard guard(this->shim());
            *uri = detach_from<Windows::Foundation::Uri>(this->shim().Uri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ApplicationCallbackUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().ApplicationCallbackUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation>
    {
        int32_t __stdcall get_WebAccount(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Credentials::WebAccount>(this->shim().WebAccount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ApplicationCallbackUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().ApplicationCallbackUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ClientId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ClientId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation>
    {
        int32_t __stdcall ReportUserInteractionRequired() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportUserInteractionRequired();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ReportUserInteractionRequiredWithError(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportUserInteractionRequired(*reinterpret_cast<Windows::Security::Authentication::Web::Core::WebProviderError const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects>
    {
        int32_t __stdcall get_Operation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>(this->shim().Operation());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects2> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects2>
    {
        int32_t __stdcall get_User(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::User>(this->shim().User());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation>
    {
        int32_t __stdcall get_ProviderRequest(void** webTokenRequest) noexcept final try
        {
            clear_abi(webTokenRequest);
            typename D::abi_guard guard(this->shim());
            *webTokenRequest = detach_from<Windows::Security::Authentication::Web::Provider::WebProviderTokenRequest>(this->shim().ProviderRequest());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProviderResponses(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse>>(this->shim().ProviderResponses());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CacheExpirationTime(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CacheExpirationTime(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CacheExpirationTime(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().CacheExpirationTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation>
    {
        int32_t __stdcall ReportUserCanceled() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportUserCanceled();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics>
    {
        int32_t __stdcall AddWebAccountWithScopeAsync(void* webAccountId, void* webAccountUserName, void* props, int32_t scope, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount>>(this->shim().AddWebAccountAsync(*reinterpret_cast<hstring const*>(&webAccountId), *reinterpret_cast<hstring const*>(&webAccountUserName), *reinterpret_cast<Windows::Foundation::Collections::IMapView<hstring, hstring> const*>(&props), *reinterpret_cast<Windows::Security::Authentication::Web::Provider::WebAccountScope const*>(&scope)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetScopeAsync(void* webAccount, int32_t scope, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SetScopeAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount), *reinterpret_cast<Windows::Security::Authentication::Web::Provider::WebAccountScope const*>(&scope)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetScope(void* webAccount, int32_t* scope) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *scope = detach_from<Windows::Security::Authentication::Web::Provider::WebAccountScope>(this->shim().GetScope(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest>
    {
        int32_t __stdcall get_ClientRequest(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Web::Core::WebTokenRequest>(this->shim().ClientRequest());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WebAccounts(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount>>(this->shim().WebAccounts());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WebAccountSelectionOptions(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Web::Provider::WebAccountSelectionOptions>(this->shim().WebAccountSelectionOptions());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ApplicationCallbackUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().ApplicationCallbackUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetApplicationTokenBindingKeyAsync(int32_t keyType, void* target, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Core::CryptographicKey>>(this->shim().GetApplicationTokenBindingKeyAsync(*reinterpret_cast<Windows::Security::Authentication::Web::TokenBindingKeyType const*>(&keyType), *reinterpret_cast<Windows::Foundation::Uri const*>(&target)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest2> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest2>
    {
        int32_t __stdcall GetApplicationTokenBindingKeyIdAsync(int32_t keyType, void* target, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>>(this->shim().GetApplicationTokenBindingKeyIdAsync(*reinterpret_cast<Windows::Security::Authentication::Web::TokenBindingKeyType const*>(&keyType), *reinterpret_cast<Windows::Foundation::Uri const*>(&target)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest3> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest3>
    {
        int32_t __stdcall get_ApplicationPackageFamilyName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ApplicationPackageFamilyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ApplicationProcessName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ApplicationProcessName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CheckApplicationForCapabilityAsync(void* capabilityName, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().CheckApplicationForCapabilityAsync(*reinterpret_cast<hstring const*>(&capabilityName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse>
    {
        int32_t __stdcall get_ClientResponse(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Web::Core::WebTokenResponse>(this->shim().ClientResponse());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponseFactory> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponseFactory>
    {
        int32_t __stdcall Create(void* webTokenResponse, void** webProviderTokenResponse) noexcept final try
        {
            clear_abi(webProviderTokenResponse);
            typename D::abi_guard guard(this->shim());
            *webProviderTokenResponse = detach_from<Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse>(this->shim().Create(*reinterpret_cast<Windows::Security::Authentication::Web::Core::WebTokenResponse const*>(&webTokenResponse)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Security::Authentication::Web::Provider
{
    constexpr auto operator|(WebAccountSelectionOptions const left, WebAccountSelectionOptions const right) noexcept
    {
        return static_cast<WebAccountSelectionOptions>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(WebAccountSelectionOptions& left, WebAccountSelectionOptions const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(WebAccountSelectionOptions const left, WebAccountSelectionOptions const right) noexcept
    {
        return static_cast<WebAccountSelectionOptions>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(WebAccountSelectionOptions& left, WebAccountSelectionOptions const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(WebAccountSelectionOptions const value) noexcept
    {
        return static_cast<WebAccountSelectionOptions>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(WebAccountSelectionOptions const left, WebAccountSelectionOptions const right) noexcept
    {
        return static_cast<WebAccountSelectionOptions>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(WebAccountSelectionOptions& left, WebAccountSelectionOptions const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline WebAccountClientView::WebAccountClientView(Windows::Security::Authentication::Web::Provider::WebAccountClientViewType const& viewType, Windows::Foundation::Uri const& applicationCallbackUri) :
        WebAccountClientView(impl::call_factory<WebAccountClientView, Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory>([&](auto&& f) { return f.Create(viewType, applicationCallbackUri); }))
    {
    }
    inline WebAccountClientView::WebAccountClientView(Windows::Security::Authentication::Web::Provider::WebAccountClientViewType const& viewType, Windows::Foundation::Uri const& applicationCallbackUri, param::hstring const& accountPairwiseId) :
        WebAccountClientView(impl::call_factory<WebAccountClientView, Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory>([&](auto&& f) { return f.CreateWithPairwiseId(viewType, applicationCallbackUri, accountPairwiseId); }))
    {
    }
    inline auto WebAccountManager::UpdateWebAccountPropertiesAsync(Windows::Security::Credentials::WebAccount const& webAccount, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& additionalProperties)
    {
        return impl::call_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>([&](auto&& f) { return f.UpdateWebAccountPropertiesAsync(webAccount, webAccountUserName, additionalProperties); });
    }
    inline auto WebAccountManager::AddWebAccountAsync(param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props)
    {
        return impl::call_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>([&](auto&& f) { return f.AddWebAccountAsync(webAccountId, webAccountUserName, props); });
    }
    inline auto WebAccountManager::DeleteWebAccountAsync(Windows::Security::Credentials::WebAccount const& webAccount)
    {
        return impl::call_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>([&](auto&& f) { return f.DeleteWebAccountAsync(webAccount); });
    }
    inline auto WebAccountManager::FindAllProviderWebAccountsAsync()
    {
        return impl::call_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>([&](auto&& f) { return f.FindAllProviderWebAccountsAsync(); });
    }
    inline auto WebAccountManager::PushCookiesAsync(Windows::Foundation::Uri const& uri, param::async_vector_view<Windows::Web::Http::HttpCookie> const& cookies)
    {
        return impl::call_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>([&](auto&& f) { return f.PushCookiesAsync(uri, cookies); });
    }
    inline auto WebAccountManager::SetViewAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Security::Authentication::Web::Provider::WebAccountClientView const& view)
    {
        return impl::call_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>([&](auto&& f) { return f.SetViewAsync(webAccount, view); });
    }
    inline auto WebAccountManager::ClearViewAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Foundation::Uri const& applicationCallbackUri)
    {
        return impl::call_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>([&](auto&& f) { return f.ClearViewAsync(webAccount, applicationCallbackUri); });
    }
    inline auto WebAccountManager::GetViewsAsync(Windows::Security::Credentials::WebAccount const& webAccount)
    {
        return impl::call_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>([&](auto&& f) { return f.GetViewsAsync(webAccount); });
    }
    inline auto WebAccountManager::SetWebAccountPictureAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Storage::Streams::IRandomAccessStream const& webAccountPicture)
    {
        return impl::call_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>([&](auto&& f) { return f.SetWebAccountPictureAsync(webAccount, webAccountPicture); });
    }
    inline auto WebAccountManager::ClearWebAccountPictureAsync(Windows::Security::Credentials::WebAccount const& webAccount)
    {
        return impl::call_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>([&](auto&& f) { return f.ClearWebAccountPictureAsync(webAccount); });
    }
    inline auto WebAccountManager::PullCookiesAsync(param::hstring const& uriString, param::hstring const& callerPFN)
    {
        return impl::call_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics2>([&](auto&& f) { return f.PullCookiesAsync(uriString, callerPFN); });
    }
    inline auto WebAccountManager::FindAllProviderWebAccountsForUserAsync(Windows::System::User const& user)
    {
        return impl::call_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3>([&](auto&& f) { return f.FindAllProviderWebAccountsForUserAsync(user); });
    }
    inline auto WebAccountManager::AddWebAccountForUserAsync(Windows::System::User const& user, param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props)
    {
        return impl::call_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3>([&](auto&& f) { return f.AddWebAccountForUserAsync(user, webAccountId, webAccountUserName, props); });
    }
    inline auto WebAccountManager::AddWebAccountForUserAsync(Windows::System::User const& user, param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope)
    {
        return impl::call_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3>([&](auto&& f) { return f.AddWebAccountForUserAsync(user, webAccountId, webAccountUserName, props, scope); });
    }
    inline auto WebAccountManager::AddWebAccountForUserAsync(Windows::System::User const& user, param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope, param::hstring const& perUserWebAccountId)
    {
        return impl::call_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3>([&](auto&& f) { return f.AddWebAccountForUserAsync(user, webAccountId, webAccountUserName, props, scope, perUserWebAccountId); });
    }
    inline auto WebAccountManager::InvalidateAppCacheForAllAccountsAsync()
    {
        return impl::call_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics4>([&](auto&& f) { return f.InvalidateAppCacheForAllAccountsAsync(); });
    }
    inline auto WebAccountManager::InvalidateAppCacheForAccountAsync(Windows::Security::Credentials::WebAccount const& webAccount)
    {
        return impl::call_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics4>([&](auto&& f) { return f.InvalidateAppCacheForAccountAsync(webAccount); });
    }
    inline auto WebAccountManager::AddWebAccountAsync(param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope, param::hstring const& perUserWebAccountId)
    {
        return impl::call_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics>([&](auto&& f) { return f.AddWebAccountAsync(webAccountId, webAccountUserName, props, scope, perUserWebAccountId); });
    }
    inline auto WebAccountManager::SetPerAppToPerUserAccountAsync(Windows::Security::Credentials::WebAccount const& perAppAccount, param::hstring const& perUserWebAccountId)
    {
        return impl::call_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics>([&](auto&& f) { return f.SetPerAppToPerUserAccountAsync(perAppAccount, perUserWebAccountId); });
    }
    inline auto WebAccountManager::GetPerUserFromPerAppAccountAsync(Windows::Security::Credentials::WebAccount const& perAppAccount)
    {
        return impl::call_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics>([&](auto&& f) { return f.GetPerUserFromPerAppAccountAsync(perAppAccount); });
    }
    inline auto WebAccountManager::ClearPerUserFromPerAppAccountAsync(Windows::Security::Credentials::WebAccount const& perAppAccount)
    {
        return impl::call_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics>([&](auto&& f) { return f.ClearPerUserFromPerAppAccountAsync(perAppAccount); });
    }
    inline auto WebAccountManager::AddWebAccountAsync(param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope)
    {
        return impl::call_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics>([&](auto&& f) { return f.AddWebAccountAsync(webAccountId, webAccountUserName, props, scope); });
    }
    inline auto WebAccountManager::SetScopeAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope)
    {
        return impl::call_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics>([&](auto&& f) { return f.SetScopeAsync(webAccount, scope); });
    }
    inline auto WebAccountManager::GetScope(Windows::Security::Credentials::WebAccount const& webAccount)
    {
        return impl::call_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics>([&](auto&& f) { return f.GetScope(webAccount); });
    }
    inline WebProviderTokenResponse::WebProviderTokenResponse(Windows::Security::Authentication::Web::Core::WebTokenResponse const& webTokenResponse) :
        WebProviderTokenResponse(impl::call_factory<WebProviderTokenResponse, Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponseFactory>([&](auto&& f) { return f.Create(webTokenResponse); }))
    {
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountClientView> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountClientView> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics2> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics2> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics4> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics4> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects2> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects2> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest2> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest2> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest3> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest3> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponseFactory> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponseFactory> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::WebAccountClientView> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::WebAccountClientView> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::WebAccountManager> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::WebAccountManager> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderAddAccountOperation> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderAddAccountOperation> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderDeleteAccountOperation> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderDeleteAccountOperation> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderGetTokenSilentOperation> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderGetTokenSilentOperation> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderManageAccountOperation> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderManageAccountOperation> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderRequestTokenOperation> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderRequestTokenOperation> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderRetrieveCookiesOperation> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderRetrieveCookiesOperation> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderSignOutAccountOperation> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderSignOutAccountOperation> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderTriggerDetails> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderTriggerDetails> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::WebProviderTokenRequest> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::WebProviderTokenRequest> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse> {};
}
#endif
