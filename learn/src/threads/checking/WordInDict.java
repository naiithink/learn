package threads.checking;

import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.Future;

class WordInDict {

    private static ExecutorService eService = Executors.newFixedThreadPool(5);

    private static volatile Map<String, String> dict = new ConcurrentHashMap<>();

    private static volatile boolean wordExist;

    // private class Dict
    //         implements Runnable {

    //     private ExecutorService eService = Executors.newSingleThreadExecutor();

    //     private String word;

    //     public Dict(String word) {
    //         this.word = word;
    //     }

    //     @Override
    //     public void run() {
    //         System.out.println("Start");
    //         checkWord();
    //         System.out.println("End");
    //     }

    //     private void checkWord() {
    //         wordExist = dict.containsKey(word) ? true
    //                                            : false;
    //     }

    //     public Future<Boolean> checkInDict(String word) {
    //         return this.eService.submit(() -> {
    //             return Boolean.valueOf(dict.containsKey(word));
    //         });
    //     }
    // }

    private Future<Boolean> checkInDict(String word) {
        return this.eService.submit(() -> {
            return Boolean.valueOf(dict.containsKey(word));
        });
    }

    public static void main(String[] args) throws InterruptedException, ExecutionException {
        dict.put("hello", "0");
        dict.put("world", "1");

        WordInDict main = new WordInDict();

        // ExecutorService eService = Executors.newFixedThreadPool(3);

        // Runnable worker1 = main.new Dict("hello");
        // Runnable worker2 = main.new Dict("woRld");
        // Runnable worker3 = main.new Dict("HelLo");
        // Runnable worker4 = main.new Dict("eiei");

        // eService.execute(worker);

        Future<Boolean> future1 = main.checkInDict("hello");
        Future<Boolean> future2 = main.checkInDict("world");
        Future<Boolean> future3 = main.checkInDict("eiei");
        Future<Boolean> future4 = main.checkInDict("ahiahi");
        Future<Boolean> future5 = main.checkInDict("eieakjldi");

        Future<? extends Integer> future_incre = eService.submit(new Runnable() {
            @Override
            public void run() {
                for (long i = 0; i < 999; ++i) {
                    System.out.println(i);
                }
            }
        });

        while (future1.isDone() == false) {
            System.out.println("Checking");
        }

        boolean result = future1.get().booleanValue();

        System.out.println(result);

        eService.shutdown();
    }
}
