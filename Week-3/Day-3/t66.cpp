#include <iostream>
using namespace std;

// Program to find union of two arrays
int main()
{
    int arr1[50], arr2[50], arr3[100], n1, n2;

    cout << "Enter size of first array : ";
    cin >> n1;

    cout << "Enter size of second array : ";
    cin >> n2;

    // Input of first array
    cout << "Enter elements of first array : ";
    for (int i=0; i<n1; i++)
    {
        cin >> arr1[i];
    }

    // Input of second array
    cout << "Enter elements of second array : ";
    for (int i=0; i<n2; i++)
    {
        cin >> arr2[i];
    }

    // Merging the two arrays
    int j=0;
    for(int i=n1; i<n1+n2; i++)
    {
        arr1[i] = arr2[j];
        j++;
    }

    // Removing duplicate elements from merged array
    int m,k=0;
    for (int i=0; i<n1+n2; i++)
    {
        int flag=0;
        for (int m=i+1; m<n1+n2; m++)
        {
            if (arr1[i] == arr1[m])
            {
                flag=1;
                break;
            }
        }
        if (flag == 0)
        {
            arr3[k] = arr1[i];
            k++;
        }
    }

    // Displaying the union of two arrays
    for (int i=0; i<k; i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}