#include <iostream>
using namespace std;

bool isContinue();
int winner(int &a, int &b, int &c);

int main() {
	int it = 0, gm = 0, dr = 0;
	while(winner(it, gm, dr))
		if (isContinue())
			continue;
		else
			break;
	cout << it + gm + dr << " grenais" << endl;
	cout << "Inter:" << it << endl;
	cout << "Gremio:" << gm << endl;
	cout << "Empates:" << dr << endl;

	if (it > gm)
		cout << "Inter venceu mais" << endl;
	else if (gm > it)
		cout << "Gremio venceu mais" << endl;
	else
		cout << "Não houve vencedor" << endl;
}

bool isContinue() 
{
	int x;
	cout << "Novo grenal (1-sim 2-nao)" << endl;
	cin >> x;
	if (x == 1)
		return true;
	else if (x == 2)
		return false;
}

int winner(int &a, int &b, int &c) 
{
	int x, y;
	cin >> x >> y;
	if (x > y)
	{
		a++;
		return 1;
	}
	else if (x < y)
	{
		b++;
		return 2;
	}
	else
	{
		c++;
		return 3;
	}
}