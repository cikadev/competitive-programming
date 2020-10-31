#include <iostream>
#include <iomanip>

void printBambang(long long int num);

int main() {
	std::fixed;
	long double N;
	std::cin >> std::setprecision(3) >> N;
	long long int B = int(N * 100);
	printBambang(B);
}

void printBambang(long long int num) {
	long long int *temp = new long long int;
	*temp = num;
	*temp /= 100;
	std::cout << num/100 << "\n";
	std::cout << *temp/100 << " nota(s) de R$ 100,00\n";
	*temp -= *temp/100*100;
	std::cout << *temp/50 << " nota(s) de R$ 50,00\n";
	*temp -= *temp/50*50;
	std::cout << *temp/20 << " nota(s) de R$ 20,00\n";
	*temp -= *temp/20*20;
	std::cout << *temp/10 << " nota(s) de R$ 10,00\n";
	*temp -= *temp/10*10;
	std::cout << *temp/5 << " nota(s) de R$ 5,00\n";
	*temp -= *temp/5*5;
	std::cout << *temp/2 << " nota(s) de R$ 2,00\n";
	*temp -= *temp/2*2;
	std::cout << *temp/1 << " nota(s) de R$ 1,00\n";
	*temp -= *temp;
	delete temp;
}