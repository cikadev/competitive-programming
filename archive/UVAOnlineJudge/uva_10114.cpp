#include <bits/stdc++.h>
using namespace std;

int main() {
    int month, rec;
    float pay, loan;

    while (cin >> month)
    {
        if (month < 0)
            break;
        float dep, per, prev_per;
        short m_worth = 0, m_rec;
        scanf("%f%f%d", &pay, &loan, &rec);
        scanf("%hd%f", &m_rec, &per);
        dep = loan + pay; dep -= dep * per;
        if (loan < dep)
            print("1 month");
        while (loan > dep)
        {
            if (!month--)
                break;
            loan -= pay;
            if (rec-1)
            {
                if (m_rec <= m_worth)
                {
                    prev_per = per;
                    rec--; scanf("%hd%f", &m_rec, &per);
                }
            }
            else
                prev_per = per;
            if (++m_worth == m_rec)
                dep -= dep * per;
            else
                dep -= dep * prev_per;
        }
        printf("%hd\n", m_worth);
    }
}