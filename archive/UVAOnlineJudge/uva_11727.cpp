#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, sal[3]; cin >> T;

    for (size_t i = 1; i <= T; i ++) {
        cin >> sal[0] >> sal[1] >> sal[2];
        sort(sal, sal+3);
        printf("Case %d: %d\n", i, sal[1]);
    }
}