#include <iostream>
#include <utility>
using namespace std;

// Program to sort array in descending order
int main()
{
    int arr[50], size, maxindex=-1;

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
        maxindex = i;
        for (int j=i+1; j<size; j++)
        {
            if (arr[j] > arr[maxindex])
            {
                maxindex = j;
            }
        }
        swap (arr[i], arr[maxindex]);
    }

    // Display the final sorted array in descending order
    for (int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}