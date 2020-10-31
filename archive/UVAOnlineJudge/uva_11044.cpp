#include <bits/stdc++.h>
using namespace std;

int main() {
    size_t n; int r, c;
    cin >> n;
    while (n--) {
        scanf("%d%d", &r, &c);
        printf("%d\n", (r / 3) * (c / 3));
    }
}