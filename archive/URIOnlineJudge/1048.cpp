#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

void printSal(double, int);

int main () {
	double a;
	cin >> a;
	if (a >= 0 && a <= 400.00)
		printSal(a, 15);
	else if (a > 400.00 && a <= 800.00)
		printSal(a, 12);
	else if (a > 800.00 && a <= 1200.00)
		printSal(a, 10);
	else if (a > 1200.00 && a <= 2000.00)
		printSal(a, 7);
	else if (a > 2000.00)
		printSal(a, 4);
}

void printSal(double sa, int pc)
{
	printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d", sa+(sa*pc/100), (sa*pc/100), pc);
	cout << " %\n";
}