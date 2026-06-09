#include <iostream>
using namespace std;

// Program to print reverse star pattern
int main()
{
    int row;

    cout << "Enter number of rows : ";
    cin >> row;

    // Loop of rows of pattern
    for(int i=row; i>=1; i--)
    {
        // Loop for columns of pattern
        for(int j=1; j<=i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}