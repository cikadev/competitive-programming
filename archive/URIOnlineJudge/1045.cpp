#include <iostream>
#include <iomanip>
#include <math.h>

void status(double, double, double);

double *greater(double*, int, double*);

int main() {
	double a, b, c;
	std:: cin >> a >> b >> c;
	double temp = a, *p = greater(&a, 3, &b);
	a = *p;
	*p = temp;

	status(a, b, c);
}

void status(double a, double b, double c)
{
	if (int(floor(a*10)) >= int(floor(b*10)) + int(floor(c*10)))
		std:: cout << "NAO FORMA TRIANGULO\n";
	else
	{
		if (pow(a, 2) == pow(b, 2) + pow(c, 2))
			std:: cout << "TRIANGULO RETANGULO\n";
		if (pow(a, 2) > pow(b, 2) + pow(c, 2))
			std:: cout << "TRIANGULO OBTUSANGULO\n";
		if (pow(a, 2) < pow(b, 2) + pow(c, 2))
			std:: cout << "TRIANGULO ACUTANGULO\n";
		if (a == b && b == c)
			std:: cout << "TRIANGULO EQUILATERO\n";
		if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a))
			std:: cout << "TRIANGULO ISOSCELES\n";
	}
}

double *greater(double *x, int length, double* y)
{
	while (--length > 0)
	{
		if (*y > *x)
			x = y;
		y--;
	}
	return x;
}