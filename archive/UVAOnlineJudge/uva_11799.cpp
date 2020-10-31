#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, N, c, max;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        scanf("%d", &N);
        max = 1;
        while (N--)
        {
            scanf("%d", &c);
            if (c > max)
                max = c;
        }
        printf("Case %d: %d\n", i, max);
    }
}