public class Cores {
    public static void main(String[] args) {
        int cores = Runtime.getRuntime().availableProcessors();

        System.out.println(cores);
    }
}
