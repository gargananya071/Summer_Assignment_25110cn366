#include <iostream>
using namespace std;

// Program to print fibonacci series
int main()
{
    int range, firstnum=0, secondnum=1, thirdnum;

    cout << "Enter the range for fibonacci series : ";
    cin >> range;

    cout << "----------- FIBONACCI SERIES ---------" << endl;

    // Print the first two base terms of series ( 0 and 1)
    cout << firstnum << endl;
    cout << secondnum << endl;

    for (int i=3; i<=range; i++)
    {
        // Calculate the next term by adding previous two terms
        thirdnum = firstnum + secondnum;

        cout << thirdnum << endl;
        
        firstnum = secondnum;
        secondnum = thirdnum;
    }
    return 0;

}