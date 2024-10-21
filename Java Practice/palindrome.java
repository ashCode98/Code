
import java.util.Scanner;

public class palindrome {

    public static boolean isPalindrome(int number){
        int originalNumber = number;
        int reversedNumber = 0;
        while(number != 0){
            int digit = number%10;
            reversedNumber = reversedNumber * 10 + digit;
            number = number/10;
        }

        return reversedNumber==originalNumber;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the number: ");
        int number = scanner.nextInt();

        if(isPalindrome(number)){
            System.out.println(number + " is palindrome");
        }
        else{
            System.out.println(number + " not a palindrome");
        }
    }
}
