#include <iostream>
using namespace std;

// Program to remove duplicate elements from array
int main()
{
    int arr[50], arr1[50], size;

    cout << "Enter size of array : ";
    cin >> size;

    // Input of array
    cout << "Enter elements of array : ";
    for (int i=0; i<size; i++)
    {
        cin >> arr[i];
    }

    int j,k=0;
    for (int i=0; i<size; i++)
    {
        int flag=0;
        for (int j=i+1; j<size; j++)
        {
            if (arr[i] == arr[j])
            {
                flag=1;
                break;
            }
        }
        if (flag == 0)
        {
            arr1[k] = arr[i];
            k++;
        }
    }

    // Displaying new array
    for (int i=0; i<k; i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}