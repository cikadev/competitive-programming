#include <iostream>
using namespace std;

int main() {
	short int i, j, k;
	for (i = 1; i <= 9; k++, i += 2)
		for (k = 0, j = 7; k < 3; j--, k++)
			cout << "I=" << i << " " << "J=" << j << endl;
}
