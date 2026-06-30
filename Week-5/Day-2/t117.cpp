#include <iostream>
#include <string>
using namespace std;

// Program to create Student Record System
int main()
{
    // Arrays to store details of students
    int rollno[100];
    string stuname[100];
    float marks[100];

    int student = 0;       // Initially there is no studnet
    int choice;

    do
    {
        cout << "\n--------------------- STUDENT RECORD SYSTEM ---------------------------\n";
        cout << "1. Add Student\n";
        cout << "2. Search student\n";
        cout << "3. Display all students\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4) : ";
        cin >> choice;

        // ADD NEW RECORD
        if (choice == 1)
        {
            int roll;
            string name;
            float mark;

            if (student < 100)
            {
                cout << "Enter student roll number : ";
                cin >> roll;

                cin.ignore();
                cout << "Enter student name : ";
                getline(cin , name);

                cout << "Enter student marks : ";
                cin >> mark;

                rollno[student] = roll;
                stuname[student] = name;
                marks[student] = mark;

                // Move to the next index for next student
                student++;
                cout << "Student added succesfully!\n";
            }
            else
            {
                cout << "No more student can be added.\n";
            }
        }

        // SEARCH STUDENT
        else if (choice == 2)
        {
            int roll;
            int found = 0;
            cout << "Enter roll number to search student : ";
            cin >> roll;

            for (int i=0; i<student; i++)
            {
                if (rollno[i] == roll)
                {
                    cout << "Student found.\n";
                    cout << "Name | " << stuname[i] << ", Marks | " << marks[i] << endl;
                    found = 1;
                    break;
                }
            }
            if (found == 0)
            {
                cout << "Student not found.\n";
            }
        }

        // DISPLAY ALL RECORDS
        else if (choice == 3)
        {
            if (student == 0)
            {
                cout << "Record is empty.\n";
            }
            else
            {
                cout << "---- Displaying All Students Record ---- \n";
                cout << "Roll Number\tName\t\tMarks\n";
                
                for (int i=0; i<student; i++)
                {
                    cout << rollno[i] << "\t\t" << stuname[i] << "\t\t" << marks[i] << "\n";
                }
            }
        }

        // EXIT THE PROGRAM
        else if (choice == 4)
        {
            return 0;
        }

        else
        {
            cout << "Invalid choice!! Please enter a number between 1 and 4.\n";
        }
    }
    while (choice != 4);        // Loop ends when user enters '4'

    return 0;
    
}