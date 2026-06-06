#include <iostream>
using namespace std;

// Program to count set bits in binary representation of a number
int main()
{
    int num, count=0;

    cout << "Enter the number : ";
    cin >> num;

    while (num!=0)
    {
        // Chcek if the rightmost bit is 1
        if (num & 1)
        {
            count ++;
        }
        // Shift bits to the right by 1
        num = num>>1;
    }
    cout << count;

    return 0;
}