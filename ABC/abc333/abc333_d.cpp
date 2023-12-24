#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;

void rec(int v, int p, vector<int> &siz, 
         const vector<vector<int>> &chs) {
    // 頂点 v の各子頂点を探索
    for (auto ch : chs[v]) {
        // 子頂点 ch を根とした部分木を再帰的に探索
        // 子頂点 ch の親は v である
        rec(ch, v, siz, chs);
    }

    // 帰りがけ時に答えを合算する
    siz[v] = 1;
    for (auto ch : chs[v]) {
        siz[v] += siz[ch];
    }
}


int main() {
    int n; cin >> n;
    vector<vector<int>> g(n);
    vector<int> c(n);
    for (int i = 0; i < n - 1; i++) {
        int u, v; cin >> u >> v;
        u--; v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    queue<int> q;
    q.push(0);
    vector<int> d(n, -1);
    d[0] = 0;
    vector<vector<int>> ki(n);
    while(q.size()) {
        int p = q.front(); q.pop();
        for (int v : g[p]) {
            if (d[v] != -1) continue;
            d[v] = d[p] + 1;
            q.push(v);
            ki[p].push_back(v);
        }
    }
    if (ki[0].size() == 1) {
        cout << 1 << endl;
        return 0;
    }
    rec(0, -1, c, ki);
    for (int i = 0; i < n; i++) {
        for (int v : ki[i]) cout << v << " ";
        cout << endl;
    }
    int ans = 1e9;
    for (int v : ki[0]) {
        ans = min(ans, c[v] + 1);
    }
    cout << ans << endl;

    
    
    return 0;
}