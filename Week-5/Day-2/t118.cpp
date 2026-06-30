#include <iostream>
#include <string>

using namespace std;

// Program to create a Mini Library System
int main() 
{
    // Arrays to store details of books
    int bookId[100];
    string bookTitle[100];
    string bookAuthor[100];

    int bookCount = 0;     // Initially there ia no book
    int choice;        

    do 
    {
        // Display the main menu
        cout << "\n------------------------------ MINI LIBRARY SYSTEM ------------------------------\n";
        cout << "1. Add Book\n";
        cout << "2. Search Book by ID\n";
        cout << "3. Display All Books\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        // Add a new book record
        if (choice == 1) 
        {
            int id;
            string title;
            string author;

            if (bookCount < 100) 
            {
                cout << "Enter Book ID: ";
                cin >> id;

                cin.ignore(); 
                cout << "Enter Book Title: ";
                getline(cin, title);

                cout << "Enter Author Name: ";
                getline(cin, author);

                bookId[bookCount] = id;
                bookTitle[bookCount] = title;
                bookAuthor[bookCount] = author;

                bookCount++;         // Move to the next index for the next book
                cout << "Book added successfully!\n";
            } 
            else 
            {
                cout << "Library storage is full. No more books can be added.\n";
            }
        }

        // Search book by its ID
        else if (choice == 2) 
        {
            int id;
            int found = 0;

            cout << "Enter Book ID to search: ";
            cin >> id;

            for (int i = 0; i < bookCount; i++) 
            {
                if (bookId[i] == id) 
                {
                    cout << "\nBook Found!\n";
                    cout << "Title  : " << bookTitle[i] << "\n";
                    cout << "Author : " << bookAuthor[i] << "\n";
                    found = 1; 
                    break;     
                }
            }

            if (found == 0) 
            {
                cout << "Book not found.\n";
            }
        }

        // Display all books
        else if (choice == 3) 
        {
            if (bookCount == 0) 
            {
                cout << "The library is empty.\n";
            } 
            else 
            {
                cout << "\n---- Displaying All Books ----\n";
                cout << "Book ID\t\tTitle\t\t\tAuthor\n";

                for (int i = 0; i < bookCount; i++) 
                {
                    cout << bookId[i] << "\t\t" << bookTitle[i] << "\t\t\t" << bookAuthor[i] << endl;
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
            cout << "Invalid choice! Please enter a number between 1 and 4.\n";
        }

    } while (choice != 4);     // Loop ends when user enters '4'

    return 0;
}