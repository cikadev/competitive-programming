#include <bits/stdc++.h>
using namespace std;

int main() {
    int K, div[2], res[2];
    while (cin >> K)
    {
        if (K == 0)
            break;
        cin >> div[0] >> div[1];
        while (K--)
        {
            cin >> res[0] >> res[1];
            if (res[0] == div[0] || res[1] == div[1]) {
                printf("divisa\n");
                continue;
            }
            if (res[0] > div[0]) 
            {
                if (res[1] > div[1])
                    printf("NE\n");
                else
                    printf("SE\n");
            }
            else
            {
                if (res[1] > div[1])
                    printf("NO\n");
                else
                    printf("SO\n");
            }
            
        }
    }
}