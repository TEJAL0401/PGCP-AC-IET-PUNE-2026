#include <iostream>
using namespace std;

class Outer {
private:
    int outerData;

public:
    Outer() {
        outerData = 10;
    }

    
    class Inner {
    private:
        int innerData;

    public:
        Inner() {
            innerData = 20;
        }

        void displayInner() {
            cout << "Inner class data: " << innerData << endl;
        }
    };

    void displayOuter() {
        cout << "Outer class data: " << outerData << endl;
    }
};

int main() {
    Outer objOuter;
    objOuter.displayOuter();

    
    Outer::Inner objInner;
    objInner.displayInner();

    return 0;
}