#include <iostream>
using namespace std;

int main() {
	int i, j, k;

	for (j = 7, i = 1; i <= 9; i += 2, j += 5)
		for (k = 0; k < 3; k++, j--)
			cout << "I=" << i << " " << "J=" << j << endl;
}