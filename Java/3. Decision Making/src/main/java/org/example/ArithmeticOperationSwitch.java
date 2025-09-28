package org.example;

import java.util.Scanner;

public class ArithmeticOperationSwitch {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the first number of integers: ");
        int m =  scanner.nextInt();
        System.out.print("Enter the second number of integers: ");
        int n = scanner.nextInt();

        System.out.print("Enter the operation: ");
        char ch = scanner.next().charAt(0);

        switch (ch) {
                case '+':
                    int sum = m+n;
                    System.out.println(sum);
                    break;

                case '-':
                    int sub = m-n;
                    System.out.println(sub);
                    break;

                    case '*':
                        int mul = n*m;
                        System.out.println(mul);
                        break;

                        case '/':
                            int div = n/m;
                            System.out.println(div);
                            break;

                            default:
                                System.out.println("Invalid input");
        }

    }
}
