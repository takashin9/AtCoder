#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    
    ll n;
    cin >> n;
    vector<string> s(n), t(n);
    for (int i = 0; i < n; i++) cin >> s[i] >> t[i];
    
    map<string, ll> nameToI;
    for (int i = 0; i < n; i++) {
        if (!nameToI.count(s[i])) nameToI[s[i]] = nameToI.size();
        if (!nameToI.count(t[i])) nameToI[t[i]] = nameToI.size();
    }
    vector<vector<ll>> g(nameToI.size()), revg(nameToI.size());
    vector<ll> deg(nameToI.size());
    for (int i = 0; i < n; i++) {
        g[nameToI[s[i]]].push_back(nameToI[t[i]]);
        revg[nameToI[t[i]]].push_back(nameToI[s[i]]);
        deg[nameToI[s[i]]]++;
    }
    queue<ll> q;
    for (int i = 0; i < deg.size(); i++) {
        if (deg[i] == 0) q.push(i);
    }
    vector<ll> visited(nameToI.size());
    while (q.size()) {
        ll u = q.front(); q.pop();
        visited[u] = true;
        for (auto v : revg[u]) {
            deg[v]--;
            if (deg[v] == 0) q.push(v);
        }
    }
    bool flag = true;
    for (auto vis : visited) {
        if (!vis) flag = false;
    }

    cout << (flag ? "Yes" : "No") << endl;

    
    return 0;
}