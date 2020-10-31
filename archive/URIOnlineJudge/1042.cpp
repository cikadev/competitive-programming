#include <iostream>

void asc(int,int,int);

int main() {
	int x, y, z;
	std:: cin >> x >> y >> z;
	asc(x, y, z);
	std:: cout << '\n' << x << '\n' << y << '\n' << z << '\n'; 
}

void asc(int x, int y, int z)
{
	if (x < y && x < z && y < z)
		std:: cout << x << '\n' << y << '\n' << z << '\n';
	else 
	{
		int t = x;
		x = (x < y) ? x : y;
		y = (x == y) ? t : y;
		t = y;
		y = (y < z) ? y : z;
		z = (y == z) ? t : z;
		asc(x, y, z);
	}
}