package enums;

// configKeyClass.toGenericString().equals(resultType.toGenericString()) == false

public class GetClass {

    public static void main(String[] args) throws ClassNotFoundException {
        Day day = Day.MONDAY;

        System.out.println(day.getClass());
        System.out.println(Class.forName(day.getClass().getName()));
        // System.out.println(day.getClass().isAssignableFrom(enums.Day.class));
        System.out.println(day.getClass().isAssignableFrom(day.getClass()));
    }
}
