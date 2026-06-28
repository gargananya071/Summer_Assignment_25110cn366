// Program to create Bank Account System

#include <iostream>
using namespace std;

const int MAX_ACCOUNTS = 100;

// Structure to store account details
struct Account {
    int accountNo;
    string name;
    double balance;
};

int main() {
    Account accounts[MAX_ACCOUNTS];
    int accountCount = 0;          // Initially there is no accounts
    int choice;

    while (true) {
        cout << "\n===== SIMPLE BANKING SYSTEM =====\n";
        cout << "1. Open New Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Display All Accounts\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {

            // New account creation
            case 1:
                if (accountCount < MAX_ACCOUNTS) {
                    cout << "\nEnter Account Number: ";
                    cin >> accounts[accountCount].accountNo;

                    cin.ignore();             // to ignore newline character

                    cout << "Enter Account Holder Name: ";
                    getline(cin, accounts[accountCount].name);

                    cout << "Enter Initial Deposit Amount: ";
                    cin >> accounts[accountCount].balance;

                    accountCount++;
                    cout << "Account created successfully!\n";
                } 
                else {
                    cout << "Bank database full!\n";
                }
                break;

            // Money deposition
            case 2: 
                if (accountCount == 0) {
                    cout << "\nNo accounts found!\n";
                } 
                else {
                    int accNo;
                    double amount;

                    cout << "\nEnter Account Number: ";
                    cin >> accNo;

                    bool found = false;
                    for (int i = 0; i < accountCount; i++) {
                        if (accounts[i].accountNo == accNo) 
                        {
                            cout << "Enter Amount to Deposit: ";
                            cin >> amount;

                            accounts[i].balance += amount; 

                            cout << "Amount deposited! New Balance: " << accounts[i].balance << "\n";
                            found = true;
                            break;
                        }
                    }
                    if (!found) cout << "Account not found!\n";
                }
                break;

            // Money Withdrawal
            case 3:
                if (accountCount == 0) {
                    cout << "\nNo accounts found!\n";
                }
                else {
                    int accNo;
                    double amount;

                    cout << "\nEnter Account Number: ";
                    cin >> accNo;

                    bool found = false;
                    for (int i = 0; i < accountCount; i++) {
                        if (accounts[i].accountNo == accNo) {
                            cout << "Enter Amount to Withdraw: ";
                            cin >> amount;
                            
                            if (amount <= accounts[i].balance) {
                                accounts[i].balance -= amount; 
                                cout << "Withdrawal successful! Remaining Balance: " << accounts[i].balance << "\n";
                            } 
                            else {
                                cout << "Insufficient Balance!\n";
                            }
                            found = true;
                            break;
                        }
                    }
                    if (!found) cout << "Account not found!\n";
                }
                break;

            // Display all accounts
            case 4: 
                if (accountCount == 0) {
                    cout << "\nNo accounts in the bank.\n";
                } 
                else {
                    cout << "\n--- Bank Account Records ---\n";
                    cout << "Acc No\t\t| Name\t\t| Balance\n";
                    cout << "-------------------------------------\n";
                    for (int i = 0; i < accountCount; i++) {
                        cout << accounts[i].accountNo << "\t\t| " << accounts[i].name << "\t\t| " << accounts[i].balance << "\n";
                    }
                }
                break;

            // Exit the program
            case 5:
                cout << "\nExiting Banking System. Thank you!\n";
                return 0;

            default:
                cout << "\nInvalid Choice! Try again.\n";
        }
    }
    return 0;
}