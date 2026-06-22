#include <iostream>
using namespace std;

// Program to remove spaces from string
int main()
{
    string str, temp ="";
    int index=0;

    cout << "Enter a string : ";
    getline(cin, str);

    for (int i=0; i<str.length(); i++)
    {
        if ( str[i] == ' ')
        {
            continue;
        }
        else
        {
            temp = temp + str[i];
        }
    }

    cout << temp;

    return 0;
}