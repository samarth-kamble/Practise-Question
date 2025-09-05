import java.util.Scanner;

public class SpiralOrder {
    public static void main(String arg[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number of rows and columns: ");
        int m = sc.nextInt();
        int n = sc.nextInt();

        int matrix[][] = new int[m][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        System.out.println("The Spiral Order Matrix is : ");

        int rowStart = 0;
        int rowEnd = n - 1;

        int colStart = 0;
        int colsEnd = m - 1;

        // To print spiral order matrix
        while (rowStart <= rowEnd && colStart <= colsEnd) {
            for (int col = colStart; col <= colsEnd; col++) {
                System.out.print(matrix[rowStart][col] + " ");
            }
            rowStart++;

            // 2
            for (int row = rowStart; row <= rowEnd; row++) {
                System.out.print(matrix[row][colsEnd] + " ");
            }
            colsEnd--;

            // 3
            for (int col = colsEnd; col >= colStart; col--) {
                System.out.print(matrix[rowEnd][col] + " ");
            }
            rowEnd--;

            // 4
            for (int row = rowEnd; row >= rowStart; row--) {
                System.out.print(matrix[row][colStart] + " ");
            }
            colStart++;

            System.out.println();
        }
    }
}
