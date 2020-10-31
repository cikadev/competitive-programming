#include <iostream>
using namespace std;


int main() {
	int x, y, sn, st;
	cin >> x >> y;
	
	if (x > y) swap(x,y);
	
	sn = (y - x + 1) * (x+y) / 2;
	
	x = x - (x%13) + 13 * ((x%13) ? 1 : 0);
	y = y - (y%13);

	st = ((y - x)/13.0 + 1) * (x+y) / 2;
	cout << sn - st << endl;
}