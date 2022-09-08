package design_patterns.observer.publisher;

import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ConcurrentMap;
import java.util.concurrent.CopyOnWriteArrayList;

import design_patterns.observer.listeners.EventListener;

public class EventManager {

    ConcurrentMap<String, CopyOnWriteArrayList<EventListener>> listeners = new ConcurrentHashMap<>();

    public EventManager(String... operations) {
        for (String operation : operations) {
            this.listeners.put(operation, new CopyOnWriteArrayList<>());
        }
    }

    public void subscribe(String eventType, EventListener listener) {
        CopyOnWriteArrayList<EventListener> users = listeners.get(eventType);
        users.add(listener);
    }

    public void unsubscribe(String eventType, EventListener listener) {
        CopyOnWriteArrayList<EventListener> users = listeners.get(eventType);
        users.remove(listener);
    }

    public void publish(String eventType, String details) {
        CopyOnWriteArrayList<EventListener> users = listeners.get(eventType);
        
        for (EventListener listener : users) {
            listener.update(eventType, details);
        }
    }
}
