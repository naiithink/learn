package time;

import java.time.Instant;

public final class InstantVSSystem {

    public static void main(String[] args) {
        System.out.println(System.currentTimeMillis());
        System.out.println(Instant.now().toEpochMilli());
    }
}
