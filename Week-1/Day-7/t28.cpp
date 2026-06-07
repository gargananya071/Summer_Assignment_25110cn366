#include <iostream>
using namespace std;

// Program for recursive reverse number
int reverse(int n, int ans=0)
{
    if (n==0)
    {
        return ans;
    }

    else
    {
        ans = ans*10 + n%10 ;
        return reverse(n/10, ans);
    }
}

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    cout << reverse(num);

    return 0;
}