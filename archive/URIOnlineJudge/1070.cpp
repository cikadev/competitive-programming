#include <iostream>
using namespace std;

int main () {
	int x;
	cin >> x;
	for (int n = 0; !(x = x-(x%2)+1) || n++ < 6; x += 2)
		std:: cout << x << std:: endl;
	
}