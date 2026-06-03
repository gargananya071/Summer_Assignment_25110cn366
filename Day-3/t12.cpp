#include <iostream>
using namespace std;

// Program to calculate LCM  of two numbers
int main()
{
    int num1, num2, gcd=1, lcm;

    cout << "Enter two numbers : ";
    cin >> num1 >> num2;

    // Find the smaller number to limit loop iterations
    int small= min(num1, num2);

    // First calculate gcd
    for (int i=1; i<=small; i++)
    {
        // check if 'i' divides both the numbers
        if ((num1 % i == 0) && (num2 % i == 0))
        {
            gcd = i;     // Update gcd with latest factor;
        }
    }

    // use the lcm formula
    lcm = (num1 / gcd) * num2 ;

    cout << "LCM of "<< num1 <<" and "<< num2 <<" is "<< lcm;
    return 0;
}