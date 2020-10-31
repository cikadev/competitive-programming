#include <iostream>

using namespace std;

int main() {
    int n, min, num, pos = 0;
    cin >> n;
    cin >> num;
    min = num;
    for (int x = 1; x < n; x++)
    {
        cin >> num;
        if (min > num)
            pos = x;
        min = (min < num) ? min : num;
    }

    cout << "Menor valor: " << min << endl;
    cout << "Posicao: " << pos << endl;
}