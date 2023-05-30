#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    
    ll n, q;
    cin >> n >> q;
    vector<set<ll>> g(n);
    set<ll> s;
    vector<ll> deg(n);
    for (int i = 0; i < n; i++) s.insert(i);
    for (int i = 0; i < q; i++) {
        int p;
        cin >> p;
        if (p == 1) {
            ll u, v;
            cin >> u >> v;
            u--; v--;
            deg[u]++; deg[v]++;
            s.erase(u); s.erase(v);
            g[u].insert(v);
            g[v].insert(u);
        }
        if (p == 2) {
            ll v;
            cin >> v;
            v--;
            s.insert(v);
            for (auto nv : g[v]) {
                g[nv].erase(v);
                deg[nv]--;
                if (deg[nv] == 0) s.insert(nv);
            }
            deg[v] = 0;
            g[v].clear();
        }
        cout << s.size() << endl;
    }
    
    return 0;
}