#include <iostream>
#include <iomanip>

bool status(double x, bool s)
{
	if (x >= 7.0 || (!s && x >= 5.0))
	{
		std:: cout << "Aluno aprovado.\n";
		return 0;
	}
	else if (x >= 5.0 && x <= 6.9 && s)
	{
		std:: cout << "Aluno em exame.\n";
		return 1;
	}
	else
	{
		std:: cout << "Aluno reprovado.\n";
		return 0;
	}

}

int main() {
	std:: cout << std:: fixed << std:: setprecision(1);
	double a, b, c, d;
	std:: cin >> a >> b >> c >> d;
	a = (a*2+b*3+c*4+d*1)/10;
	std:: cout << "Media: " << a << std:: endl;
	if (status(a,1))
	{
		std:: cout << "Nota do exame: ";
		std:: cin >> b;
		std:: cout << b << std:: endl;
		a = (a+b)/2.0;
		a = int(a*10)/10.0;
		status(a, 0);
		std:: cout << "Media final: " << a << std:: endl; 
	}
}