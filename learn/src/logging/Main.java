package logging;

import java.util.logging.ConsoleHandler;
import java.util.logging.Level;
import java.util.logging.Logger;

public class Main {

    static Logger logger = Logger.getLogger(Main.class.getName());

    public static void main(String[] args) {
        logger.setLevel(Level.FINEST);
        // logger = Logger.addHandler(new ConsoleHandler());

        logger.log(Level.INFO, "test");
    }
}
