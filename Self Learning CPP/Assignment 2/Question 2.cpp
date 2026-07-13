#include <iostream>
using namespace std;

class Demo {
private:
    int num;

public:
    // Constructor
    Demo() {
        num = 10;
        cout << "Constructor called. Value of num = " << num << endl;
    }

    // Parameterized Constructor
    Demo(int x) {
        num = x;
        cout << "Parameterized Constructor called. Value = " << num << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called. Object destroyed." << endl;
    }

    void display() {
        cout << "Value of num = " << num << endl;
    }
};

int main() {
    Demo obj1;        // Default constructor
    obj1.display();

    Demo obj2(50);    // Parameterized constructor
    obj2.display();

    return 0;
}