#include <iostream>
#include <cmath>
using namespace std;

// Program to print prime numbers in a given range
int main()
{
    int startnum, endnum ;

    // Take range input from user
    cout << "Enter the starting number of range : ";
    cin >> startnum;

    cout << "Enter the last number of range : ";
    cin >> endnum;

    cout << "Prime numbers between "<< startnum <<" and "<<endnum <<" are -\n";

    for (int i=startnum; i<=endnum; i++)
    {
        // Numbers less than 2 (like 0 and 1) are not prime
        if (i<2)
        {
            continue;
        }

        int flag=0;    // Initialize flag as zero which means prime
        for (int j=2; j<=sqrt(i); j++)
        {
            if(i%j==0)
            {
                flag=1;    // Change flag to 1 (means not prime)
                break;
            }
        }
        
        // Print the prime numbers if flag is still 0
        if (flag==0)
        {
            cout << i << endl;
        }
    }
    return 0;
}