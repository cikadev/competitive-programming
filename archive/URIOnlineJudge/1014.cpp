#include <iostream>
#include <iomanip>

int main() {
	double a, b;
	std::cin >> a >> b;
	std::cout << std::fixed;
	std::cout << std::setprecision(3) << a/b << " km/l" << std::endl;
}