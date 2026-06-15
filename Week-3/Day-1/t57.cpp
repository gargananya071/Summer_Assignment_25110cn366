#include <iostream>
#include <utility>
using namespace std;

// Program to reverse array
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

    int i=0, j=size-1;

    while (i<=j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    cout << "Reversed array is ------";
    for (int k=0; k<size; k++)
    {
        cout << arr[k] << " ";
    }

    return 0;
}