#include <iostream>
using namespace std;

// Program to print reverse number triangle
int main()
{
    int row;

    cout << "Enter number of rows : ";
    cin >> row;

    // Loop for rows of pattern
    for(int i=row; i>=1; i--)
    {
        // Loop for columns of pattern
        for(int j=1; j<=i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}