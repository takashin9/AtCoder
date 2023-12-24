#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<tuple<int, int, int>>> g(n);
    for (int i = 0; i < m; i++) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        a--; b--;
        g[a].push_back({b, x, y});
        g[b].push_back({a, -x, -y});
    }
    
    
    return 0;
}