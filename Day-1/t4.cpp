#include <iostream>
using namespace std;

// Program to count number of digits
int main()
{
    int count=0, number;

    cout << "Enter a number : ";
    cin >> number;
    
    // counting the digits until number is '0';
    do {
        count++;
        number/=10;
    }
    while (number);

    // Output 
    cout << "Number of digits in given number is " << count;

    return 0;
}
