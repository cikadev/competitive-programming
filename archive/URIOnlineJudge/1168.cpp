#include <iostream>
#include <string>
using namespace std;

int main() {
	string num;
	int led = 0;
	int n;
	cin >> n;
	while (n--)
	{
		cin >> num;
		for (int a = 0; a < num.length(); a++)
		{
			if (num[a] == '1')
				led += 2;
			else if (num[a] == '2' || num[a] == '3' || num[a] == '5')
				led += 5;
			else if (num[a] == '4')
				led += 4;
			else if (num[a] == '6' || num[a] == '9' || num[a] == '0')
				led += 6;
			else if (num[a] == '7')
				led += 3;
			else if (num[a] == '8')
				led += 7;
		}
		cout << led << " leds" << endl;
		led = 0;
	}
}