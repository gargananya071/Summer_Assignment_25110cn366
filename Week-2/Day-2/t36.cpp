#include <iostream>
using namespace std;

// Program to print hollow square pattern
int main()
{
    int row;

    cout << "Enter number of rows : ";
    cin >> row;

    for(int i=1; i<=row; i++)
    {
        cout << "* ";
    }
    cout << endl;

    for(int i=3; i<=row; i++)
    { 
        cout << "* ";

        for (int j=3; j<=row; j++)
        {
            cout << "  ";
        }

        cout << "*" << endl;
    }

    for(int i=1; i<=row; i++)
    {
        cout << "* ";
    }
    cout << endl;

    return 0;
}