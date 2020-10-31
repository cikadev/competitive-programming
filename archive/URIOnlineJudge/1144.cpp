#include <iostream>
using namespace std;

int main() {
	short int n, m = 0;
	cin >> n;

	while (m++ < n)
	{
		cout << m << ' ' << m*m << ' ' << m*m*m << endl;
		cout << m << ' ' << (m*m)+1 << ' ' << (m*m*m)+1 << endl;
	}
}