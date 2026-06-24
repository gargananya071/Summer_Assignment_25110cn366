#include <iostream>
using namespace std;

// Program to check string rotation
int main()
{
    string str1, str2;

    cout << "Enter main string : ";
    getline(cin , str1);

    cout << "Enter rotated string : ";
    getline(cin , str2);

    if (str1.length() != str2.length())
    {
        cout << str2 << " is not a string rotation of " << str1;
    }

    else
    {
        string newstr = str1 + str1;

        if (newstr.find(str2) != string::npos)
        {
            cout << str2 << " is a string rotation of " << str1;
        }

        else
        {
            cout << str2 << " is not a string rotation of " << str1;
        }
    }

    return 0;
}