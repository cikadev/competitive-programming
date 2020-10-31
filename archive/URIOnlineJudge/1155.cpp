#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int N = 0;
	double s = 0;
	while (N++ < 100)
		s += (1/double(N));
	cout << fixed << setprecision(2) << s << endl;
}