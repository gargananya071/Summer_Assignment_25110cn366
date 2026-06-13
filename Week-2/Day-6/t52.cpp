#include <iostream>
using namespace std;

// Program to count even and odd elements in array
int main()
{
    int arr[50], size, evenCount=0, oddCount=0;

    cout << "Enter size of array : ";
    cin >> size;

    cout << "Enter elements of array : ";
    for (int i=0; i<size; i++)
    {
        cin >> arr[i];
    }

    for (int i=0; i<size; i++)
    {
        if (arr[i]%2 == 0)
        {
            evenCount ++;
        }

        else
        {
            oddCount ++;
        }
    }

    cout << "Even elements in array are " << evenCount << endl;

    cout << "Odd elements in array are " << oddCount << endl;

    return 0;
}