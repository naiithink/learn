package logging;

import java.util.logging.FileHandler;
import java.util.logging.Level;

import java.io.FileWriter;
import java.io.IOException;
import java.io.BufferedWriter;

public class Logger {

    // static Logger logger;
    // static Level loggingLevel = Level.ALL;

    // private Logger() {}

    // public Logger getInstance(Level loggingLevel) {
    //     if (logger == null) {
    //         this.loggingLevel = loggingLevel;

    //         logger = Logger.getLogger(Logger.class.getName());

    //         logger.setLevel(loggingLevel);
    //         logger.addHandler(new ConsoleHandler());
    //     }

    //     return logger;
    // }

    public static void main(String[] args) {
        final String logFileName = "test.log";
        FileWriter logFile;
        BufferedWriter fileWriterBuffer;

        // logFile = new FileWriter(logFileName);
        // fileWriterBuffer = new BufferedWriter(logFile);

        java.util.logging.Logger logger = java.util.logging.Logger.getLogger(Logger.class.getName());

        logger.setLevel(Level.ALL);
        // logger.addHandler(new ConsoleHandler());
        try {
            logger.addHandler(new FileHandler(logFileName));
        } catch (IOException err) {
            System.err.println(err.toString());
        }

        logger.log(Level.INFO, "test1");
        logger.log(Level.INFO, "test2");
        logger.log(Level.INFO, "test3");
        logger.log(Level.INFO, "test4");
    }
}
