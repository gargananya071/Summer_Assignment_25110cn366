#include <iostream>
using namespace std;

// Program to find Nth Fibonacci term
int main()
{
    int nth, firstterm=-1, secondterm=1, thirdterm;

    cout << "Enter which fibonacci term you want : ";
    cin >> nth;

    for (int i=1; i<=nth; i++)
    {
        thirdterm = firstterm + secondterm;
        
        firstterm = secondterm;
        secondterm = thirdterm;
    }

    // Display the nth term
    cout << thirdterm;

    return 0;
}