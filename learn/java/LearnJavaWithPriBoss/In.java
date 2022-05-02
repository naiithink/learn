import java.util.Scanner; // import the Scanner class 

class In {
  public static void main(String[] args) {
    Scanner myObj = new Scanner(System.in);
    int userName;
    
    // Enter username and press Enter
    System.out.println("Enter username"); 
    userName = myObj.nextInt();

    userName += 1;

    System.out.println("Username is: " + userName);
    // System.out.println("Username is: " + myObj.next());
    // System.out.println("Username is: " + myObj.next());
    // System.out.println("Username is: " + myObj.next());
  }
}