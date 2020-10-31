#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int cp;
    while (cin >> cp) {
        if (cin.eof()) break;
        if (cp == 0) cout << "vai ter copa!\n";
        else cout << "vai ter duas!\n";
    }
}