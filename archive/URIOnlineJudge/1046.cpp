#include <iostream>
#include <stdio.h>

using namespace std;

int main () {
	int x, y;
	cin >> x >> y;
	if (y > x)
		printf("O JOGO DUROU %d HORA(S)\n", (y-x));
	else
		printf("O JOGO DUROU %d HORA(S)\n", ((24-x)+y));
}