#include <iostream>
#include <iomanip>

int main() {
	double r;
	std::cin >> r;
	std::cout << std::fixed;
	std::cout << std::setprecision(3) << "VOLUME = " << (4.0/3)*3.14159*(r*r*r) << std::endl;
}