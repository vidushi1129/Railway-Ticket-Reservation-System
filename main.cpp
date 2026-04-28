#include <iostream>
#include "Reservation.h"
using namespace std;

int main() {
    Reservation r;
    int choice;

    do {
        cout << "\n===== Railway Ticket Reservation System =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Show Ticket\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                r.reserveTicket();
                break;
            case 2:
                r.displayTicket();
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 3);

    return 0;
}