#include <iostream>
using namespace std;

int main() {
	int opt, ac = 0, gs = 0, ds = 0;
	
	while(cin >> opt)
	{
		if (opt == 4)
			break;
		switch(opt)
		{
			case 1:
				ac++;
				break;
			case 2:
				gs++;
				break;
			case 3:
				ds++;
				break;
		}
	}

	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << ac << endl;
	cout << "Gasolina: " << gs << endl;
	cout << "Diesel: " << ds << endl;
}