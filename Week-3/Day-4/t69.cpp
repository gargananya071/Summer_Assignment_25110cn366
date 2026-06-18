#include <iostream>
using namespace std;

// Program for Bubble Sort
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
    
    for (int i=1; i<size; i++)
    {
        for (int j=0; j<size-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Display the sorted array

    cout << "Final sorted array is ---------" << endl;
    for (int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
