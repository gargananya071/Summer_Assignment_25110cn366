#include <iostream>
#include <string>
using namespace std;

// Program to create Mini Employee Management System
int main() 
{
    // Arrays to store details of employees
    int empId[100];
    string empName[100];
    string empDesignation[100];

    int employeeCount = 0;      // Initially there is no employee
    int choice;            

    do 
    {
        // Display the main menu
        cout << "\n------------------------------ EMPLOYEE MANAGEMENT SYSTEM ------------------------------\n";
        cout << "1. Add Employee\n";
        cout << "2. Search Employee by ID\n";
        cout << "3. Display All Employees\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        // Add a new employee
        if (choice == 1) 
        {
            int id;
            string name;
            string designation;

            if (employeeCount < 100) 
            {
                cout << "Enter Employee ID: ";
                cin >> id;

                cin.ignore(); 
                cout << "Enter Employee Name: ";
                getline(cin, name);

                cout << "Enter Designation (e.g., Manager, Developer): ";
                getline(cin, designation);

                empId[employeeCount] = id;
                empName[employeeCount] = name;
                empDesignation[employeeCount] = designation;

                employeeCount++;     // Move to the next index for the next employee
                cout << "Employee record added successfully!\n";
            } 
            else 
            {
                cout << "System storage is full. No more records can be added.\n";
            }
        }

        // Search employee by ID
        else if (choice == 2) 
        {
            int id;
            int found = 0;

            cout << "Enter Employee ID to search: ";
            cin >> id;

            for (int i = 0; i < employeeCount; i++) 
            {
                if (empId[i] == id) 
                {
                    cout << "\nEmployee Found!\n";
                    cout << "Name        : " << empName[i] << "\n";
                    cout << "Designation : " << empDesignation[i] << "\n";
                    found = 1; 
                    break;  
                }
            }

            if (found == 0) 
            {
                cout << "Record not found.\n";
            }
        }

        // Display all employee records
        else if (choice == 3) 
        {
            if (employeeCount == 0) 
            {
                cout << "No record found.\n";
            } 
            else 
            {
                cout << "\n---- Displaying All Employees Record ----\n";
                cout << "ID\t\tName\t\t\tDesignation\n";

                for (int i = 0; i < employeeCount; i++) 
                {
                    cout << empId[i] << "\t\t" << empName[i] << "\t\t\t" << empDesignation[i] << endl;
                }
            }
        }

        // Exit the program
        else if (choice == 4) 
        {
            return 0;
        }
        
        else 
        {
            cout << "Invalid choice!! Please enter a number between 1 and 4.\n";
        }

    } while (choice != 4);       // Loop ends when user enters '4'

    return 0;
}