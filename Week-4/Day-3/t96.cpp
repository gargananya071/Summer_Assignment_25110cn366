#include <iostream>
using namespace std;

// Program to remove duplicate characters
int main()
{
    string s;

    cout << "Enter a string : ";
    cin >> s;

    for (int i=0; i<s.length(); i++)
    {
        char ch = s[i];

        if (s.find(ch) != s.rfind(ch) && s.rfind(ch) != string::npos && s.find(ch) != string::npos)
        {
            s.erase(s.rfind(ch),1);
        }
    }

    cout << s;

    return 0;
}