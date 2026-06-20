#include <iostream>
using namespace std;

// Program to check Symmetric matrix
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
        for (int j=0; j<col; j++)
        {
            if (i == j) continue;

            else if (arr[i][j] != arr[j][i])
            {
                cout << "It is an Unsymmetric matrix.";
                return 0;  // end the program if found unsymmetric
            }
        }
    }

    cout << "It is a Symmetric matrix.";

    return 0;
}
