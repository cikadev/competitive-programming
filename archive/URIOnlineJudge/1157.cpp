#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int c = 1;
	while (c <= N)
	{
		if (N%c == 0)
			cout << c << endl;
		c++;
	}
}