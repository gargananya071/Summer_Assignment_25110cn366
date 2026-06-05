#include <iostream>
using namespace std;

// Program to print sum of digits of a number
int main()
{
    int sum=0, number, rem;

    cout << "Enter a number : ";
    cin >> number;

    // Extract and add each digit from right to left
    while(number)
    {
        rem = number%10;  
        sum+=rem;         
        number/=10;
    }

    // Display the final sum of the digits
    cout << "Sum of digits of given number is " << sum;

    return 0;
}






















































