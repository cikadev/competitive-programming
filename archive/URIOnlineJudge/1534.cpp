#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int am = -1;
    while (cin >> am) {
        if (cin.eof()) {
            break;
        }
        for (int x = 1; x <= am; x++) {
            for (int y = 1; y <= am; y++) {
                if (abs(x-1) == abs(y-am))
                    cout << 2;
                else if (x == y)
                    cout << 1;
                else
                    cout << 3;
            }
            cout << endl;
        }
    }
}