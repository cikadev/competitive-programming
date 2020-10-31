#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a;
	double *b = new double;
	double c;
	std::cin.ignore(100, ' ') >> a >> c;
	cout.fixed;
	*b = a * c;
	std::cin.ignore(100, ' ') >> a >> c;
	*b += a * c;
	c = *b;
	delete b;
	std::cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << double(c) << std::endl;
}