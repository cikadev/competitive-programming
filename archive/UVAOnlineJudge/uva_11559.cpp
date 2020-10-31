#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, B, H, W, p, a, min;
    while (scanf("%d%d%d%d", &N, &B, &H, &W) != EOF) {
        min = 2e+6;
        while (H--)
        {
            cin >> p;
            p *= N;
            for (size_t i = 0; i < W; i++)
            {
                cin >> a;
                if (a >= N && p < min) {
                    min = p;
                }
            }
        }
        if (min > B)
            printf("stay home\n");
        else 
            printf("%d\n", min);
    }
}