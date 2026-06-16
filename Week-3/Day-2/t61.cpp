#include <iostream>
using namespace std;

// Program to find missing number in array (from 0 to n)
int main()
{
    int arr[50], n, expsum, sum=0, ans;

    cout << "Enter size of array : ";
    cin >> n;

    // Input of array
    cout << "Enter elements of array : ";
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    // Sum of numbers of array
    for (int i=0; i<n; i++)
    {
        sum += arr[i];
    }

    // Expected sum of numbers from 0 to n
    expsum = n*(n+1)/2;

    ans = expsum - sum;

    cout << "Missing number in array is " << ans;
    
    return 0;
}