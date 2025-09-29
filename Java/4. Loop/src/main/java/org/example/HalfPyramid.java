package org.example;

import java.util.Scanner;

public class HalfPyramid {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int m =  input.nextInt();

        for (int i = 0; i < m; i++) {
            for  (int j = 0; j < i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }

    }
}
