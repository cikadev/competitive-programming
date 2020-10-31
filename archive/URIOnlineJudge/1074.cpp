#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	while (N--)
	{
		long int X;
		cin >> X;
		if (X < 0 && X % 2 == 0)
			cout << "EVEN NEGATIVE\n";
		else if (X > 0 && X % 2 == 0)
			cout << "EVEN POSITIVE\n";
		else if (X < 0 && X % 2 != 0)
			cout << "ODD NEGATIVE\n";
		else if (X > 0 && X % 2 != 0)
			cout << "ODD POSITIVE\n";
		else
			cout << "NULL\n";
	}
}