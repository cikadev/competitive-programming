#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a, b;
	double c;
	std::cin >> a >> b >> c;
	std::cout << "NUMBER = " << a << std::endl;
	std::cout << fixed << setprecision(2) << "SALARY = U$ " << double(b*c) << std::endl;
}