#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double l, p, sum = 0;
    char sm;
    cin >> p >> sm;
    for (int x = 0; x < 12; x++)
    {
        for (int y = 0; y < 12; y++)
            {
                cin >> l;
                if (x == p)
                    sum += l;
            }
    }
    if (sm == 'S')
        cout << fixed << setprecision(1) << sum << endl;
    else if (sm == 'M')
        cout << fixed << setprecision(1) << sum/12 << endl;
}