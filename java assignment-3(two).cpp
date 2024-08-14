abstract class Employee {
    private String name;
    private String address;
    private double salary;
    private String jobTitle;

    
    public Employee(String name, String address, double salary, String jobTitle) {
        this.name = name;
        this.address = address;
        this.salary = salary;
        this.jobTitle = jobTitle;
    }

    public abstract double calculateBonus();
    public abstract void generatePerformanceReport();
    public abstract void manageProjects();

    public String getName() { return name; }
    public String getAddress() { return address; }
    public double getSalary() { return salary; }
    public String getJobTitle() { return jobTitle; }
}

class Manager extends Employee {
    private double teamPerformanceRating;

    public Manager(String name, String address, double salary, String jobTitle, double teamPerformanceRating) {
        super(name, address, salary, jobTitle);
        this.teamPerformanceRating = teamPerformanceRating;
    }

    @Override
    public double calculateBonus() {
        return getSalary() * (teamPerformanceRating / 100.0);
    }

    @Override
    public void generatePerformanceReport() {
        System.out.println("Generating performance report for Manager " + getName() + "...");
    }

    @Override
    public void manageProjects() {
        System.out.println("Managing projects and team for Manager " + getName() + "...");
    }

    public double getTeamPerformanceRating() { return teamPerformanceRating; }
}

class Developer extends Employee {
    private String programmingLanguage;

    public Developer(String name, String address, double salary, String jobTitle, String programmingLanguage) {
        super(name, address, salary, jobTitle);
        this.programmingLanguage = programmingLanguage;
    }

    @Override
    public double calculateBonus() {
        return 2000.00;
    }

    @Override
    public void generatePerformanceReport() {
        System.out.println("Generating performance report for Developer " + getName() + "...");
    }

    @Override
    public void manageProjects() {
        System.out.println("Developing and maintaining code for Developer " + getName() + "...");
    }

    public String getProgrammingLanguage() { return programmingLanguage; }
}

class Programmer extends Developer {
    private String projectAssigned;

    public Programmer(String name, String address, double salary, String jobTitle, String programmingLanguage, String projectAssigned) {
        super(name, address, salary, jobTitle, programmingLanguage);
        this.projectAssigned = projectAssigned;
    }

    @Override
    public double calculateBonus() {
        return 1500.00;
    }

    @Override
    public void generatePerformanceReport() {
        System.out.println("Generating performance report for Programmer " + getName() + "...");
    }

    @Override
    public void manageProjects() {
        System.out.println("Working on project " + projectAssigned + " for Programmer " + getName() + "...");
    }

    public String getProjectAssigned() { return projectAssigned; }
}

public class Main {
    public static void main(String[] args) {
        Manager manager = new Manager("Alice", "123 Elm St", 80000.00, "Project Manager", 85.0);
        Developer developer = new Developer("Bob", "456 Oak St", 70000.00, "Senior Developer", "Java");
        Programmer programmer = new Programmer("Charlie", "789 Pine St", 60000.00, "Junior Programmer", "Python", "New Website");

        System.out.println("Manager Details:");
        System.out.println("Name: " + manager.getName());
        System.out.println("Address: " + manager.getAddress());
        System.out.println("Salary: Rs. " + manager.getSalary());
        System.out.println("Job Title: " + manager.getJobTitle());
        System.out.println("Team Performance Rating: " + manager.getTeamPerformanceRating());
        System.out.println("Bonus: Rs. " + manager.calculateBonus());
        manager.generatePerformanceReport();
        manager.manageProjects();

        System.out.println("\nDeveloper Details:");
        System.out.println("Name: " + developer.getName());
        System.out.println("Address: " + developer.getAddress());
        System.out.println("Salary: Rs. " + developer.getSalary());
        System.out.println("Job Title: " + developer.getJobTitle());
        System.out.println("Programming Language: " + developer.getProgrammingLanguage());
        System.out.println("Bonus: Rs. " + developer.calculateBonus());
        developer.generatePerformanceReport();
        developer.manageProjects();

        // Test Programmer
        System.out.println("\nProgrammer Details:");
        System.out.println("Name: " + programmer.getName());
        System.out.println("Address: " + programmer.getAddress());
        System.out.println("Salary: Rs. " + programmer.getSalary());
        System.out.println("Job Title: " + programmer.getJobTitle());
        System.out.println("Programming Language: " + programmer.getProgrammingLanguage());
        System.out.println("Project Assigned: " + programmer.getProjectAssigned());
        System.out.println("Bonus: Rs. " + programmer.calculateBonus());
        programmer.generatePerformanceReport();
        programmer.manageProjects();
    }
}

