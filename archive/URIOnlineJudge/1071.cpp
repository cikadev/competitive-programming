#include <iostream>
#include <stdlib.h> 
using namespace std;

int main () {
	int x, y, n;
	cin >> x >> y;
	n = (x < y) ? y : x;
	x = (x < y) ? x : y;
	y = n;
	x++;
	for (n = 0; !(x = x-abs((x%2))+1) || x < y; x += 2)
		n += x;
	cout << n << endl;
}