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
    vector<ll> a(n);
    for (auto &x : a) {
        cin >> x;
        x %= 200;
    }
    map<ll, ll> m;
    for (auto x : a) {
        if (!m.count(x)) m[x] = 1;
        else m[x]++;
    }
    ll ans = 0;
    for (auto x : m) {
        ans += (x.second*(x.second - 1)) / 2;
    }
    cout << ans << endl;
    
    
    return 0;
}