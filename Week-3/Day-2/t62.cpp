#include <iostream>
using namespace std;

// Program to find maximum frequency element in array
int main()
{
    int arr[50], size;

    cout << "Enter size of array : ";
    cin >> size;

    // Input of array
    cout << "Enter elements of array : ";
    for (int i=0; i<size; i++)
    {
        cin >> arr[i];
    }

    // Initialising maximum count by 0
    int maxcount=0;
    int maxelement=arr[0];

    for (int i=0; i<size; i++)
    {
        int currentcount=0;
        for (int j=0; j<size; j++)
        {
            if (arr[i] == arr[j])
            {
                currentcount++;
            }
        }

        if (currentcount > maxcount)
        {
            maxcount = currentcount;
            maxelement = arr[i];
        }

    }

    cout << "Maximum frequency element is " << maxelement << " occuring "<< maxcount << " times.";

    return 0;
}