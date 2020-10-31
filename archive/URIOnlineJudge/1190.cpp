#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double l, sum = 0;
    char sm;
    cin >> sm;
    for (int x = 0; x < 12; x++)
    {
        for (int y1 = 11, y2 = 0; y1 >= 0 && y2 < 12; y1--, y2++)
        {
            cin >> l;
            if (y1 < x && y2 > x)
                sum += l;
        }
    }
    if (sm == 'S')
        cout << fixed << setprecision(1) << sum << endl;
    else if (sm == 'M')
        cout << fixed << setprecision(1) << sum/30 << endl;
}