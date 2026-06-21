#include <iostream>
using namespace std;

// Program to convert lowercase to uppercase
int main()
{
    string str;

    cout << "Enter a string : ";
    cin >> str;

    for (int i=0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            continue;
        }

        else if (str[i] >= '0' && str[i] <= '9')
        {
            continue;
        }

        else
        {
            str[i] = str[i] - 'a' + 'A';
        }
    }

    cout << str;

    return 0;
}