#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str1, str2;
    int choice;

    do
    {
        cout << " -------------- MENU --------------- \n";
        cout << "1. Find length of string\n";
        cout << "2. Concatenate two strings\n";
        cout << "3. Reverse the string\n";
        cout << "4. Compare two strings\n";
        cout << "5. Change to uppercase\n";
        cout << "6. Change to lowercase\n";
        cout << "7. Exit\n";
        cout << "Enter your choice (1-7) : ";
        cin >> choice;

        switch(choice)
        {
            // LENGTH
            case 1:
            {
                cin.ignore();            // Ignore the newline character

                cout << "Enter a string : ";
                getline(cin , str1);

                int count = 0;
                for (char ch : str1)
                {
                    count ++;
                }

                cout << "Length of string is : " << count << endl;
                break;
            }

            // CONCATENATION
            case 2:
            {
                cin.ignore();

                cout << "Enter first string : ";
                getline(cin , str1);

                cout << "Enter second string : ";
                getline(cin , str2);

                // Combine both the strings
                cout << "Concatenated string is - " << str1 + str2 << endl;
                break;
            }

            // REVERSE
            case 3:
            {
                cin.ignore();

                cout << "Enter a string : ";
                getline(cin , str1);

                // Built-in function
                reverse(str1.begin() , str1.end());

                cout << "Reversed string is - " << str1 << endl;
                break;
            }

            // COMPARISON
            case 4:
            {
                cin.ignore();

                cout << "Enter first string : ";
                getline(cin , str1);

                cout << "Enter second string : ";
                getline(cin , str2);

                // Convert first string to lowercase before comparing
                for (int i=0; i<str1.length(); i++)
                {
                    if ( isalpha(str1[i]))
                    {
                        str1[i] = tolower(str1[i]);
                    }
                    else
                    {
                        continue;
                    }
                }

                // Convert second string to lowercase before comparison
                for (int i=0; i<str2.length(); i++)
                {
                    if ( isalpha(str2[i]))
                    {
                        str2[i] = tolower(str2[i]);
                    }
                    else
                    {
                        continue;
                    }
                }

                // Compare the lowercased strings
                if (str1 == str2)
                {
                    cout << "Both strings are equal.\n";
                }
                else
                {
                    cout << "Strings are not equal.\n";
                }
                break;
            }

            // UPPERCASE
            case 5:
            {
                cin.ignore();

                cout << "Enter a string : ";
                getline(cin , str1);

                for (int i=0; i<str1.length(); i++)
                {
                    if ( isalpha(str1[i]))
                    {
                        str1[i] = toupper(str1[i]);
                    }
                    else
                    {
                        continue;
                    }
                }

                cout << "New string is - " << str1 << endl;
                break;
            }

            // LOWERCASE
            case 6:
            {
                cin.ignore();

                cout << "Enter a string : ";
                getline(cin , str1);

                for (int i=0; i<str1.length(); i++)
                {
                    if ( isalpha(str1[i]))
                    {
                        str1[i] = tolower(str1[i]);
                    }
                    else
                    {
                        continue;
                    }
                }

                cout << "New string is - " << str1 << endl;
                break;
            }

            case 7:
            break;

            default:
            {
                cout << "Invalid choice !!\n";
                break;
            }
        }
    }
    while (choice != 7);         // Stop the loop when user enters 7

    return 0;
    
}