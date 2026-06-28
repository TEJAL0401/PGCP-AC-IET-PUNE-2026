// Decleare function and call it by reference 
#include<iostream>
using namespace std;
void show(int &a);
void display(int a);

int main()
{
int i=12;

    show(i);     // Call by reference
    display(i);  // Call by value

}


void show(int &a)
{
    a=a+15;
cout<<"value in show function :"<< a <<endl;
}

void display(int a)
{
    cout << "Value of i: " << a << endl;   
}













// #include <iostream>
// using namespace std;

// // Function declarations
// void show(int &a);   // Call by reference
// void display(int a); // Call by value

// int main() {
//     int i = 12;

//     show(i);     // Call by reference
//     display(i);  // Call by value

//     cout << "Value of i after function calls: " << i << endl;
//     return 0;
// }

// // Function definitions
// void show(int &a) {
//     cout << "Inside show (by reference): " << a << endl;
//     a += 5; // Changes original variable
// }

// void display(int a) {
//     cout << "Inside display (by value): " << a << endl;
//     a += 5; // Does not change original variable
// }
