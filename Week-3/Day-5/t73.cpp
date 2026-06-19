#include <iostream>
using namespace std;

// Program to add two matrices

int main()
{
    int arr1[5][5], arr2[5][5], arr3[5][5], row, col;

    cout << "Enter number of rows of matrix : ";
    cin >> row;

    cout << "Enter number of columns of matrix : ";
    cin >> col;

    cout << "Enter row-wise elements of first matrix : ";
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter row-wise elements of second matrix : ";
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            cin >> arr2[i][j];
        }
    }

    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // Display the addition of two matrices
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}