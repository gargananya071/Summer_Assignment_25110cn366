#include <iostream>
using namespace std;

// Program to find sum and average of array

// Function for sum of elements of array
int sumArr(int arr[], int size)
{
    int sum = 0;
    for (int i=0; i<size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

// Function for average of elements of array
float avg(int arr[], int size )
{
    return (float)(sumArr(arr, size))/size;
}

int main()
{
    int arr[50], size;

    cout << "Enter the size of array : ";
    cin >> size;

    cout << "Enter elements of array : ";
    for (int i=0; i<size; i++)
    {
        cin >> arr[i];
    }

    cout << "Sum of array = "<< sumArr(arr, size) << endl;;

    cout << "Average of array = "<< avg(arr, size) << endl;

    return 0;
}