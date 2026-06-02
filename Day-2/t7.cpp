#include <iostream>
using namespace std;

// Program to multiply the digits of a number
int main()
{
    int product=1, number, rem;

    cout << "Enter a number : ";
    cin >> number;

    // Extract and multiply each digit from right to left
    while(number)
    {
        rem = number%10;  
        product *= rem;         
        number/=10;
    }

    // Display the final product of the digits
    cout << "Product of digits of given number is " << product;

    return 0;
}






















































