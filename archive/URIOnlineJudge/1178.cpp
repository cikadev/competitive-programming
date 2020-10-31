#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double t;
    cin >> t;
    for (int n = 0; n < 100; n++)
    {
        cout << fixed << setprecision(4) << "N[" << n << "] = " << t << endl;
        t /= 2;
    }
}