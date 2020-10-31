#include <iostream>
using namespace std;

int main() {
	int p;
	while (cin >> p)
		if (p == 2002)
			break;
		else 
			cout << "Senha Invalida" << endl;
	cout << "Acesso Permitido" << endl;
}