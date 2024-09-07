import java.util.Scanner;

public class swap_factorial{

    public static void swap(int a, int b){
        System.out.println("Before swapping: a= " + a + ", b=" + b);

        a = a+b;
        b = a-b;
        a = a-b;

        System.out.println("After swapping: a= " + a + ", b=" + b);
    }

    public static int factorial(int n){
        if(n== 0){
            return 1;
        }
        return n * factorial(n-1);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter your first number: ");
        int a = scanner.nextInt();

        System.out.println("Enter your second number: ");
        int b = scanner.nextInt();

        swap(a, b);

        System.out.println("Enter the number you want factorial of: ");
        int n = scanner.nextInt();

        int fact = factorial(n);

        System.err.println("The factorial of " + n + " is " + fact);

        scanner.close();
    }

}