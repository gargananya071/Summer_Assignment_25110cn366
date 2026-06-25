#include <iostream>
using namespace std;

// Program to sort names
int main()
{
    string name1, name2;

    cout << "Enter first name : ";
    getline(cin , name1);

    cout << "Enter second name : ";
    getline(cin , name2);

    cout << "Names in sorted order are " << endl;

    if (name1 > name2)
    {
        cout << name2 << endl << name1;
    }

    else
    {
        cout << name1 << endl << name2;
    }

    return 0;

}