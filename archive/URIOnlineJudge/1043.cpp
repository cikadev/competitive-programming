#include <iostream>
#include <iomanip>

int main() {
	double x, y, z;
	std:: cout << std:: fixed << std:: setprecision(1); 
	std:: cin >> x >> y >> z;
	if (x+y > z && x+z > y && y+z > x)
		std:: cout << "Perimetro = " << x+y+z << std:: endl;
	else
		std:: cout << "Area = " << (x+y)/2.0 * z << std:: endl; 
}
