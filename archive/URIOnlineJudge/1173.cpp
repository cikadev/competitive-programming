#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int arr[10];
    cin >> arr[0];
    printf("N[%d] = %d\n", 0, arr[0]);
    for (int c = 1; c < 10; c++)
    {
        arr[c] = arr[c-1]*2;
        printf("N[%d] = %d\n", c, arr[c]);
    }
}