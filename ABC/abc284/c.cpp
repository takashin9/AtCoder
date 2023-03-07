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
    vector<vector<ll>> g(n);
    for (int i = 0; i < m; i++) {
        ll u, v;
        cin >> u >> v;
        u--; v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    queue<ll> q;
    vector<bool> used(n);
    ll cnt = 0;
    for (int u = 0; u < n; u++) {
        if (!used[u]) {
            q.push(u);
            cnt++;
        }
        while (q.size()) {
            ll p = q.front(); q.pop();
            used[p] = true;
            for (auto v : g[p]) {
                if (!used[v]) {
                    q.push(v);
                    used[v] = true;
                }
            }
        }
    }
    cout << cnt << endl;

    
    return 0;
}