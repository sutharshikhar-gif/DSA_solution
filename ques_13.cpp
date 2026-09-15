#include <iostream>
using namespace std;

int main() {
    int day, month, year;

    cout << "Enter day, month and year: ";
    cin >> day >> month >> year;

    bool valid = true;

    // Check if month is valid
    if (month < 1 || month > 12) {
        valid = false;
    }
    else {
        int daysInMonth;

        // February
        if (month == 2) {
            // Leap year condition
            if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
                daysInMonth = 29;
            else
                daysInMonth = 28;
        }
        // Months with 30 days
        else if (month == 4 || month == 6 || month == 9 || month == 11) {
            daysInMonth = 30;
        }
        // Months with 31 days
        else {
            daysInMonth = 31;
        }

        // Check if day is valid
        if (day < 1 || day > daysInMonth) {
            valid = false;
        }
    }

    if (valid)
        cout << "Valid date";
    else
        cout << "Invalid date";

    return 0;
}
