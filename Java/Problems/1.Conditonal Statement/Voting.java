// Example 2. C Program to check whether a person is eligible to vote or not.

import java.util.Scanner;

public class Voting {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your age: ");
        int age = sc.nextInt();
        if (age >= 18) {
            System.out.println("You are eligible to vote.");
        } else if (age < 0) {
            System.out.println("Invalid age.");
        } else {
            System.out.println("You are not eligible to vote.");
        }
    }
}
