#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int x, y, t = 0;
	while (cin >> x >> y)
	{
		if (x <= 0 || y <= 0)
			break;
		if (x > y) swap(x, y);
		while (x <= y)
		{
			cout << x << ' ';
			t += x;
			x++;
		}
		cout << "Sum=" << t << endl;
		t = 0;
	}

}