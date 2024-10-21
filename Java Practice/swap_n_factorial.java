
import java.util.Scanner;

public class swap_n_factorial {

    public static void swap(int a, int b){
        System.out.println("Before swapping value of a is: " + a + " and b is: " + b + ' ');

        a = a+b;
        b = a-b;
        a = a-b;

        System.out.println("After swapping value of a is: " + a + " and b is: " + b + ' ');
    }

    public static int factorial(int n){
        if(n==1){
            return 1;
        }
        else{
            return n * factorial(n-1);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the value of a: ");
        int a = scanner.nextInt();

        System.out.println("Enter the value of b: ");
        int b = scanner.nextInt();

        swap(a, b);

        System.out.println("Enter the number to find the factorial of: ");
        int n = scanner.nextInt();

        int result = factorial(n);
        System.out.println("The factorial of " + n + " is: " + result + " ");

        scanner.close();
    }
}
