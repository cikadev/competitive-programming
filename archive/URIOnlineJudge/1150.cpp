#include <iostream>
#include <math.h>
using namespace std;

int main() {
	short int X, Z;
	cin >> X;

	while(cin >> Z)
		if (Z > X)
			break;

	X = (X*2) - 1;
	Z = -(Z*2);
	Z = (X-(sqrt((X*X)-4*Z)))/2;
	Z = -Z;
	Z++;

	cout << Z << endl;
}