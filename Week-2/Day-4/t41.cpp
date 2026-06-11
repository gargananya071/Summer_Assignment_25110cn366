#include <iostream>
using namespace std;

// Function Definition to add two numbers
int sumNum(int n1, int n2)
{
    return n1 + n2;
}

int main()
{
    int num1, num2;

    cout << "Enter two numbers : ";
    cin >> num1 >> num2;

    // Funtion call
    int result = sumNum(num1, num2);
    cout << "Sum of " << num1 << " and " << num2 << " is " << result;

    return 0;
}