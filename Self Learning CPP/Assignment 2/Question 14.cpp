#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    // Vector
    vector<int> v = {10, 20, 30};
    cout << "Vector: ";
    for (int x : v)
        cout << x << " ";

    cout << endl;

    // Map
    map<int, string> m;
    m[1] = "Prachi";
    m[2] = "Amit";

    cout << "Map:\n";
    for (auto x : m)
        cout << x.first << " -> " << x.second << endl;
}