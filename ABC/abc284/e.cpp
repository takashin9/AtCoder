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

    vector<bool> used(n);
    ll ans = 0;
    /*
    auto dfs = [&](auto dfs, ll u) -> void {
        used[u] = true;
        if (ans == 1e6) return;
        ans++;
        for (auto v : g[u]) {
            if (!used[v]) {
                dfs(dfs, v);
            }
        }
        used[u] = false;
    };
    dfs(dfs, 0);
    */
    stack<ll> s;
    s.push(0);
    while (s.size()) {
        ll u = s.top(); s.pop();
        used[u] = true;
        bool ter = true;
        if (ans == 1e6) break;
        ans++;
        for (auto v : g[u]) {
            if (!used[v]) {
                s.push(v);
                ter = false;
            }
        }
        if (ter) used[u] = false;
    }
    
    cout << ans << endl;
    
    return 0;
}