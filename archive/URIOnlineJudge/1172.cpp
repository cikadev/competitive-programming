#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int arr[10];
    for (int c = 0; c < 10; c++)
    {
        cin >> arr[c];
        if (arr[c] <= 0)
            arr[c] = 1;
        printf("X[%d] = %d\n", c, arr[c]);
    }
}