package exceptions.oops;

public class Oops {

    public void somethingWentWrong() throws OopsException {
        System.out.println("bf");

        if (1 == 1)
            throw new OopsException("eiei");

        System.out.println("af");
    }

    public static void main(String[] args) {
        Oops oops = new Oops();

        try {
            oops.somethingWentWrong();
        } catch (OopsException e) {
            System.out.println("gotcha");
            e.printStackTrace();
        }

        System.out.println("about to exit");
    }
}
