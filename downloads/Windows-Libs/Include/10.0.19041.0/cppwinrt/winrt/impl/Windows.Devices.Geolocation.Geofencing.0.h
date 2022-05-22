// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Geolocation_Geofencing_0_H
#define WINRT_Windows_Devices_Geolocation_Geofencing_0_H
namespace winrt::Windows::Devices::Geolocation
{
    struct Geoposition;
    struct IGeoshape;
}
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Devices::Geolocation::Geofencing
{
    enum class GeofenceMonitorStatus : int32_t
    {
        Ready = 0,
        Initializing = 1,
        NoData = 2,
        Disabled = 3,
        NotInitialized = 4,
        NotAvailable = 5,
    };
    enum class GeofenceRemovalReason : int32_t
    {
        Used = 0,
        Expired = 1,
    };
    enum class GeofenceState : uint32_t
    {
        None = 0,
        Entered = 0x1,
        Exited = 0x2,
        Removed = 0x4,
    };
    enum class MonitoredGeofenceStates : uint32_t
    {
        None = 0,
        Entered = 0x1,
        Exited = 0x2,
        Removed = 0x4,
    };
    struct IGeofence;
    struct IGeofenceFactory;
    struct IGeofenceMonitor;
    struct IGeofenceMonitorStatics;
    struct IGeofenceStateChangeReport;
    struct Geofence;
    struct GeofenceMonitor;
    struct GeofenceStateChangeReport;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Geolocation::Geofencing::IGeofence>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::Geofencing::IGeofenceFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitorStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::Geofencing::Geofence>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Geolocation::Geofencing::GeofenceMonitorStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Geolocation::Geofencing::GeofenceRemovalReason>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Geolocation::Geofencing::GeofenceState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Devices::Geolocation::Geofencing::IGeofence>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.Geofencing.IGeofence" };
    };
    template <> struct name<Windows::Devices::Geolocation::Geofencing::IGeofenceFactory>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.Geofencing.IGeofenceFactory" };
    };
    template <> struct name<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.Geofencing.IGeofenceMonitor" };
    };
    template <> struct name<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitorStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.Geofencing.IGeofenceMonitorStatics" };
    };
    template <> struct name<Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.Geofencing.IGeofenceStateChangeReport" };
    };
    template <> struct name<Windows::Devices::Geolocation::Geofencing::Geofence>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.Geofencing.Geofence" };
    };
    template <> struct name<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.Geofencing.GeofenceMonitor" };
    };
    template <> struct name<Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.Geofencing.GeofenceStateChangeReport" };
    };
    template <> struct name<Windows::Devices::Geolocation::Geofencing::GeofenceMonitorStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.Geofencing.GeofenceMonitorStatus" };
    };
    template <> struct name<Windows::Devices::Geolocation::Geofencing::GeofenceRemovalReason>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.Geofencing.GeofenceRemovalReason" };
    };
    template <> struct name<Windows::Devices::Geolocation::Geofencing::GeofenceState>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.Geofencing.GeofenceState" };
    };
    template <> struct name<Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.Geofencing.MonitoredGeofenceStates" };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::Geofencing::IGeofence>
    {
        static constexpr guid value{ 0x9C090823,0xEDB8,0x47E0,{ 0x82,0x45,0x5B,0xF6,0x1D,0x32,0x1F,0x2D } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::Geofencing::IGeofenceFactory>
    {
        static constexpr guid value{ 0x841F624B,0x325F,0x4B90,{ 0xBC,0xA7,0x2B,0x80,0x22,0xA9,0x37,0x96 } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor>
    {
        static constexpr guid value{ 0x4C0F5F78,0x1C1F,0x4621,{ 0xBB,0xBD,0x83,0x3B,0x92,0x24,0x72,0x26 } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitorStatics>
    {
        static constexpr guid value{ 0x2DD32FCF,0x7E75,0x4899,{ 0xAC,0xE3,0x2B,0xD0,0xA6,0x5C,0xCE,0x06 } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport>
    {
        static constexpr guid value{ 0x9A243C18,0x2464,0x4C89,{ 0xBE,0x05,0xB3,0xFF,0xFF,0x5B,0xAB,0xC5 } };
    };
    template <> struct default_interface<Windows::Devices::Geolocation::Geofencing::Geofence>
    {
        using type = Windows::Devices::Geolocation::Geofencing::IGeofence;
    };
    template <> struct default_interface<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>
    {
        using type = Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor;
    };
    template <> struct default_interface<Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>
    {
        using type = Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport;
    };
    template <> struct abi<Windows::Devices::Geolocation::Geofencing::IGeofence>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StartTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_DwellTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_MonitoredStates(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Geoshape(void**) noexcept = 0;
            virtual int32_t __stdcall get_SingleUse(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::Geofencing::IGeofenceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithMonitorStates(void*, void*, uint32_t, bool, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithMonitorStatesAndDwellTime(void*, void*, uint32_t, bool, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithMonitorStatesDwellTimeStartTimeAndDuration(void*, void*, uint32_t, bool, int64_t, int64_t, int64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Geofences(void**) noexcept = 0;
            virtual int32_t __stdcall get_LastKnownGeoposition(void**) noexcept = 0;
            virtual int32_t __stdcall add_GeofenceStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_GeofenceStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall ReadReports(void**) noexcept = 0;
            virtual int32_t __stdcall add_StatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StatusChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Current(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NewState(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Geofence(void**) noexcept = 0;
            virtual int32_t __stdcall get_Geoposition(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemovalReason(int32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_Geofencing_IGeofence
    {
        [[nodiscard]] auto StartTime() const;
        [[nodiscard]] auto Duration() const;
        [[nodiscard]] auto DwellTime() const;
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto MonitoredStates() const;
        [[nodiscard]] auto Geoshape() const;
        [[nodiscard]] auto SingleUse() const;
    };
    template <> struct consume<Windows::Devices::Geolocation::Geofencing::IGeofence>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_Geofencing_IGeofence<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_Geofencing_IGeofenceFactory
    {
        auto Create(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape) const;
        auto CreateWithMonitorStates(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const& monitoredStates, bool singleUse) const;
        auto CreateWithMonitorStatesAndDwellTime(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const& monitoredStates, bool singleUse, Windows::Foundation::TimeSpan const& dwellTime) const;
        auto CreateWithMonitorStatesDwellTimeStartTimeAndDuration(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const& monitoredStates, bool singleUse, Windows::Foundation::TimeSpan const& dwellTime, Windows::Foundation::DateTime const& startTime, Windows::Foundation::TimeSpan const& duration) const;
    };
    template <> struct consume<Windows::Devices::Geolocation::Geofencing::IGeofenceFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_Geofencing_IGeofenceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto Geofences() const;
        [[nodiscard]] auto LastKnownGeoposition() const;
        auto GeofenceStateChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::Foundation::IInspectable> const& eventHandler) const;
        using GeofenceStateChanged_revoker = impl::event_revoker<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor, &impl::abi_t<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor>::remove_GeofenceStateChanged>;
        GeofenceStateChanged_revoker GeofenceStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::Foundation::IInspectable> const& eventHandler) const;
        auto GeofenceStateChanged(winrt::event_token const& token) const noexcept;
        auto ReadReports() const;
        auto StatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::Foundation::IInspectable> const& eventHandler) const;
        using StatusChanged_revoker = impl::event_revoker<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor, &impl::abi_t<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor>::remove_StatusChanged>;
        StatusChanged_revoker StatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::Foundation::IInspectable> const& eventHandler) const;
        auto StatusChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitorStatics
    {
        [[nodiscard]] auto Current() const;
    };
    template <> struct consume<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitorStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_Geofencing_IGeofenceStateChangeReport
    {
        [[nodiscard]] auto NewState() const;
        [[nodiscard]] auto Geofence() const;
        [[nodiscard]] auto Geoposition() const;
        [[nodiscard]] auto RemovalReason() const;
    };
    template <> struct consume<Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_Geofencing_IGeofenceStateChangeReport<D>;
    };
}
#endif
