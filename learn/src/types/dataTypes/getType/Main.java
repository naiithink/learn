package types.dataTypes.getType;

public class Main {

    public static void main(String[] args) {
        StaticPromotion sp = StaticPromotion.getInstance();

        sp.getType(0);
        sp.getType(0.0);
        sp.getType(1L);
        sp.getType(1f);

        System.out.println("--");

        InstancePromotion ip = new InstancePromotion();

        ip.getType(0);
        ip.getType(0.0);
        ip.getType(1L);
        ip.getType(1f);

        System.out.println("--");

        sp.getType('1');
        sp.getType("1");
        sp.getType("12");
        sp.getType("123");
        sp.getType("1234");
        sp.getType("12345");
    }
}
