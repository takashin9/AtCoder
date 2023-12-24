#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int h, w; cin >> h >> w;
    vector<string> s(h);
    vector vis(h, vector<bool>(w, false));
    for (int i = 0; i < h; i++) cin >> s[i];
    int di[8] = {1, 1, 0, -1, -1, -1, 0, 1};
    int dj[8] = {0, 1, 1, 1, 0, -1, -1, -1};
    int ans = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            for (int k = 0; k < 8; k++) {
                int ni = i + di[k], nj = j + dj[k];
                if (ni < 0 or ni >= h or nj < 0 or nj >= w) continue;
                
            }
        }
    }
    vector<pair<int, int>> r;
    set<pair<int, int>> st;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            bool next = false;
            for (int k = 0; k < 8; k++) {
                unsigned ni = i + di[k], nj = j + dj[k];
                if (ni >= h or nj >= w) continue;
                if (st.count({ni, nj})) next = true;
            }
            if (s[i][j] == '#' and !next) {
                r.push_back({i, j});
                st.insert({i, j});
            }
        }
    }
    for (auto rr : r) {
        int i = rr.first, j = rr.second;
        if (vis[i][j]) continue;
        queue<pair<int, int>> q;
        q.push({i, j});
        while (q.size()) {
            auto p = q.front(); q.pop();
            int ni = p.first, nj = p.second;
            vis[ni][nj] = true;
            for (int k = 0; k < 8; k++) {
                unsigned mi = ni + di[k], mj = nj + dj[k];
                if (mi >= h or mj >= w) continue;
                if (!vis[mi][mj] and s[mi][mj] == '#') q.push({mi, mj});
            }
        }
        ans++;
    }
    cout << ans << endl;
    
    
    return 0;
}