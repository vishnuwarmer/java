import java.util.Random;

public class FindLargestAndSmallest {
    public static void main(String[] args) {
        Random random = new Random();

        int largest = Integer.MIN_VALUE;
        int smallest = Integer.MAX_VALUE;

        int count = 0;

        while (count < 10) {
            int number = random.nextInt(100) + 1;

            System.out.println("Generated number: " + number);

            if (number > largest) {
                largest = number;
            }
            if (number < smallest) {
                smallest = number;
            }

            count++;
        }

        // Print the results
        System.out.println("The largest number is: " + largest);
        System.out.println("The smallest number is: " + smallest);
    }
}

