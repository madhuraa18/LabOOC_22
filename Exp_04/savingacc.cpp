#include <iostream>
#include <string>
using namespace std;

// Savings Account Class
class SavingAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double interestRate;

public:
    // Parameterized Constructor
    SavingAccount(string name, int accNo, double initialBalance, double rate) {
        accountHolderName = name;
        accountNumber = accNo;
        balance = initialBalance;
        interestRate = rate;
    }

    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: Rs." << amount << endl;
        }
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: Rs." << amount << endl;
        }
        else {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Apply interest
    void applyInterest() {
        double interest = balance * interestRate / 100;
        balance += interest;

        cout << "Interest Applied: Rs." << interest << endl;
    }

    // Display account details
    void display() {
        cout << "\n--- Savings Account ---" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: Rs." << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};


// Checking Account Class
class CheckingAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double transactionFee;

public:
    // Parameterized Constructor
    CheckingAccount(string name, int accNo, double initialBalance, double fee) {
        accountHolderName = name;
        accountNumber = accNo;
        balance = initialBalance;
        transactionFee = fee;
    }

    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: Rs." << amount << endl;
        }
    }

    // Withdraw money with transaction fee
    void withdraw(double amount) {
        double total = amount + transactionFee;

        if (amount > 0 && total <= balance) {
            balance -= total;

            cout << "Withdrawn: Rs." << amount
                 << " (Rs." << transactionFee << " fee applied)" << endl;
        }
        else {
            cout << "Insufficient balance for withdrawal + fee!" << endl;
        }
    }

    // Display account details
    void display() {
        cout << "\n--- Checking Account ---" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: Rs." << balance << endl;
        cout << "Transaction Fee: Rs." << transactionFee << endl;
    }
};


// Main Function
int main() {

    // Creating objects using constructors
    SavingAccount savings("Alice", 1001, 5000, 3);
    CheckingAccount checking("Bob", 1002, 3000, 20);

    // Savings Account Operations
    savings.display();

    savings.deposit(1000);
    savings.withdraw(2000);
    savings.applyInterest();

    savings.display();


    // Checking Account Operations
    checking.display();

    checking.deposit(1500);
    checking.withdraw(1000);

    checking.display();

    return 0;
}