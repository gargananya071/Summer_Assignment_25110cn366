#include <iostream>
using namespace std;

// Function for Fibonacci series
int Fib(int n)
{
    if (n==1)
    {
        return 0;
    }
    if (n==2)
    {
        return 1;
    }
    return Fib(n-1) + Fib(n-2);
}

int main()
{
    int limit;

    cout << "Enter limit of Fibonacci : ";
    cin >> limit;

    for (int i=1; i<=limit; i++)
    {
        // Function call
        cout << Fib(i) << endl;
    }

    return 0;
}