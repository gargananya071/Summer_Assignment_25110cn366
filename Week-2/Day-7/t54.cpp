#include <iostream>
using namespace std;

// Program to find frequency of an element in array
int main()
{
    int arr[100], element, size, count=0;

    cout << "Enter number of elements of array : ";
    cin >> size;

    cout << "Enter elements of array : ";
    for (int i=0; i<size; i++)
    {
        cin >> arr[i];
    }

    cout << "Which element's frequency you want to know? ";
    cin >> element;

    for (int i=0; i<size; i++)
    {
        if (arr[i] == element)
        {
            count ++;
        }
    }

    cout << element << " occurs " << count << " times in the array.";

    return 0;
}