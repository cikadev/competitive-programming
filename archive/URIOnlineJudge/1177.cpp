#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int n = 0; n < 1000;)
        for (int m = 0; m < t && n < 1000; m++, n++)
            cout << "N[" << n << "] = " << m << endl;
}