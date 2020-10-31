#include <iostream>
using namespace std;

int main() {
	int x, y, c = 1, r;
	cin >> x >> y;

	while(c <= y)
	{
		r = 0;
		while (r++ < x)
		{
			cout << c;
			if (r < x)
				cout << ' ';
			c++;
		}
		cout << endl;
	}
}
