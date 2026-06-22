#include <iostream>
#include <string>
using namespace std;

// Program to count number of words
int main()
{
    string str;
    int count = 0;

    cout << "Enter a string : ";
    getline(cin, str);

    if ( !str.empty() )
    {
        count = 1;   // A non-empty string will contain atleast one word
        for (int i=0; i < str.length(); i++)
        {
            if ( isspace(str[i]) && i+1 < str.length())      // Checking i+1 bcoz if user entered space at end of sentence
            {
                count ++;
            }
        }
    }

    cout << "Number of words are " << count;

    return 0;

}