#include <iostream>
using namespace std;

// Program to check Palindrome string 
int main()
{
    string str;

    cout << "Enter a  string : ";
    getline(cin, str);

    int s=0, e=str.length()-1;

    int flag=0;
    while (s <= e)
    {
        if (tolower(str[s]) == tolower(str[e]))
        {
            s++;
            e--;
        }

        else
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "String is Palindrome.";
    }

    else
    {
        cout << "String is not Palindrome.";
    }

    return 0;
}