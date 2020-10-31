#include <iostream>
using namespace std;

int main() {
	int n, m = 0;
	cin >> n;

	while (m++ < n)
		cout << m << ' ' << m*m << ' ' << m*m*m << endl;
}
