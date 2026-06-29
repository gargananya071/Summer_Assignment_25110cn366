#include <iostream>
using namespace std;

// Menu-driven array operations
int main()
{
    int arr[100];
    int choice, element, position;
    int size = 0;        // Initially array is empty
    int found = 0;

    do
    {
        cout << " --------------------- MENU ---------------- \n";
        cout << "1. Insert element at end\n";
        cout << "2. Remove element\n";
        cout << "3. Display array\n";
        cout << "4. Search element\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5) : ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                cout << "Enter element to insert : ";
                cin >> element;
        
                arr[size] = element;            // Insert element at end position

                size++;                         // Increase array size
                cout << "Element inserted successfully!\n";
                break;
            }

            case 2:
            {
                found = 0;

                cout << "Enter element to remove : ";
                cin >> element;

                for (int i=0; i<size; i++)
                {
                    if (arr[i] == element)
                    {
                        found = 1;
                        position = i;
                        break;
                    }
                }

                if (found == 0)
                {
                    cout << "Element not found.\n";
                }
                else
                {
                    for (int i=position; i<size; i++)
                    {
                        arr[i] = arr[i+1];          // Shift the remaining elements to left
                    }
                    size--;                         // Decrease array size
                    cout << "Element removed successfully!\n";
                }
                break;
            }

            case 3:
            {
                for (int i=0; i<size; i++)
                {
                    cout << arr[i] << endl;
                }
                break;
            }

            case 4:
            {
                found = 0;

                cout << "Enter element to search : ";
                cin >> element;

                for (int i=0; i<size; i++)
                {
                    if (arr[i] == element)
                    {
                        found = 1;
                        position = i;
                        break;
                    }
                }

                if (found == 0)
                {
                    cout << "Element not found.\n";
                }

                else
                {
                    cout << "Element found at " << position << " index.\n" << endl;
                }

                break;
            }

            case 5:
            break;

            default:
            {
                cout << "Invalid choice !!\n";
                break;
            }

        }
    }
    while( choice != 5);           // Stop loop when user enters 5

    return 0;

}