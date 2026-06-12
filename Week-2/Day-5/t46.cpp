#include <iostream>
#include <cmath>
using namespace std;

// Function to check armstrong number
void armstrong(int n)
{
    int sum=0, rem, temp1=n, temp2=n, count=0;

    while (temp1)
    {
        temp1 = temp1/10;
        count++;
    }

    while (temp2)
    {
        rem = temp2%10;
        sum = sum + round(pow(rem, count));
        temp2 = temp2 / 10;
    }

    if (sum == n)
    {
        cout << "Number is Armstrong.";
    }

    else
    {
        cout << "Number is not Armstrong.";
    }
}

int main()
{
    int num;

    cout << "Enter a number : ";
    cin >> num;

    // Function call
    armstrong(num);

    return 0;

}