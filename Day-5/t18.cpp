#include <iostream>
using namespace std;

int main()
{
    int number, rem, sum=0;

    cout << "Enter a number : ";
    cin >> number;

    int orgnum = number;

    if ( number <= 0)
    {
        cout << "0 is not a strong number.";
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