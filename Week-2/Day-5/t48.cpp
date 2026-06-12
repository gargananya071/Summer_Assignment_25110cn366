#include <iostream>
using namespace std;

// Function to check perfect number
bool perfect(int n)
{
    int sum=0;

    for (int i=1; i<n; i++)
    {
        if (n%i == 0)
        {
            sum += i;
        }
    }

    if (sum == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;

    cout << "Enter a number : ";
    cin >> num;

    // Function call
    bool ans = perfect(num);

    if (ans)
    {
        cout << num << " is a perfect number.";
    }
    else
    {
        cout << num << " is not a perfect number.";
    }

    return 0;

}