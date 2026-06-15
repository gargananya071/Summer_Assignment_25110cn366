#include <iostream>
using namespace std;

// Program to rotate array to right
int main()
{
    int arr[100], size;

    cout << "Enter size of array : ";
    cin >> size;

    // Input of array
    cout << "Enter elements of array : ";
    for (int i=0; i<size; i++)
    {
        cin >> arr[i];
    }

    int i=size-2, temp = arr[size-1];

    while (i>=0)
    {
        arr[i+1] = arr[i];
        i--;
    }
    arr[0] = temp;

    // Displaying rotated array
    for (int k=0; k<size; k++)
    {
        cout << arr[k] << " ";
    }

    return 0;
}