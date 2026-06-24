#include <iostream>
using namespace std;

// Program to find longest word
int main()
{
    string s, ans;
    int currentCount=0, maxCount=0;

    cout << "Enter a sentence : ";
    getline(cin , s);

    int i=0;
    for (i=0; i<s.length(); i++)
    {
        // If loop encounters space means end of a word
        if (isspace(s[i]))
        {
            if (currentCount > maxCount)
            {
                maxCount = currentCount;
                ans = s.substr(i-currentCount,currentCount);
            }
            currentCount=0;
        }

        else
        {
            // Increment current word length
            currentCount++;
        }
        
    }

    // Check for the word at the end of sentence
    if (currentCount > maxCount)
    {
        maxCount = currentCount;
        ans = s.substr(i-currentCount,currentCount);
    }

    cout << "Longest word is " << ans << endl;

}