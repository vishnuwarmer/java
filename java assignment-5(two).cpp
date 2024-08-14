import java.util.Scanner;

public class BMICalculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter your height (in inches): ");
        float heightInInches = scanner.nextFloat();

        System.out.print("Enter your weight (in pounds): ");
        float weightInPounds = scanner.nextFloat();

        float heightInMeters = heightInInches * 0.0254f;
        float weightInKilograms = weightInPounds * 0.453592f;

        float bmi = weightInKilograms / (heightInMeters * heightInMeters);

        System.out.printf("Your BMI is: %.2f\n", bmi);

        if (bmi <= 16.00) {
            System.out.println("Starvation");
        } else if (bmi <= 16.99) {
            System.out.println("Emaciation");
        } else if (bmi <= 18.49) {
            System.out.println("Underweight");
        } else if (bmi <= 22.99) {
            System.out.println("Normal, low range");
        } else if (bmi <= 24.99) {
            System.out.println("Normal high range");
        } else if (bmi <= 27.49) {
            System.out.println("Overweight low range");
        } else if (bmi <= 29.99) {
            System.out.println("Overweight high range");
        } else if (bmi <= 34.99) {
            System.out.println("1st degree obesity");
        } else if (bmi <= 39.99) {
            System.out.println("2nd degree obesity");
        } else {
            System.out.println("3rd degree obesity");
        }

        scanner.close();
    }
}

