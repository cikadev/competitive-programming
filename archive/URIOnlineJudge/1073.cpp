#include <iostream>

int main () {
	int x, n = 0;
	std:: cin >> x;
	while (!(n += 2) || n <= x)
		std:: cout << n << '^' << 2 << " = " << n*n << std:: endl;
}