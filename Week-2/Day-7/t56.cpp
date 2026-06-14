#include <iostream>
using namespace std;

// Program to find duplicates in array
int main()
{
    int arr[100], arr1[100], size, k=0;

    cout << "Enter number of elements in array : ";
    cin >> size;

    cout << "Enter elements of array : ";
    for (int i=0; i<size; i++)
    {
        cin >> arr[i];
    }

    // Insert the duplicate elements in second array
    for (int i=0; i<size; i++)
    {
        for (int j=i+1; j<size; j++)
        {
            if ( arr[i] == arr[j])
            {
                arr1[k] = arr[i];
                k++;
                break;
            }
        }
    }

    if (k==0)
    {
        cout << "No duplicate element in array.";
        return 0;
    }

    cout << "Duplicate elements of array are - " << endl;

    for (int i=0; i<k; i++)
    {
        cout << arr1[i] << endl;
    }

    return 0;
}