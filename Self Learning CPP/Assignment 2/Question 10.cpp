#include <iostream>
using namespace std;

class InvalidAgeException {
public:
    void message() {
        cout << "Age must be 18 or above!\n";
    }
};

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    try {
        if (age < 18)
            throw InvalidAgeException();
        cout << "Eligible to vote\n";
    }
    catch (InvalidAgeException e) {
        e.message();
    }
}