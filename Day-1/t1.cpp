#include <iostream>
using namespace std;

// Program to add first n natural numbers
int main()
{
    int n, sum=0;

    // Input of n
    cout <<  "Enter number of natural numbers you want to add : ";
    cin >> n;

    // Finding sum of first n natural numbers
    sum = n*(n+1)/2;

    // output
    cout << "Sum = " << sum;

    return 0;

}