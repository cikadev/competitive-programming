#include <iostream>

int main() {
	long int a;
	std::cin >> a;
	std::cout << a/365 << " ano(s)" << '\n';
	std::cout << a%365/30 << " mes(es)" << '\n';
	std::cout << a%365%30 << " dia(s)" << '\n';
}