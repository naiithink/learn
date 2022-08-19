/**
 * double
 *      >1 float
 *              >1 long
 *                      >1 int
 *                              >1 char
 *                              >1 short
 *                                      >1 byte
 */

package types.dataTypes;

public class Casting {

    public static void main(String[] args) {
        byte b = 97;
        short si = b;
        int i = si;
        long l = i;
        float f = l;
        double lf = f;

        System.out.printf("""
                b:  %d
                si: %d
                i:  %d
                l:  %d
                f:  %f
                lf: %f
                """, b, si, i, l, f, lf);

        System.out.println("---");

        char c = (char) si;

        System.out.printf("""
                c:  %c
                si: %d
                """, c, si);
    }
}
