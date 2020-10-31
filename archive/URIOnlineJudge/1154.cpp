#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	short int age, n = 0;
	int av = 0;

	while(cin >> age)
	{
		if (age < 0)
			break;
		av += age;
		n++;
	}

	cout << fixed << setprecision(2) << double(av)/n << endl;
}