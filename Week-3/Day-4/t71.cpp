#include <iostream>
using namespace std;

// Program for Binary Search

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n-1;

    while (start <= end)
    {
        int mid = start + (end - start)/2;

        if (arr[mid] == key)
        {
            return mid;
        }
        
        else if (arr[mid] > key)
        {
            end = mid-1;
        }

        else
        {
            start = mid+1;
        }
    }

    return -1;
}

int main()
{
    int arr[50], size, key;

    cout << "Enter the size of array : ";
    cin >> size;

    // Input of array
    cout << "Enter elements of array : ";
    for (int i=0; i<size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element you want to search : ";
    cin >> key;

    // Function call
    int result = binarySearch(arr, size, key);

    if (result == -1)
    {
        cout << key << " is not present in the array.";
    }

    else
    {
        cout << key << " is present at " << result << " index";
    }

    return 0;
}