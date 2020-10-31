#include <iostream>
using namespace std;

int main() {
	short int i, j;
	for (j = 60, i = 1; j >= 0; j -= 5, i += 3)
		cout << "I=" << i << " " << "J=" << j << endl;
}
