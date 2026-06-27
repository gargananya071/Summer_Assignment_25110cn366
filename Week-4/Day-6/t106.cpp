// Program to create Employee Management system

#include <iostream>
using namespace std;

// Structure to define employee details
struct employee{
    int empID;
    string name;
    float salary;
};

int main()
{
    // Array to store up to 100 employee records
    employee record[100];
    int choice;
    int empCount = 0;      // Initially there is no employee
    int searchID;
    int found=0;

    cout << "\t\t\t\tEMPLOYEE  MANAGEMENT  SYSTEM" << endl << endl;
    
    do
    {
        // Display options to the user
        cout << "---------- OPTIONS ------------" << endl;
        cout << "1. Add employee" << endl;
        cout << "2. Display all employees details" << endl;
        cout << "3. Search employee" << endl;
        cout << "4. Remove employee" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5) : ";
        cin >> choice;
        cout << endl;

        switch(choice)
        {
            // Add a new employee
            case 1:
            {
                cout << "Enter Employee ID : ";
                cin >> record[empCount].empID;

                cin.ignore();              // To ignore newline character

                cout << "Enter name of employee : ";
                getline(cin , record[empCount].name);

                cout << "Enter employee salary : ";
                cin >> record[empCount].salary;

                empCount++;
                cout << "Record added successfully." << endl;
            }
            break;

            // Display all employee records
            case 2:
            {
                if (empCount == 0)
                {
                    cout << "No record found." << endl;
                }

                else
                {
                    for (int i=0; i<empCount; i++)
                    {
                        cout << "Employee ID : " << record[i].empID << ", Name : " << record[i].name << ", Salary : " << record[i].salary << endl;
                    }
                }
            }
            break;

            // Search for an employee by ID
            case 3:
            {
                cout << "Enter employee ID to search : ";
                cin >> searchID;

                for (int i=0; i<empCount; i++)
                {
                    if (searchID == record[i].empID)
                    {
                        found = 1;
                        cout << "Employee found." << endl;
                        cout << "Employee ID : " << record[i].empID << ", Name : " << record[i].name << ", Salary : " << record[i].salary << endl;
                        break;
                    }
                }

                if (found == 0)
                {
                    cout << "Employee not found." << endl;
                }
            }
            break;
            
            // Remove an employee record
            case 4:
            {
                found = 0;
                cout << "Enter employee ID to remove : ";
                cin >> searchID;
                int j=0;

                // Find the index of the employee to remove
                for (j=0; j<empCount; j++)
                {
                    if (searchID == record[j].empID)
                    {
                        found = 1;
                        break;      // 'j' holds the target record's index
                    }
                }

                if (found == 0)
                {
                    cout << "Record not found." << endl;
                }

                else
                {
                    // Shift all subsequent records one position back
                    if (j != empCount-1)
                    {
                        for (int k=j; k<empCount-1; k++)
                        {
                            record[k] = record[k+1];
                        }
                    }
                    empCount--;
                    cout << "Record deleted successfully." << endl;
                }
            }
            break;

            // Exit the program 
            case 5:
            break;

            // Handle invalid choice
            default:
            {
                cout << "Invalid choice !!" << endl;
            }
            break;
        }
    }
    while (choice != 5);

    return 0;
    
}