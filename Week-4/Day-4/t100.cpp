#include <iostream>
using namespace std;

// Program to sort words by length
int main()
{
    string word1, word2;

    cout << "Enter first word : ";
    cin >> word1;

    cout << "Enter second word : ";
    cin >> word2;

    if (word1.length() > word2.length())
    {
        cout << word2 << endl << word1;
        return 0;
    }

    else
    {
        cout << word1 << endl << word2;
        return 0;
    }

}