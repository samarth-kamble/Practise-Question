import java.util.*;

public class Strings {
    public static void main(String[] args) {
        // String Declaration
        String name = "John";
        String fullName = "John Doe";

        System.out.println("Name: " + name);
        System.out.println("Full Name: " + fullName);

        // String Length
        String txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        System.out.println("The length of the txt string is: " + txt.length());

        // String IndexOf
        String txts = "Please locate where 'locate' occurs!";
        System.out.println(txts.indexOf("locate"));

        // String toUppercase and toLowercase
        String txtUpper = txt.toUpperCase();
        String txtLower = txt.toLowerCase();
        System.out.println("Uppercase: " + txtUpper);
        System.out.println("Lowercase: " + txtLower);

        // String Concatenation
        String firstName = "John";
        String lastName = "Doe";
        String FullName = firstName + " " + lastName;
        System.out.println("Full Name: " + FullName);

        // Taking a String Input
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your string:");

        String userInput = sc.next(); // next takes the only first word
        System.out.println("You entered: " + userInput);

    }
}
