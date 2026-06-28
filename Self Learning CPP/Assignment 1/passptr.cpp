#include <iostream>
using namespace std;

void getData(int* ptr) {
    cout << "Enter a number: ";
    cin >> *ptr;  // store input at the address pointed by ptr
}

void displayData(int* ptr) {
    cout << "You entered: " << *ptr << endl;
}

int main() {
    int* num = new int; 

    getData(num);         
    displayData(num);     
    return 0;
}