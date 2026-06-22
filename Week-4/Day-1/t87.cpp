#include <iostream>
using namespace std;

// Program to calculate frequency of a character

int main()
{
    string str;
    char ch;
    int count = 0;

    cout << "Enter s string : ";
    getline(cin, str);

    cout << "Enter the character to find frequency : ";
    cin >> ch;

    for (int i=0; i<str.length(); i++)
    {
        if ( str[i] == ch)
        {
            count ++;
        }
    }

    cout << ch << " occurs " << count << " times.";

    return 0;
}