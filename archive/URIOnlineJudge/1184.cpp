#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double l, sum = 0;
    char sm;
    cin >> sm;
    for (int x = 0; x < 12; x++)
    {
        for (int y = 0; y < 12; y++)
        {
            cin >> l;
            if (y < x)
                sum += l;
        }
    }
    if (sm == 'S')
        cout << fixed << setprecision(1) << sum << endl;
    else if (sm == 'M')
        cout << fixed << setprecision(1) << sum/66 << endl;
}