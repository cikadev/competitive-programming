#include <iostream>
#include <stdlib.h>
#include <iomanip>

void printBambang(long long int num);

int main() {
	std::fixed;
	long double N;
	std::cin >> std::setprecision(3) >> N;
	long long int B = int(N * 100);
	printBambang(B);
	system("pause");
}

void printBambang(long long int num) {
	long long int *temp = new long long int;
	*temp = num;
	*temp /= 100;
	std::cout << "NOTAS:\n";
	std::cout << *temp/100 << " nota(s) de R$ 100.00\n";
	*temp -= *temp/100*100;
	std::cout << *temp/50 << " nota(s) de R$ 50.00\n";
	*temp -= *temp/50*50;
	std::cout << *temp/20 << " nota(s) de R$ 20.00\n";
	*temp -= *temp/20*20;
	std::cout << *temp/10 << " nota(s) de R$ 10.00\n";
	*temp -= *temp/10*10;
	std::cout << *temp/5 << " nota(s) de R$ 5.00\n";
	*temp -= *temp/5*5;
	std::cout << *temp/2 << " nota(s) de R$ 2.00\n";
	*temp -= *temp/2*2;
	std::cout << "MOEDAS:\n";
	std::cout << *temp/1 << " moeda(s) de R$ 1.00\n";
	*temp -= *temp;
	delete temp;
	num %= 100;
	std::cout << num/50 << " moeda(s) de R$ 0.50\n";
	num -= num/50*50;
	std::cout << num/25 << " moeda(s) de R$ 0.25\n";
	num -= num/25*25;
	std::cout << num/10 << " moeda(s) de R$ 0.10\n";
	num -= num/10*10;
	std::cout << num/5 << " moeda(s) de R$ 0.05\n";
	num -= num/5*5;
	std::cout << num/1 << " moeda(s) de R$ 0.01\n";
	num -= num;
}