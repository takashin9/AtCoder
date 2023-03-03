#include <bits/stdc++.h>
using namespace std;
/*
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif
*/

#define rep(i,n) for (int i = 0; i < (n); i++)

using ll = long long;


int main() {
    
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> g(n);
    vector<ll> deg(n);
    rep(i,m) {
        ll x, y;
        cin >> x >> y;
        x--; y--;
        g[y].push_back(x);
        deg[x]++;
    }

    queue<ll> q;
    rep(i,n) if(deg[i] == 0) q.push(i);
    vector<ll> ans(n);
    ll nw = n;
    while(q.size()) {
        if(q.size() > 1) {
            cout << "No" << endl;
            return 0;
        }
        ll u = q.front(); q.pop();
        ans[u] = nw; nw--;
        for(auto v : g[u]) {
            deg[v]--;
            if(deg[v] == 0) q.push(v);
        }
    }
    cout << "Yes" << endl;
    rep(i,n) cout << ans[i] << ' ';
    cout << endl;

    
    return 0;
}