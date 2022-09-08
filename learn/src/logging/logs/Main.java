package logging.logs;

import java.io.IOException;
import java.util.logging.ConsoleHandler;
import java.util.logging.FileHandler;
import java.util.logging.Handler;
import java.util.logging.Level;
import java.util.logging.Logger;

public class Main {

    private static Logger logger = Logger.getLogger(Main.class.getName());

    public static void main(String[] args) {
        final String LOG_FILE = System.getProperty("user.dir") + System.getProperty("file.separator") + "learn/src/logging/logs/log.csv";

        System.out.println(LOG_FILE);

        Logger logger = Logger.getLogger(Main.class.getName());

        Handler consoleHandler = new ConsoleHandler();
        Handler fileHandler;

        logger.addHandler(consoleHandler);

        try {
            fileHandler = new FileHandler(LOG_FILE, true);

            fileHandler.setFormatter(new LogFormatter());
            logger.addHandler(fileHandler);


            logger.log(Level.INFO, "Start");

            for (int i = 0; i < 10; i++) {
                logger.log(Level.INFO, "hello" + i);
            }
    
            fileHandler.close();
        } catch (SecurityException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        } catch (IOException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }
}
