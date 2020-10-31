#include <iostream>
using namespace std;

int main() {
	int x, y, n, r = 0;
	cin >> n;
	while (n--)
	{
		cin >> x >> y;
		x += ((x%2)) ? 0 : 1;
		while (y--)
		{
			r += x;
			x += 2;
		}
		cout << r << endl;
		r = 0;
	}
}