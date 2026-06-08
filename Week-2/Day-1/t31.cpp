#include <iostream>
using namespace std;

// Program to print character triangle
int main()
{
    int row;
    
    cout << "Enter number of rows : ";
    cin >> row;

    for(int i=1; i<=row; i++)
    {
        char ch='A';
        for(int j=1; j<=i; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }

    return 0;
}