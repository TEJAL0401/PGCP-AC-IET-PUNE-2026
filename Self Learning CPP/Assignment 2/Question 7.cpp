#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("data.txt");
    out << "Hello File Handling!";
    out.close();

    ifstream in("data.txt");
    string text;
    getline(in, text);
    cout << "File Content: " << text << endl;
    in.close();
}