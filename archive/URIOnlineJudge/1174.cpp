#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main() {
    double arr[100];
    for (int c = 0; c < 10; c++)
    {
        cin >> arr[c];
        if (arr[c] <= 10)
            printf("A[%d] = %.1f\n", c, arr[c]);
    }
}