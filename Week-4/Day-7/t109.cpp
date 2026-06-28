#include <iostream>
using namespace std;

const int MAX_BOOKS = 100;
const int MAX_STUDENTS = 100;
const int MAX_ISSUES = 100; // Max kitni books issue ho sakti hain ek sath

// Data structures
struct Book {
    int id;
    string title;
    string author;
};

struct Student {
    int rollNo;
    string name;
    string branch;
};

struct IssueRecord {
    int studentRollNo;
    int bookId;
};

int main() {
    Book books[MAX_BOOKS];
    Student students[MAX_STUDENTS];
    IssueRecord issues[MAX_ISSUES]; 

    int bookCount = 0;
    int studentCount = 0;
    int issueCount = 0; 

    int choice;

    while (true) {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add New Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Register New Student\n";
        cout << "4. Display All Students\n";
        cout << "5. Issue a Book (Link Student & Book)\n";
        cout << "6. Display Issued Books List\n";
        cout << "7. Exit\n";
        cout << "Enter your choice (1-7): ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (bookCount < MAX_BOOKS) {
                    cout << "\nEnter Book ID: "; cin >> books[bookCount].id;
                    cin.ignore();
                    cout << "Enter Book Title: "; getline(cin, books[bookCount].title);
                    cout << "Enter Author Name: "; getline(cin, books[bookCount].author);
                    bookCount++;
                    cout << "Book added successfully!\n";
                } else { cout << "\nLibrary storage full!\n"; }
                break;

            case 2:
                if (bookCount == 0) { cout << "\nNo books available.\n"; }
                else {
                    cout << "\n--- Library Books List ---\n";
                    cout << "ID\t| Title\t\t| Author\n-----------------------------------\n";
                    for (int i = 0; i < bookCount; i++) {
                        cout << books[i].id << "\t| " << books[i].title << "\t\t| " << books[i].author << "\n";
                    }
                }
                break;

            case 3:
                if (studentCount < MAX_STUDENTS) {
                    cout << "\nEnter Student Roll No: "; cin >> students[studentCount].rollNo;
                    cin.ignore();
                    cout << "Enter Student Name: "; getline(cin, students[studentCount].name);
                    cout << "Enter Branch: "; getline(cin, students[studentCount].branch);
                    studentCount++;
                    cout << "Student registered successfully!\n";
                } else { cout << "\nStudent limit reached!\n"; }
                break;

            case 4:
                if (studentCount == 0) { cout << "\nNo students registered yet.\n"; }
                else {
                    cout << "\n--- Registered Students List ---\n";
                    cout << "Roll No\t| Name\t\t| Branch\n-----------------------------------\n";
                    for (int i = 0; i < studentCount; i++) {
                        cout << students[i].rollNo << "\t| " << students[i].name << "\t\t| " << students[i].branch << "\n";
                    }
                }
                break;

            case 5: 
                if (issueCount < MAX_ISSUES) {
                    int rNo, bId;
                    cout << "\nEnter Student Roll No: ";
                    cin >> rNo;
                    cout << "Enter Book ID to Issue: ";
                    cin >> bId;

                    // Dono IDs ko record array me save kar rahe hain
                    issues[issueCount].studentRollNo = rNo;
                    issues[issueCount].bookId = bId;
                    issueCount++;

                    cout << "Book ID " << bId << " successfully issued to Roll No " << rNo << "!\n";
                } else {
                    cout << "\nIssue record limit reached!\n";
                }
                break;

            case 6: // 
                if (issueCount == 0) {
                    cout << "\nNo books have been issued yet.\n";
                } else {
                    cout << "\n--- Issued Books Record ---\n";
                    cout << "Student Roll No\t| Book ID\n-----------------------------------\n";
                    for (int i = 0; i < issueCount; i++) {
                        cout << issues[i].studentRollNo << "\t\t| " << issues[i].bookId << "\n";
                    }
                }
                break;

            case 7:
                cout << "\nExiting System... Bye!\n";
                return 0;

            default:
                cout << "\nInvalid choice! Try again.\n";
        }
    }
    return 0;
}