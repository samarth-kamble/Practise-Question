public class SumNNumber {

    // Without using static keyword
     int sumN(int n) {
        if (n == 0) {
            return 0;
        }
        return n + sumN(n - 1);

    }

    public static void main(String[] args) {
        // Create an instance of the class to call the non-static method because we need to create a object of main class to access non static method
        SumNNumber cal = new SumNNumber();

        int n = 5; // Example input
        int sum = cal.sumN(n);
        System.out.println("The sum of first " + n + " natural numbers is: " + sum);
    }
}
