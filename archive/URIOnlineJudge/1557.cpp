#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int am;
    while (true) {
        cin >> am;
        if (am == 0) {
            break;
        }
        int T = log10(pow( 2, (2*(am-1)) ))+2;
        for (int row = 0, num = 1; row < am; row++, num *= 2) {
            for (int col = 0, _num = num; col < am; col++, _num *= 2) {
                (col == 0) ? cout << setw(T-1) << _num : cout << setw(T) << _num;
            }
            cout << endl;
        }
        cout << endl;
    }
    
}