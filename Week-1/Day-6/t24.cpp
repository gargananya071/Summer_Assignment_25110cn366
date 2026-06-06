#include <iostream>
using namespace std;

// Program to find x^n
int main()
{
    int x, n, ans=1;

    cout << "Enter a number : ";
    cin >> x;

    cout << "Enter the power : ";
    cin >> n;

    for ( int i=1; i<=n; i++)
    {
        ans = ans * x;
    }
    cout << x << "^"<< n << " = " << ans;

    return 0;
}