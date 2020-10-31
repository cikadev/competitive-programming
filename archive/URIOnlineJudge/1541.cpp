#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, y, p;
    while (cin >> x) {
        if (x == 0)
            break;
        cin >> y >> p;
        cout << int( sqrt((100*x*y/p)) ) << endl;
    }
}