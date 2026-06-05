#include <iostream>
using namespace std;

// Program to print factorial of a number
int main()
{
    int number;
    long long fact=1;
    
    // Input of number
    cout << "Enter a number to find factorial : ";
    cin >> number;
    
    // factorial of negative number is not defined
    if (number<0)
    {
        cout << "Invalid input!! Please enter a positive number : ";
        cin >> number;
    }

    for(int i=1; i<=number; i++)
    {
        fact = fact*i;     //Eg : 4*3*2*1=24
    }

    cout << "Factorial of " << number << " is " << fact;

    return 0;
}