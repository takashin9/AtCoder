#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n, m, k;
    cin >> n >> m >> k;
    vector<vector<ll>> g(n);
    for (int i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<pair<ll, ll>> ph(k);
    for (int i = 0; i < k; i++) {
        cin >> ph[i].first >> ph[i].second;
        ph[i].first--;
    }
    vector<ll> d(n);
    vector<int> ed(n, 0), chk(n, 0);

    queue<ll> q;
    q.push(0);
    while (q.size()) {
        ll p = q.front(); q.pop();
        chk[p] = 1;
        for (auto v : g[p]) {
            if (chk[v]) continue;
            d[v] = d[p] + 1;
            q.push(v);
        }
    }
    for (int i = 0; i < k; i++) {
        
    }


    
    
    return 0;
}