#include <iostream>
using namespace std;

// Program to find first repeating character
int main()
{
    string str;

    cout << "Enter a string : ";
    getline(cin , str);

    for (int i=0; i<str.length(); i++)
    {
        if (str.find(str[i]) != str.rfind(str[i]) && str.rfind(str[i]) != string::npos)
        {
            cout << "First repeating character is " << str[i];
            return 0;
        }
    }

    cout << "All characters are non-repeating.";

    return 0;
}