#include <iostream>
using namespace std;

class HotelRoom {
private:
    int roomNumber;
    string guestName;
    int daysBooked;

public:
    // Parameterized constructor
    HotelRoom(int r, string g, int d) {
        roomNumber = r;
        guestName = g;
        daysBooked = d;
        cout << "Room " << roomNumber << " booked for " << guestName
             << " for " << daysBooked << " days." << endl;
    }

    // Destructor
    ~HotelRoom() {
        cout << "Room " << roomNumber << " is now free. Checkout completed for "
             << guestName << "." << endl;
    }

    // Display booking details
    void display() {
        cout << "Guest: " << guestName
             << ", Room No: " << roomNumber
             << ", Days Booked: " << daysBooked << endl;
    }
};

int main() {
    cout << "Hotel Booking System\n";

    {
        HotelRoom r1(101, "Dhana", 3);
        {
            HotelRoom r2(102, "Priya", 2);

            cout << "\nBooking Details:\n";
            r1.display();
            r2.display();
        } // r2 goes out of scope here → destructor called

        cout << "\nEnd of program.\n";
    } // r1 goes out of scope here → destructor called

    return 0;
}