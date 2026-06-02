#include <iostream>
#include <cmath>
using namespace std;

// Program to check Palindrome number
int main()
{
    int num, reversednum=0, rem;

    cout << "Enter a number : ";
    cin >> num;

    int orgnum = num;

    // Extract digits from org number from right to left and add to new number
    while(num>0)
    {
        rem = num % 10;
        reversednum = reversednum * 10 + rem;
        num /= 10;
    }
    
    // Check whether number is palindrome or not
    if (reversednum==orgnum)
    {
        cout << orgnum << " is a Palindrome number.";
    }
    else
    {
        cout << orgnum << " is not a Palindrome number.";
    }

    return 0;

}