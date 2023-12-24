#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int h, w; cin >> h >> w;
    vector<string> s(h);
    for (int i = 0; i < h; i++) cin >> s[i];
    int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};w
    int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
    int ans = 0;
    vector<vector<int>> vis(h, vector<int>(w, -1));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i][j] == '#' and vis[i][j] == -1) {
                queue<pair<int, int>> q;
                q.push({i, j});
                vis[i][j] = 1;
                while (q.size()) {
                    int u = q.front().first, v = q.front().second;
                    q.pop();
                    for (int k = 0; k < 8; k++) {
                        unsigned ni = u + dx[k], nj = dy[k];
                        if (ni >= h or nj >= w) continue;
                        if (vis[ni][nj] != -1) continue;
                        if (s[i][j] == '#') {
                            q.push({ni, nj});
                            vis[ni][nj] = 1;
                        }
                        
                    }
                }
                ans++;
            }
        }
    }
    cout << ans << endl;

    
    
    
    return 0;
}