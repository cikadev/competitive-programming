#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double X;
	std::cin >> X;
	std::cout << fixed << setprecision(4) << "A=" << ((X*X)*3.14159) << std::endl;
}