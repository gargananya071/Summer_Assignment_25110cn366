#include <iostream>
using namespace std;

// Program to print prime factors of a number
int main()
{
    int number;

    cout << "Enter a number : ";
    cin >> number;

    cout << "Prime factors of "<< number << " are ------"<< endl;

    int i=2;
    while (number > 1)
    {
        if (number % i == 0)
        {
            cout << i << endl;
            number = number/i;
        }
        else
        {
            i++;
        }
    }
    return 0;
}
