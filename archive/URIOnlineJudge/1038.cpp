#include <iostream>
#include <iomanip>

int main() {
	int x, y;
	std:: cout << std:: fixed << std:: setprecision(2);
	std:: cin >> x >> y;
	switch(x)
	{
		case 1:
			std:: cout << "Total: R$ " << y*4.00 << '\n';
			break;
		case 2:
			std:: cout << "Total: R$ " << y*4.50 << '\n';
			break;
		case 3:
			std:: cout << "Total: R$ " << y*5.00 << '\n';
			break;
		case 4:
			std:: cout << "Total: R$ " << y*2.00 << '\n';
			break;
		case 5:
			std:: cout << "Total: R$ " << y*1.50 << '\n';
			break;
	}
}