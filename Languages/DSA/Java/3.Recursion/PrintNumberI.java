class Solution {
    // Recursive function to print numbers from current down to 1 using backtracking
    public void printNumbers(int current) {
        // Base case: if current is less than 1, stop recursion
        if (current < 1)
            return;

        // Recursive call with previous number
        printNumbers(current - 1);

        // Print current number during backtracking
        System.out.print(current + " ");
    }
}

public class PrintNumberI {
    public static void main(String[] args) {
        Solution sol = new Solution();
        int n = 10;

        sol.printNumbers(n);
        System.out.println();
    }
}
