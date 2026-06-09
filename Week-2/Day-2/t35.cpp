#include <iostream>
using namespace std;

// Program to print repeated character pattern
int main()
{
    int row;
    char ch='A';

    cout << "Enter number of rows : ";
    cin >> row;

    // Loop for rows of pattern
    for(int i=1; i<=row; i++)
    {
        // Loop for columns of pattern
        for(int j=1; j<=i; j++)
        {
            cout << ch;
        }
        cout << endl;
        ch++;
    }

    return 0;
}