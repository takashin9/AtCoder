#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n, m, k; cin >> n >> m >> k;
    vector<ll> c(m);
    vector<char> r(m);
    vector<vector<ll>> a(m);
    for (ll i = 0; i < m; i++) {
        cin >> c[i];
        for (ll j = 0; j < c[i]; j++) {
            ll in;
            cin >> in;
            a[i].push_back(in);
            a[i][j]--;
        }
        cin >> r[i];
    }
    ll ans = 0;
    for (ll i = 0; i < (1 << n); i++) {
        bool ok = true;
        for (ll u = 0; u < m; u++) {
            ll cnt = 0;
            for (ll v = 0; v < c[u]; v++) {
                if (i & (1 << a[u][v])) cnt++;
            }
            if (cnt >= k and r[u] == 'x') ok = false;
            if (cnt < k and r[u] == 'o') ok = false;
        }
        if (ok) ans++;
    }
    cout << ans << endl;
    
    
    return 0;
}