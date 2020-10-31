#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
    int c, fibo;
    cin >> c;
	const double Phi = (1+sqrt(5))/2;
    const double phi = (1-sqrt(5))/2;
    while (c--)
    {
        cin >> fibo;
        cout << double(( pow(Phi, fibo) - pow((phi), fibo) ) / sqrt(5)) << endl;
        double vFib = double(( pow(Phi, fibo) - pow((phi), fibo) ) / sqrt(5));
        printf("Fib(%d) = %.0f\n", fibo, vFib);
    }
}