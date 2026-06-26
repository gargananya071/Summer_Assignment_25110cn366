#include <iostream>
using namespace std;

// Program to create ATM simulation
int main()
{
    int pin = 9999;
    int userPin;
    int choice;
    int balance = 10000;
    int amount;

    cout << "                         WELCOME  TO  ATM                                 ";
    cout << endl << endl;
    cout << "Enter your four digit pin : ";
    cin >> userPin;
    cout << endl;

    if (userPin != pin)
    {
        cout << "INCORRECT PIN !";
        return 0;
    }

    else
    {
        do{
            cout << "                      ATM  MENU                                         ";
            cout << endl;
            cout << "1. Check Balance" << endl;
            cout << "2. Deposit Money" << endl;
            cout << "3. Withdraw money" << endl;
            cout << "4. Change Pin" << endl;
            cout << "5. Exit" << endl << endl;
            cout << "Enter your choice (1-5) : ";
            cin >> choice;

            switch(choice)
            {
                case 1:
                cout << "Your current balance is Rs " << balance << endl << endl;
                break;

                case 2:
                cout << "Enter how much amount you want to deposit : ";
                cin >> amount;
                balance = balance + amount;
                cout << "Successfully!! Deposited Rs " << amount << endl << endl;
                break;

                case 3:
                cout << "Enter how much amount you want to withdraw : ";
                cin >> amount;

                if (amount > balance)
                {
                    cout << "Amount exceeded the balance." << endl << endl;
                }
                else
                {
                    balance = balance - amount;
                    cout << "Rs " << amount << " have been successfully withdrawn." << endl << endl;
                }
                break;

                case 4:
                cout << "Enter new pin : ";
                cin >> pin;
                cout << "Successfully, changed the pin ****" << endl << endl;
                break;

                case 5:
                cout << "Thanks for using our ATM. Have a great day!" << endl << endl;
                break;

                default:
                cout << "Choose appropriate option (1-5)." << endl << endl;

            }
        }

        while (choice != 5);
    }

    return 0;
}