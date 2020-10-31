#include <iostream>
#include <string>
using namespace std;

int main() {
	string str, line;
	bool word = true;
	int n;
	cin >> n;
	getline(cin, str);
	while (n--)
	{
		getline(cin, str);
		for (int a = 0; a < str.length(); a++)
		{
			if (str[a] == ' ')
			{
				word = true;
				continue;
			}
			else if (word)
			{	
				word = false;
				line += str[a];
			}
		}
		cout << line << endl;
		line.erase();
		str.erase();
		word = true;
	}
}