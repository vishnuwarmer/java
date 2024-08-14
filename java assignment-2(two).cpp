import java.util.Scanner;

class BankAccount {
    private String depositorName;
    private String accountNumber;
    private String accountType; 
    private double balance;

    private static final double MINIMUM_BALANCE = 500.00;

    public BankAccount(String accountNumber, String depositorName, String accountType, double initialBalance) {
        this.accountNumber = accountNumber;
        this.depositorName = depositorName;
        this.accountType = accountType;
        if (initialBalance >= MINIMUM_BALANCE) {
            this.balance = initialBalance;
        } else {
            this.balance = MINIMUM_BALANCE;
            System.out.println("Initial balance was less than minimum balance. Setting to minimum balance of Rs. " + MINIMUM_BALANCE);
        }
    }

    public void readAccountDetails() {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter account number: ");
        this.accountNumber = scanner.nextLine();

        System.out.print("Enter depositor name: ");
        this.depositorName = scanner.nextLine();

        System.out.print("Enter account type (Savings/Current): ");
        this.accountType = scanner.nextLine();

        System.out.print("Enter initial balance: ");
        double initialBalance = scanner.nextDouble();

        if (initialBalance >= MINIMUM_BALANCE) {
            this.balance = initialBalance;
        } else {
            this.balance = MINIMUM_BALANCE;
            System.out.println("Initial balance was less than minimum balance. Setting to minimum balance of Rs. " + MINIMUM_BALANCE);
        }
    }

    public void deposit(double amount) {
        if (amount > 0) {
            this.balance += amount;
            System.out.println("Deposited Rs. " + amount);
        } else {
            System.out.println("Deposit amount must be positive.");
        }
    }

    public void withdraw(double amount) {
        if (amount > 0 && (this.balance - amount) >= MINIMUM_BALANCE) {
            this.balance -= amount;
            System.out.println("Withdrew Rs. " + amount);
        } else if (amount <= 0) {
            System.out.println("Withdrawal amount must be positive.");
        } else {
            System.out.println("Insufficient balance. Minimum balance must be Rs. " + MINIMUM_BALANCE);
        }
    }

    
    public void displayBalance() {
        System.out.println("Account Number: " + this.accountNumber);
        System.out.println("Depositor Name: " + this.depositorName);
        System.out.println("Account Type: " + this.accountType);
        System.out.println("Balance: Rs. " + this.balance);
    }
}

public class Main {
    public static void main(String[] args) {
        
        BankAccount account = new BankAccount("","", "", 0);
        account.readAccountDetails();

    
        account.displayBalance();


        account.deposit(1000); 
        account.withdraw(200);  

        account.displayBalance();
    }
}

