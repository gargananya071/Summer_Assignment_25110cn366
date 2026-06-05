#include <iostream>
#include <cmath>
using namespace std;

// Program to print Armstrong numbers in given range
int main()
{
    int start, end, rem;

    cout << "Enter start range : ";
    cin >> start;

    cout << "Enter end range : ";
    cin >> end;

    cout << " Armstrong Numbers Between "<< start <<" And "<< end <<" Are --------" << endl;

    for ( int i=start; i<=end; i++)
    {
        int sum=0, count=0;
        int temp1 = i, temp2 = i;

        while(temp1)
        {
            count++;
            temp1 = temp1 / 10;
        }

        while (temp2)
        {
            rem = temp2 % 10;
            sum += round(pow(rem,count));
            temp2 = temp2 / 10;
        }

        if (sum==i)
        {
            cout << i << endl;
        }
    }

    return 0;

}