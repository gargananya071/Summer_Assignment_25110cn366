#include <iostream>
using namespace std;

// Program to calculate length of string
int main()
{
    string str;
    int count=0;

    cout << "Enter a string : ";
    cin >> str;

    for (int i=0; str[i] != '\0'; i++)
    {
        count ++;
    }

    cout << "Length of string is " << count;

    return 0;
}