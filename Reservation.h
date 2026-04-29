#ifndef RESERVATION_H
#define RESERVATION_H

#include <iostream>
#include "Passenger.h"
#include "Train.h"
using namespace std;

class Reservation {
private:
    Passenger p;
    Train t;
    int seatNo;

public:
    void reserveTicket() {
        cout << "\n--- Passenger Details ---\n";
        p.input();

        cout << "\n--- Train Details ---\n";
        t.inputTrain();

        if (t.bookSeat()) {
            cout << "\nSeat booked successfully!\n";
            cout << "Enter Seat Number: ";
           seatNo = rand() % 100 + 1;
        } else {
            cout << "\nNo seats available!\n";
        }
    }

    void displayTicket() {
        cout << "\n===== TICKET =====\n";
        p.display();
        t.displayTrain();
        cout << "Seat Number: " << seatNo << endl;
    }
};

#endif