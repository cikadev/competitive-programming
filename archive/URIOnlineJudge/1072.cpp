#include <iostream>

int main() {
	long long int x, N, *temp = new long long int;
	std:: cin >> N;
	*temp = N;
	{
		long long int n = N;
		while (n-- > 0)
		{
			std::cin >> x;
			if (x >= 10 && x <= 20)
				N--;
		}
	}
	std:: cout << *temp-N << " in\n";
	delete temp;
	std:: cout << N << " out\n";	
}