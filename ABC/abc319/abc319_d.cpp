#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> l(n);
    for (auto &x : l) cin >> x;
    if (n == m) {
        cout << *max_element(begin(l), end(l)) << endl;
        return 0;
    }
    ll w = max(*max_element(begin(l), end(l)), (accumulate(begin(l), end(l), 0LL) + n - m + m - 1LL) / m);
    while (true) {
        while (m--) {
            
        }
    }



    
    
    return 0;
}