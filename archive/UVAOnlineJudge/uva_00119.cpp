#include <bits/stdc++.h>
using namespace std;


int main() {
    int c = 1;
    short n;
    map<string, short> person;
    vector<string> list;
    char name[13] = {0};
    short gift;
    while(cin >> n)
    {
        if (c > 1)
            printf("\n");
        for (std::size_t i = 0; i < n; ++i)
        {
            scanf("%s", name);
            list.push_back(name);
            person.insert({name, 0});
        }
        short gp;
        while (n--)
        {
            scanf("%s%hd%hd", name, &gift, &gp);
            if (gp == 0)
                continue;
            person[name] -= gift - (gift % gp);
            for (std::size_t i = 0; i < gp; ++i)
            {
                scanf("%s", name);
                person[name] += gift / gp;
            }
        }
        for (const auto &p : list)
        {
            printf("%s %hd\n", p.c_str(), person[p]);
        }
        person.clear();
        list.clear();
    }
}