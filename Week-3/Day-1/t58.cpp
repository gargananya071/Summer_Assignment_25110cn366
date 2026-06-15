#include <iostream>
using namespace std;

// Program to rotate array to left
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

    int i=0, temp = arr[0];

    while (i+1 < size)
    {
        arr[i] = arr[i+1];
        i++;
    }
    arr[size-1] = temp;

    // Displaying rotated array
    for (int k=0; k<size; k++)
    {
        cout << arr[k] << " ";
    }

    return 0;
}