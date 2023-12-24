#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n, m, k; cin >> n >> m >> k;
    vector<tuple<ll, ll, ll>> g(m);
    for (ll i = 0; i < m; i++) {
        ll u, v, w; cin >> u >> v >> w;
        u--; v--;
        g[i] = {u, v, w};
    }
    ll ans = 1LL << 60;
    for (ll b = 0; b < (1LL << 28); b++) {
        if (__popcount(b) != n - 1) continue;
        set<ll> s;
        ll cnt = 0;
        for (ll i = 0; i < 28; i++) {
            if (b & (1LL << i)) {
                auto [u, v, w] = g[i]; 
                s.insert(u);
                s.insert(v);
                cnt += w;
                cnt %= k;
            }
        }
        if (s.size() == n) ans = min(ans, cnt);
    }
    cout << ans << endl;
    
    
    
    return 0;
}