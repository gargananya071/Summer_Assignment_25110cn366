#include <iostream>
using namespace std;

int main()
{
    int arr[100], size, i=0;

    cout << "Enter number of elements of array : ";
    cin >> size;

    // Input of array
    cout << "Enter elements of array : ";
    for (int i=0; i<size; i++)
    {
        cin >> arr[i];
    }

    int k=size-1;

    while (i<=k)
    {
        if (arr[i] == 0)
        {
            int j=i;
            while(j+1 < size)
            {
                arr[j] = arr[j+1];
                j++;
            }
            arr[k] = 0;
            k--;
        }
        else
        {
            i++;
        }
    }

    // Displaying new array
    for (int m=0; m<size; m++)
    {
        cout << arr[m] << endl;
    }

    return 0;
}