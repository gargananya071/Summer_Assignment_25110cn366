#include <iostream>
using namespace std;

// Program to find maximum frequency character

// Function to count occurence of a character
int count(string s, char ch)
{
    int countch = 0;
    
    for (int i=0; i<s.length(); i++)
    {
        if (s[i] == ch)
        {
            countch ++;
        }
    }

    return countch;
}

int main()
{
    string str;
    char ans;

    cout << "Enter a string : ";
    getline(cin, str);

    int maxfreq = 0;

    for (int i=0; i<str.length(); i++)
    {
        if ( !isspace(str[i]) )       // Ignore spaces
        {
            int freq = count(str, str[i]);

            if ( freq > maxfreq )
            {
                maxfreq = freq;
                ans = str[i];
            }
        }
    }

    cout << "Maximum frequency character is " << ans;

    return 0;
}