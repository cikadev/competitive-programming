#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n, x, y;
	cin >> n;
	while (n--)
	{
		cin >> x >> y;
		if (y == 0)
		{	
			cout << "divisao impossivel" << endl;
			continue; 
		}
		cout << fixed << setprecision(1) << double(x)/y << endl;
	}
}