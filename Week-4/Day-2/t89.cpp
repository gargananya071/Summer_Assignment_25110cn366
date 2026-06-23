#include <iostream>
using namespace std;

// Program to find first non-repeating character in a string
int main()
{
    string str;

    cout << "Enter a string : ";
    getline(cin , str);

    for (int i=0; i<str.length(); i++)
    {
        if (str.find(str[i]) == str.rfind(str[i]))    // first and last index of non-repeating character is same
        {
            cout << "First non-repeating character is " << str[i];
            return 0;
        }
    }

    cout << "All characters are repeating.";

    return 0;

}