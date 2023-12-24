#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n; cin >> n;
    vector<ll> a(n), p(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 1; i < n; i++) cin >> p[i];
    vector<vector<ll>> g(n);
    for (ll i = 1; i < n; i++) {
        p[i]--;
        g[p[i]].push_back(i);
    }
    vector<ll> d(n), e(n);
    queue<ll> q;
    q.push(0);
    while (!q.empty()) {
        ll p = q.front(); q.pop();
        for (auto v : g[p]) {
            d[v] = d[p] + 1;
            q.push(v);
        }
    }
    for (ll i = 0; i < n; i++) e[d[i]] += a[i];
    for (ll i = n - 1; i >= 0; i--) {
        if (e[i] < 0) {
            cout << '-' << endl;
            return 0;
        }
        if (e[i] > 0) {
            cout << '+' << endl;
            return 0;
        }
    }
    if (a[0] > 0) cout << '+' << endl;
    else if (a[0] < 0) cout << '-' << endl;
    else cout << 0 << endl;
    
    return 0;
}