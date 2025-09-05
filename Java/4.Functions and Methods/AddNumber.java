import java.util.*;

class AddNumber {

    static int add(int a, int b) {

        return a + b;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b;

        System.out.print("Enter first number: ");
        a = sc.nextInt();

        System.out.print("Enter second number: ");
        b = sc.nextInt();

        int sum = add(a, b);
        System.out.println("The sum is: " + sum);
        sc.close();
    }
}