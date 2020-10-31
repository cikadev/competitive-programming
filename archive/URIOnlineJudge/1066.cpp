#include <iostream>

using namespace std;

int main () {
	int a, st[4] = {0}, b = 0;
	while (++b <= 5)
	{
		cin >> a;
		if (a%2 == 0)
			st[0]++;
		else
			st[1]++;
		if (a > 0)
			st[2]++;
		else
			st[3]++;
	}
	cout << st[0] << " valor(es) par(es)\n";
	cout << st[1] << " valor(es) impar(es)\n";
	cout << st[2] << " valor(es) positivo(s)\n";
	cout << st[3] << " valor(es) negativo(s)\n";
}