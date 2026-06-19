#include <iostream>
using namespace std;

// Program to find transpose of matrix
int main()
{
    int arr[5][5], transpose[5][5], row, col;

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
        for (int j=0; j<col; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }

    cout << "Transpose of given matrix is ------ " << endl;
    for (int i=0; i<col; i++)
    {
        for (int j=0; j<row; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}