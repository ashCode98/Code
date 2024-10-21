
import java.util.Scanner;
public class prime_numbers {

    public static boolean isPrime(int num){
        if(num <= 1){
            return false;
        }

        for(int i = 2; i<=Math.sqrt(num); i++){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args){
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.println("Enter the size of our array: ");
            int size = scanner.nextInt();

            int[] number = new int[size];

            System.out.println("Enter the elements of array: ");
            for(int i = 0; i<size; i++){
                number[i] = scanner.nextInt();
            }

            System.out.println("The prime numbers in array are: ");
            for(int i = 0; i<size; i++){
                if(isPrime(number[i])){
                    System.out.print(number[i] + " ");
                }
            }
        }
    }
}
