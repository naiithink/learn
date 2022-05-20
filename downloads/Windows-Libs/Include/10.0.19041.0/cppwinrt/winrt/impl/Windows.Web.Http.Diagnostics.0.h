// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Web_Http_Diagnostics_0_H
#define WINRT_Windows_Web_Http_Diagnostics_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
    struct Uri;
}
namespace winrt::Windows::System::Diagnostics
{
    struct ProcessDiagnosticInfo;
}
namespace winrt::Windows::Web::Http
{
    struct HttpRequestMessage;
    struct HttpResponseMessage;
}
namespace winrt::Windows::Web::Http::Diagnostics
{
    enum class HttpDiagnosticRequestInitiator : int32_t
    {
        ParsedElement = 0,
        Script = 1,
        Image = 2,
        Link = 3,
        Style = 4,
        XmlHttpRequest = 5,
        Media = 6,
        HtmlDownload = 7,
        Prefetch = 8,
        Other = 9,
        CrossOriginPreFlight = 10,
        Fetch = 11,
        Beacon = 12,
    };
    struct IHttpDiagnosticProvider;
    struct IHttpDiagnosticProviderRequestResponseCompletedEventArgs;
    struct IHttpDiagnosticProviderRequestResponseTimestamps;
    struct IHttpDiagnosticProviderRequestSentEventArgs;
    struct IHttpDiagnosticProviderResponseReceivedEventArgs;
    struct IHttpDiagnosticProviderStatics;
    struct IHttpDiagnosticSourceLocation;
    struct HttpDiagnosticProvider;
    struct HttpDiagnosticProviderRequestResponseCompletedEventArgs;
    struct HttpDiagnosticProviderRequestResponseTimestamps;
    struct HttpDiagnosticProviderRequestSentEventArgs;
    struct HttpDiagnosticProviderResponseReceivedEventArgs;
    struct HttpDiagnosticSourceLocation;
}
namespace winrt::impl
{
    template <> struct category<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderResponseReceivedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseCompletedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseTimestamps>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestSentEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::Http::Diagnostics::HttpDiagnosticProviderResponseReceivedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::Http::Diagnostics::HttpDiagnosticRequestInitiator>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProvider" };
    };
    template <> struct name<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderRequestResponseCompletedEventArgs" };
    };
    template <> struct name<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderRequestResponseTimestamps" };
    };
    template <> struct name<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderRequestSentEventArgs" };
    };
    template <> struct name<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderResponseReceivedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderResponseReceivedEventArgs" };
    };
    template <> struct name<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderStatics>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderStatics" };
    };
    template <> struct name<Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.IHttpDiagnosticSourceLocation" };
    };
    template <> struct name<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.HttpDiagnosticProvider" };
    };
    template <> struct name<Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseCompletedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestResponseCompletedEventArgs" };
    };
    template <> struct name<Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseTimestamps>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestResponseTimestamps" };
    };
    template <> struct name<Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestSentEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestSentEventArgs" };
    };
    template <> struct name<Windows::Web::Http::Diagnostics::HttpDiagnosticProviderResponseReceivedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.HttpDiagnosticProviderResponseReceivedEventArgs" };
    };
    template <> struct name<Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.HttpDiagnosticSourceLocation" };
    };
    template <> struct name<Windows::Web::Http::Diagnostics::HttpDiagnosticRequestInitiator>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.HttpDiagnosticRequestInitiator" };
    };
    template <> struct guid_storage<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider>
    {
        static constexpr guid value{ 0xBD811501,0xA056,0x4D39,{ 0xB1,0x74,0x83,0x3B,0x7B,0x03,0xB0,0x2C } };
    };
    template <> struct guid_storage<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs>
    {
        static constexpr guid value{ 0x735F98EE,0x94F6,0x4532,{ 0xB2,0x6E,0x61,0xE1,0xB1,0xE4,0xEF,0xD4 } };
    };
    template <> struct guid_storage<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps>
    {
        static constexpr guid value{ 0xE0AFDE10,0x55CF,0x4C01,{ 0x91,0xD4,0xA2,0x05,0x57,0xD8,0x49,0xF0 } };
    };
    template <> struct guid_storage<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs>
    {
        static constexpr guid value{ 0x3F5196D0,0x4C1F,0x4EBE,{ 0xA5,0x7A,0x06,0x93,0x07,0x71,0xC5,0x0D } };
    };
    template <> struct guid_storage<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderResponseReceivedEventArgs>
    {
        static constexpr guid value{ 0xA0A2566C,0xAB5F,0x4D66,{ 0xBB,0x2D,0x08,0x4C,0xF4,0x16,0x35,0xD0 } };
    };
    template <> struct guid_storage<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderStatics>
    {
        static constexpr guid value{ 0x5B824EC1,0x6A6C,0x47CC,{ 0xAF,0xEC,0x1E,0x86,0xBC,0x26,0x05,0x3B } };
    };
    template <> struct guid_storage<Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation>
    {
        static constexpr guid value{ 0x54A9D260,0x8860,0x423F,{ 0xB6,0xFA,0xD7,0x77,0x16,0xF6,0x47,0xA7 } };
    };
    template <> struct default_interface<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider>
    {
        using type = Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider;
    };
    template <> struct default_interface<Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseCompletedEventArgs>
    {
        using type = Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs;
    };
    template <> struct default_interface<Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseTimestamps>
    {
        using type = Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps;
    };
    template <> struct default_interface<Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestSentEventArgs>
    {
        using type = Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs;
    };
    template <> struct default_interface<Windows::Web::Http::Diagnostics::HttpDiagnosticProviderResponseReceivedEventArgs>
    {
        using type = Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderResponseReceivedEventArgs;
    };
    template <> struct default_interface<Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation>
    {
        using type = Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation;
    };
    template <> struct abi<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
            virtual int32_t __stdcall add_RequestSent(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RequestSent(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ResponseReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ResponseReceived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_RequestResponseCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RequestResponseCompleted(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ActivityId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_Timestamps(void**) noexcept = 0;
            virtual int32_t __stdcall get_RequestedUri(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProcessId(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ThreadId(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Initiator(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SourceLocations(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CacheCheckedTimestamp(void**) noexcept = 0;
            virtual int32_t __stdcall get_ConnectionInitiatedTimestamp(void**) noexcept = 0;
            virtual int32_t __stdcall get_NameResolvedTimestamp(void**) noexcept = 0;
            virtual int32_t __stdcall get_SslNegotiatedTimestamp(void**) noexcept = 0;
            virtual int32_t __stdcall get_ConnectionCompletedTimestamp(void**) noexcept = 0;
            virtual int32_t __stdcall get_RequestSentTimestamp(void**) noexcept = 0;
            virtual int32_t __stdcall get_RequestCompletedTimestamp(void**) noexcept = 0;
            virtual int32_t __stdcall get_ResponseReceivedTimestamp(void**) noexcept = 0;
            virtual int32_t __stdcall get_ResponseCompletedTimestamp(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_ActivityId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProcessId(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ThreadId(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Initiator(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SourceLocations(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderResponseReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_ActivityId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromProcessDiagnosticInfo(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SourceUri(void**) noexcept = 0;
            virtual int32_t __stdcall get_LineNumber(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_ColumnNumber(uint64_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProvider
    {
        auto Start() const;
        auto Stop() const;
        auto RequestSent(Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestSentEventArgs> const& handler) const;
        using RequestSent_revoker = impl::event_revoker<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider, &impl::abi_t<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider>::remove_RequestSent>;
        RequestSent_revoker RequestSent(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestSentEventArgs> const& handler) const;
        auto RequestSent(winrt::event_token const& token) const noexcept;
        auto ResponseReceived(Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderResponseReceivedEventArgs> const& handler) const;
        using ResponseReceived_revoker = impl::event_revoker<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider, &impl::abi_t<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider>::remove_ResponseReceived>;
        ResponseReceived_revoker ResponseReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderResponseReceivedEventArgs> const& handler) const;
        auto ResponseReceived(winrt::event_token const& token) const noexcept;
        auto RequestResponseCompleted(Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseCompletedEventArgs> const& handler) const;
        using RequestResponseCompleted_revoker = impl::event_revoker<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider, &impl::abi_t<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider>::remove_RequestResponseCompleted>;
        RequestResponseCompleted_revoker RequestResponseCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseCompletedEventArgs> const& handler) const;
        auto RequestResponseCompleted(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider>
    {
        template <typename D> using type = consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProvider<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseCompletedEventArgs
    {
        [[nodiscard]] auto ActivityId() const;
        [[nodiscard]] auto Timestamps() const;
        [[nodiscard]] auto RequestedUri() const;
        [[nodiscard]] auto ProcessId() const;
        [[nodiscard]] auto ThreadId() const;
        [[nodiscard]] auto Initiator() const;
        [[nodiscard]] auto SourceLocations() const;
    };
    template <> struct consume<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs>
    {
        template <typename D> using type = consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseCompletedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseTimestamps
    {
        [[nodiscard]] auto CacheCheckedTimestamp() const;
        [[nodiscard]] auto ConnectionInitiatedTimestamp() const;
        [[nodiscard]] auto NameResolvedTimestamp() const;
        [[nodiscard]] auto SslNegotiatedTimestamp() const;
        [[nodiscard]] auto ConnectionCompletedTimestamp() const;
        [[nodiscard]] auto RequestSentTimestamp() const;
        [[nodiscard]] auto RequestCompletedTimestamp() const;
        [[nodiscard]] auto ResponseReceivedTimestamp() const;
        [[nodiscard]] auto ResponseCompletedTimestamp() const;
    };
    template <> struct consume<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps>
    {
        template <typename D> using type = consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseTimestamps<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestSentEventArgs
    {
        [[nodiscard]] auto Timestamp() const;
        [[nodiscard]] auto ActivityId() const;
        [[nodiscard]] auto Message() const;
        [[nodiscard]] auto ProcessId() const;
        [[nodiscard]] auto ThreadId() const;
        [[nodiscard]] auto Initiator() const;
        [[nodiscard]] auto SourceLocations() const;
    };
    template <> struct consume<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs>
    {
        template <typename D> using type = consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestSentEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderResponseReceivedEventArgs
    {
        [[nodiscard]] auto Timestamp() const;
        [[nodiscard]] auto ActivityId() const;
        [[nodiscard]] auto Message() const;
    };
    template <> struct consume<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderResponseReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderResponseReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderStatics
    {
        auto CreateFromProcessDiagnosticInfo(Windows::System::Diagnostics::ProcessDiagnosticInfo const& processDiagnosticInfo) const;
    };
    template <> struct consume<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderStatics>
    {
        template <typename D> using type = consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticSourceLocation
    {
        [[nodiscard]] auto SourceUri() const;
        [[nodiscard]] auto LineNumber() const;
        [[nodiscard]] auto ColumnNumber() const;
    };
    template <> struct consume<Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation>
    {
        template <typename D> using type = consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticSourceLocation<D>;
    };
}
#endif
