package org.example;

import java.util.Scanner;

public class EvenOdd {
    public static void main(String[] args) {
        Scanner  scanner = new Scanner(System.in);
        System.out.println("Enter the first number: ");

        int  n = scanner.nextInt();

        if(n % 2 == 0){
            System.out.print("Given number is even");
        } else {
            System.out.print("Given number is odd");
        }

    }
}
