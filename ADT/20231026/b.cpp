#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s; cin >> s;
    int n = s.size();
    for (int i = 0; i < n / 2; i++) swap(s[2*i], s[2*i + 1]);
    cout << s << endl;
    
    
    
    return 0;
}