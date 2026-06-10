#include <iostream>
using namespace std;

// Program to print number pyramid
int main()
{
    int row;
    
    cout << "Enter number of rows : ";
    cin >> row;

    for(int i=0; i<row; i++)
    {
        for(int j=(row -i -1); j>=1; j--)
        {
            cout << " ";
        }

        for(int j=0; j<=i; j++)
        {
            cout << j+1;
        }

        for(int j=1; j<=i; j++)
        {
            cout << (i-j+1);
        }
        cout << endl;
    }
    return 0;
}