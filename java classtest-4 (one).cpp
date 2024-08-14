class Employee {

    private int employee_id;
    private String employee_name;
    private double employee_salary;

    
    public Employee(int id, String name, double salary) {
        this.employee_id = id;
        this.employee_name = name;
        this.employee_salary = salary;
    }

   
    public int getEmployeeId() {
        return employee_id;
    }

    
    public void setEmployeeId(int employee_id) {
        this.employee_id = employee_id;
    }

   
    public String getEmployeeName() {
        return employee_name;
    }

    
    public void setEmployeeName(String employee_name) {
        this.employee_name = employee_name;
    }

    
    public String getEmployeeSalary() {
        return String.format("$%,.2f", employee_salary);
    }

    public static void main(String[] args) {
        
        Employee emp = new Employee(1001, "Alice Johnson", 75000.0);

       
        System.out.println("Employee ID: " + emp.getEmployeeId());
        System.out.println("Employee Name: " + emp.getEmployeeName());
        System.out.println("Employee Salary: " + emp.getEmployeeSalary());

        
        emp.setEmployeeId(1002);
        emp.setEmployeeName("Bob Smith");

        
        System.out.println("\nUpdated Employee Details:");
        System.out.println("Employee ID: " + emp.getEmployeeId());
        System.out.println("Employee Name: " + emp.getEmployeeName());
        System.out.println("Employee Salary: " + emp.getEmployeeSalary());
    }
}

