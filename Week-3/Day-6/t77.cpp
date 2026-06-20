#include <iostream>
using namespace std;

// Program to multiply two matrices
int main()
{
    int arr1[5][5], arr2[5][5], arr3[5][5], row1, col1, row2, col2;

    cout << "Enter number of rows of first matrix : ";
    cin >> row1;

    cout << "Enter number of columns of first matrix : ";
    cin >> col1;

    cout << "Enter number of rows of second matrix : ";
    cin >> row2;

    cout << "Enter number of columns of second matrix : ";
    cin >> col2;

    if (col1 != row2)
    {
        cout << "Multipication is not possible.";
    }

    else
    {
        cout << "Enter row-wise elements of first matrix : ";
        for (int i=0; i<row1; i++)
        {
            for (int j=0; j<col1; j++)
            {
                cin >> arr1[i][j];
            }
        }

        cout << "Enter row-wise elements of second matrix : ";
        for (int i=0; i<row2; i++)
        {
            for (int j=0; j<col2; j++)
            {
                cin >> arr2[i][j];
            }
        }

        for (int i=0; i<row1; i++)
        {
            for (int j=0; j<col2; j++)
            {
                int sum=0;
                for (int k=0; k<row2; k++)
                {
                    sum = sum + arr1[i][k]*arr2[k][j];
                }
                arr3[i][j] = sum;
            }
        }

        cout << "Multiplication of matrices is ------- " << endl;
        for (int i=0; i<row1; i++)
        {
            for (int j=0; j<col2; j++)
            {
                cout << arr3[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
    
}
