#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double x, t = 0;
	int n = 0;
	while (cin >> x)
	{
		if (x < 0 || x > 10)
		{
			cout << "nota invalida" << endl;
			continue;
		}
		t += x;
		n++;
		if (n == 2)
			break;
	}
	cout << fixed << setprecision(2) << "media = " << t/2 << endl;
}