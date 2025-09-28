package org.example;

import java.util.Scanner;

public class ThreeNumLarge {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number of digits: ");
        int num1 = sc.nextInt();
        System.out.println("Enter the number of digits: ");
        int num2 = sc.nextInt();
        System.out.println("Enter the number of digits: ");
        int num3 = sc.nextInt();

        if (num1 > num2 && num1 > num3) {
            System.out.println("The largest number is " + num1);
        } else if(num2 > num1 && num2 > num3) {
            System.out.println("The largest number is " + num2);
        } else if(num3 > num1 && num3 > num2) {
            System.out.println("The largest number is " + num3);
        } else {
            System.out.println("The largest number is " + num1);
        }

        sc.close();
    }
}
