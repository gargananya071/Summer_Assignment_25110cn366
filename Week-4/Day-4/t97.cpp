#include <iostream>
using namespace std;

// Program to merge two sorted arrays
int main()
{
    int arr1[50], arr2[50], size1, size2, result[100];

    cout << "Enter size of first array : ";
    cin >> size1;

    cout << "Enter elements of first array : ";
    for (int i=0; i<size1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter size of second array : ";
    cin >> size2;

    cout << "Enter elements of second array : ";
    for (int i=0; i<size2; i++)
    {
        cin >> arr2[i];
    }

    int i=0;
    int j=0;
    int k=0;

    while (i<size1 && j<size2)
    {
        if (arr1[i] < arr2[j])
        {
            result[k] = arr1[i];
            i++;
            k++;
        }
        else 
        {
            result[k] = arr2[j];
            j++;
            k++;
        }
    }

    // Insert leftout elements of array 1
    while (i<size1)
    {
        result[k] = arr1[i];
        i++;
        k++;
    }

    // Insert leftout elements of array 2
    while (j<size2)
    {
        result[k] = arr2[j];
        j++;
        k++;
    }

    cout << "Merged array is - " << endl;
    for (int m=0; m<k; m++)
    {
        cout << result[m] << " ";
    }

    return 0;

}