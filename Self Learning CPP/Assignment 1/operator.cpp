#include<iostream>
using namespace std;

int main(){
    int a, b;
    a = 10;
    b = 20;

    // Logical Operator &&
    if(b< 30 && a> 5){
        cout<< "condition fpr AND operator is true \n";
    }

    // Logical operator ||
    if(a>5 || b>15){
        cout<<"condition for OR operator is true \n";
    }
    
    // Logical ! operator
    if(!(a>10)){
        cout << "Condition for NOT operator is true\n";
    }

    // Unary Operator
    // Increment Operator

    a++;  //post increment
    cout<< "After post increment operator value of a is "<< a<<endl;

    ++a; // pre increment
    cout<< "After pre increment operator value of a is "<< a<<endl;

    // Decrement Operator

    b--;  // post decrement
    cout<<"After post decrement operator value of b is "<< b << endl;

    --b; //pre decrement
    cout<<"After pre decrement operator value of b is "<< b << endl;


    // Ternary Operator
    int min = a < b ? a : b;
    cout << min<< endl;


    // Assignment Operator
    a += 5;
    cout<< "a += 5 is "<< a<<endl;

    b *= 2;
    cout << "b *= 2 is " << b << endl;

    a %= 2;
    cout<< "a %=2 is " << a << endl;

}