#include <iostream>
#include <cmath>
using namespace std;

// Program to reverse the given number
int main()
{
    int num, newnum=0, rem;

    cout << "Enter a number : ";
    cin >> num;

    // Extract digits from org number from right to left and add to new number
    while(num>0)
    {
        rem = num % 10;
        newnum = newnum * 10 + rem;
        num /= 10;
    }
    // Display the reversed number
    cout << newnum;

    return 0;

}