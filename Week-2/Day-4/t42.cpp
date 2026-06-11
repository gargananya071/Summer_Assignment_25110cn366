#include <iostream>
using namespace std;

// Function Definition to find maximum number
bool maximum(int n1, int n2)
{
    bool max = (n1 > n2)? 1 : 0;

    return max;
}

int main()
{
    int num1 , num2;

    cout << "Enter two numbers : ";
    cin >> num1 >> num2;

    // Function call
    bool result = maximum(num1, num2);

    if (result)
    {
        cout << num1 << " is maximum.";
    }

    else
    {
        cout << num2 << " is maximum.";
    }

    return 0;
}