#include <iostream>
#include <climits>
using namespace std;

// Program to find second largest element in array
int main()
{
    int arr[100], size;

    cout << "Enter number of elements of array : ";
    cin >> size;

    cout << "Enter elements of array : ";
    for (int i=0; i<size; i++)
    {
        cin >> arr[i];
    }

    int max = INT_MIN , max2 = INT_MIN;

    // To find maximum element in array
    for (int i=0; i<size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // To find second maximum element in array
    for (int i=0; i<size; i++)
    {
        if ((arr[i] < max) && (arr[i] > max2))
        {
            max2 = arr[i];
        }
    }

    cout << "Largest element in array is " << max << " and second largest element is " << max2;

    return 0;
}