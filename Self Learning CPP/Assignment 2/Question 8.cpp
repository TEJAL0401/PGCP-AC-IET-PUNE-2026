#include <iostream>
using namespace std;

class Person {
public:
    void show() {
        cout << "I am a person\n";
    }
};

class Student : virtual public Person {};
class Employee : virtual public Person {};

class WorkingStudent : public Student, public Employee {};

int main() {
    WorkingStudent w;
    w.show();   // No ambiguity due to virtual inheritance
}