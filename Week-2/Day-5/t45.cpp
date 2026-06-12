#include <iostream>
using namespace std;

// Function to check palindrome number
void palindrome(int n)
{
    int rem, rev=0, temp=n;

    while (n)
    {
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }

    if (temp == rev)
    {
        cout << "Number is Palindrome.";
    }

    else
    {
        cout << "Number is not Palindrome";
    }
}

int main()
{
    int num;

    cout << "Enter a number : ";
    cin >> num;

    // Function call
    palindrome(num);

    return 0;
}