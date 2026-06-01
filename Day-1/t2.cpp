#include <iostream>
using namespace std;

// Program to print multiplication table
int main()
{
    int number;
    
    // Input of number
    cout << "Enter a number for multiplication table : ";
    cin >> number;

    for (int i=1; i<=10; i++)
    {
        cout << number << " * " << i << " = " << (number * i) << endl;  // Eg: 2*1=2
    }

    return 0;
}