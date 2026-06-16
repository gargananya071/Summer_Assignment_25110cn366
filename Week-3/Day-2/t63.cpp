#include <iostream>
#include <climits>
using namespace std;

// Program to find pairs with given sum
int main()
{
    int arr[50], size, sum;

    cout << "Enter size of array : ";
    cin >> size;

    //  Input of array
    cout << "Enter elements of array : ";
    for (int i=0; i<size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter sum : ";
    cin >> sum;

    for (int i=0; i<size; i++)
    {
        for (int j=i+1; j<size; j++)
        {
            if (arr[j] == INT_MIN) continue;

            if (arr[i] + arr[j] == sum)
            {
                cout << arr[i] << "," << arr[j] << endl;
                arr[j] = INT_MIN;    // For unique pairs
                break;
            }
        }
    }

    return 0;
}