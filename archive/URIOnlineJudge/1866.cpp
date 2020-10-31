#include <iostream>
using namespace std;

int main () {
    int N;
    cin >> N;
    int S;
    for (int i = 0; i < N; i++) {
        cin >> S;
        cout << S%2 << endl;
    }
}

//O(n)