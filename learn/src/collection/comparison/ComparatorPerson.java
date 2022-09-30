package collection.comparison;

import java.util.Arrays;
import java.util.Comparator;

public class ComparatorPerson {

    private String firstName;

    private String lastName;

    private Integer age;

    public ComparatorPerson(String firstName, String lastName, Integer age) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.age = age;
    }

    public String getFirstName() {
        return firstName;
    }

    public String getLastName() {
        return lastName;
    }

    public Integer getAge() {
        return age;
    }

    @Override
    public String toString() {
        return "Person [firstName=" + firstName + ", lastName=" + lastName + ", age=" + age + "]";
    }

    public static Comparator<ComparatorPerson> FirstNameComparator = new Comparator<ComparatorPerson>() {

        @Override
        public int compare(ComparatorPerson p1, ComparatorPerson p2) {
            return p1.getFirstName().compareTo(p2.getFirstName());
        }
    };

    public static Comparator<ComparatorPerson> LastNameComparator = new Comparator<ComparatorPerson>() {

        @Override
        public int compare(ComparatorPerson p1, ComparatorPerson p2) {
            return p1.getLastName().compareTo(p2.getLastName());
        }
    };

    public static Comparator<ComparatorPerson> AgeComparator = new Comparator<ComparatorPerson>() {

        @Override
        public int compare(ComparatorPerson p1, ComparatorPerson p2) {
            return p1.getAge() - p2.getAge();
        }
    };

    public static void main(String[] args) {
        ComparatorPerson a = new ComparatorPerson("Harry", "Potter", 100);
        ComparatorPerson b = new ComparatorPerson("John", "Doe", 200);
        ComparatorPerson c = new ComparatorPerson("Jerry", "Riggers", 300);

        // List<Person> people = new ArrayList<>();

        // people.add(a);
        // people.add(b);
        // people.add(c);

        ComparatorPerson[] people = { c, a, b };

        for (ComparatorPerson p : people) {
            System.out.println(p);
        }

        System.out.println("---");

        // System.out.println("Start sorting");
        // Arrays.sort(people);

        System.out.println("Start sorting by age");
        Arrays.sort(people, ComparatorPerson.AgeComparator);

        for (ComparatorPerson p : people) {
            System.out.println(p);
        }

        System.out.println("Start sorting by lastName");
        Arrays.sort(people, ComparatorPerson.LastNameComparator);

        for (ComparatorPerson p : people) {
            System.out.println(p);
        }

        System.out.println("Start sorting by firstName");
        Arrays.sort(people, ComparatorPerson.FirstNameComparator);

        for (ComparatorPerson p : people) {
            System.out.println(p);
        }
    }
}
