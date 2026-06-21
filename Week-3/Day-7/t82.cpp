#include <iostream>
#include <utility>
using namespace std;

// Program to reverse the string
int main()
{
    string str;
    
    cout << "Enter a string : ";
    cin >> str;

    int start=0, end=str.size()-1;

    while(start <= end)
    {
        swap (str[start++], str[end--]);
    }

    cout << str;

    return 0;
}