#include <iostream>
using namespace std;

// Program to check Strong number
int main()
{
    int number, rem, sum=0;

    cout << "Enter a number : ";
    cin >> number;

    int orgnum = number;

    if ( number <= 0)
    {
        cout << number<< " is not a strong number.";
    }
    
    else 
    {
        while (number!=0)
        {
            rem = number % 10;
        
            int fact = 1;
            for (int i=1; i<=rem; i++)
            {
                fact = fact * i;
            }
            sum = sum + fact;

            number /= 10;
        }
  
        // A number is a strong number if the sum of factorial of digits is equal to the original number
        if ( sum == orgnum )
        {
            cout << orgnum << " is a strong number.";
        }
        else
        {
            cout << orgnum << " is not a strong number.";
        }
    }
    

    return 0;
}