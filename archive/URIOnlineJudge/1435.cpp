#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int am = -1;
    int absx, absy, _absx, _absy;
    while (true) {
        cin >> am;
        if (am == 0) {
            break;
        }
        for (int x = 1; x <= am; x++) {
            for (int y = 1; y <= am; y++) {
                absx = x;
                _absx = am-x+1;
                absy = y;
                _absy = am-y+1;
                int temp;
                if (absx < _absx && absx < absy && absx < _absy)
                    temp = absx;
                else if (_absx < absy && _absx < _absy)
                    temp = _absx;
                else if (absy < _absy)
                    temp =  absy;
                else
                    temp = _absy;
                (y == 1) ? cout << setw(3) << temp : cout << setw(4) << temp;
            }
            cout << endl;
        }
        cout << endl;
    }
}