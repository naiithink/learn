package logging.logs;

import java.time.Instant;
import java.util.logging.Formatter;
import java.util.logging.LogRecord;

public class LogFormatter extends Formatter {
    
    private static Instant timestamp = Instant.now();

    @Override
    public String format(LogRecord record) {

        return Instant.now().toString() // timestamp.toString() // Instant.now().getEpochSecond()
               + ","    + record.getLongThreadID()
               + ","    + record.getLevel()
               + ","    + record.getSourceClassName()
                        + "."    + record.getSourceMethodName()
               + ","    + record.getMessage()
               + "\n";
    }
}
