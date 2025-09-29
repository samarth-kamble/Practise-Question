package org.example;

import java.util.Scanner;

public class HollowRectangle {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the number of rows: ");
        int n = input.nextInt();
        System.out.print("Enter the number of cols: ");
        int m = input.nextInt();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                // Print * for border positions: first/last row OR first/last column
                if(i == 0 || i == n-1 || j == 0 || j == m-1) {
                    System.out.print("* ");
                } else {
                    System.out.print("  "); // Two spaces to match the "* " spacing
                }
            }
            System.out.println();
        }

        input.close();
    }
}