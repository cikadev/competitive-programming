#include <bits/stdc++.h>
using namespace std;
#define LENGTH 81

int main() {
    int req, prop, comp, n = 1;
    char acc[LENGTH], nameProp[LENGTH], name;
    while (cin >> req >> prop)
    {
        if (req == 0 && prop == 0)
            break;
        if (n > 1)
            printf("\n");
        while (req--)
            cin.ignore(81, '\n');
        comp = 0;
        while (prop--) {
            int r; float price;
            scanf("%s%f%d", nameProp, &price, &r);
            if (r > comp) {
                comp = r;
                memset(acc, '\0', LENGTH);
                strcpy(acc, nameProp);
                memset(nameProp, '\0', LENGTH);
            }
            for (; r--; cin.ignore(81, '\n')){}
        }
        printf("RFP #%d\n%s\n", n, acc);
    }
}