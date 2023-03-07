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
        if (u != v) {
            g[u].push_back(v);
            g[v].push_back(u);
        }
        else g[u].push_back(v);
    }
    vector<bool> used(n);
    bool ans = true;

    for (int p = 0; p < n; p++) {
        ll edge = 0, vertex = 0;
        queue<ll> q;
        if (!used[p]) q.push(p);
        while (q.size()) {
            ll u = q.front(); q.pop();
            if (used[u]) continue;
            else vertex++;
            for (auto v : g[u]) {
                if (!used[v]) {
                    edge++;
                    q.push(v);
                }
            }
            used[u] = true;
        }
        if (edge != vertex) ans = false;
    }
    cout << (ans ? "Yes" : "No") << endl;
    
    return 0;
}