#include <iostream>
#include <math.h>
using namespace std;

// Program to check prime number
int main()
{
    int number;

    cout << "Enter a number : ";
    cin >> number;

    // Number less than 2 (0 and 1) is not prime
    if ( number < 2)
    {
        cout << number << " is not a prime number.";
        return 0;
    }
    for(int i=2; i<=sqrt(number); i++)
    {
        if (number % i == 0)
        {
            cout << number << " is not a prime number.";
            return 0;
        }
    }
    cout << number << " is a prime number";

    return 0;
}