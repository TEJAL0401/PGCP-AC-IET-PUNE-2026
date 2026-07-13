#include <iostream>
using namespace std;

// ----------- DATE CLASS -----------
class Date {
private:
    int day, month, year;

public:
    // Input function
    void read() {
        cout << "Enter date (dd mm yyyy): ";
        cin >> day >> month >> year;
    }

    // Display function
    void print() {
        cout << (day < 10 ? "0" : "") << day << "/"
             << (month < 10 ? "0" : "") << month << "/"
             << year << endl;
    }

    // Overloaded + operator (Add days)
    Date operator+(int d) {
        Date temp = *this;
        temp.day += d;

        // Simple logic (assuming 30 days/month)
        while (temp.day > 30) {
            temp.day -= 30;
            temp.month++;
        }

        while (temp.month > 12) {
            temp.month -= 12;
            temp.year++;
        }

        return temp;
    }

    // Overloaded - operator (Subtract days)
    Date operator-(int d) {
        Date temp = *this;
        temp.day -= d;

        while (temp.day <= 0) {
            temp.day += 30;
            temp.month--;
        }

        while (temp.month <= 0) {
            temp.month += 12;
            temp.year--;
        }

        return temp;
    }
};

class Time {
private:
    int hour, minute, second;

public:
    // Input function
    void read() {
        cout << "Enter time (hh mm ss): ";
        cin >> hour >> minute >> second;
    }

    
    void print() {
        cout << (hour < 10 ? "0" : "") << hour << ":"
             << (minute < 10 ? "0" : "") << minute << ":"
             << (second < 10 ? "0" : "") << second << endl;
    }

    
    Time operator+(int s) {
        Time temp = *this;
        temp.second += s;

        while (temp.second >= 60) {
            temp.second -= 60;
            temp.minute++;
        }

        while (temp.minute >= 60) {
            temp.minute -= 60;
            temp.hour++;
        }

        while (temp.hour >= 24) {
            temp.hour -= 24;
        }

        return temp;
    }

    Time operator-(int s) {
        Time temp = *this;
        temp.second -= s;

        while (temp.second < 0) {
            temp.second += 60;
            temp.minute--;
        }

        while (temp.minute < 0) {
            temp.minute += 60;
            temp.hour--;
        }

        while (temp.hour < 0) {
            temp.hour += 24;
        }

        return temp;
    }
};


int main() {
    Date d1, d2;
    Time t1, t2;

    cout << "\n--- DATE OPERATIONS ---\n";
    d1.read();

    cout << "Original Date: ";
    d1.print();

    d2 = d1 + 10;
    cout << "After Adding 10 Days: ";
    d2.print();

    d2 = d1 - 5;
    cout << "After Subtracting 5 Days: ";
    d2.print();

    cout << "\n--- TIME OPERATIONS ---\n";
    t1.read();

    cout << "Original Time: ";
    t1.print();

    t2 = t1 + 120;
    cout << "After Adding 120 Seconds: ";
    t2.print();

    t2 = t1 - 90;
    cout << "After Subtracting 90 Seconds: ";
    t2.print();

    return 0;
}