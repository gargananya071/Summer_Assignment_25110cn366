#include <iostream>
using namespace std;

// Program to print repeated number pattern
int main()
{
    int row;

    cout << "Enter number of rows : ";
    cin >> row;

    // Loop for rows of pattern
    for(int i=1; i<=row; i++)
    {
        // Loop for columns of pattern
        for(int j=1; j<=i; j++)
        {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}