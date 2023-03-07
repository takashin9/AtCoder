#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    
    ll n;
    cin >> n;
    vector<string> s(n);
    for (auto &x : s) cin >> x;
    for (int i = 0; i < n; i++) cout << s[n - 1 - i] << endl;
    
    return 0;
}