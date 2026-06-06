#include <iostream>
#include <cmath>
using namespace std;

// Program to convert binary number to decimal number
int main()
{
    int num, digit, ans=0;

    cout << "Enter a binary number : ";
    cin >> num;

    int i=0;
    while ( num!=0 )
    {
        digit = num%10;
        ans = ans + digit*round(pow(2,i));
        num = num/10;
        i++;
    }
    cout << "Answer is " << ans;

    return 0;
}