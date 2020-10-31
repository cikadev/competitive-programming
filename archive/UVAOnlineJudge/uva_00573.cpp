#include <bits/stdc++.h>
using namespace std;

int main() {
    int height, climb, slide, factor, dist;
    int day;

    while (cin >> height)
    {
        if (height == 0)
            break;
        scanf("%d%d%d", &climb, &slide, &factor);
        factor *= climb;
        height *= 100, climb *= 100; slide *= 100;
        dist = 0, day = 1;
        while (true)
        {
            if (day > 1)
                climb -= factor;
            dist += climb;
            if (dist > height) {
                printf("success on day %d\n", day);
                break;
            }
            if (climb < 0 || dist - slide < 0) {
                printf("failure on day %d\n", day);
                break;
            }
            dist -= slide;
            day++;
        }
    }

}