#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	short int *n = new short int, *amt = new short int;
	int ch = 0, rb = 0, sp = 0;
	char opt;
	cin >> *n;

	while ((*n)--)
	{
		cin >> *amt;
		cin >> opt;
		switch (int(opt))
		{
			case int('C'):
			ch += *amt;
			break;

			case int('R'):
			rb += *amt;
			break;

			case int('S'):
			sp += *amt;
			break;
		}
	}
	delete n, amt;
	cout << "Total: " << ch+rb+sp << " cobaias" << endl;

	cout << "Total de coelhos: " << ch << endl;
	cout << "Total de ratos: "   << rb << endl;
	cout << "Total de sapos: "   << sp << endl;

	cout << fixed << setprecision(2);
	cout << "Percentual de coelhos: " << double(ch)/(ch+rb+sp)*100 << " %" << endl;
	cout << "Percentual de ratos: " << double(rb)/(ch+rb+sp)*100 << " %" << endl;
	cout << "Percentual de sapos: "	 << double(sp)/(ch+rb+sp)*100 << " %" << endl;
}
