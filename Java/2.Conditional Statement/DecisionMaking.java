import java.util.Scanner;

public class DecisionMaking {
    public static void main(String[] args) {
        // 1. If Statement
        System.out.println("\nIf Statement");
        int number = 10;
        if (number > 0) {
            System.out.println("The number is positive.");
        }

        // 2. If-else Statement
        System.out.println("\nIf-else Statement");
        int number2 = 20;
        if (number2 == number) {
            System.out.println("The Numbers are Equal");
        } else {
            System.out.println("The Numbers are not Equal");
        }

        // 3. If-else-if Statement
        System.out.println("\nIf-else-if Statement");
        int number3 = 30;
        if (number2 == number3) {
            System.out.println("Both are equal");
        } else if (number2 > number3) {
            System.out.println("Number2 is greater than Number3");
        } else {
            System.out.println("Number3 is greater than Number2");
        }

        // 4. Nested If Statement
        System.out.println("\nNested If Statement");
        int number4 = 40;
        if (number2 == number3) {
            if (number2 == number4) {
                System.out.println("All are equal");
            } else {
                System.out.println("Number2 and Number3 are equal");
            }
        } else {
            System.out.println("Number2 and Number3 are not equal");
        }

        // 5. Switch Statement
        System.out.println("\nSwitch Statement");
        char operator;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter an operator (+, -, *, /): ");
        operator = sc.next().charAt(0);

        switch (operator) {
            case '+':
                int Add = number2 + number3;
                System.out.println("Addition of " + number2 + " and " + number3 + " is " + Add);
                break;

            case '-':
                int Sub = number2 - number3;
                System.out.println("Subtraction of " + number2 + " and " + number3 + " is " + Sub);
                break;

            case '*':
                int Mul = number2 * number3;
                System.out.println("Multiplication of " + number2 + " and " + number3 + " is " + Mul);
                break;

            case '/':
                int Div = number2 / number3;
                System.out.println("Division of " + number2 + " and " + number3 + " is " + Div);
                break;

            default:
                System.out.println("Invalid Operator");
                break;
        }
        sc.close();
    }
}
