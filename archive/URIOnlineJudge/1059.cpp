#include <iostream>

int main () {
	int n = 0;
	while (!(n += 2) || n <= 100)
		std:: cout << n << std:: endl;
}