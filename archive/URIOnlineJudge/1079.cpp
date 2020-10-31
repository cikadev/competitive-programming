#include <iostream>
#include <iomanip>
using namespace std;

void avg(double&, int);

int main() {
	int n;
	cin >> n;
	double num;
	num = 0;
	while (n--)
	{
		avg(num, 2);
		avg(num, 3);
		avg(num, 5);
		cout << fixed << setprecision(1) << num/10 << endl;
		num = 0;
	}
}

void avg(double &wg, int c)
{
	double temp;
	cin >> temp;
	temp *= c;
	wg += temp;
}