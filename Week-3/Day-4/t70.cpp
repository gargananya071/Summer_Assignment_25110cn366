#include <iostream>
#include <utility>
using namespace std;

// Program for Selection Sort
int main()
{
    int arr[50], size, minindex=-1;

    cout << "Enter size of array : ";
    cin >> size;

    // Input of array
    cout << "Enter elements of array : ";
    for (int i=0; i<size; i++)
    {
        cin >> arr[i];
    }

    for (int i=0; i<size-1; i++)
    {
        minindex = i;
        for (int j=i+1; j<size; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        swap (arr[i], arr[minindex]);
    }

    // Display the final sorted array

    cout << "Final Sorted array is --------- " << endl;
    for (int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}