import java.util.Scanner;

public class TaxCalculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

    
        System.out.print("Enter your taxable income: ");
        double income = scanner.nextDouble();

        
        double tax = 0.0;

        if (income <= 150000) {
            tax = 0.0; // No tax
        } else if (income <= 300000) {
            tax = (income - 150000) * 0.10; 
        } else if (income <= 500000) {
            tax = (income - 300000) * 0.20 + 15000; 
        } else {
            tax = (income - 500000) * 0.30 + 65000;
        }

        System.out.println("Total Tax: " + tax);

        scanner.close();
    }
}

