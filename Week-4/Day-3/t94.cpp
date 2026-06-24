#include <iostream>
using namespace std;

// Program to compress a string
int main()
{
    string str;

    cout << "Enter a string : ";
    cin >> str;

    int i=0, index=0, n=str.length();

    // Traversal of string
    while (i<n)
    {
        int j=i+1;

        while (j<n && str[i] == str[j])
        {
            j++;
        }

        int count = j-i;
        char ans = str[i];

        str[index++] = ans;

        // Converting counting into single digit string
        if (count > 1)
        {
            string con = to_string(count);

            for ( char ch : con)
            {
                str[index++] = ch;
            }
        }

        i = j;
    }

    // Resize the string according to new index
    str.resize(index);

    cout << str;

    return 0;
}