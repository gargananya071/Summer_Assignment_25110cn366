#include <iostream>
using namespace std;

// Program for recursive sum of digits
int SumOfDig(int n)
{
    if (n==0)
    {
        return 0;
    }

    else
    {
        return (n%10) + SumOfDig(n/10);
    }
}

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    cout << SumOfDig(num);

    return 0;
}
