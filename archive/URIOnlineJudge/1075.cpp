#include <iostream>

using namespace std;

int main() {
	int X = 1, N;
	cin >> N;
	while (X <= (N+2))
	{
		if (X % N == 2)
			break;
		X++;
	}

	while (X <= 10000)
	{
		cout << X << endl;
		X += N;
	}
}