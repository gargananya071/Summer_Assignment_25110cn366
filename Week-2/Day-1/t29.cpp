#include <iostream>
using namespace std;

// Program to print half pyramid patterm
int main()
{
    int row;

    cout << "Enter number of rows : ";
    cin >> row;

    // Loop for rows of patterm
    for (int i=1; i<=row; i++)
    {
        // Loop for columns of pattern
        for (int j=1; j<=i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}