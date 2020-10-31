#include <iostream>
using namespace std;

int main() {
	int N, f = 1;
	cin >> N;
	while (N--)
		f *= (N+1);
	cout << f << endl;
}