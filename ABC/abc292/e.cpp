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
    }

    
    ll ans = 0;
    for (int p = 0; p < n; p++) {
        queue<ll> q;
        vector<bool> used(n);
        q.push(p);
        used[p] = true;
        while (q.size()) {
            ll u = q.front(); q.pop();
            for (auto v : g[u]) {
                if (!used[v]) {
                    q.push(v);
                    ans++;
                    used[v] = true;
                }
            }
        }
    }
    ans -= m;
    cout << ans << endl;
    


    
    
    return 0;
}