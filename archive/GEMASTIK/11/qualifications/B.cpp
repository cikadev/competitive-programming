#include <bits/stdc++.h> 
using namespace std; 
  
bool isPossible(vector<double> a, int n) 
{ 
    if (n == 2)
         return (a[0] == a[1]);

    double sum = 0, maxS = 0; 
    for (int i = 0; i < n; i++) { 
        sum += a[i]; 
        maxS = max(a[i], maxS); 
    } 
    if ((sum - maxS) >= maxS) 
        return true; 
  
    return false; 
} 
  
int main() 
{ 
    vector<double> a;
    double temp;
    while (cin >> temp) {
        a.push_back(temp);
    }
    int n = a.size(); 
  
    if (isPossible(a, n)) 
        cout << "MUNGKIN\n"; 
    else
        cout << "MUSTAHIL\n"; 
  
    return 0; 
} 