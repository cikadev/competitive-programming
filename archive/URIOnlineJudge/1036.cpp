#include <iostream>
#include <math.h>
#include <iomanip>

double disk(double a, double b, double c) {
	return pow(b, 2.0) - (4*a*c);
}

int main() {
	std:: cout << std:: fixed;
	std:: cout << std:: setprecision(5);

	double a, b, c;
	std:: cin >> a >> b >> c;
	if ( disk(a,b,c) < 0 || a == 0)
	{
		std:: cout << "Impossivel calcular\n";
		exit(1);
	}
	std:: cout << "R1 = " << ((-b) + sqrt(disk(a,b,c)))/(2*a) << std:: endl;
	std:: cout << "R2 = " << ((-b) - sqrt(disk(a,b,c)))/(2*a) << std:: endl;

}