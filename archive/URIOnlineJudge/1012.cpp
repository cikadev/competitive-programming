#include <iostream>
#include <iomanip>

int main() {
	double a, b, c;
	std::cin >> a >> b >> c;
	std::cout << std::fixed;
	std::cout << std::setprecision(3) << "TRIANGULO: " << a*c/2.0 << std::endl;
	std::cout << std::setprecision(3) << "CIRCULO: " << 3.14159*(c*c) << std::endl;
	std::cout << std::setprecision(3) << "TRAPEZIO: " << (a+b)*c/2.0 << std::endl;
	std::cout << std::setprecision(3) << "QUADRADO: " << b*b << std::endl;
	std::cout << std::setprecision(3) << "RETANGULO: " << a*b << std::endl;

}