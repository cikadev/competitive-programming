#include <iostream>
using namespace std;

int main () {
	int x, n = -1;
	cin >> x;
	while (!(n += 2) || n <= x)
		std:: cout << n << std:: endl;
}