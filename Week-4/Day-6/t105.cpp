// Program to create Student Record Management System

#include <iostream>
using namespace std;

// Structure to define student details
struct students{
    int roll_no;
    string name;
    int marks;
};

int main()
{
    // Array to store records up to 100 students
    students record[100];
    int roll;
    int found=0;

    int stuCount=0, choice; // Initially there is no student

    do
    {
        // Display the menu to the user
        cout << "\t\t\t\tSTUDENT RECORD SYSTEM" << endl << endl;
        cout << "------------- OPTIONS -----------" << endl;
        cout << "1. Add a student" << endl;
        cout << "2. Display all students" << endl;
        cout << "3. Search a student" << endl;
        cout << "4. Remove student" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5) : ";
        cin >> choice;

        switch(choice)
        {
            // Add a new student
            case 1:

            cout << "Enter roll number of student : ";
            cin >> record[stuCount].roll_no;

            cin.ignore();         // To ignore newline character

            cout << "Enter name of student : ";
            getline(cin , record[stuCount].name);

            cout << "Enter marks of student : ";
            cin >> record[stuCount].marks;

            stuCount++;        // Increase student count after successful addition
            cout << "Student record added successfully." << endl;
            break;

            // Display all student records
            case 2:

            if (stuCount == 0)
            {
                cout << "Record is empty.";
            }
            else
            {
                for (int i=0; i<stuCount; i++)
                {
                    cout << "Roll Number : " << record[i].roll_no << ", Name : " << record[i].name << ", Marks : " << record[i].marks << endl;
                }
            }
            break;

            // Search for a student by roll number
            case 3:

            cout << "Enter roll number to search : ";
            cin >> roll;

            for (int i=0; i<stuCount; i++)
            {
                if (record[i].roll_no == roll)
                {
                    found = 1;
                    cout << "Student record found." << endl;
                    cout << "Name : " << record[i].name << endl;
                    cout << "Marks : " << record[i].marks << endl;
                }
            }

            if (found == 0)
            {
                cout << "Student record not found." << endl;
            }
            break;

            // Remove a student record
            case 4:
            {
            cout << "Enter students's roll number to remove record : ";
            cin >> roll;

            int i=0;
            found = 0;

            // Find the index of the student to remove
            for (i=0; i<stuCount; i++)
            {
                if (record[i].roll_no == roll)
                {
                    found = 1;
                    break;           // 'i' hold the index of the target student
                }
            }

            if (found == 0)
            {
                cout << "Student record not found." << endl;;
            }
            else
            {
                if (i != stuCount-1)
                {
                    for (int j=i; j<stuCount-1; j++)
                    {
                        record[j] = record[j+1];
                    }
                }
                stuCount--;
                cout << "Record deleted successfully." << endl;
            }
            }
            break;

            // Exit the program 
            case 5:
            break;

            default:
            {
                cout << "Invalid choice.";
                break;
            }
        }
    }
    while (choice != 5);      // Condition to repeat the loop
    
    return 0;

}