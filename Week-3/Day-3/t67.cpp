#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

// Program to find intersection of arrays
int main()
{
    int arr1[50], arr2[50], arr3[50], n1, n2;

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

    sort(arr1, arr1 + n1);

    // Input of second array
    cout << "Enter elements of second array : ";
    for (int i=0; i<n2; i++)
    {
        cin >> arr2[i];
    }

    int k=0;
    for (int i=0; i<n1; i++)
    {
        if (arr1[i] < arr1[i+1])
        {
            for (int j=0; j<n2; j++)
            {
                if (arr1[i] == arr2[j])
                {
                    arr3[k] = arr1[i];
                    arr2[j] = INT_MIN;
                    k++;
                    break;
                }

            }
        }
    }

    // Display the intersection of two arrays
    for (int i=0; i<k; i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}