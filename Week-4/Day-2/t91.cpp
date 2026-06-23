#include <iostream>
#include <algorithm>
using namespace std;

// Program to check Anagram strings ( strings that are created using the exact same characters )
int main()
{
    string str1, str2;

    cout << "Enter first string : ";
    cin >> str1;

    cout << "Enter second string : ";
    cin >> str2;

    if ( str1.length() != str2.length())
    {
        cout << "Not Anagrams.";
        return 0;
    }

    else
    {
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());

        if (str1 == str2)
        {
            cout << "Anagrams.";
        }

        else
        {
            cout << "Not Anagrams.";
        }
        
    }

    return 0;

}