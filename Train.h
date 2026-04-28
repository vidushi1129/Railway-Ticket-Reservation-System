#ifndef TRAIN_H
#define TRAIN_H

#include <iostream>
#include <string>
using namespace std;

class Train {
private:
    int trainNo;
    string trainName;
    string source;
    string destination;
    int seatsAvailable;

public:
    void inputTrain() {
        cout << "Enter Train Number: ";
        cin >> trainNo;

        cout << "Enter Train Name: ";
        cin >> trainName;

        cout << "Enter Source: ";
        cin >> source;

        cout << "Enter Destination: ";
        cin >> destination;

        cout << "Enter Seats Available: ";
        cin >> seatsAvailable;
    }

    void displayTrain() {
        cout << "\nTrain Details:\n";
        cout << "Train No: " << trainNo << endl;
        cout << "Train Name: " << trainName << endl;
        cout << "From: " << source << endl;
        cout << "To: " << destination << endl;
        cout << "Seats Available: " << seatsAvailable << endl;
    }

    bool bookSeat() {
        if (seatsAvailable > 0) {
            seatsAvailable--;
            return true;
        }
        return false;
    }
};

#endif