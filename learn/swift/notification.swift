import Foundation
import UserNotifications

let stderr = NSFileHandle.fileHandleWithStandardError()

// Shared user notification center object for the app
let userNotificationCenter = UNUserNotificationCenter.current()

// Request for authorization
userNotificationCenter.requestAuthorization(options: [.alert, .sound, .badge]) { granted, error in
    if let error = error {
        stderr.writeData("Error: " + error)
    }
}

func sendNotification() {
    // Creating an object for the notification
    let notificationContent = UNMutableNotificationContent()

    // Creating notification content
    notificationContent.title = "Foo"
    notificationContent.body = "Hello, World!"
    notificationContent.badge = NSNumber(value: 3)
    notificationContent.sound = UNNotificationSound.default

    // Create trigger
    let trigger = UNTimeIntervalNotificationTrigger(timeInterval: 5,
                                                    repeats: false)

    // Create request
    let request = UNNotificationRequest(idendifier: "testNoti",
                                        content: notificationContent,
                                        trigger: trigger)

    // Add the request to `userNotificationCenter`
    userNotificationCenter.add(request) { error in
        if let error = error {
            stderr.writeData("Notification Error: " + error)
        }
    }
}