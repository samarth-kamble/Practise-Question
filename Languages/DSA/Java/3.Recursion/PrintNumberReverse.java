public class PrintNumberReverse {
    public static void main(String[] args) {
        int n = 5; // Example input
        printReverse(n);
    }

    public static void printReverse(int n) {
        if (n == 0) {
            return;
        }
        System.out.println(n);
        printReverse(n - 1);
    }

}
