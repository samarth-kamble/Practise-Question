package org.example;

import java.util.Scanner;

public class PostiveNegaitve {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int num = scanner.nextInt();

        System.out.println("Enter the number: ");

        if(num >= 0) {
            System.out.println("The number is positive");
        } else {
            System.out.println("The number is negative");
        }

        scanner.close();
    }
}
