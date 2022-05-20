// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Background_0_H
#define WINRT_Windows_ApplicationModel_Background_0_H
namespace winrt::Windows::ApplicationModel::Activation
{
    struct BackgroundActivatedEventArgs;
}
namespace winrt::Windows::ApplicationModel::Calls::Background
{
    enum class PhoneTriggerType : int32_t;
}
namespace winrt::Windows::Devices::Bluetooth
{
    enum class BluetoothError : int32_t;
    struct BluetoothSignalStrengthFilter;
}
namespace winrt::Windows::Devices::Bluetooth::Advertisement
{
    struct BluetoothLEAdvertisement;
    struct BluetoothLEAdvertisementFilter;
}
namespace winrt::Windows::Devices::Bluetooth::Background
{
    enum class BluetoothEventTriggeringMode : int32_t;
    struct RfcommInboundConnectionInformation;
    struct RfcommOutboundConnectionInformation;
}
namespace winrt::Windows::Devices::Bluetooth::GenericAttributeProfile
{
    struct GattCharacteristic;
    struct GattLocalService;
    struct GattServiceProviderAdvertisingParameters;
}
namespace winrt::Windows::Devices::Geolocation
{
    enum class VisitMonitoringScope : int32_t;
}
namespace winrt::Windows::Devices::Sensors
{
    struct ISensorDataThreshold;
}
namespace winrt::Windows::Devices::SmartCards
{
    enum class SmartCardTriggerType : int32_t;
}
namespace winrt::Windows::Devices::Sms
{
    struct SmsFilterRules;
}
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename T> struct IReference;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
    struct ValueSet;
}
namespace winrt::Windows::Networking
{
    struct HostName;
}
namespace winrt::Windows::Networking::Sockets
{
    enum class SocketProtectionLevel : int32_t;
}
namespace winrt::Windows::Storage
{
    struct StorageLibrary;
    struct StorageLibraryChangeTracker;
}
namespace winrt::Windows::Storage::Provider
{
    enum class CachedFileTarget : int32_t;
    struct FileUpdateRequest;
}
namespace winrt::Windows::System
{
    struct User;
}
namespace winrt::Windows::UI::Notifications
{
    enum class NotificationKinds : uint32_t;
}
namespace winrt::Windows::ApplicationModel::Background
{
    enum class AlarmAccessStatus : int32_t
    {
        Unspecified = 0,
        AllowedWithWakeupCapability = 1,
        AllowedWithoutWakeupCapability = 2,
        Denied = 3,
    };
    enum class ApplicationTriggerResult : int32_t
    {
        Allowed = 0,
        CurrentlyRunning = 1,
        DisabledByPolicy = 2,
        UnknownError = 3,
    };
    enum class BackgroundAccessRequestKind : int32_t
    {
        AlwaysAllowed = 0,
        AllowedSubjectToSystemPolicy = 1,
    };
    enum class BackgroundAccessStatus : int32_t
    {
        Unspecified = 0,
        AllowedWithAlwaysOnRealTimeConnectivity = 1,
        AllowedMayUseActiveRealTimeConnectivity = 2,
        Denied = 3,
        AlwaysAllowed = 4,
        AllowedSubjectToSystemPolicy = 5,
        DeniedBySystemPolicy = 6,
        DeniedByUser = 7,
    };
    enum class BackgroundTaskCancellationReason : int32_t
    {
        Abort = 0,
        Terminating = 1,
        LoggingOff = 2,
        ServicingUpdate = 3,
        IdleTask = 4,
        Uninstall = 5,
        ConditionLoss = 6,
        SystemPolicy = 7,
        QuietHoursEntered = 8,
        ExecutionTimeExceeded = 9,
        ResourceRevocation = 10,
        EnergySaver = 11,
    };
    enum class BackgroundTaskThrottleCounter : int32_t
    {
        All = 0,
        Cpu = 1,
        Network = 2,
    };
    enum class BackgroundWorkCostValue : int32_t
    {
        Low = 0,
        Medium = 1,
        High = 2,
    };
    enum class CustomSystemEventTriggerRecurrence : int32_t
    {
        Once = 0,
        Always = 1,
    };
    enum class DeviceTriggerResult : int32_t
    {
        Allowed = 0,
        DeniedByUser = 1,
        DeniedBySystem = 2,
        LowBattery = 3,
    };
    enum class LocationTriggerType : int32_t
    {
        Geofence = 0,
    };
    enum class MediaProcessingTriggerResult : int32_t
    {
        Allowed = 0,
        CurrentlyRunning = 1,
        DisabledByPolicy = 2,
        UnknownError = 3,
    };
    enum class SystemConditionType : int32_t
    {
        Invalid = 0,
        UserPresent = 1,
        UserNotPresent = 2,
        InternetAvailable = 3,
        InternetNotAvailable = 4,
        SessionConnected = 5,
        SessionDisconnected = 6,
        FreeNetworkAvailable = 7,
        BackgroundWorkCostNotHigh = 8,
    };
    enum class SystemTriggerType : int32_t
    {
        Invalid = 0,
        SmsReceived = 1,
        UserPresent = 2,
        UserAway = 3,
        NetworkStateChange = 4,
        ControlChannelReset = 5,
        InternetAvailable = 6,
        SessionConnected = 7,
        ServicingComplete = 8,
        LockScreenApplicationAdded = 9,
        LockScreenApplicationRemoved = 10,
        TimeZoneChange = 11,
        OnlineIdConnectedStateChange = 12,
        BackgroundWorkCostChange = 13,
        PowerStateChange = 14,
        DefaultSignInAccountChange = 15,
    };
    struct IActivitySensorTrigger;
    struct IActivitySensorTriggerFactory;
    struct IAlarmApplicationManagerStatics;
    struct IAppBroadcastTrigger;
    struct IAppBroadcastTriggerFactory;
    struct IAppBroadcastTriggerProviderInfo;
    struct IApplicationTrigger;
    struct IApplicationTriggerDetails;
    struct IAppointmentStoreNotificationTrigger;
    struct IBackgroundCondition;
    struct IBackgroundExecutionManagerStatics;
    struct IBackgroundExecutionManagerStatics2;
    struct IBackgroundTask;
    struct IBackgroundTaskBuilder;
    struct IBackgroundTaskBuilder2;
    struct IBackgroundTaskBuilder3;
    struct IBackgroundTaskBuilder4;
    struct IBackgroundTaskBuilder5;
    struct IBackgroundTaskCompletedEventArgs;
    struct IBackgroundTaskDeferral;
    struct IBackgroundTaskInstance;
    struct IBackgroundTaskInstance2;
    struct IBackgroundTaskInstance4;
    struct IBackgroundTaskProgressEventArgs;
    struct IBackgroundTaskRegistration;
    struct IBackgroundTaskRegistration2;
    struct IBackgroundTaskRegistration3;
    struct IBackgroundTaskRegistrationGroup;
    struct IBackgroundTaskRegistrationGroupFactory;
    struct IBackgroundTaskRegistrationStatics;
    struct IBackgroundTaskRegistrationStatics2;
    struct IBackgroundTrigger;
    struct IBackgroundWorkCostStatics;
    struct IBluetoothLEAdvertisementPublisherTrigger;
    struct IBluetoothLEAdvertisementPublisherTrigger2;
    struct IBluetoothLEAdvertisementWatcherTrigger;
    struct IBluetoothLEAdvertisementWatcherTrigger2;
    struct ICachedFileUpdaterTrigger;
    struct ICachedFileUpdaterTriggerDetails;
    struct IChatMessageNotificationTrigger;
    struct IChatMessageReceivedNotificationTrigger;
    struct ICommunicationBlockingAppSetAsActiveTrigger;
    struct IContactStoreNotificationTrigger;
    struct IContentPrefetchTrigger;
    struct IContentPrefetchTriggerFactory;
    struct ICustomSystemEventTrigger;
    struct ICustomSystemEventTriggerFactory;
    struct IDeviceConnectionChangeTrigger;
    struct IDeviceConnectionChangeTriggerStatics;
    struct IDeviceManufacturerNotificationTrigger;
    struct IDeviceManufacturerNotificationTriggerFactory;
    struct IDeviceServicingTrigger;
    struct IDeviceUseTrigger;
    struct IDeviceWatcherTrigger;
    struct IEmailStoreNotificationTrigger;
    struct IGattCharacteristicNotificationTrigger;
    struct IGattCharacteristicNotificationTrigger2;
    struct IGattCharacteristicNotificationTriggerFactory;
    struct IGattCharacteristicNotificationTriggerFactory2;
    struct IGattServiceProviderTrigger;
    struct IGattServiceProviderTriggerResult;
    struct IGattServiceProviderTriggerStatics;
    struct IGeovisitTrigger;
    struct ILocationTrigger;
    struct ILocationTriggerFactory;
    struct IMaintenanceTrigger;
    struct IMaintenanceTriggerFactory;
    struct IMediaProcessingTrigger;
    struct INetworkOperatorHotspotAuthenticationTrigger;
    struct INetworkOperatorNotificationTrigger;
    struct INetworkOperatorNotificationTriggerFactory;
    struct IPhoneTrigger;
    struct IPhoneTriggerFactory;
    struct IPushNotificationTriggerFactory;
    struct IRcsEndUserMessageAvailableTrigger;
    struct IRfcommConnectionTrigger;
    struct ISecondaryAuthenticationFactorAuthenticationTrigger;
    struct ISensorDataThresholdTrigger;
    struct ISensorDataThresholdTriggerFactory;
    struct ISmartCardTrigger;
    struct ISmartCardTriggerFactory;
    struct ISmsMessageReceivedTriggerFactory;
    struct ISocketActivityTrigger;
    struct IStorageLibraryChangeTrackerTriggerFactory;
    struct IStorageLibraryContentChangedTrigger;
    struct IStorageLibraryContentChangedTriggerStatics;
    struct ISystemCondition;
    struct ISystemConditionFactory;
    struct ISystemTrigger;
    struct ISystemTriggerFactory;
    struct ITimeTrigger;
    struct ITimeTriggerFactory;
    struct IToastNotificationActionTriggerFactory;
    struct IToastNotificationHistoryChangedTriggerFactory;
    struct IUserNotificationChangedTriggerFactory;
    struct ActivitySensorTrigger;
    struct AlarmApplicationManager;
    struct AppBroadcastTrigger;
    struct AppBroadcastTriggerProviderInfo;
    struct ApplicationTrigger;
    struct ApplicationTriggerDetails;
    struct AppointmentStoreNotificationTrigger;
    struct BackgroundExecutionManager;
    struct BackgroundTaskBuilder;
    struct BackgroundTaskCompletedEventArgs;
    struct BackgroundTaskDeferral;
    struct BackgroundTaskProgressEventArgs;
    struct BackgroundTaskRegistration;
    struct BackgroundTaskRegistrationGroup;
    struct BackgroundWorkCost;
    struct BluetoothLEAdvertisementPublisherTrigger;
    struct BluetoothLEAdvertisementWatcherTrigger;
    struct CachedFileUpdaterTrigger;
    struct CachedFileUpdaterTriggerDetails;
    struct ChatMessageNotificationTrigger;
    struct ChatMessageReceivedNotificationTrigger;
    struct CommunicationBlockingAppSetAsActiveTrigger;
    struct ContactStoreNotificationTrigger;
    struct ContentPrefetchTrigger;
    struct ConversationalAgentTrigger;
    struct CustomSystemEventTrigger;
    struct DeviceConnectionChangeTrigger;
    struct DeviceManufacturerNotificationTrigger;
    struct DeviceServicingTrigger;
    struct DeviceUseTrigger;
    struct DeviceWatcherTrigger;
    struct EmailStoreNotificationTrigger;
    struct GattCharacteristicNotificationTrigger;
    struct GattServiceProviderTrigger;
    struct GattServiceProviderTriggerResult;
    struct GeovisitTrigger;
    struct LocationTrigger;
    struct MaintenanceTrigger;
    struct MediaProcessingTrigger;
    struct MobileBroadbandDeviceServiceNotificationTrigger;
    struct MobileBroadbandPcoDataChangeTrigger;
    struct MobileBroadbandPinLockStateChangeTrigger;
    struct MobileBroadbandRadioStateChangeTrigger;
    struct MobileBroadbandRegistrationStateChangeTrigger;
    struct NetworkOperatorDataUsageTrigger;
    struct NetworkOperatorHotspotAuthenticationTrigger;
    struct NetworkOperatorNotificationTrigger;
    struct PaymentAppCanMakePaymentTrigger;
    struct PhoneTrigger;
    struct PushNotificationTrigger;
    struct RcsEndUserMessageAvailableTrigger;
    struct RfcommConnectionTrigger;
    struct SecondaryAuthenticationFactorAuthenticationTrigger;
    struct SensorDataThresholdTrigger;
    struct SmartCardTrigger;
    struct SmsMessageReceivedTrigger;
    struct SocketActivityTrigger;
    struct StorageLibraryChangeTrackerTrigger;
    struct StorageLibraryContentChangedTrigger;
    struct SystemCondition;
    struct SystemTrigger;
    struct TetheringEntitlementCheckTrigger;
    struct TimeTrigger;
    struct ToastNotificationActionTrigger;
    struct ToastNotificationHistoryChangedTrigger;
    struct UserNotificationChangedTrigger;
    struct BackgroundTaskCanceledEventHandler;
    struct BackgroundTaskCompletedEventHandler;
    struct BackgroundTaskProgressEventHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::Background::IActivitySensorTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IActivitySensorTriggerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IAppBroadcastTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IAppBroadcastTriggerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IApplicationTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IApplicationTriggerDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IAppointmentStoreNotificationTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundCondition>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTask>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskBuilder>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskBuilder2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskBuilder3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskBuilder4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskBuilder5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskDeferral>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskInstance>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskInstance2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskInstance4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskRegistration>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskRegistration2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskRegistration3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundWorkCostStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ICachedFileUpdaterTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IChatMessageNotificationTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IChatMessageReceivedNotificationTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ICommunicationBlockingAppSetAsActiveTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IContactStoreNotificationTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IContentPrefetchTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IContentPrefetchTriggerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ICustomSystemEventTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ICustomSystemEventTriggerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IDeviceConnectionChangeTriggerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTriggerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IDeviceServicingTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IDeviceUseTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IDeviceWatcherTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IGattServiceProviderTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IGattServiceProviderTriggerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IGeovisitTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ILocationTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ILocationTriggerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IMaintenanceTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IMaintenanceTriggerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IMediaProcessingTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::INetworkOperatorHotspotAuthenticationTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::INetworkOperatorNotificationTriggerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IPhoneTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IPhoneTriggerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IPushNotificationTriggerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IRcsEndUserMessageAvailableTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IRfcommConnectionTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ISecondaryAuthenticationFactorAuthenticationTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ISensorDataThresholdTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ISensorDataThresholdTriggerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ISmartCardTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ISmartCardTriggerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ISmsMessageReceivedTriggerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ISocketActivityTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IStorageLibraryChangeTrackerTriggerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ISystemCondition>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ISystemConditionFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ISystemTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ISystemTriggerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ITimeTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ITimeTriggerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IToastNotificationActionTriggerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IToastNotificationHistoryChangedTriggerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::IUserNotificationChangedTriggerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ActivitySensorTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::AlarmApplicationManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::AppBroadcastTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ApplicationTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ApplicationTriggerDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::AppointmentStoreNotificationTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundExecutionManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskBuilder>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskCompletedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskDeferral>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskProgressEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskRegistration>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundWorkCost>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::BluetoothLEAdvertisementPublisherTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::BluetoothLEAdvertisementWatcherTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::CachedFileUpdaterTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::CachedFileUpdaterTriggerDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ChatMessageNotificationTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ChatMessageReceivedNotificationTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::CommunicationBlockingAppSetAsActiveTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ContactStoreNotificationTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ContentPrefetchTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ConversationalAgentTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::CustomSystemEventTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::DeviceManufacturerNotificationTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::DeviceServicingTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::DeviceUseTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::DeviceWatcherTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::EmailStoreNotificationTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::GattServiceProviderTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::GattServiceProviderTriggerResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::GeovisitTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::LocationTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::MaintenanceTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::MediaProcessingTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::MobileBroadbandDeviceServiceNotificationTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::MobileBroadbandPcoDataChangeTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::MobileBroadbandPinLockStateChangeTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::MobileBroadbandRadioStateChangeTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::MobileBroadbandRegistrationStateChangeTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::NetworkOperatorDataUsageTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::NetworkOperatorHotspotAuthenticationTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::NetworkOperatorNotificationTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::PaymentAppCanMakePaymentTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::PhoneTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::PushNotificationTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::RcsEndUserMessageAvailableTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::RfcommConnectionTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::SecondaryAuthenticationFactorAuthenticationTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::SensorDataThresholdTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::SmartCardTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::SmsMessageReceivedTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::SocketActivityTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::StorageLibraryChangeTrackerTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::SystemCondition>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::SystemTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::TetheringEntitlementCheckTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::TimeTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ToastNotificationActionTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ToastNotificationHistoryChangedTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::UserNotificationChangedTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::AlarmAccessStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::ApplicationTriggerResult>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundAccessRequestKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundAccessStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskCancellationReason>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskThrottleCounter>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundWorkCostValue>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::CustomSystemEventTriggerRecurrence>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::DeviceTriggerResult>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::LocationTriggerType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::MediaProcessingTriggerResult>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::SystemConditionType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::SystemTriggerType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct name<Windows::ApplicationModel::Background::IActivitySensorTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IActivitySensorTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IActivitySensorTriggerFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IActivitySensorTriggerFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IAlarmApplicationManagerStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IAppBroadcastTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IAppBroadcastTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IAppBroadcastTriggerFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IAppBroadcastTriggerFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IAppBroadcastTriggerProviderInfo" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IApplicationTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IApplicationTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IApplicationTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IApplicationTriggerDetails" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IAppointmentStoreNotificationTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IAppointmentStoreNotificationTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBackgroundCondition>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundCondition" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundExecutionManagerStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundExecutionManagerStatics2" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBackgroundTask>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTask" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskBuilder>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskBuilder" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskBuilder2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskBuilder2" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskBuilder3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskBuilder3" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskBuilder4>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskBuilder4" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskBuilder5>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskBuilder5" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskCompletedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskDeferral>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskDeferral" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskInstance>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskInstance" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskInstance2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskInstance2" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskInstance4>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskInstance4" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskProgressEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskRegistration>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskRegistration" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskRegistration2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskRegistration2" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskRegistration3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskRegistration3" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskRegistrationGroup" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskRegistrationGroupFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskRegistrationStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskRegistrationStatics2" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBackgroundWorkCostStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundWorkCostStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBluetoothLEAdvertisementPublisherTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBluetoothLEAdvertisementPublisherTrigger2" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBluetoothLEAdvertisementWatcherTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBluetoothLEAdvertisementWatcherTrigger2" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ICachedFileUpdaterTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ICachedFileUpdaterTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ICachedFileUpdaterTriggerDetails" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IChatMessageNotificationTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IChatMessageNotificationTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IChatMessageReceivedNotificationTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IChatMessageReceivedNotificationTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ICommunicationBlockingAppSetAsActiveTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ICommunicationBlockingAppSetAsActiveTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IContactStoreNotificationTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IContactStoreNotificationTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IContentPrefetchTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IContentPrefetchTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IContentPrefetchTriggerFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IContentPrefetchTriggerFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ICustomSystemEventTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ICustomSystemEventTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ICustomSystemEventTriggerFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ICustomSystemEventTriggerFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IDeviceConnectionChangeTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IDeviceConnectionChangeTriggerStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IDeviceConnectionChangeTriggerStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IDeviceManufacturerNotificationTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTriggerFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IDeviceManufacturerNotificationTriggerFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IDeviceServicingTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IDeviceServicingTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IDeviceUseTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IDeviceUseTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IDeviceWatcherTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IDeviceWatcherTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IEmailStoreNotificationTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IGattCharacteristicNotificationTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IGattCharacteristicNotificationTrigger2" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IGattCharacteristicNotificationTriggerFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IGattCharacteristicNotificationTriggerFactory2" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IGattServiceProviderTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IGattServiceProviderTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IGattServiceProviderTriggerResult" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IGattServiceProviderTriggerStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IGattServiceProviderTriggerStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IGeovisitTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IGeovisitTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ILocationTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ILocationTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ILocationTriggerFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ILocationTriggerFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IMaintenanceTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IMaintenanceTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IMaintenanceTriggerFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IMaintenanceTriggerFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IMediaProcessingTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IMediaProcessingTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::INetworkOperatorHotspotAuthenticationTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.INetworkOperatorHotspotAuthenticationTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.INetworkOperatorNotificationTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::INetworkOperatorNotificationTriggerFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.INetworkOperatorNotificationTriggerFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IPhoneTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IPhoneTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IPhoneTriggerFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IPhoneTriggerFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IPushNotificationTriggerFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IPushNotificationTriggerFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IRcsEndUserMessageAvailableTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IRcsEndUserMessageAvailableTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IRfcommConnectionTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IRfcommConnectionTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ISecondaryAuthenticationFactorAuthenticationTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ISecondaryAuthenticationFactorAuthenticationTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ISensorDataThresholdTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ISensorDataThresholdTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ISensorDataThresholdTriggerFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ISensorDataThresholdTriggerFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ISmartCardTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ISmartCardTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ISmartCardTriggerFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ISmartCardTriggerFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ISmsMessageReceivedTriggerFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ISmsMessageReceivedTriggerFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ISocketActivityTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ISocketActivityTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IStorageLibraryChangeTrackerTriggerFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IStorageLibraryChangeTrackerTriggerFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IStorageLibraryContentChangedTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IStorageLibraryContentChangedTriggerStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ISystemCondition>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ISystemCondition" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ISystemConditionFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ISystemConditionFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ISystemTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ISystemTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ISystemTriggerFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ISystemTriggerFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ITimeTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ITimeTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ITimeTriggerFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ITimeTriggerFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IToastNotificationActionTriggerFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IToastNotificationActionTriggerFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IToastNotificationHistoryChangedTriggerFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IToastNotificationHistoryChangedTriggerFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Background::IUserNotificationChangedTriggerFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.IUserNotificationChangedTriggerFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ActivitySensorTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ActivitySensorTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::AlarmApplicationManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.AlarmApplicationManager" };
    };
    template <> struct name<Windows::ApplicationModel::Background::AppBroadcastTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.AppBroadcastTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.AppBroadcastTriggerProviderInfo" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ApplicationTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ApplicationTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ApplicationTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ApplicationTriggerDetails" };
    };
    template <> struct name<Windows::ApplicationModel::Background::AppointmentStoreNotificationTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.AppointmentStoreNotificationTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::BackgroundExecutionManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundExecutionManager" };
    };
    template <> struct name<Windows::ApplicationModel::Background::BackgroundTaskBuilder>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundTaskBuilder" };
    };
    template <> struct name<Windows::ApplicationModel::Background::BackgroundTaskCompletedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundTaskCompletedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Background::BackgroundTaskDeferral>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundTaskDeferral" };
    };
    template <> struct name<Windows::ApplicationModel::Background::BackgroundTaskProgressEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundTaskProgressEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Background::BackgroundTaskRegistration>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundTaskRegistration" };
    };
    template <> struct name<Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundTaskRegistrationGroup" };
    };
    template <> struct name<Windows::ApplicationModel::Background::BackgroundWorkCost>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundWorkCost" };
    };
    template <> struct name<Windows::ApplicationModel::Background::BluetoothLEAdvertisementPublisherTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.BluetoothLEAdvertisementPublisherTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::BluetoothLEAdvertisementWatcherTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.BluetoothLEAdvertisementWatcherTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::CachedFileUpdaterTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.CachedFileUpdaterTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::CachedFileUpdaterTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.CachedFileUpdaterTriggerDetails" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ChatMessageNotificationTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ChatMessageNotificationTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ChatMessageReceivedNotificationTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ChatMessageReceivedNotificationTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::CommunicationBlockingAppSetAsActiveTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.CommunicationBlockingAppSetAsActiveTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ContactStoreNotificationTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ContactStoreNotificationTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ContentPrefetchTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ContentPrefetchTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ConversationalAgentTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ConversationalAgentTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::CustomSystemEventTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.CustomSystemEventTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.DeviceConnectionChangeTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::DeviceManufacturerNotificationTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.DeviceManufacturerNotificationTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::DeviceServicingTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.DeviceServicingTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::DeviceUseTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.DeviceUseTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::DeviceWatcherTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.DeviceWatcherTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::EmailStoreNotificationTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.EmailStoreNotificationTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.GattCharacteristicNotificationTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::GattServiceProviderTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.GattServiceProviderTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::GattServiceProviderTriggerResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.GattServiceProviderTriggerResult" };
    };
    template <> struct name<Windows::ApplicationModel::Background::GeovisitTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.GeovisitTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::LocationTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.LocationTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::MaintenanceTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.MaintenanceTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::MediaProcessingTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.MediaProcessingTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::MobileBroadbandDeviceServiceNotificationTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.MobileBroadbandDeviceServiceNotificationTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::MobileBroadbandPcoDataChangeTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.MobileBroadbandPcoDataChangeTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::MobileBroadbandPinLockStateChangeTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.MobileBroadbandPinLockStateChangeTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::MobileBroadbandRadioStateChangeTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.MobileBroadbandRadioStateChangeTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::MobileBroadbandRegistrationStateChangeTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.MobileBroadbandRegistrationStateChangeTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::NetworkOperatorDataUsageTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.NetworkOperatorDataUsageTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::NetworkOperatorHotspotAuthenticationTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.NetworkOperatorHotspotAuthenticationTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::NetworkOperatorNotificationTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.NetworkOperatorNotificationTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::PaymentAppCanMakePaymentTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.PaymentAppCanMakePaymentTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::PhoneTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.PhoneTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::PushNotificationTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.PushNotificationTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::RcsEndUserMessageAvailableTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.RcsEndUserMessageAvailableTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::RfcommConnectionTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.RfcommConnectionTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::SecondaryAuthenticationFactorAuthenticationTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.SecondaryAuthenticationFactorAuthenticationTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::SensorDataThresholdTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.SensorDataThresholdTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::SmartCardTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.SmartCardTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::SmsMessageReceivedTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.SmsMessageReceivedTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::SocketActivityTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.SocketActivityTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::StorageLibraryChangeTrackerTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.StorageLibraryChangeTrackerTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.StorageLibraryContentChangedTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::SystemCondition>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.SystemCondition" };
    };
    template <> struct name<Windows::ApplicationModel::Background::SystemTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.SystemTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::TetheringEntitlementCheckTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.TetheringEntitlementCheckTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::TimeTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.TimeTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ToastNotificationActionTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ToastNotificationActionTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ToastNotificationHistoryChangedTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ToastNotificationHistoryChangedTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::UserNotificationChangedTrigger>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.UserNotificationChangedTrigger" };
    };
    template <> struct name<Windows::ApplicationModel::Background::AlarmAccessStatus>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.AlarmAccessStatus" };
    };
    template <> struct name<Windows::ApplicationModel::Background::ApplicationTriggerResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.ApplicationTriggerResult" };
    };
    template <> struct name<Windows::ApplicationModel::Background::BackgroundAccessRequestKind>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundAccessRequestKind" };
    };
    template <> struct name<Windows::ApplicationModel::Background::BackgroundAccessStatus>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundAccessStatus" };
    };
    template <> struct name<Windows::ApplicationModel::Background::BackgroundTaskCancellationReason>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundTaskCancellationReason" };
    };
    template <> struct name<Windows::ApplicationModel::Background::BackgroundTaskThrottleCounter>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundTaskThrottleCounter" };
    };
    template <> struct name<Windows::ApplicationModel::Background::BackgroundWorkCostValue>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundWorkCostValue" };
    };
    template <> struct name<Windows::ApplicationModel::Background::CustomSystemEventTriggerRecurrence>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.CustomSystemEventTriggerRecurrence" };
    };
    template <> struct name<Windows::ApplicationModel::Background::DeviceTriggerResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.DeviceTriggerResult" };
    };
    template <> struct name<Windows::ApplicationModel::Background::LocationTriggerType>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.LocationTriggerType" };
    };
    template <> struct name<Windows::ApplicationModel::Background::MediaProcessingTriggerResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.MediaProcessingTriggerResult" };
    };
    template <> struct name<Windows::ApplicationModel::Background::SystemConditionType>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.SystemConditionType" };
    };
    template <> struct name<Windows::ApplicationModel::Background::SystemTriggerType>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.SystemTriggerType" };
    };
    template <> struct name<Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundTaskCanceledEventHandler" };
    };
    template <> struct name<Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundTaskCompletedEventHandler" };
    };
    template <> struct name<Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundTaskProgressEventHandler" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IActivitySensorTrigger>
    {
        static constexpr guid value{ 0xD0DD4342,0xE37B,0x4823,{ 0xA5,0xFE,0x6B,0x31,0xDF,0xEF,0xDE,0xB0 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IActivitySensorTriggerFactory>
    {
        static constexpr guid value{ 0xA72691C3,0x3837,0x44F7,{ 0x83,0x1B,0x01,0x32,0xCC,0x87,0x2B,0xC3 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics>
    {
        static constexpr guid value{ 0xCA03FA3B,0xCCE6,0x4DE2,{ 0xB0,0x9B,0x96,0x28,0xBD,0x33,0xBB,0xBE } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IAppBroadcastTrigger>
    {
        static constexpr guid value{ 0x74D4F496,0x8D37,0x44EC,{ 0x94,0x81,0x2A,0x0B,0x98,0x54,0xEB,0x48 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IAppBroadcastTriggerFactory>
    {
        static constexpr guid value{ 0x280B9F44,0x22F4,0x4618,{ 0xA0,0x2E,0xE7,0xE4,0x11,0xEB,0x72,0x38 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo>
    {
        static constexpr guid value{ 0xF219352D,0x9DE8,0x4420,{ 0x9C,0xE2,0x5E,0xFF,0x8F,0x17,0x37,0x6B } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IApplicationTrigger>
    {
        static constexpr guid value{ 0x0B468630,0x9574,0x492C,{ 0x9E,0x93,0x1A,0x3A,0xE6,0x33,0x5F,0xE9 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IApplicationTriggerDetails>
    {
        static constexpr guid value{ 0x97DC6AB2,0x2219,0x4A9E,{ 0x9C,0x5E,0x41,0xD0,0x47,0xF7,0x6E,0x82 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IAppointmentStoreNotificationTrigger>
    {
        static constexpr guid value{ 0x64D4040C,0xC201,0x42AD,{ 0xAA,0x2A,0xE2,0x1B,0xA3,0x42,0x5B,0x6D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBackgroundCondition>
    {
        static constexpr guid value{ 0xAE48A1EE,0x8951,0x400A,{ 0x83,0x02,0x9C,0x9C,0x9A,0x2A,0x3A,0x3B } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics>
    {
        static constexpr guid value{ 0xE826EA58,0x66A9,0x4D41,{ 0x83,0xD4,0xB4,0xC1,0x8C,0x87,0xB8,0x46 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics2>
    {
        static constexpr guid value{ 0x469B24EF,0x9BBB,0x4E18,{ 0x99,0x9A,0xFD,0x65,0x12,0x93,0x1B,0xE9 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBackgroundTask>
    {
        static constexpr guid value{ 0x7D13D534,0xFD12,0x43CE,{ 0x8C,0x22,0xEA,0x1F,0xF1,0x3C,0x06,0xDF } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBackgroundTaskBuilder>
    {
        static constexpr guid value{ 0x0351550E,0x3E64,0x4572,{ 0xA9,0x3A,0x84,0x07,0x5A,0x37,0xC9,0x17 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBackgroundTaskBuilder2>
    {
        static constexpr guid value{ 0x6AE7CFB1,0x104F,0x406D,{ 0x8D,0xB6,0x84,0x4A,0x57,0x0F,0x42,0xBB } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBackgroundTaskBuilder3>
    {
        static constexpr guid value{ 0x28C74F4A,0x8BA9,0x4C09,{ 0xA2,0x4F,0x19,0x68,0x3E,0x2C,0x92,0x4C } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBackgroundTaskBuilder4>
    {
        static constexpr guid value{ 0x4755E522,0xCBA2,0x4E35,{ 0xBD,0x16,0xA6,0xDA,0x7F,0x1C,0x19,0xAA } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBackgroundTaskBuilder5>
    {
        static constexpr guid value{ 0x077103F6,0x99F5,0x4AF4,{ 0xBC,0xAD,0x47,0x31,0xD0,0x33,0x0D,0x43 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs>
    {
        static constexpr guid value{ 0x565D25CF,0xF209,0x48F4,{ 0x99,0x67,0x2B,0x18,0x4F,0x7B,0xFB,0xF0 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBackgroundTaskDeferral>
    {
        static constexpr guid value{ 0x93CC156D,0xAF27,0x4DD3,{ 0x84,0x6E,0x24,0xEE,0x40,0xCA,0xDD,0x25 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBackgroundTaskInstance>
    {
        static constexpr guid value{ 0x865BDA7A,0x21D8,0x4573,{ 0x8F,0x32,0x92,0x8A,0x1B,0x06,0x41,0xF6 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBackgroundTaskInstance2>
    {
        static constexpr guid value{ 0x4F7D0176,0x0C76,0x4FB4,{ 0x89,0x6D,0x5D,0xE1,0x86,0x41,0x22,0xF6 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBackgroundTaskInstance4>
    {
        static constexpr guid value{ 0x7F29F23C,0xAA04,0x4B08,{ 0x97,0xB0,0x06,0xD8,0x74,0xCD,0xAB,0xF5 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs>
    {
        static constexpr guid value{ 0xFB1468AC,0x8332,0x4D0A,{ 0x95,0x32,0x03,0xEA,0xE6,0x84,0xDA,0x31 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBackgroundTaskRegistration>
    {
        static constexpr guid value{ 0x10654CC2,0xA26E,0x43BF,{ 0x8C,0x12,0x1F,0xB4,0x0D,0xBF,0xBF,0xA0 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBackgroundTaskRegistration2>
    {
        static constexpr guid value{ 0x6138C703,0xBB86,0x4112,{ 0xAF,0xC3,0x7F,0x93,0x9B,0x16,0x6E,0x3B } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBackgroundTaskRegistration3>
    {
        static constexpr guid value{ 0xFE338195,0x9423,0x4D8B,{ 0x83,0x0D,0xB1,0xDD,0x2C,0x7B,0xAD,0xD5 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup>
    {
        static constexpr guid value{ 0x2AB1919A,0x871B,0x4167,{ 0x8A,0x76,0x05,0x5C,0xD6,0x7B,0x5B,0x23 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory>
    {
        static constexpr guid value{ 0x83D92B69,0x44CF,0x4631,{ 0x97,0x40,0x03,0xC7,0xD8,0x74,0x1B,0xC5 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics>
    {
        static constexpr guid value{ 0x4C542F69,0xB000,0x42BA,{ 0xA0,0x93,0x6A,0x56,0x3C,0x65,0xE3,0xF8 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2>
    {
        static constexpr guid value{ 0x174B671E,0xB20D,0x4FA9,{ 0xAD,0x9A,0xE9,0x3A,0xD6,0xC7,0x1E,0x01 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        static constexpr guid value{ 0x84B3A058,0x6027,0x4B87,{ 0x97,0x90,0xBD,0xF3,0xF7,0x57,0xDB,0xD7 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBackgroundWorkCostStatics>
    {
        static constexpr guid value{ 0xC740A662,0xC310,0x4B82,{ 0xB3,0xE3,0x3B,0xCF,0xB9,0xE4,0xC7,0x7D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger>
    {
        static constexpr guid value{ 0xAB3E2612,0x25D3,0x48AE,{ 0x87,0x24,0xD8,0x18,0x77,0xAE,0x61,0x29 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger2>
    {
        static constexpr guid value{ 0xAA28D064,0x38F4,0x597D,{ 0xB5,0x97,0x4E,0x55,0x58,0x8C,0x65,0x03 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger>
    {
        static constexpr guid value{ 0x1AAB1819,0xBCE1,0x48EB,{ 0xA8,0x27,0x59,0xFB,0x7C,0xEE,0x52,0xA6 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger2>
    {
        static constexpr guid value{ 0x39B56799,0xEB39,0x5AB6,{ 0x99,0x32,0xAA,0x9E,0x45,0x49,0x60,0x4D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::ICachedFileUpdaterTrigger>
    {
        static constexpr guid value{ 0xE21CAEEB,0x32F2,0x4D31,{ 0xB5,0x53,0xB9,0xE0,0x1B,0xDE,0x37,0xE0 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails>
    {
        static constexpr guid value{ 0x71838C13,0x1314,0x47B4,{ 0x95,0x97,0xDC,0x7E,0x24,0x8C,0x17,0xCC } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IChatMessageNotificationTrigger>
    {
        static constexpr guid value{ 0x513B43BF,0x1D40,0x5C5D,{ 0x78,0xF5,0xC9,0x23,0xFE,0xE3,0x73,0x9E } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IChatMessageReceivedNotificationTrigger>
    {
        static constexpr guid value{ 0x3EA3760E,0xBAF5,0x4077,{ 0x88,0xE9,0x06,0x0C,0xF6,0xF0,0xC6,0xD5 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::ICommunicationBlockingAppSetAsActiveTrigger>
    {
        static constexpr guid value{ 0xFB91F28A,0x16A5,0x486D,{ 0x97,0x4C,0x78,0x35,0xA8,0x47,0x7B,0xE2 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IContactStoreNotificationTrigger>
    {
        static constexpr guid value{ 0xC833419B,0x4705,0x4571,{ 0x9A,0x16,0x06,0xB9,0x97,0xBF,0x9C,0x96 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IContentPrefetchTrigger>
    {
        static constexpr guid value{ 0x710627EE,0x04FA,0x440B,{ 0x80,0xC0,0x17,0x32,0x02,0x19,0x9E,0x5D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IContentPrefetchTriggerFactory>
    {
        static constexpr guid value{ 0xC2643EDA,0x8A03,0x409E,{ 0xB8,0xC4,0x88,0x81,0x4C,0x28,0xCC,0xB6 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::ICustomSystemEventTrigger>
    {
        static constexpr guid value{ 0xF3596798,0xCF6B,0x4EF4,{ 0xA0,0xCA,0x29,0xCF,0x4A,0x27,0x8C,0x87 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::ICustomSystemEventTriggerFactory>
    {
        static constexpr guid value{ 0x6BCB16C5,0xF2DC,0x41B2,{ 0x9E,0xFD,0xB9,0x6B,0xDC,0xD1,0x3C,0xED } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger>
    {
        static constexpr guid value{ 0x90875E64,0x3CDD,0x4EFB,{ 0xAB,0x1C,0x5B,0x3B,0x6A,0x60,0xCE,0x34 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IDeviceConnectionChangeTriggerStatics>
    {
        static constexpr guid value{ 0xC3EA246A,0x4EFD,0x4498,{ 0xAA,0x60,0xA4,0xE4,0xE3,0xB1,0x7A,0xB9 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger>
    {
        static constexpr guid value{ 0x81278AB5,0x41AB,0x16DA,{ 0x86,0xC2,0x7F,0x7B,0xF0,0x91,0x2F,0x5B } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTriggerFactory>
    {
        static constexpr guid value{ 0x7955DE75,0x25BB,0x4153,{ 0xA1,0xA2,0x30,0x29,0xFC,0xAB,0xB6,0x52 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IDeviceServicingTrigger>
    {
        static constexpr guid value{ 0x1AB217AD,0x6E34,0x49D3,{ 0x9E,0x6F,0x17,0xF1,0xB6,0xDF,0xA8,0x81 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IDeviceUseTrigger>
    {
        static constexpr guid value{ 0x0DA68011,0x334F,0x4D57,{ 0xB6,0xEC,0x6D,0xCA,0x64,0xB4,0x12,0xE4 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IDeviceWatcherTrigger>
    {
        static constexpr guid value{ 0xA4617FDD,0x8573,0x4260,{ 0xBE,0xFC,0x5B,0xEC,0x89,0xCB,0x69,0x3D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger>
    {
        static constexpr guid value{ 0x986D06DA,0x47EB,0x4268,{ 0xA4,0xF2,0xF3,0xF7,0x71,0x88,0x38,0x8A } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger>
    {
        static constexpr guid value{ 0xE25F8FC8,0x0696,0x474F,{ 0xA7,0x32,0xF2,0x92,0xB0,0xCE,0xBC,0x5D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger2>
    {
        static constexpr guid value{ 0x9322A2C4,0xAE0E,0x42F2,{ 0xB2,0x8C,0xF5,0x13,0x72,0xE6,0x92,0x45 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory>
    {
        static constexpr guid value{ 0x57BA1995,0xB143,0x4575,{ 0x9F,0x6B,0xFD,0x59,0xD9,0x3A,0xCE,0x1A } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory2>
    {
        static constexpr guid value{ 0x5998E91F,0x8A53,0x4E9F,{ 0xA3,0x2C,0x23,0xCD,0x33,0x66,0x4C,0xEE } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IGattServiceProviderTrigger>
    {
        static constexpr guid value{ 0xDDC6A3E9,0x1557,0x4BD8,{ 0x85,0x42,0x46,0x8A,0xA0,0xC6,0x96,0xF6 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult>
    {
        static constexpr guid value{ 0x3C4691B1,0xB198,0x4E84,{ 0xBA,0xD4,0xCF,0x4A,0xD2,0x99,0xED,0x3A } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IGattServiceProviderTriggerStatics>
    {
        static constexpr guid value{ 0xB413A36A,0xE294,0x4591,{ 0xA5,0xA6,0x64,0x89,0x1A,0x82,0x81,0x53 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IGeovisitTrigger>
    {
        static constexpr guid value{ 0x4818EDAA,0x04E1,0x4127,{ 0x9A,0x4C,0x19,0x35,0x1B,0x8A,0x80,0xA4 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::ILocationTrigger>
    {
        static constexpr guid value{ 0x47666A1C,0x6877,0x481E,{ 0x80,0x26,0xFF,0x7E,0x14,0xA8,0x11,0xA0 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::ILocationTriggerFactory>
    {
        static constexpr guid value{ 0x1106BB07,0xFF69,0x4E09,{ 0xAA,0x8B,0x13,0x84,0xEA,0x47,0x5E,0x98 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IMaintenanceTrigger>
    {
        static constexpr guid value{ 0x68184C83,0xFC22,0x4CE5,{ 0x84,0x1A,0x72,0x39,0xA9,0x81,0x00,0x47 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IMaintenanceTriggerFactory>
    {
        static constexpr guid value{ 0x4B3DDB2E,0x97DD,0x4629,{ 0x88,0xB0,0xB0,0x6C,0xF9,0x48,0x2A,0xE5 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IMediaProcessingTrigger>
    {
        static constexpr guid value{ 0x9A95BE65,0x8A52,0x4B30,{ 0x90,0x11,0xCF,0x38,0x04,0x0E,0xA8,0xB0 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::INetworkOperatorHotspotAuthenticationTrigger>
    {
        static constexpr guid value{ 0xE756C791,0x3001,0x4DE5,{ 0x83,0xC7,0xDE,0x61,0xD8,0x88,0x31,0xD0 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger>
    {
        static constexpr guid value{ 0x90089CC6,0x63CD,0x480C,{ 0x95,0xD1,0x6E,0x6A,0xEF,0x80,0x1E,0x4A } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::INetworkOperatorNotificationTriggerFactory>
    {
        static constexpr guid value{ 0x0A223E00,0x27D7,0x4353,{ 0xAD,0xB9,0x92,0x65,0xAA,0xEA,0x57,0x9D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IPhoneTrigger>
    {
        static constexpr guid value{ 0x8DCFE99B,0xD4C5,0x49F1,{ 0xB7,0xD3,0x82,0xE8,0x7A,0x0E,0x9D,0xDE } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IPhoneTriggerFactory>
    {
        static constexpr guid value{ 0xA0D93CDA,0x5FC1,0x48FB,{ 0xA5,0x46,0x32,0x26,0x20,0x40,0x15,0x7B } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IPushNotificationTriggerFactory>
    {
        static constexpr guid value{ 0x6DD8ED1B,0x458E,0x4FC2,{ 0xBC,0x2E,0xD5,0x66,0x4F,0x77,0xED,0x19 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IRcsEndUserMessageAvailableTrigger>
    {
        static constexpr guid value{ 0x986D0D6A,0xB2F6,0x467F,{ 0xA9,0x78,0xA4,0x40,0x91,0xC1,0x1A,0x66 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IRfcommConnectionTrigger>
    {
        static constexpr guid value{ 0xE8C4CAE2,0x0B53,0x4464,{ 0x93,0x94,0xFD,0x87,0x56,0x54,0xDE,0x64 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::ISecondaryAuthenticationFactorAuthenticationTrigger>
    {
        static constexpr guid value{ 0xF237F327,0x5181,0x4F24,{ 0x96,0xA7,0x70,0x0A,0x4E,0x5F,0xAC,0x62 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::ISensorDataThresholdTrigger>
    {
        static constexpr guid value{ 0x5BC0F372,0xD48B,0x4B7F,{ 0xAB,0xEC,0x15,0xF9,0xBA,0xCC,0x12,0xE2 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::ISensorDataThresholdTriggerFactory>
    {
        static constexpr guid value{ 0x921FE675,0x7DF0,0x4DA3,{ 0x97,0xB3,0xE5,0x44,0xEE,0x85,0x7F,0xE6 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::ISmartCardTrigger>
    {
        static constexpr guid value{ 0xF53BC5AC,0x84CA,0x4972,{ 0x8C,0xE9,0xE5,0x8F,0x97,0xB3,0x7A,0x50 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::ISmartCardTriggerFactory>
    {
        static constexpr guid value{ 0x63BF54C3,0x89C1,0x4E00,{ 0xA9,0xD3,0x97,0xC6,0x29,0x26,0x9D,0xAD } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::ISmsMessageReceivedTriggerFactory>
    {
        static constexpr guid value{ 0xEA3AD8C8,0x6BA4,0x4AB2,{ 0x8D,0x21,0xBC,0x6B,0x09,0xC7,0x75,0x64 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::ISocketActivityTrigger>
    {
        static constexpr guid value{ 0xA9BBF810,0x9DDE,0x4F8A,{ 0x83,0xE3,0xB0,0xE0,0xE7,0xA5,0x0D,0x70 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IStorageLibraryChangeTrackerTriggerFactory>
    {
        static constexpr guid value{ 0x1EB0FFD0,0x5A85,0x499E,{ 0xA8,0x88,0x82,0x46,0x07,0x12,0x4F,0x50 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTrigger>
    {
        static constexpr guid value{ 0x1637E0A7,0x829C,0x45BC,{ 0x92,0x9B,0xA1,0xE7,0xEA,0x78,0xD8,0x9B } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics>
    {
        static constexpr guid value{ 0x7F9F1B39,0x5F90,0x4E12,{ 0x91,0x4E,0xA7,0xD8,0xE0,0xBB,0xFB,0x18 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::ISystemCondition>
    {
        static constexpr guid value{ 0xC15FB476,0x89C5,0x420B,{ 0xAB,0xD3,0xFB,0x30,0x30,0x47,0x21,0x28 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::ISystemConditionFactory>
    {
        static constexpr guid value{ 0xD269D1F1,0x05A7,0x49AE,{ 0x87,0xD7,0x16,0xB2,0xB8,0xB9,0xA5,0x53 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::ISystemTrigger>
    {
        static constexpr guid value{ 0x1D80C776,0x3748,0x4463,{ 0x8D,0x7E,0x27,0x6D,0xC1,0x39,0xAC,0x1C } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::ISystemTriggerFactory>
    {
        static constexpr guid value{ 0xE80423D4,0x8791,0x4579,{ 0x81,0x26,0x87,0xEC,0x8A,0xAA,0x40,0x7A } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::ITimeTrigger>
    {
        static constexpr guid value{ 0x656E5556,0x0B2A,0x4377,{ 0xBA,0x70,0x3B,0x45,0xA9,0x35,0x54,0x7F } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::ITimeTriggerFactory>
    {
        static constexpr guid value{ 0x38C682FE,0x9B54,0x45E6,{ 0xB2,0xF3,0x26,0x9B,0x87,0xA6,0xF7,0x34 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IToastNotificationActionTriggerFactory>
    {
        static constexpr guid value{ 0xB09DFC27,0x6480,0x4349,{ 0x81,0x25,0x97,0xB3,0xEF,0xAA,0x0A,0x3A } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IToastNotificationHistoryChangedTriggerFactory>
    {
        static constexpr guid value{ 0x81C6FAAD,0x8797,0x4785,{ 0x81,0xB4,0xB0,0xCC,0xCB,0x73,0xD1,0xD9 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::IUserNotificationChangedTriggerFactory>
    {
        static constexpr guid value{ 0xCAD4436C,0x69AB,0x4E18,{ 0xA4,0x8A,0x5E,0xD2,0xAC,0x43,0x59,0x57 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler>
    {
        static constexpr guid value{ 0xA6C4BAC0,0x51F8,0x4C57,{ 0xAC,0x3F,0x15,0x6D,0xD1,0x68,0x0C,0x4F } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler>
    {
        static constexpr guid value{ 0x5B38E929,0xA086,0x46A7,{ 0xA6,0x78,0x43,0x91,0x35,0x82,0x2B,0xCF } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler>
    {
        static constexpr guid value{ 0x46E0683C,0x8A88,0x4C99,{ 0x80,0x4C,0x76,0x89,0x7F,0x62,0x77,0xA6 } };
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::ActivitySensorTrigger>
    {
        using type = Windows::ApplicationModel::Background::IActivitySensorTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::AppBroadcastTrigger>
    {
        using type = Windows::ApplicationModel::Background::IAppBroadcastTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo>
    {
        using type = Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::ApplicationTrigger>
    {
        using type = Windows::ApplicationModel::Background::IApplicationTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::ApplicationTriggerDetails>
    {
        using type = Windows::ApplicationModel::Background::IApplicationTriggerDetails;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::AppointmentStoreNotificationTrigger>
    {
        using type = Windows::ApplicationModel::Background::IAppointmentStoreNotificationTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::BackgroundTaskBuilder>
    {
        using type = Windows::ApplicationModel::Background::IBackgroundTaskBuilder;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::BackgroundTaskCompletedEventArgs>
    {
        using type = Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::BackgroundTaskDeferral>
    {
        using type = Windows::ApplicationModel::Background::IBackgroundTaskDeferral;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::BackgroundTaskProgressEventArgs>
    {
        using type = Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::BackgroundTaskRegistration>
    {
        using type = Windows::ApplicationModel::Background::IBackgroundTaskRegistration;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>
    {
        using type = Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::BluetoothLEAdvertisementPublisherTrigger>
    {
        using type = Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::BluetoothLEAdvertisementWatcherTrigger>
    {
        using type = Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::CachedFileUpdaterTrigger>
    {
        using type = Windows::ApplicationModel::Background::ICachedFileUpdaterTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::CachedFileUpdaterTriggerDetails>
    {
        using type = Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::ChatMessageNotificationTrigger>
    {
        using type = Windows::ApplicationModel::Background::IChatMessageNotificationTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::ChatMessageReceivedNotificationTrigger>
    {
        using type = Windows::ApplicationModel::Background::IChatMessageReceivedNotificationTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::CommunicationBlockingAppSetAsActiveTrigger>
    {
        using type = Windows::ApplicationModel::Background::ICommunicationBlockingAppSetAsActiveTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::ContactStoreNotificationTrigger>
    {
        using type = Windows::ApplicationModel::Background::IContactStoreNotificationTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::ContentPrefetchTrigger>
    {
        using type = Windows::ApplicationModel::Background::IContentPrefetchTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::ConversationalAgentTrigger>
    {
        using type = Windows::ApplicationModel::Background::IBackgroundTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::CustomSystemEventTrigger>
    {
        using type = Windows::ApplicationModel::Background::ICustomSystemEventTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger>
    {
        using type = Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::DeviceManufacturerNotificationTrigger>
    {
        using type = Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::DeviceServicingTrigger>
    {
        using type = Windows::ApplicationModel::Background::IDeviceServicingTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::DeviceUseTrigger>
    {
        using type = Windows::ApplicationModel::Background::IDeviceUseTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::DeviceWatcherTrigger>
    {
        using type = Windows::ApplicationModel::Background::IDeviceWatcherTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::EmailStoreNotificationTrigger>
    {
        using type = Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger>
    {
        using type = Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::GattServiceProviderTrigger>
    {
        using type = Windows::ApplicationModel::Background::IGattServiceProviderTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::GattServiceProviderTriggerResult>
    {
        using type = Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::GeovisitTrigger>
    {
        using type = Windows::ApplicationModel::Background::IGeovisitTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::LocationTrigger>
    {
        using type = Windows::ApplicationModel::Background::ILocationTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::MaintenanceTrigger>
    {
        using type = Windows::ApplicationModel::Background::IMaintenanceTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::MediaProcessingTrigger>
    {
        using type = Windows::ApplicationModel::Background::IMediaProcessingTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::MobileBroadbandDeviceServiceNotificationTrigger>
    {
        using type = Windows::ApplicationModel::Background::IBackgroundTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::MobileBroadbandPcoDataChangeTrigger>
    {
        using type = Windows::ApplicationModel::Background::IBackgroundTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::MobileBroadbandPinLockStateChangeTrigger>
    {
        using type = Windows::ApplicationModel::Background::IBackgroundTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::MobileBroadbandRadioStateChangeTrigger>
    {
        using type = Windows::ApplicationModel::Background::IBackgroundTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::MobileBroadbandRegistrationStateChangeTrigger>
    {
        using type = Windows::ApplicationModel::Background::IBackgroundTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::NetworkOperatorDataUsageTrigger>
    {
        using type = Windows::ApplicationModel::Background::IBackgroundTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::NetworkOperatorHotspotAuthenticationTrigger>
    {
        using type = Windows::ApplicationModel::Background::INetworkOperatorHotspotAuthenticationTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::NetworkOperatorNotificationTrigger>
    {
        using type = Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::PaymentAppCanMakePaymentTrigger>
    {
        using type = Windows::ApplicationModel::Background::IBackgroundTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::PhoneTrigger>
    {
        using type = Windows::ApplicationModel::Background::IPhoneTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::PushNotificationTrigger>
    {
        using type = Windows::ApplicationModel::Background::IBackgroundTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::RcsEndUserMessageAvailableTrigger>
    {
        using type = Windows::ApplicationModel::Background::IRcsEndUserMessageAvailableTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::RfcommConnectionTrigger>
    {
        using type = Windows::ApplicationModel::Background::IRfcommConnectionTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::SecondaryAuthenticationFactorAuthenticationTrigger>
    {
        using type = Windows::ApplicationModel::Background::ISecondaryAuthenticationFactorAuthenticationTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::SensorDataThresholdTrigger>
    {
        using type = Windows::ApplicationModel::Background::ISensorDataThresholdTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::SmartCardTrigger>
    {
        using type = Windows::ApplicationModel::Background::ISmartCardTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::SmsMessageReceivedTrigger>
    {
        using type = Windows::ApplicationModel::Background::IBackgroundTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::SocketActivityTrigger>
    {
        using type = Windows::ApplicationModel::Background::IBackgroundTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::StorageLibraryChangeTrackerTrigger>
    {
        using type = Windows::ApplicationModel::Background::IBackgroundTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger>
    {
        using type = Windows::ApplicationModel::Background::IStorageLibraryContentChangedTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::SystemCondition>
    {
        using type = Windows::ApplicationModel::Background::ISystemCondition;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::SystemTrigger>
    {
        using type = Windows::ApplicationModel::Background::ISystemTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::TetheringEntitlementCheckTrigger>
    {
        using type = Windows::ApplicationModel::Background::IBackgroundTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::TimeTrigger>
    {
        using type = Windows::ApplicationModel::Background::ITimeTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::ToastNotificationActionTrigger>
    {
        using type = Windows::ApplicationModel::Background::IBackgroundTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::ToastNotificationHistoryChangedTrigger>
    {
        using type = Windows::ApplicationModel::Background::IBackgroundTrigger;
    };
    template <> struct default_interface<Windows::ApplicationModel::Background::UserNotificationChangedTrigger>
    {
        using type = Windows::ApplicationModel::Background::IBackgroundTrigger;
    };
    template <> struct abi<Windows::ApplicationModel::Background::IActivitySensorTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SubscribedActivities(void**) noexcept = 0;
            virtual int32_t __stdcall get_ReportInterval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedActivities(void**) noexcept = 0;
            virtual int32_t __stdcall get_MinimumReportInterval(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IActivitySensorTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetAccessStatus(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IAppBroadcastTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ProviderInfo(void*) noexcept = 0;
            virtual int32_t __stdcall get_ProviderInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IAppBroadcastTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAppBroadcastTrigger(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_DisplayNameResource(void*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayNameResource(void**) noexcept = 0;
            virtual int32_t __stdcall put_LogoResource(void*) noexcept = 0;
            virtual int32_t __stdcall get_LogoResource(void**) noexcept = 0;
            virtual int32_t __stdcall put_VideoKeyFrameInterval(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_VideoKeyFrameInterval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxVideoBitrate(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_MaxVideoBitrate(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxVideoWidth(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_MaxVideoWidth(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxVideoHeight(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_MaxVideoHeight(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IApplicationTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestAsyncWithArguments(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IApplicationTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Arguments(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IAppointmentStoreNotificationTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundCondition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessForApplicationAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RemoveAccess() noexcept = 0;
            virtual int32_t __stdcall RemoveAccessForApplication(void*) noexcept = 0;
            virtual int32_t __stdcall GetAccessStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetAccessStatusForApplication(void*, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestAccessKindAsync(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTask>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Run(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskBuilder>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_TaskEntryPoint(void*) noexcept = 0;
            virtual int32_t __stdcall get_TaskEntryPoint(void**) noexcept = 0;
            virtual int32_t __stdcall SetTrigger(void*) noexcept = 0;
            virtual int32_t __stdcall AddCondition(void*) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall Register(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskBuilder2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_CancelOnConditionLoss(bool) noexcept = 0;
            virtual int32_t __stdcall get_CancelOnConditionLoss(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskBuilder3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_IsNetworkRequested(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsNetworkRequested(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskBuilder4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TaskGroup(void**) noexcept = 0;
            virtual int32_t __stdcall put_TaskGroup(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskBuilder5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetTaskEntryPointClsid(winrt::guid) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InstanceId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall CheckResult() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskInstance>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InstanceId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_Task(void**) noexcept = 0;
            virtual int32_t __stdcall get_Progress(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Progress(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_TriggerDetails(void**) noexcept = 0;
            virtual int32_t __stdcall add_Canceled(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Canceled(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_SuspendedCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskInstance2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetThrottleCount(int32_t, uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskInstance4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InstanceId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_Progress(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskRegistration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TaskId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall add_Progress(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Progress(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Completed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Completed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Unregister(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskRegistration2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Trigger(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskRegistration3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TaskGroup(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall add_BackgroundActivated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BackgroundActivated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_AllTasks(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithName(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllTasks(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllTaskGroups(void**) noexcept = 0;
            virtual int32_t __stdcall GetTaskGroup(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundWorkCostStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CurrentBackgroundWorkCost(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Advertisement(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PreferredTransmitPowerLevelInDBm(void**) noexcept = 0;
            virtual int32_t __stdcall put_PreferredTransmitPowerLevelInDBm(void*) noexcept = 0;
            virtual int32_t __stdcall get_UseExtendedFormat(bool*) noexcept = 0;
            virtual int32_t __stdcall put_UseExtendedFormat(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsAnonymous(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsAnonymous(bool) noexcept = 0;
            virtual int32_t __stdcall get_IncludeTransmitPowerLevel(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IncludeTransmitPowerLevel(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MinSamplingInterval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxSamplingInterval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_MinOutOfRangeTimeout(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxOutOfRangeTimeout(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_SignalStrengthFilter(void**) noexcept = 0;
            virtual int32_t __stdcall put_SignalStrengthFilter(void*) noexcept = 0;
            virtual int32_t __stdcall get_AdvertisementFilter(void**) noexcept = 0;
            virtual int32_t __stdcall put_AdvertisementFilter(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllowExtendedAdvertisements(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowExtendedAdvertisements(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ICachedFileUpdaterTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UpdateTarget(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UpdateRequest(void**) noexcept = 0;
            virtual int32_t __stdcall get_CanRequestUserInput(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IChatMessageNotificationTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IChatMessageReceivedNotificationTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ICommunicationBlockingAppSetAsActiveTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IContactStoreNotificationTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IContentPrefetchTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WaitInterval(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IContentPrefetchTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ICustomSystemEventTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TriggerId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Recurrence(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ICustomSystemEventTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_CanMaintainConnection(bool*) noexcept = 0;
            virtual int32_t __stdcall get_MaintainConnection(bool*) noexcept = 0;
            virtual int32_t __stdcall put_MaintainConnection(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IDeviceConnectionChangeTriggerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TriggerQualifier(void**) noexcept = 0;
            virtual int32_t __stdcall get_OneShot(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IDeviceServicingTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestAsyncSimple(void*, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAsyncWithArguments(void*, int64_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IDeviceUseTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestAsyncSimple(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAsyncWithArguments(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IDeviceWatcherTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Characteristic(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EventTriggeringMode(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithEventTriggeringMode(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IGattServiceProviderTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TriggerId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Service(void**) noexcept = 0;
            virtual int32_t __stdcall put_AdvertisingParameters(void*) noexcept = 0;
            virtual int32_t __stdcall get_AdvertisingParameters(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Trigger(void**) noexcept = 0;
            virtual int32_t __stdcall get_Error(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IGattServiceProviderTriggerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAsync(void*, winrt::guid, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IGeovisitTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MonitoringScope(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MonitoringScope(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ILocationTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TriggerType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ILocationTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IMaintenanceTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FreshnessTime(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_OneShot(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IMaintenanceTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(uint32_t, bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IMediaProcessingTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestAsyncWithArguments(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::INetworkOperatorHotspotAuthenticationTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NetworkAccountId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::INetworkOperatorNotificationTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IPhoneTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OneShot(bool*) noexcept = 0;
            virtual int32_t __stdcall get_TriggerType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IPhoneTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IPushNotificationTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IRcsEndUserMessageAvailableTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IRfcommConnectionTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InboundConnection(void**) noexcept = 0;
            virtual int32_t __stdcall get_OutboundConnection(void**) noexcept = 0;
            virtual int32_t __stdcall get_AllowMultipleConnections(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowMultipleConnections(bool) noexcept = 0;
            virtual int32_t __stdcall get_ProtectionLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ProtectionLevel(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_RemoteHostName(void**) noexcept = 0;
            virtual int32_t __stdcall put_RemoteHostName(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ISecondaryAuthenticationFactorAuthenticationTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ISensorDataThresholdTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ISensorDataThresholdTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ISmartCardTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TriggerType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ISmartCardTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ISmsMessageReceivedTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ISocketActivityTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsWakeFromLowPowerSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IStorageLibraryChangeTrackerTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromLibraries(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ISystemCondition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ConditionType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ISystemConditionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ISystemTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OneShot(bool*) noexcept = 0;
            virtual int32_t __stdcall get_TriggerType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ISystemTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ITimeTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FreshnessTime(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_OneShot(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ITimeTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(uint32_t, bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IToastNotificationActionTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IToastNotificationHistoryChangedTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IUserNotificationChangedTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IActivitySensorTrigger
    {
        [[nodiscard]] auto SubscribedActivities() const;
        [[nodiscard]] auto ReportInterval() const;
        [[nodiscard]] auto SupportedActivities() const;
        [[nodiscard]] auto MinimumReportInterval() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IActivitySensorTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IActivitySensorTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IActivitySensorTriggerFactory
    {
        auto Create(uint32_t reportIntervalInMilliseconds) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IActivitySensorTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IActivitySensorTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IAlarmApplicationManagerStatics
    {
        auto RequestAccessAsync() const;
        auto GetAccessStatus() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IAlarmApplicationManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IAppBroadcastTrigger
    {
        auto ProviderInfo(Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo const& value) const;
        [[nodiscard]] auto ProviderInfo() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IAppBroadcastTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IAppBroadcastTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerFactory
    {
        auto CreateAppBroadcastTrigger(param::hstring const& providerKey) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IAppBroadcastTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo
    {
        auto DisplayNameResource(param::hstring const& value) const;
        [[nodiscard]] auto DisplayNameResource() const;
        auto LogoResource(param::hstring const& value) const;
        [[nodiscard]] auto LogoResource() const;
        auto VideoKeyFrameInterval(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto VideoKeyFrameInterval() const;
        auto MaxVideoBitrate(uint32_t value) const;
        [[nodiscard]] auto MaxVideoBitrate() const;
        auto MaxVideoWidth(uint32_t value) const;
        [[nodiscard]] auto MaxVideoWidth() const;
        auto MaxVideoHeight(uint32_t value) const;
        [[nodiscard]] auto MaxVideoHeight() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IApplicationTrigger
    {
        auto RequestAsync() const;
        auto RequestAsync(Windows::Foundation::Collections::ValueSet const& arguments) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IApplicationTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IApplicationTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IApplicationTriggerDetails
    {
        [[nodiscard]] auto Arguments() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IApplicationTriggerDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IApplicationTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IAppointmentStoreNotificationTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::IAppointmentStoreNotificationTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IAppointmentStoreNotificationTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundCondition
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundCondition>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundCondition<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics
    {
        auto RequestAccessAsync() const;
        auto RequestAccessAsync(param::hstring const& applicationId) const;
        auto RemoveAccess() const;
        auto RemoveAccess(param::hstring const& applicationId) const;
        auto GetAccessStatus() const;
        auto GetAccessStatus(param::hstring const& applicationId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics2
    {
        auto RequestAccessKindAsync(Windows::ApplicationModel::Background::BackgroundAccessRequestKind const& requestedAccess, param::hstring const& reason) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTask
    {
        auto Run(Windows::ApplicationModel::Background::IBackgroundTaskInstance const& taskInstance) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTask>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTask<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder
    {
        auto TaskEntryPoint(param::hstring const& value) const;
        [[nodiscard]] auto TaskEntryPoint() const;
        auto SetTrigger(Windows::ApplicationModel::Background::IBackgroundTrigger const& trigger) const;
        auto AddCondition(Windows::ApplicationModel::Background::IBackgroundCondition const& condition) const;
        auto Name(param::hstring const& value) const;
        [[nodiscard]] auto Name() const;
        auto Register() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskBuilder>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder2
    {
        auto CancelOnConditionLoss(bool value) const;
        [[nodiscard]] auto CancelOnConditionLoss() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskBuilder2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder3
    {
        auto IsNetworkRequested(bool value) const;
        [[nodiscard]] auto IsNetworkRequested() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskBuilder3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder4
    {
        [[nodiscard]] auto TaskGroup() const;
        auto TaskGroup(Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskBuilder4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder5
    {
        auto SetTaskEntryPointClsid(winrt::guid const& TaskEntryPoint) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskBuilder5>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder5<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskCompletedEventArgs
    {
        [[nodiscard]] auto InstanceId() const;
        auto CheckResult() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskCompletedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskDeferral>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance
    {
        [[nodiscard]] auto InstanceId() const;
        [[nodiscard]] auto Task() const;
        [[nodiscard]] auto Progress() const;
        auto Progress(uint32_t value) const;
        [[nodiscard]] auto TriggerDetails() const;
        auto Canceled(Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler const& cancelHandler) const;
        using Canceled_revoker = impl::event_revoker<Windows::ApplicationModel::Background::IBackgroundTaskInstance, &impl::abi_t<Windows::ApplicationModel::Background::IBackgroundTaskInstance>::remove_Canceled>;
        Canceled_revoker Canceled(auto_revoke_t, Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler const& cancelHandler) const;
        auto Canceled(winrt::event_token const& cookie) const noexcept;
        [[nodiscard]] auto SuspendedCount() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskInstance>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance2
    {
        auto GetThrottleCount(Windows::ApplicationModel::Background::BackgroundTaskThrottleCounter const& counter) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskInstance2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance4
    {
        [[nodiscard]] auto User() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskInstance4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskProgressEventArgs
    {
        [[nodiscard]] auto InstanceId() const;
        [[nodiscard]] auto Progress() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskProgressEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration
    {
        [[nodiscard]] auto TaskId() const;
        [[nodiscard]] auto Name() const;
        auto Progress(Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler const& handler) const;
        using Progress_revoker = impl::event_revoker<Windows::ApplicationModel::Background::IBackgroundTaskRegistration, &impl::abi_t<Windows::ApplicationModel::Background::IBackgroundTaskRegistration>::remove_Progress>;
        Progress_revoker Progress(auto_revoke_t, Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler const& handler) const;
        auto Progress(winrt::event_token const& cookie) const noexcept;
        auto Completed(Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler const& handler) const;
        using Completed_revoker = impl::event_revoker<Windows::ApplicationModel::Background::IBackgroundTaskRegistration, &impl::abi_t<Windows::ApplicationModel::Background::IBackgroundTaskRegistration>::remove_Completed>;
        Completed_revoker Completed(auto_revoke_t, Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler const& handler) const;
        auto Completed(winrt::event_token const& cookie) const noexcept;
        auto Unregister(bool cancelTask) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskRegistration>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration2
    {
        [[nodiscard]] auto Trigger() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskRegistration2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration3
    {
        [[nodiscard]] auto TaskGroup() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskRegistration3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroup
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto Name() const;
        auto BackgroundActivated(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup, Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler) const;
        using BackgroundActivated_revoker = impl::event_revoker<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup, &impl::abi_t<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup>::remove_BackgroundActivated>;
        BackgroundActivated_revoker BackgroundActivated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup, Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler) const;
        auto BackgroundActivated(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto AllTasks() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroup<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroupFactory
    {
        auto Create(param::hstring const& id) const;
        auto CreateWithName(param::hstring const& id, param::hstring const& name) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroupFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationStatics
    {
        [[nodiscard]] auto AllTasks() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationStatics2
    {
        [[nodiscard]] auto AllTaskGroups() const;
        auto GetTaskGroup(param::hstring const& groupId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundWorkCostStatics
    {
        [[nodiscard]] auto CurrentBackgroundWorkCost() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundWorkCostStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundWorkCostStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementPublisherTrigger
    {
        [[nodiscard]] auto Advertisement() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementPublisherTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementPublisherTrigger2
    {
        [[nodiscard]] auto PreferredTransmitPowerLevelInDBm() const;
        auto PreferredTransmitPowerLevelInDBm(Windows::Foundation::IReference<int16_t> const& value) const;
        [[nodiscard]] auto UseExtendedFormat() const;
        auto UseExtendedFormat(bool value) const;
        [[nodiscard]] auto IsAnonymous() const;
        auto IsAnonymous(bool value) const;
        [[nodiscard]] auto IncludeTransmitPowerLevel() const;
        auto IncludeTransmitPowerLevel(bool value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementPublisherTrigger2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger
    {
        [[nodiscard]] auto MinSamplingInterval() const;
        [[nodiscard]] auto MaxSamplingInterval() const;
        [[nodiscard]] auto MinOutOfRangeTimeout() const;
        [[nodiscard]] auto MaxOutOfRangeTimeout() const;
        [[nodiscard]] auto SignalStrengthFilter() const;
        auto SignalStrengthFilter(Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter const& value) const;
        [[nodiscard]] auto AdvertisementFilter() const;
        auto AdvertisementFilter(Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger2
    {
        [[nodiscard]] auto AllowExtendedAdvertisements() const;
        auto AllowExtendedAdvertisements(bool value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ICachedFileUpdaterTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::ICachedFileUpdaterTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ICachedFileUpdaterTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ICachedFileUpdaterTriggerDetails
    {
        [[nodiscard]] auto UpdateTarget() const;
        [[nodiscard]] auto UpdateRequest() const;
        [[nodiscard]] auto CanRequestUserInput() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ICachedFileUpdaterTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IChatMessageNotificationTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::IChatMessageNotificationTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IChatMessageNotificationTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IChatMessageReceivedNotificationTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::IChatMessageReceivedNotificationTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IChatMessageReceivedNotificationTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ICommunicationBlockingAppSetAsActiveTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::ICommunicationBlockingAppSetAsActiveTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ICommunicationBlockingAppSetAsActiveTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IContactStoreNotificationTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::IContactStoreNotificationTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IContactStoreNotificationTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IContentPrefetchTrigger
    {
        [[nodiscard]] auto WaitInterval() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IContentPrefetchTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IContentPrefetchTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IContentPrefetchTriggerFactory
    {
        auto Create(Windows::Foundation::TimeSpan const& waitInterval) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IContentPrefetchTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IContentPrefetchTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ICustomSystemEventTrigger
    {
        [[nodiscard]] auto TriggerId() const;
        [[nodiscard]] auto Recurrence() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ICustomSystemEventTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ICustomSystemEventTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ICustomSystemEventTriggerFactory
    {
        auto Create(param::hstring const& triggerId, Windows::ApplicationModel::Background::CustomSystemEventTriggerRecurrence const& recurrence) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ICustomSystemEventTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ICustomSystemEventTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IDeviceConnectionChangeTrigger
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto CanMaintainConnection() const;
        [[nodiscard]] auto MaintainConnection() const;
        auto MaintainConnection(bool value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IDeviceConnectionChangeTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IDeviceConnectionChangeTriggerStatics
    {
        auto FromIdAsync(param::hstring const& deviceId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IDeviceConnectionChangeTriggerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IDeviceConnectionChangeTriggerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IDeviceManufacturerNotificationTrigger
    {
        [[nodiscard]] auto TriggerQualifier() const;
        [[nodiscard]] auto OneShot() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IDeviceManufacturerNotificationTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IDeviceManufacturerNotificationTriggerFactory
    {
        auto Create(param::hstring const& triggerQualifier, bool oneShot) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IDeviceManufacturerNotificationTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IDeviceServicingTrigger
    {
        auto RequestAsync(param::hstring const& deviceId, Windows::Foundation::TimeSpan const& expectedDuration) const;
        auto RequestAsync(param::hstring const& deviceId, Windows::Foundation::TimeSpan const& expectedDuration, param::hstring const& arguments) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IDeviceServicingTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IDeviceServicingTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IDeviceUseTrigger
    {
        auto RequestAsync(param::hstring const& deviceId) const;
        auto RequestAsync(param::hstring const& deviceId, param::hstring const& arguments) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IDeviceUseTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IDeviceUseTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IDeviceWatcherTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::IDeviceWatcherTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IDeviceWatcherTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IEmailStoreNotificationTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IEmailStoreNotificationTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTrigger
    {
        [[nodiscard]] auto Characteristic() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTrigger2
    {
        [[nodiscard]] auto EventTriggeringMode() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTrigger2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTriggerFactory
    {
        auto Create(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic const& characteristic) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTriggerFactory2
    {
        auto Create(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic const& characteristic, Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode const& eventTriggeringMode) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTriggerFactory2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IGattServiceProviderTrigger
    {
        [[nodiscard]] auto TriggerId() const;
        [[nodiscard]] auto Service() const;
        auto AdvertisingParameters(Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters const& value) const;
        [[nodiscard]] auto AdvertisingParameters() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IGattServiceProviderTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IGattServiceProviderTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IGattServiceProviderTriggerResult
    {
        [[nodiscard]] auto Trigger() const;
        [[nodiscard]] auto Error() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IGattServiceProviderTriggerResult<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IGattServiceProviderTriggerStatics
    {
        auto CreateAsync(param::hstring const& triggerId, winrt::guid const& serviceUuid) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IGattServiceProviderTriggerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IGattServiceProviderTriggerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IGeovisitTrigger
    {
        [[nodiscard]] auto MonitoringScope() const;
        auto MonitoringScope(Windows::Devices::Geolocation::VisitMonitoringScope const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IGeovisitTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IGeovisitTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ILocationTrigger
    {
        [[nodiscard]] auto TriggerType() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ILocationTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ILocationTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ILocationTriggerFactory
    {
        auto Create(Windows::ApplicationModel::Background::LocationTriggerType const& triggerType) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ILocationTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ILocationTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IMaintenanceTrigger
    {
        [[nodiscard]] auto FreshnessTime() const;
        [[nodiscard]] auto OneShot() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IMaintenanceTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IMaintenanceTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IMaintenanceTriggerFactory
    {
        auto Create(uint32_t freshnessTime, bool oneShot) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IMaintenanceTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IMaintenanceTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IMediaProcessingTrigger
    {
        auto RequestAsync() const;
        auto RequestAsync(Windows::Foundation::Collections::ValueSet const& arguments) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IMediaProcessingTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IMediaProcessingTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_INetworkOperatorHotspotAuthenticationTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::INetworkOperatorHotspotAuthenticationTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_INetworkOperatorHotspotAuthenticationTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_INetworkOperatorNotificationTrigger
    {
        [[nodiscard]] auto NetworkAccountId() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_INetworkOperatorNotificationTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_INetworkOperatorNotificationTriggerFactory
    {
        auto Create(param::hstring const& networkAccountId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::INetworkOperatorNotificationTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_INetworkOperatorNotificationTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IPhoneTrigger
    {
        [[nodiscard]] auto OneShot() const;
        [[nodiscard]] auto TriggerType() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IPhoneTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IPhoneTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IPhoneTriggerFactory
    {
        auto Create(Windows::ApplicationModel::Calls::Background::PhoneTriggerType const& type, bool oneShot) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IPhoneTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IPhoneTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IPushNotificationTriggerFactory
    {
        auto Create(param::hstring const& applicationId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IPushNotificationTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IPushNotificationTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IRcsEndUserMessageAvailableTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::IRcsEndUserMessageAvailableTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IRcsEndUserMessageAvailableTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IRfcommConnectionTrigger
    {
        [[nodiscard]] auto InboundConnection() const;
        [[nodiscard]] auto OutboundConnection() const;
        [[nodiscard]] auto AllowMultipleConnections() const;
        auto AllowMultipleConnections(bool value) const;
        [[nodiscard]] auto ProtectionLevel() const;
        auto ProtectionLevel(Windows::Networking::Sockets::SocketProtectionLevel const& value) const;
        [[nodiscard]] auto RemoteHostName() const;
        auto RemoteHostName(Windows::Networking::HostName const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IRfcommConnectionTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IRfcommConnectionTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ISecondaryAuthenticationFactorAuthenticationTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::ISecondaryAuthenticationFactorAuthenticationTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ISecondaryAuthenticationFactorAuthenticationTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ISensorDataThresholdTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::ISensorDataThresholdTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ISensorDataThresholdTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ISensorDataThresholdTriggerFactory
    {
        auto Create(Windows::Devices::Sensors::ISensorDataThreshold const& threshold) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ISensorDataThresholdTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ISensorDataThresholdTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ISmartCardTrigger
    {
        [[nodiscard]] auto TriggerType() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ISmartCardTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ISmartCardTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ISmartCardTriggerFactory
    {
        auto Create(Windows::Devices::SmartCards::SmartCardTriggerType const& triggerType) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ISmartCardTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ISmartCardTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ISmsMessageReceivedTriggerFactory
    {
        auto Create(Windows::Devices::Sms::SmsFilterRules const& filterRules) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ISmsMessageReceivedTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ISmsMessageReceivedTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ISocketActivityTrigger
    {
        [[nodiscard]] auto IsWakeFromLowPowerSupported() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ISocketActivityTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ISocketActivityTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IStorageLibraryChangeTrackerTriggerFactory
    {
        auto Create(Windows::Storage::StorageLibraryChangeTracker const& tracker) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IStorageLibraryChangeTrackerTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IStorageLibraryChangeTrackerTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IStorageLibraryContentChangedTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IStorageLibraryContentChangedTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IStorageLibraryContentChangedTriggerStatics
    {
        auto Create(Windows::Storage::StorageLibrary const& storageLibrary) const;
        auto CreateFromLibraries(param::iterable<Windows::Storage::StorageLibrary> const& storageLibraries) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IStorageLibraryContentChangedTriggerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ISystemCondition
    {
        [[nodiscard]] auto ConditionType() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ISystemCondition>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ISystemCondition<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ISystemConditionFactory
    {
        auto Create(Windows::ApplicationModel::Background::SystemConditionType const& conditionType) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ISystemConditionFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ISystemConditionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ISystemTrigger
    {
        [[nodiscard]] auto OneShot() const;
        [[nodiscard]] auto TriggerType() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ISystemTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ISystemTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ISystemTriggerFactory
    {
        auto Create(Windows::ApplicationModel::Background::SystemTriggerType const& triggerType, bool oneShot) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ISystemTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ISystemTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ITimeTrigger
    {
        [[nodiscard]] auto FreshnessTime() const;
        [[nodiscard]] auto OneShot() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ITimeTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ITimeTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ITimeTriggerFactory
    {
        auto Create(uint32_t freshnessTime, bool oneShot) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ITimeTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ITimeTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IToastNotificationActionTriggerFactory
    {
        auto Create(param::hstring const& applicationId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IToastNotificationActionTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IToastNotificationActionTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IToastNotificationHistoryChangedTriggerFactory
    {
        auto Create(param::hstring const& applicationId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IToastNotificationHistoryChangedTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IToastNotificationHistoryChangedTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IUserNotificationChangedTriggerFactory
    {
        auto Create(Windows::UI::Notifications::NotificationKinds const& notificationKinds) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IUserNotificationChangedTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IUserNotificationChangedTriggerFactory<D>;
    };
}
#endif
