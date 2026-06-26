#include <iostream>
using namespace std;

// Program to create voting eligibility system
int main()
{
    int age;

    cout << "Enter your age : ";
    cin >> age;
    cout << endl;

    if (age >= 18)
    {
        cout << "Congrats!! You are eligible for voting." << endl;
    }

    else
    {
        cout << "You are not eligible for voting." << endl;
        cout << "You have to wait for " << 18-age << " years to be eligible.";
    }

    return 0;

}

