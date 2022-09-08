package design_patterns.observer.listeners;

public class L2 implements EventListener {

    public L2() {}

    @Override
    public void update(String eventType, String details) {
        System.out.println("L2 got: " + details);
    }
}
