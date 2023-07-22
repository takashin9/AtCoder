#include <bits/stdc++.h>
using namespace std;

using ll = long long;


int main() {
    ll n1, n2, m;
    cin >> n1 >> n2 >> m;
    vector<vector<ll>> g(n1+n2);
    for (int i = 0; i < m; i++) {
        ll a, b;
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<ll> d(n1+n2, -1);
    queue<int> q;
    q.push(0);
    d[0] = 0;
    while (q.size()) {
        int p = q.front(); q.pop();
        for (auto v : g[p]) {
            if (d[v] != -1) continue;
            d[v] = d[p] + 1;
            q.push(v);
        }
    }
    q.push(n1+n2-1);
    d[n1+n2-1] = 0;
    while (q.size()) {
        int p = q.front(); q.pop();
        for (auto v : g[p]) {
            if (d[v] != -1) continue;
            d[v] = d[p] + 1;
            q.push(v);
        }
    }
    cout << (*max_element(d.begin(), d.begin() + n1) + *max_element(d.begin() + n1, d.end()) + 1) << endl;

    
    
    return 0;
}