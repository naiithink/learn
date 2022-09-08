package design_patterns.observer.listeners;

public class L1 implements EventListener {

    public L1() {}

    @Override
    public void update(String eventType, String details) {
        System.out.println("L1 got: " + details);
    }
}
