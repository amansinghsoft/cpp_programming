#include <iostream>
using namespace std;

int main() {
    int day, month, year;


    cout << "Enter a date in dd mm yyyy format: ";
    cin >> day >> month >> year;

    if (year < 1 ) {
        cout << "Invalid year." << endl;
        return 0;
    }

    if (month < 1 || month > 12) {
        cout << "Invalid month." << endl;
        return 0;
    }

    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (day < 1 || day > daysInMonth[month - 1]) {
        cout << "Invalid day." << endl;
        return 0;
    }

    cout << "The date " << day << "/" << month << "/" << year << " is valid." << endl;

    return 0;
}
