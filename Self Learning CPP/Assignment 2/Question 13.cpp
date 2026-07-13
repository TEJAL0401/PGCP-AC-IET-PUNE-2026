#include <iostream>
using namespace std;

template <class T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Int Add: " << add(10, 20) << endl;
    cout << "Float Add: " << add(2.5, 3.5) << endl;
}