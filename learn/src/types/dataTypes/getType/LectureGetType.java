package types.dataTypes.getType;

public class LectureGetType {

    public int getType(int x) {
        System.out.println("is int");
        return x;
    }

    double getType(double x) {
        System.out.println("is double");
        return x;
    }

    protected float getType(float x) {
        System.out.println("is float");
        return x;
    }

    private long getType(long x) {
        System.out.println("is long");
        return x;
    }

    public Object getType(Object x) {
        System.out.println("is Object");
        return x;
    }

    public static void main(String[] args) {
        LectureGetType ip = new LectureGetType();

        ip.getType(0);
        ip.getType(0.0);
        ip.getType(1L);
        ip.getType(1f);
    }
}
