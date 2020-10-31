#include <iostream>
#include <vector>
using namespace std;

void printPar(vector<int>::iterator par, int size);
void printImpar(vector<int>::iterator impar, int size);

int main() {
    int num;
    vector<int> par, impar;
    for (int n = 0; n < 15; n++)
    {
        cin >> num;
        if (num %2 == 0)
            par.push_back(num);
        else
            impar.push_back(num);
        if (par.size() == 5)
        {
            printPar(par.begin(), par.size());
            par.erase(par.begin(), par.begin()+par.size());
        }
        if (impar.size() == 5)
        {
            printImpar(impar.begin(), impar.size());
            impar.erase(impar.begin(), impar.begin()+impar.size());
        }
    }

    printImpar(impar.begin(), impar.size());
    impar.erase(impar.begin(), impar.begin()+impar.size());
    printPar(par.begin(), par.size());
    par.erase(par.begin(), par.begin()+par.size());
    
}

void printPar(vector<int>::iterator par, int size)
{
    for (int a = 0; a < size; a++, par++)
    {
        cout << "par[" << a << "] = " << *par << endl;
    }
}

void printImpar(vector<int>::iterator impar, int size)
{
    for (int a = 0; a < size; a++, impar++)
    {
        cout << "impar[" << a << "] = " << *impar << endl;
    }
}