#include <iostream>
#include <string>
using namespace std;

// Program to count vowels and consonants in string
int main()
{
    string str;
    int vowcount=0, conscount=0;

    cout << "Enter a string : ";
    cin >> str;

    for (int i=0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if ( isalpha(ch) )
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowcount ++;
            }

            else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                vowcount ++;
            }

            else
            {
                conscount ++;
            }
        }
    }

    cout << "Number of vowels in string is " << vowcount << " and consonants is " << conscount;

    return 0;
}