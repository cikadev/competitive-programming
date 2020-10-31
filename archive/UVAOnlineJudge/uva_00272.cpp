#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    while (getline(cin, s)) {
        bool first = true;
        for (size_t i = 0; i < s.size(); i++) {
            if (s[i] == '\"') {
                if (first)
                    s.replace(s.begin()+i, s.begin()+i+1, "``");
                else
                    s.replace(s.begin()+i, s.begin()+i+1, "\'\'");
                i++; first = !first;
            }
        }
        if (cin.peek() != EOF)
            cout << s << '\n';
        else
            cout << s;
        s.clear();
    }
}