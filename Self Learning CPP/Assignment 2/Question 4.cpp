#include<iostream>
using namespace std;

// 🔹 Base Class
class Printer
{
protected:
    string brand;

public:
    void setBrand(string b)
    {
        brand = b;
    }
};

// 🔹 Inkjet Printer
class Inkjet : public Printer
{
private:
    int inkLevel;

public:
    Inkjet()
    {
        inkLevel = 50;
    }

    void showInk()
    {
        cout << "Ink Level: " << inkLevel << "%" << endl;
    }

    // Friend Function
    friend void showInkLevel(Inkjet);
};

// 🔹 Laser Printer
class Laser : public Printer
{
private:
    int tonerLevel;

public:
    Laser()
    {
        tonerLevel = 70;
    }

    void showToner()
    {
        cout << "Toner Level: " << tonerLevel << "%" << endl;
    }

    // Friend Class
    friend class Service;
};

// 🔹 Multiple Inheritance
class SmartPrinter : public Inkjet, public Laser
{
public:
    void display()
    {
        cout << "Smart Printer Ready\n";
    }
};

// 🔹 Friend Function
void showInkLevel(Inkjet i)
{
    cout << "Friend Access Ink Level: " << i.inkLevel << "%" << endl;
}

// 🔹 Friend Class
class Service
{
public:
    void checkLaser(Laser l)
    {
        cout << "Service checking toner: " << l.tonerLevel << "%" << endl;
    }
};

// 🔷 MAIN FUNCTION
int main()
{
    SmartPrinter sp;

    sp.Inkjet::setBrand("HP");   // using base function
    sp.display();

    // Inkjet operations
    sp.showInk();
    showInkLevel(sp);  // friend function

    // Laser operations
    sp.showToner();

    Service s;
    s.checkLaser(sp);  // friend class accessing private data

    return 0;
}