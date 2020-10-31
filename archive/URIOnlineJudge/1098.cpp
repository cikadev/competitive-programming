#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double i, j, k;

	for (i = 0; i <= 2; i += 0.2)
		for (j = 1+i, k = 0; k < 3; k++, j++)
			cout << "I=" << i << " " << "J=" << j << endl;
}