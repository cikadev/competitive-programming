#include <iostream>

int main() {
	long int a;
	std::cin >> a;
	std::cout << a/3600 << ':' << a%3600/60 << ':' << a%3600%60 << std::endl;
}