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
    vector<string> s(n);
    for (auto &t : s) cin >> t;
    vector<vector<int>> seen(n, vector<int>(m, 0)), cntd(n, vector<int>(m, 0));
    pair<int, int> dir[4] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    int cnt = 0;
    auto dfs = [&](auto dfs, int i, int j) -> void {
        seen[i][j] = true;
        cntd[i][j] = true;
        cnt++;
        for (int k = 0; k < 4; k++) {
            for (int l = 1; l <= n; l++) {
                int ni = i + dir[k].first*l, nj = j + dir[k].second*l;
                if (s[ni][nj] == '#') {
                    if (seen[ni][nj]) continue;
                    l--;
                    ni = i + dir[k].first*l, nj = j + dir[k].second*l;
                    dfs(dfs, ni, nj);
                    break;
                }
                else {
                    if (!cntd[ni][nj]) {
                        cnt++;
                        cntd[ni][nj]++;
                    }
                }
            }
        }
    };
    dfs(dfs, 1, 1);
    cout << cnt << endl;
    
    
    return 0;
}