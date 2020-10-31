#include <iostream>

using namespace std;

int main() {
	int n, c, p1, p2;
	double g1, g2;
	cin >> c;
	while (c--)
	{
		cin >> p1 >> p2 >> g1 >> g2;
		n = 0;
		while (p1 <= p2)
		{
			p1 += g1*p1/100;
			p2 += g2*p2/100;
			n++;
			if (n > 100)
				break;
		}
		if (n > 100)
			cout << "Mais de 1 seculo." << endl;
		else
			cout << n << " anos." << endl;
	}
}