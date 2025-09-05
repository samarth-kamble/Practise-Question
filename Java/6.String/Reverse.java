import java.util.Scanner;

public class Reverse {
    public static void main(String[] args) {
        String str = "Hello";
        String reversedStr = "";

        for (int i = str.length() - 1; i >= 0; i--) {
            reversedStr += str.charAt(i);
        }

        System.out.println("Original String: " + str); // Output: Hello
        System.out.println("Reversed String: " + reversedStr); // Output: olleH

        // Using the reverse function
        String reversedUsingFunction = reverseStringFunction();
        System.out.println("Reversed using function: " + reversedUsingFunction); // Output: olleh

        // Using the logic to reverse
        String reversedUsingLogic = ReverseStringLogic();
        System.out.println("Reversed using logic: " + reversedUsingLogic); // Output: mas
    }

    public static String reverseStringFunction() {
        StringBuilder sb = new StringBuilder("hello");
        sb.reverse();
        return sb.toString();
    }

    public static String ReverseStringLogic() {
        StringBuilder sb = new StringBuilder("sam");

        for (int i = 0; i < sb.length() / 2; i++) {
            int front = i;
            int back = sb.length() - 1 - i;

            char frontChar = sb.charAt(front);
            char backChar = sb.charAt(back);

            sb.setCharAt(front, backChar);
            sb.setCharAt(back, frontChar);

        }

        return sb.toString();
    }
}
