#include <iostream>
using namespace std;

int main() {
	int n, pf;
	string str;

	cin >> n;
	while(n--)
	{
		cin >> pf;
		if (pf == 6 || pf == 28 || pf == 496 || pf == 8128 || pf == 33550336)
			cout << pf << " eh perfeito" << endl;
		else
			cout << pf << " nao eh perfeito" << endl;
	}

	/* 
	This is for me in the future:
		This algorithm done because it's unnecessarily needed to use such a
		good fuckin' mathematical method. Why? For finding a perfect number 
		needs a mersenne prime number. Meanwhile in this fuckin #1164 URI
		problem, it prompts just few of mersenne primes. As you can see in
		the algorithm, there are just 5 perfect numbers means needing 5 mersenne primes.
		So, it's better to use the else-if method to check one by one. To fully find it,
		you need to multiply that mersenne prime by 2^(prime of mersenne prime - 1).
		To generate mersenne primes, see 
		https://cdn-images-1.medium.com/max/1600/1*LQY8o5lrLUc6EwA_yVIDtA.png
	*/
}