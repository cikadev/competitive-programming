#include <iostream>

int main() {
	int x, y;
	std:: cin >> x >> y;
	if (y % x == 0 || x % y == 0)
		std:: cout << "Sao Multiplos\n";
	else
		std:: cout << "Nao sao Multiplos\n";
}
