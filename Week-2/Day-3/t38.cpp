#include <iostream>
using namespace std;

// Program to print reverse pyramid
int main()
{
    int row;
    
    cout << "Enter number of rows : ";
    cin >> row;

    for(int i=0; i<row; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << " ";
        }

        // Inverted left half pyramid
        for(int j=(row -i); j>=1; j--)
        {
            cout << "*";
        }

        // Inverted right half pyramid
        for(int j=(row -i -1); j>=1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}