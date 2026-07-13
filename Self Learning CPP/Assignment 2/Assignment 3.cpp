#include <iostream>
using namespace std;

class College {
public:
    class Student {
    public:
        void show() {
            cout << "Student belongs to CDAC College\n";
        }
    };
};

int main() {
    College::Student s;
    s.show();
}