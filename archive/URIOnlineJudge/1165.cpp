#include <iostream>
#include <math.h>
using namespace std;

int fiboN(int);

int main() {
	int pr, n;
	cin >> n;
	while(n--)
	{
		cin >> pr;
		if (pr == 2)
			cout << pr << " eh primo" << endl;
		else if (pr%2 != 0)
		{
			if (int(pow(2, (pr-1)))%pr == 1 && fiboN((pr))%pr == 0)
				cout << pr << " eh primo" << endl;
			else
				cout << pr << " nao eh primo" << endl;
		}
		else
			cout << pr << " nao eh primo" << endl;
	}
}

int fiboN(int n)
{
	double phi = (1+sqrt(5))/2;
	return ( pow(phi, n) - pow((-1/phi), n) ) / sqrt(5);
}