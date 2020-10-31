#include <iostream>
using namespace std;

int main() {
	int n, r = 0;
	while(cin >> n && n != 0)
	{
		n = (n%2) ? (n+1) : n;
		r = 5*(2*n+8)/2;
		cout << r << endl;
	}
}