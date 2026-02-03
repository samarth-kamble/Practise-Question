import java.util.Scanner;

public class PrintNumber {
    static void printNumber (int i , int n){
        //base case
        if(i>n){
            return;
        }
        System.out.println(i);
        printNumber(i+1,n);
    }
    public static void main(String[] args) {
        int n ;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        printNumber(1,n);
    }
}
