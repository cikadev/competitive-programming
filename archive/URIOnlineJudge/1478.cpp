#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int am = -1;
    while (true) {
        cin >> am;
        if (am == 0) {
            break;
        }
        for (int x = 1; x <= am; x++) {
            for (int y = 1; y <= am; y++) {
                int temp = abs((x-y))+1;
                (y == 1) ? cout << setw(3) << temp : cout << setw(4) << temp;
            }
            cout << endl;
        }
        cout << endl;
    }
}