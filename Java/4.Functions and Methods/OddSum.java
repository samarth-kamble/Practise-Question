public class OddSum {
    public static int calculateOddSum(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i += 2) {
            sum += i;
        }
        return sum;
    }

    public static void main(String[] args) {
        int n = 10; // You can change this value to test with different numbers
        int oddSum = calculateOddSum(n);
        System.out.println("The sum of odd numbers from 1 to " + n + " is: " + oddSum);
    }
}
