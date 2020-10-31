#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long int n, p, c;
	cin >> c;
	while(c--)
	{
		cin >> n >> p;
		cout << floor(p*log10(n))+1 << endl;
	}
}