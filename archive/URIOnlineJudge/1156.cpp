#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int N, M;
	double s = 0;
	for (N = 1, M = 1; N <= 39; N += 2, M *= 2)
		s += double(N)/M;
	cout << fixed << setprecision(2) << s << endl;
}