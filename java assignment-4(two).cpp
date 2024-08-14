import java.util.ArrayList;
import java.util.List;

public class Student {
    private String student_id;
    private String student_name;
    private List<Double> grades;

    public Student(String student_id, String student_name) {
        this.student_id = student_id;
        this.student_name = student_name;
        this.grades = new ArrayList<>();
    }

    public String getStudentId() {
        return student_id;
    }

    public void setStudentId(String student_id) {
        this.student_id = student_id;
    }

    // Getter for student_name
    public String getStudentName() {
        return student_name;
    }

    // Setter for student_name
    public void setStudentName(String student_name) {
        this.student_name = student_name;
    }

    public void addGrade(double grade) {
        if (grade < 0 || grade > 100) {
            System.out.println("Invalid grade. Please enter a grade between 0 and 100.");
        } else {
            grades.add(grade);
            System.out.println("Grade added successfully.");
        }
    }

    public List<Double> getGrades() {
        return new ArrayList<>(grades); // Return a copy of the grades list
    }

    public void displayStudentDetails() {
        System.out.println("Student ID: " + student_id);
        System.out.println("Student Name: " + student_name);
        System.out.println("Grades: " + grades);
    }

    public static void main(String[] args) {
        Student student = new Student("S123", "John Doe");

        student.setStudentName("Jane Doe");
        student.setStudentId("S124");

        // Add grades
        student.addGrade(85.5);
        student.addGrade(92.0);
        student.addGrade(105.0); 

        student.displayStudentDetails();
    }
}

