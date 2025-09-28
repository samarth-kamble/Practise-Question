package org.example;

import java.util.Scanner;

public class SignumFunction {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the first number: ");
        int m =  sc.nextInt();
        int n;

        if( m!= 0){
            if(m>0){
                n=1;
            } else {
                n=-1;
            }
        } else {
            n=0;
        }

        System.out.println("Value of m: "+m);
        System.out.println("Value of n: "+n);
    }
}
