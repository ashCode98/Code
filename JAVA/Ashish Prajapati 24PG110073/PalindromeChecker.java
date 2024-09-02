import java.util.Scanner;

public class PalindromeChecker {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter a number");
        int a = scanner.nextInt();

        if (isPalindrome(a) == true) {
            System.out.println(a + " is a Palindrome number");
        } else {
            System.out.println(a + " is not a Palindrome number");
        }

        scanner.close();
    }

    public static boolean isPalindrome(int n) {
        int original_number = n;
        int reversed_number = 0;

        while (n != 0) {
            int digit = n % 10;
            reversed_number = reversed_number * 10 + digit;
            n /= 10;
        }

        return original_number == reversed_number;
    }
}
