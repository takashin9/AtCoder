#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> g(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        g[b].push_back(a);
    }
    queue<int> q;
    set<int> ans;
    vector<int> chk(n);
    for (int i = 0; i < n; i++) {
        if (chk[i]) continue;
        q.push(i);
        while (q.size()) {
            int p = q.front(); q.pop();
            chk[p] = 1;
            for (auto v : g[p]) {
                if (chk[v]) continue;
                q.push(v);
            }
            if (g[p].size() == 0) ans.insert(p);
        }
    }
    if (ans.size() == 1) cout << *ans.begin() + 1 << endl;
    else cout << -1 << endl;
    
    return 0;
}