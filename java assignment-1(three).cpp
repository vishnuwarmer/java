import java.util.Scanner;

public class StudentGrades {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter marks for subject 1: ");
        int subject1 = scanner.nextInt();
        System.out.print("Enter marks for subject 2: ");
        int subject2 = scanner.nextInt();
        System.out.print("Enter marks for subject 3: ");
        int subject3 = scanner.nextInt();
        System.out.print("Enter marks for subject 4: ");
        int subject4 = scanner.nextInt();

        int totalMarks = subject1 + subject2 + subject3 + subject4;

        double aggregate = (totalMarks / 4.0);

        String grade;
        if (aggregate > 75) {
            grade = "Distinction";
        } else if (aggregate >= 60) {
            grade = "First Division";
        } else if (aggregate >= 50) {
            grade = "Second Division";
        } else if (aggregate >= 40) {
            grade = "Third Division";
        } else {
            grade = "Fail";
        }

        // Display results
        System.out.println("Total Marks: " + totalMarks);
        System.out.println("Aggregate: " + aggregate + "%");
        System.out.println("Grade: " + grade);

        scanner.close();
    }
}

