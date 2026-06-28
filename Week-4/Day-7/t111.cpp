// Program to create Ticket Booking System

#include <iostream>
using namespace std;

const int TOTAL_SEATS = 10; // We have 10 seats in total

int main() {
    // Array to store booking status (false = Empty, true = Booked)
    bool seats[TOTAL_SEATS] = {false}; 
    
    // Array to store name of customers
    string customerNames[TOTAL_SEATS] = {""}; 

    int choice;
    while (true) {
        cout << "\n===== TICKET BOOKING SYSTEM =====\n";
        cout << "1. View Available Seats\n";
        cout << "2. Book a Ticket\n";
        cout << "3. Cancel a Ticket\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            // View Seating slots
            case 1: 
                cout << "\n--- Seating Arrangement ---\n";
                for (int i = 0; i < TOTAL_SEATS; i++) {
                    cout << "Seat " << (i + 1) << ": ";
                    if (seats[i] == false) {
                        cout << "[ EMPTY ]\n";
                    } 
                    else {
                        cout << "[ BOOKED by " << customerNames[i] << " ]\n";
                    }
                }
                break;

            // Booking a seat
            case 2: 
                int seatNo;

                cout << "\nEnter Seat Number to book (1-" << TOTAL_SEATS << "): ";
                cin >> seatNo;

                if (seatNo < 1 || seatNo > TOTAL_SEATS) {
                    cout << "Invalid Seat Number!\n";
                } 
                
                // Check if seat is already booked
                else if (seats[seatNo - 1] == true) {
                    cout << "Sorry, this seat is already booked!\n";
                } 
                else {
                    cout << "Enter Customer Name: ";
                    cin.ignore();
                    getline(cin, customerNames[seatNo - 1]);
                    
                    seats[seatNo - 1] = true;    // Marked the seat as booked
                    cout << "Seat " << seatNo << " successfully booked for " << customerNames[seatNo - 1] << "!\n";
                }
                break;

            // Seat cancellation
            case 3:
                cout << "\nEnter Seat Number to cancel (1-" << TOTAL_SEATS << "): ";
                cin >> seatNo;

                if (seatNo < 1 || seatNo > TOTAL_SEATS) {
                    cout << "Invalid Seat Number!\n";
                } 
                
                // To check whether seat is booked or not
                else if (seats[seatNo - 1] == false) {
                    cout << "This seat is already empty!\n";
                } 
                else {
                    cout << "Ticket cancelled for " << customerNames[seatNo - 1] << ".\n";
                    seats[seatNo - 1] = false;         // Marked the seat as empty
                    customerNames[seatNo - 1] = "";    // Removed customer name
                    cout << "Seat " << seatNo << " is now available again.\n";
                }
                break;

            case 4:
                cout << "\nThank you for booking with us!\n";
                return 0;

            default:
                cout << "\nInvalid Choice! Try again.\n";
        }
    }
    return 0;
}