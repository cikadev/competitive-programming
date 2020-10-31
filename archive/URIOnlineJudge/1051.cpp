#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	double a;
	cin >> a;
	if (a >= 0 && a <= 2000.00)
		cout << "Isento\n";
	else
	{
		if (a > 4500.00)
			a = 350 + (a-4500.00)*0.28;
		else if (a > 3000.00)
			a = 80 + (a-3000.00)*0.18;
		else if (a > 2000.00)
			a = (a-2000.00)*0.08;
		cout << fixed << setprecision(2) << "R$ " << a << endl;
	}	
}