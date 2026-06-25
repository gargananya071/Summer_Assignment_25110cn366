#include <iostream>
#include <algorithm>
using namespace std;

// Program to find common characters (unique) in two strings
int main()
{
    string s1, s2;

    cout << "Enter first string : ";
    cin >> s1;

    cout << "Enter second string : ";
    cin >> s2;

    string temp;

    int i=0, j=0;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    while (i < s1.length() && j < s2.length()) 
    {
        if (s1[i] < s2[j])
        {
            i++;
        }

        else if (s1[i] > s2[j])
        {
            j++;
        }

        else if (s1[i] == s2[j] && temp.back() != s1[i])
        {
            temp.push_back(s1[i]);
            i++;
            j++;
        }

        else
        {
            i++;
            j++;
        }
    }

    if (temp == "")
    {
        cout << "No common characters.";
        return 0;
    }

    cout << temp;

    return 0;
}