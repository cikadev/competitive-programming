#include <iostream>
using namespace std;

int main() {
	short int n = 0;
	int max = 0, pos, temp;

	while(n++ < 100)
	{
		cin >> temp;
		if (temp > max)
		{
			max = temp;
			pos = n;
		}
	}

	cout << max << endl << pos << endl;
}
