#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n;
    cin >> n;
    vector<vector<int>> g(n);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        a--;
        g[i].push_back(a);
    }
    vector<int> seen(n, 0), finished(n, 0);
    stack<int> his;
    int pos = -1;
    auto dfs = [&](auto dfs, int v) -> void {
        seen[v] = true;
        his.push(v);
        for (auto nv : g[v]) {
            if (finished[nv]) continue;
            if (seen[nv] and !finished[nv]) {
                pos = nv;
                return;
            }
            dfs(dfs, nv);
            if (pos != -1) return;
        }
        finished[v] = true;
        his.pop();
    };
    dfs(dfs, 0);

    vector<int> cycle;
    while (!his.empty()) {
        int t = his.top();
        cycle.push_back(t);
        his.pop();
        if (t == pos) break;
    }
    reverse(cycle.begin(), cycle.end());
    cout << cycle.size() << endl;
    for (auto x : cycle) cout << x + 1 << " ";
    cout << endl;
    
    
    return 0;
}