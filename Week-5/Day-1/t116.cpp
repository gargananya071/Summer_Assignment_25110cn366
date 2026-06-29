#include <iostream>
#include <string>
using namespace std;

// Program to create Inventory Management System
const int MAX_ITEMS = 100; 
const int LOW_STOCK_LIMIT = 5;     // If quantity is less than 5, a reminder will be generated

// Structure to store product details
struct Product {
    int id;
    string name;
    int quantity;
    double price;
};

int main() {
    Product inventory[MAX_ITEMS];
    int itemCount = 0; 
    int choice;

    while (true) {
        cout << "\n===== Inventory Management System =====\n";
        cout << "1. Add Product\n";
        cout << "2. View Inventory & Alerts\n"; 
        cout << "3. Search Product\n";
        cout << "4. Update stock quantity\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        // 1. ADD PRODUCT
        if (choice == 1) {
            if (itemCount >= MAX_ITEMS) {
                cout << "\nInventory is full!\n";
            } 
            else {
                cout << "\n--- Add New Product ---\n";
                cout << "Enter Product ID: ";
                cin >> inventory[itemCount].id;
                cin.ignore(); 
                
                cout << "Enter Product Name: ";
                getline(cin, inventory[itemCount].name);
                
                cout << "Enter Quantity: ";
                cin >> inventory[itemCount].quantity;
                
                cout << "Enter Price: Rs.";
                cin >> inventory[itemCount].price;

                itemCount++; 
                cout << "\nProduct added successfully!\n";
            }
        }
        
        // 2. VIEW INVENTORY 
        else if (choice == 2) {
            cout << "\n--- Current Inventory ---\n";
            if (itemCount == 0) {
                cout << "Inventory is empty!\n";
            } else {
                cout << "ID\tName\t\tQuantity\tPrice\tStatus\n";
                cout << "-------------------------------------------------------\n";
                for (int i = 0; i < itemCount; i++) {
                    cout << inventory[i].id << "\t" 
                         << inventory[i].name << "\t\t" 
                         << inventory[i].quantity << "\t\t$" 
                         << inventory[i].price << "\t";
                    
                    // --- REMINDER LOGIC ---
                    // If limit exceeds quantity, show alert
                    if (inventory[i].quantity <= LOW_STOCK_LIMIT) {
                        cout << "[!!! LOW STOCK ALERT !!!]";
                    } 
                    else {
                        cout << "OK";
                    }
                    cout << "\n";
                }
            }
        }
        
        // 3. SEARCH PRODUCT
        else if (choice == 3) {
            int searchId;
            bool found = false;
            
            cout << "\nEnter Product ID to search: ";
            cin >> searchId;

            for (int i = 0; i < itemCount; i++) {
                if (inventory[i].id == searchId) {
                    cout << "\nProduct Found:\n";
                    cout << "ID: " << inventory[i].id << "\n"
                         << "Name: " << inventory[i].name << "\n"
                         << "Quantity: " << inventory[i].quantity << "\n"
                         << "Price: $" << inventory[i].price << "\n";
                    
                    if (inventory[i].quantity <= LOW_STOCK_LIMIT) {
                        cout << "Status: WARNING! Stock is low. Please restock soon.\n";
                    } 
                    else {
                        cout << "Status: In Stock\n";
                    }
                    
                    found = true;
                    break; 
                }
            }
            if (!found) {
                cout << "\nProduct with ID " << searchId << " not found.\n";
            }
        }

        // UPDATE QUANTITY
        else if (choice == 4)
        {
            int searchId;
            bool found = false;
            
            cout << "\nEnter Product ID to update stock: ";
            cin >> searchId;

            for (int i = 0; i < itemCount; i++) {
                
                if (inventory[i].id == searchId) {
                    cout << "Current Quantity for " << inventory[i].name << " is: " << inventory[i].quantity << "\n";
                    cout << "Enter New Total Quantity: ";
                    
                    // Update the value of quantity in array
                    cin >> inventory[i].quantity; 
                    
                    cout << "\nStock updated successfully!\n";
                    
                    // Checking alert according to new quantity
                    if (inventory[i].quantity <= LOW_STOCK_LIMIT) {
                        cout << "Warning: Stock is still below the safety limit!\n";
                    }
                    
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "\nProduct with ID " << searchId << " not found.\n";
            }
        }
        
        // 5. EXIT
        else if (choice == 5) {
            break;
        }
        
        else {
            cout << "\nInvalid choice! Please try again.\n";
        }
    }

    return 0;
}