#include <iostream>
#include <math.h>

int main() {
	int a, b, c;
	std::cin >> a >> b >> c;
	a = a + b + abs(a-b);
	a /= 2;
	a = a + c + abs(a-c);
	a /= 2;
	std::cout << a << " eh o maior\n";
}