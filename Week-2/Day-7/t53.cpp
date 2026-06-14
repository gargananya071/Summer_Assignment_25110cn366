#include <iostream>
using namespace std;

// Program for linear search in array
int main()
{
    int arr[100], size, element;

    cout << "Enter number of elements of array : ";
    cin >> size;

    // Input of array
    cout << "Enter elements of array : ";  
    for (int i=0; i<size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element you want to search : ";
    cin >> element;

    // Traversal of array
    for (int i=0; i<size; i++)
    {
        if (arr[i] == element)
        {
            cout << "Element found in the array.";
            return 0;
        }
    }

    cout << "Element not found !!";

    return 0;
}