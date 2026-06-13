#include <iostream>
using namespace std;

// Program to input and display array
int main()
{
    int size, arr[50];

    cout << "Enter the size of array : ";
    cin >> size;

    // Input of array
    cout << "Enter elements of array : ";
    for (int i=0; i<size; i++)
    {
        cin >> arr[i];
    }

    //Display of array
    cout << "Displaying The Array -----" << endl;

    for (int i=0; i<size; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}