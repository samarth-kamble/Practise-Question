package org.example;

import java.util.Scanner;

public class SquareLetter {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        char ch = 'A';

        System.out.print("Enter a number of Rows and Columns: ");
        int rowAndCol = input.nextInt();

        // Using for loop
        for (int j = 1; j <= rowAndCol; j++){
            for (int i = 1; i <= rowAndCol; i++){
                System.out.print(ch + " ");
                ch++;
            }
            ch = 'A';
            System.out.println();
        }

        System.out.println("========Using a while=========");

        // Using while loop
        ch = 'A';
        int j = 1;
        while (j <= rowAndCol) {
            int i = 1;
            while (i <= rowAndCol) {
                System.out.print(ch + " ");
                ch++;
                i++;
            }
            ch = 'A';
            System.out.println();
            j++;
        }

        input.close();
    }
}