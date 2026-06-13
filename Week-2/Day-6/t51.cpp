#include <iostream>
using namespace std;

// Program to find largest and smallest element
int main()
{
    int arr[50], size, min, max;

    cout << "Enter size of array : ";
    cin >> size;

    cout << "Enter elements of array : ";
    for (int i=0; i<size; i++)
    {
        cin >> arr[i];
    }

    // Initialising 'min' and 'max' by first element of array
    min = arr[0];
    max = arr[0];

    for (int i=0; i<size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "Largest element in array is " << max << endl;;

    cout << "Smallest element in array is " << min << endl;

    return 0;
}