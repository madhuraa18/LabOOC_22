#include <iostream>
#include <string>
using namespace std;


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


// Savings Account Class
class SavingAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double interestRate;

    // Creating Checking Account object inside Saving Account
    CheckingAccount checking1;

public:
    // Parameterized Constructor
    SavingAccount(string name, int accNo, double initialBalance, double rate)
        : checking1("Madhura", 1003, 4000, 200) {

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

    // Display Savings Account details
    void display() {
        cout << "\n--- Savings Account ---" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: Rs." << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;

        // Display Checking Account inside Saving Account
        checking1.display();
    }
};


// Main Function
int main() {

    // Creating Savings Account object
    SavingAccount savings("Alice", 1001, 5000, 3);

    // Savings Account Operations
    savings.display();

    savings.deposit(1000);
    savings.withdraw(2000);
    savings.applyInterest();

    savings.display();

    return 0;
}