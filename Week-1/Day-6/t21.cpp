#include <iostream>
#include <cmath>
using namespace std;

// Program to convert decimal number to binary number
int main()
{
    int num, bit, ans=0;

    cout << "Enter a decimal number : ";
    cin >> num;

    int i=0;
    while ( num!=0 )
    {
        // Extract each rightmost bit one by one
        bit = num&1;
        ans = ans + bit*round(pow(10,i));
        i++;
        num = num>>1;
    }
    cout << "Answer is " << ans;

    return 0;
}