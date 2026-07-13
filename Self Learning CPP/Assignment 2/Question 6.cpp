#include <iostream>
using namespace std;

class Shape {   
public:
    virtual void area() = 0;   
};

class Circle : public Shape {
    float r;
public:
    Circle(float r) { this->r = r; }
    void area() {
        cout << "Area of Circle: " << 3.14 * r * r << endl;
    }
};

int main() {
    Shape* s;
    Circle c(5);
    s = &c;
    s->area();
}