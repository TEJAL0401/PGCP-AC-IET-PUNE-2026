#include <iostream>
using namespace std;

// Base Class 1
class Printer {
protected:
    string brand;

public:
    Printer(string b) {
        brand = b;
    }
};

// Base Class 2
class Scanner {
protected:
    int scanResolution;

public:
    Scanner(int r) {
        scanResolution = r;
    }
};

// Derived Class (Multiple Inheritance)
class AllInOnePrinter : public Printer, public Scanner {
private:
    int printSpeed;

public:
    AllInOnePrinter(string b, int r, int s)
        : Printer(b), Scanner(r) {
        printSpeed = s;
    }

    // Friend Function
    friend void showDetails(AllInOnePrinter obj);

    // Friend Class
    friend class ServiceCenter;
};

// Friend Function Definition
void showDetails(AllInOnePrinter obj) {
    cout << "Brand: " << obj.brand << endl;
    cout << "Scan Resolution: " << obj.scanResolution << " dpi" << endl;
    cout << "Print Speed: " << obj.printSpeed << " ppm" << endl;
}

// Friend Class
class ServiceCenter {
public:
    void repair(AllInOnePrinter obj) {
        cout << "\nService Center Accessing Private Data..." << endl;
        cout << "Repairing Printer Brand: " << obj.brand << endl;
        cout << "Print Speed: " << obj.printSpeed << endl;
    }
};

int main() {
    AllInOnePrinter printer("HP", 1200, 30);

    // Friend function call
    showDetails(printer);

    // Friend class usage
    ServiceCenter sc;
    sc.repair(printer);

    return 0;
}