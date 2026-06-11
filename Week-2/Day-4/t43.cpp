#include <iostream>
#include <cmath>
using namespace std;

// Function Definition to check whether number is prime or not
bool isprime(int n)
{
    if ((n==0) || (n==1))
    {
        return 0;
    }

    for (int i=2; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num;

    cout << "Enter a number : ";
    cin >> num;

    // Function call
    bool result = isprime(num);

    if (result)
    {
        cout << "Number is prime";
    }

    else
    {
        cout << "Number is not prime";
    }

    return 0;
}