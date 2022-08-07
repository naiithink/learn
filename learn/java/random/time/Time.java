import java.time.Instant;

public class Time {
    public static void main(String[] args) {
        long ut = Instant.now().getEpochSecond();
        System.out.println(ut);
    }
}
