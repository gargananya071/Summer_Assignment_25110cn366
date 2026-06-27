// Program to create Marksheet Generation System

#include <iostream>
using namespace std;

// Structure to store student record and marks
struct student{
    long long roll_no;
    string name;
    float physics;
    float chemistry;
    float maths;
};

int main()
{
    // Array to store up to 100 students
    student record[100];

    int choice;
    int stuCount = 0;
    long long roll;
    int found = 0;

    do
    {
        // Display options menu
        cout << "----------- OPTIONS ----------" << endl;
        cout << "1. Add marks of student." << endl;
        cout << "2. Display marksheet of student." << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice (1-3) : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
            // Add a new student record with marks
            case 1:
            {
                cout << "Enter roll number of student : ";
                cin >> record[stuCount].roll_no;

                cin.ignore();

                cout << "Enter name of student : ";
                getline(cin , record[stuCount].name);

                cout << "Enter Physics marks : ";
                cin >> record[stuCount].physics;

                cout << "Enter Chemistry marks : ";
                cin >> record[stuCount].chemistry;

                cout << "Enter Maths marks : ";
                cin >> record[stuCount].maths;

                stuCount++;     // Move to the next slot in the array
                cout << "Student record added successfully." << endl << endl;;
            }
            break;

            // Generate and display the marksheet for a specific student
            case 2:
            {
                cout << "Enter student roll number to generate marksheet : ";
                cin >> roll;

                int i=0;
                for (i=0; i<stuCount; i++)
                {
                    if (roll == record[i].roll_no)
                    {
                        found=1;
                        break;
                    }
                }

                if (found == 0)
                {
                    cout << "Record not found." << endl << endl;
                }

                else
                {
                    int sum = record[i].physics + record[i].chemistry + record[i].maths;
                    cout << "======================= MARKSHEET =========================" << endl << endl;
                    cout << "-------------------------------------------------------------" << endl;
                    cout << "Roll NO.  : " << record[i].roll_no << endl;
                    cout << "Name      : " << record[i].name << endl;
                    cout << "-------------------------------------------------------------" << endl;
                    cout << "SUBJECTS               MAX MARKS               MARKS OBTAINED" << endl;
                    cout << "Phyisics               100                     " << record[i].physics << endl;
                    cout << "Chemistry              100                     " << record[i].chemistry << endl;
                    cout << "Mathematics            100                     " << record[i].maths << endl;
                    cout << "--------------------------------------------------------------" << endl;
                    cout << "Total Marks   : " << sum << "/300" << endl;
                    cout << "Percentage    : " << sum/3 << "%" << endl;
                    if ( record[i].physics < 33 || record[i].chemistry < 33 || record[i].maths < 33 )
                    {
                        cout << "Result Status : Fail" << endl;
                    }
                    else
                    {
                        cout << "Result Status : Pass" << endl;
                    }
                    cout << "--------------------------------------------------------------" << endl;
                    cout << endl << endl;
                }
            }
            break;

            // Exit the program 
            case 3:
            break;

            default:
            {
                cout << "Invalid choice !!" << endl;
            }
        }
    } 
    while (choice != 3);     // Loop ends when choice is 3

    return 0;
    
}