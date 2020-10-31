#include <iostream>
#include <iomanip>
#include <math.h>

int main() {
	double x, y;
	double *temp = new double;

	std::cin >> x;
	*temp = x;
	std::cin >> y;
	
	std::cin >> x;
	*temp = x - *temp;
	x = double(pow(*temp, 2));

	*temp = y;
	std::cin >> y;
	*temp = y - *temp;
	y = double(pow(*temp, 2));
	
	delete temp;

	std::cout << std::fixed;
	std::cout << std::setprecision(4) << sqrt((x+y)) << std::endl;
}