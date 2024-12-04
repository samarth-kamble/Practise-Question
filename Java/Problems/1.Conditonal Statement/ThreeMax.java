// Write a C program to find maximum between three numbers.

import java.util.Scanner;

public class ThreeMax {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the first number: ");
        int FirstNumber = sc.nextInt();

        System.out.println("Enter the second number: ");
        int SecondNumber = sc.nextInt();

        System.out.println("Enter the third number: ");
        int ThirdNumber = sc.nextInt();

        if (FirstNumber > SecondNumber && FirstNumber > ThirdNumber) {
            System.out.println("The maximum number is: " + FirstNumber);
        } else if (SecondNumber > FirstNumber && SecondNumber > ThirdNumber) {
            System.out.println("The maximum number is: " + SecondNumber);
        } else {
            System.out.println("The maximum number is: " + ThirdNumber);
        }
    }
}
