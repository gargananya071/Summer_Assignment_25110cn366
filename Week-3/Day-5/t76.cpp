#include <iostream>
using namespace std;

// Program to calculate diagonal elements sum
int main()
{
    int arr[5][5], n, sum=0;

    cout << "Enter dimension of square matrix : ";
    cin >> n;

    cout << "Enter row-wise elements of square matrix : ";
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
        }
    }

    cout << "Sum of diagonal elements of matrix is " << sum;

    return 0;

}