#include <iostream>
using namespace std;

// Program to merge arrays
int main()
{
    int arr1[100], arr2[50], n1, n2;

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

    // Inserting elements of second array to the end of first array
    int j=0;
    for(int i=n1; i<n1+n2; i++)
    {
        arr1[i] = arr2[j];
        j++;
    }

    // Display the merged array
    for (int i=0; i<n1+n2; i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}