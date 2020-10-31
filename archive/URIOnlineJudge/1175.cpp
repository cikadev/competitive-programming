#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int c = 20, arr[c];
    while (c--)
        cin >> arr[c];
    for (c = 0; c < 20; c++)
    {
        printf("N[%d] = %d\n", c, arr[c]);
    }
}