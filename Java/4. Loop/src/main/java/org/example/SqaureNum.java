package org.example;

import java.util.Scanner;

public class SqaureNum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int rowAndCol = sc.nextInt();

        for  (int i = 1; i <= rowAndCol; i++){
            for(int j = 1; j <= rowAndCol; j++){
                System.out.print(" "+j);
            }
            System.out.println();
        }

    }
}
