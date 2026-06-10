#include <iostream>
using namespace std;

// Program to print character pyramid
int main()
{
    int row;
    char ch;
    
    cout << "Enter number of rows : ";
    cin >> row;

    for(int i=0; i<row; i++)
    {
        for(int j=(row -i -1); j>=1; j--)
        {
            cout << " ";
        }

        ch = 'A';
        for(int j=0; j<=i; j++)
        {
            cout << ch;
            ch++;
        }

        ch='A';
        for(int j=1; j<=i; j++)
        {
            cout << char(ch +i -j);
        }
        cout << endl;
    }
    return 0;
}