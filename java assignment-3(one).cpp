class Employee {
    public void work() {
        System.out.println("Employee is working.");
    }

    public double getSalary() {
        return 50000.00;
    }
}

class HRManager extends Employee {
    @Override
    public void work() {
        System.out.println("HR Manager is managing HR activities and overseeing employee relations.");
    }


    public void addEmployee() {
        System.out.println("Adding a new employee to the company.");
    }
}

public class Main {
    public static void main(String[] args) {
        
        Employee emp = new Employee();
        emp.work();         
        System.out.println("Employee Salary: Rs. " + emp.getSalary());

        HRManager hrManager = new HRManager();
        hrManager.work();          
        System.out.println("HR Manager Salary: Rs. " + hrManager.getSalary());
        hrManager.addEmployee();   
    }
}

