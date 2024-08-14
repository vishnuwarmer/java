import java.util.Scanner;

public class SumProductMinMax3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter 1st integer: ");
        int num1 = scanner.nextInt();

        System.out.print("Enter 2nd integer: ");
        int num2 = scanner.nextInt();

        System.out.print("Enter 3rd integer: ");
        int num3 = scanner.nextInt();

        int sum = num1 + num2 + num3;
        int product = num1 * num2 * num3;
        int min = Math.min(num1, Math.min(num2, num3));
        int max = Math.max(num1, Math.max(num2, num3));

        System.out.println("The sum is: " + sum);
        System.out.println("The product is: " + product);
        System.out.println("The min is: " + min);
        System.out.println("The max is: " + max);

        scanner.close();
    }
}

