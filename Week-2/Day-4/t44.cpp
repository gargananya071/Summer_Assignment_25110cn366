#include <iostream>
using namespace std;

// Function Definition to find factorial of a number
int factorial(int n)
{
    if ((n==1) || (n==0))
    {
        return 1;
    }

    return n * factorial(n-1);
}

int main()
{
    int num;

    cout << "Enter a number : ";
    cin >> num;

    // Function call
    int result = factorial(num);
    cout << "Factorial of " << num << " is " << result;

    return 0;
}