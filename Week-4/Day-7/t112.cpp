// Program to create Contact Management System

#include <iostream>
using namespace std;

const int MAX_CONTACTS = 100;

// Structure to store contact details
struct Contact {
    string name;
    string phone;
    string email;
};

int main() {

    Contact directory[MAX_CONTACTS];
    int contactCount = 0; // Tracks how many contacts are saved

    int choice;
    while (true) {
        cout << "\n===== CONTACT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add New Contact\n";
        cout << "2. Display All Contacts\n";
        cout << "3. Search Contact by Name\n";
        cout << "4. Delete a Contact\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1: // 1. Add Contact

                if (contactCount < MAX_CONTACTS) {
                    cin.ignore(); 
                    cout << "\nEnter Name: ";
                    getline(cin, directory[contactCount].name);

                    cout << "Enter Phone Number: ";
                    getline(cin, directory[contactCount].phone);

                    cout << "Enter Email: ";
                    getline(cin, directory[contactCount].email);

                    contactCount++;  // To move to next slot
                    cout << "Contact saved successfully!\n";
                } 
                else {
                    cout << "Directory full!\n";
                }
                break;

            case 2: // 2. Display All Contacts

                if (contactCount == 0) {
                    cout << "\nNo contacts found.\n";
                } 
                else {
                    cout << "\n--- Contact List ---\n";
                    for (int i = 0; i < contactCount; i++) {
                        cout << "Name:     " << directory[i].name 
                             << " | Phone: " << directory[i].phone 
                             << " | Email: " << directory[i].email << "\n";
                    }
                }
                break;

            case 3: // 3. Search a contact

                if (contactCount == 0) {
                    cout << "\nDirectory is empty.\n";
                } 
                else {
                    cin.ignore();
                    string searchName;

                    cout << "\nEnter Name to search: ";
                    getline(cin, searchName);

                    bool found = false;
                    for (int i = 0; i < contactCount; i++) {
                        if (directory[i].name == searchName) {
                            cout << "\nContact Found!\n";
                            cout << "Phone: " << directory[i].phone << "\n";
                            cout << "Email: " << directory[i].email << "\n";
                            found = true;
                            break;
                        }
                    }
                    if (!found) cout << "Contact not found.\n";
                }
                break;

            case 4: // 4. Delete a contact

                if (contactCount == 0) {
                    cout << "\nDirectory is empty.\n";
                } 
                else {
                    cin.ignore();
                    string deleteName;
                    
                    cout << "\nEnter Name to delete: ";
                    getline(cin, deleteName);

                    bool found = false;
                    for (int i = 0; i < contactCount; i++) {
                        if (directory[i].name == deleteName) {
                            
                            // Shifting elements to fill the gap
                            for (int j = i; j < contactCount - 1; j++) {
                                directory[j] = directory[j + 1];
                            }
                            contactCount--;     // Decrease the contact count
                            cout << "Contact deleted successfully!\n";
                            found = true;
                            break;
                        }
                    }
                    if (!found) cout << "Contact not found.\n";
                }
                break;

            case 5:      // Exit the program
                cout << "\nExiting System.\n";
                return 0;

            default:
                cout << "\nInvalid Choice! Try again.\n";
        }
    }
    return 0;
}