#include <iostream>
#include <math.h>
using namespace std;

// Program to chcek Armstrong number
int main()
{
    int num, count =0, sum=0, rem;

    cout << "Enter the number : ";
    cin >> num;

    // Create temporary copies of the original number
    int temp1 = num, temp2 = num;

    // To count the total digits in number
    while (temp1)
    {
        count++;
        temp1 = temp1/10;
    }

    while (temp2)
    {
        rem = temp2 % 10;

        // Round off is used to protect against floating point precision
        sum+= round(pow(rem,count));
        temp2 = temp2 / 10;
    }

    // Check if number is armstrong or not
    if (sum == num)
    {
        cout << num <<" is armstrong.";
    }
    else
    {
        cout << num << " is not armstrong.";
    }

    return 0;
}