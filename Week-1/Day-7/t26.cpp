#include <iostream>
using namespace std;

// Program for recursive fibonacci
int fibonacci(int n)
{
    if (n==1)
    {
        return 0;
    }
    if (n==2)
    {
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main()
{
    int range;

    cout << "Enter the range of Fibonacci : ";
    cin >> range;

    for ( int i=1; i<=range; i++)
    {
        cout << fibonacci(i)<< endl;
    }

    return 0;
}