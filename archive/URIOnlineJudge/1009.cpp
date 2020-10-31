#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double a, b;
	std::cin.ignore(25, '\n') >> a >> b;
	std::cout << fixed << setprecision(2) << "TOTAL = R$ " << double(a+(b*15/100)) << std::endl;
}