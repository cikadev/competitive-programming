#include <iostream>
using namespace std;

int main() {
	int N, fb = 0, fn = 1, c;
	cin >> N;
	while (N--)
	{
		c = fb;
		cout << fb;
		fb = fn;
		fn += c;
		if (!(N))
			cout << endl;
		else
			cout << ' ';
	}
}