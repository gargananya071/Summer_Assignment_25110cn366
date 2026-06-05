#include <iostream>
using namespace std;

// Program to print largest prime factor of a number
int main()
{
    int number;

    cout << "Enter a number : ";
    cin >> number;

    int i=2;
    while (number > 1)
    {
        if (number % i == 0)
        {
            number = number/i;
        }
        else
        {
            i++;
        }
    }

    cout << "Largest prime factor of given number is "<< i;

    return 0;
}
