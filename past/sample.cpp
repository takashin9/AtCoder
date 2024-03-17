#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, q; cin >> n >> q;
    vector g(n, vector<int>(0));
    for (int i = 0; i < n - 1; i++) {
        int a, b; cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<int> d(n, -1);
    queue<int> p;
    p.push(0);
    d[0] = 0;
    while (p.size()) {
        int v = p.front(); p.pop();
        for (auto nv : g[v]) {
            if (d[nv] != -1) continue;
            d[nv] = d[v] ^ 1;
            p.push(nv);
        }
    }
    while (q--) {
        int u, v; cin >> u >> v;
        u--; v--;
        if (d[u] - d[v] % 2 == 0) cout << "Town" << endl;
        else cout << "Road" << endl;
    }


    return 0;
}