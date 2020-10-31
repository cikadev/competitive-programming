#include <iostream>
using namespace std;


int main() {
	int x, y;
	cin >> x >> y;
	if (x > y) swap(x, y);
	x++;
	while (x < y && (x%5 != 2 && x%5 != 3))
		x++;
	while (x < y)
	{
		if (x%5 == 2)
		{
			cout << x << endl; 
			x++;
		}
		else if (x%5 == 3)
		{
			cout << x << endl;
			x += 4;
		}
	}
}