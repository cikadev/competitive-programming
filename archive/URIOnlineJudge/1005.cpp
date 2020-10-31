#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double X, Y, Z;
	std::cin >> X >> Y >> Z;
	std::cout << fixed << setprecision(1) << "MEDIA = " << fixed << double((X*2+Y*3+Z*5)/10) << std::endl;
}