package design_patterns.observer;

import design_patterns.observer.core.Core;
import design_patterns.observer.listeners.L1;
import design_patterns.observer.listeners.L2;

public class Main {

    public static void main(String[] args) {
        Core core = new Core("eiei", "ahiahi");

        core.events.subscribe("eiei", new L1());
        core.events.subscribe("eiei", new L2());
        core.events.subscribe("ahiahi", new L1());

        core.justAnnounce("eiei", "just announce");
        core.justAnnounce("ahiahi", "ahiahi just announce");
        core.justAnnounce("eiei", "just announce");
    }
}
