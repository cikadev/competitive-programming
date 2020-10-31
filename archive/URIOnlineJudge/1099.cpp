#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int n, x, y, t = 0;
	cin >> n;

	while (n--)
	{
		cin >> x >> y;
		if (x > y) swap(x, y);
		x++;
		while ((x = x-abs(x%2)+1) < y)
		{
			t += x;
			x += 2;
		}
		cout << t << endl;
		t = 0;
	}
}