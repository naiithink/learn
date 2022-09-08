package design_patterns.observer.core;

import design_patterns.observer.publisher.EventManager;

public class Core {
    public EventManager events;

    public Core(String... eventTypes) {
        this.events = new EventManager(eventTypes);
    }

    public void justAnnounce(String eventType, String details) {
        events.publish(eventType, details);
    }
}
