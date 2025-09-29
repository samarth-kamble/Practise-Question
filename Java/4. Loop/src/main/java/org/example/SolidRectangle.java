package org.example;

import java.util.Scanner;

public class SolidRectangle {
    public static  void main(String[] args){
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the number of rows: ");
        int rows = input.nextInt();
        System.out.print("Enter the number of cols: ");
        int cols = input.nextInt();

        System.out.print("=====Using a For Loop =====");
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= cols; j++) {
                System.out.print("*" + " ");
            }
            System.out.println();
        }

        System.out.print("=====Using a while Loop =====");
        int i = 1;
        while (i <= rows) {
            int j = 1;
            while (j <= cols) {
                System.out.print("* ");
                j++;
            }
            System.out.println();
            i++;
        }
    }
}
