class Account {
    
    int acc_no;
    String name;
    double amount;

    
    Account(int acc_no, String name, double initialAmount) {
        this.acc_no = acc_no;
        this.name = name;
        this.amount = initialAmount;
    }

    
    void deposit(double depositAmount) {
        amount += depositAmount;
        System.out.println("Deposited: $" + depositAmount);
        System.out.println("New Balance: $" + amount);
    }

    void withdraw(double withdrawAmount) {
        if (withdrawAmount > amount) {
            System.out.println("Insufficient balance! Withdrawal failed.");
        } else {
            amount -= withdrawAmount;
            System.out.println("Withdrawn: $" + withdrawAmount);
            System.out.println("New Balance: $" + amount);
        }
    }

    // Method to display account details
    void displayAccountDetails() {
        System.out.println("Account Number: " + acc_no);
        System.out.println("Account Holder: " + name);
        System.out.println("Balance: $" + amount);
    }

    public static void main(String[] args) {
        
        Account acc = new Account(123456, "John Doe", 1000.0);

        
        acc.displayAccountDetails();

    
        acc.deposit(500.0);

        
        acc.withdraw(200.0);

        
        acc.withdraw(1500.0);

        
        acc.displayAccountDetails();
    }
}

