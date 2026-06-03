#include <iostream>
using namespace std;

// Program to check Perfect number
int main()
{
    int number, sum=0;

    cout << "Enter a number : ";
    cin >> number;

    for (int i=1; i<number; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }

    // A number is perfect if the sum of its proper divisors equals the original number
    if (number == sum)
    {
        cout << number << " is a Perfect number.";
    }

    else
    {
        cout << number << " is not a Perfect number.";
    }

    return 0;
}