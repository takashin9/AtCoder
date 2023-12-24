#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, m; cin >> n >> m;
    vector<int> a(m), b(m), d(n, -1);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    vector<vector<int>> g(n);
    for (int i = 0; i < m; i++) {
        a[i]--; b[i]--;
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }
    bool ok = true;
    queue<int> q;
    q.push(a[0]);
    d[a[0]] = 0;
    while (q.size()) {
        int p = q.front(); q.pop();
        for (auto v : g[p]) {
            if (d[v] == -1) {
                q.push(v);
                if (d[p] == 0) d[v] = 1;
                else d[v] = 0;
            }
            else if (d[v] == 0) {
                if (d[p] == 1) continue;
                else ok = false;
            }
            else {
                if (d[p] == 1) ok = false;
                else continue;
            }
        }
    }
    cout << (ok ? "Yes" : "No") << endl;
    
    return 0;
}