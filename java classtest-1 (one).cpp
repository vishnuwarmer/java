class Employee {
    int emp_id;
    String name;
    double salary;
    Employee(int emp_id, String name, double salary) {
        this.emp_id = emp_id;
        this.name = name;
        this.salary = salary;
    }

    
    void displayDetails() {
        System.out.println("Employee ID: " + emp_id);
        System.out.println("Name: " + name);
        System.out.println("Salary: $" + salary);
        System.out.println("---------------------------");
    }

    public static void main(String[] args) {
        
        Employee emp1 = new Employee(101, "Alice", 50000);
        Employee emp2 = new Employee(102, "Bob", 60000);
        Employee emp3 = new Employee(103, "Charlie", 55000);

        
        emp1.displayDetails();
        emp2.displayDetails();
        emp3.displayDetails();
    }
}

