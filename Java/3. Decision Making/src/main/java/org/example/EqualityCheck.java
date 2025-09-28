package org.example;

import java.util.Scanner;

public class EqualityCheck {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the first number: ");
        int a = scanner.nextInt();
        System.out.println("Enter the second number: ");
        int b = scanner.nextInt();


        if(a == b){
            System.out.println("Two number are equal!");
        } else {
            System.out.println("Two number are not equal!");
        }

        scanner.close();
    }
}
