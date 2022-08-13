package arrays;

public class Array {

    public static void main(String[] args) {

        int[] anArray = new int[10];
        int[] anotherArray = new int[10];

        for (int i = 1, lim = anArray.length + 1; i < lim; i++) {
            anArray[i-1] = i * 10;
        }

        for (int i = 0, lim = anArray.length; i < lim; i++) {
            System.out.println(anArray[i] + " " + anotherArray[i]);
        }

        System.arraycopy(anArray, 0, anotherArray, 0, anotherArray.length);

        for (int i = 0, lim = anArray.length; i < lim; i++) {
            System.out.println(anArray[i] + " " + anotherArray[i]);
        }
    }
}
