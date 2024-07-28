#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n, m; cin >> n >> m;
    vector<ll> a(m), s(m);
    vector<vector<ll>> x(n, vector<ll>(m));
    for (ll i = 0; i < m; i++) cin >> a[i];
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cin >> x[i][j];
            s[j] += x[i][j];
        }
    }
    bool ok = true;
    for (ll i = 0; i < m; i++) {
        if (s[i] < a[i]) ok = false;
    }
    cout << (ok ? "Yes" : "No") << endl;

    
    
    return 0;
}