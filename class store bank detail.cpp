#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(string accNumber, string holderName, double initialBalance) {
        accountNumber = accNumber;
        accountHolderName = holderName;
        balance = initialBalance;
    }
    void displayAccountDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account("123456789", "John Doe", 1000.0);
    account.displayAccountDetails();

    return 0;
}

