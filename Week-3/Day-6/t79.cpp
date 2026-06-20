#include <iostream>
using namespace std;

// Program to calculate row-wise sum in matrix
int main()
{
    int arr[5][5], row, col;

    cout << "Enter number of rows of matrix : ";
    cin >> row;

    cout << "Enter number of columns of matrix : ";
    cin >> col;

    cout << "Enter row-wise elements of matrix : ";
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i=0; i<row; i++)
    {
        int sum=0;
        for (int j=0; j<col; j++)
        {
            sum += arr[i][j];
        }
        cout << "Sum of " << i << " row is " << sum << endl;
    }

    return 0;
}
