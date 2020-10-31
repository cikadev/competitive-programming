#include <iostream>
using namespace std;

int main() {
	short int A, N;
	cin >> A;

	while(cin >> N)
		if (N > 0)
			break;

	cout << N*(2*A+(N-1))/2 << endl;
}