#include <bits/stdc++.h>
using namespace std;
#define DEF 1080

int main() {
    size_t dial, c1, c2, c3;
    short sum = 0, deg;
    while (true) {
        cin >> dial >> c1 >> c2 >> c3;
        if (dial == 0 && c1 == 0 &&
            c2 == 0 && c3 == 0)
            break;
        
        deg = dial - c1;
        if (deg < 0) deg += 40; sum += deg;
        deg = c2 - c1;
        if (deg < 0) deg += 40; sum += deg;
        deg = c2 - c3;
        if (deg < 0) deg += 40; sum += deg;
        sum = sum * 9 + DEF;
        
        printf("%d\n", sum);
        sum = 0;
    }
}