#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;

struct point
{
    int i;
    int j;
};

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> g(h);
    for (auto &s : g) cin >> s;
    queue<point> q;
    point goal = {0, 0};
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (g[i][j] == 'v') {
                int u = i + 1;
                while (u < h) {
                    if (g[u][j] == '.' or g[u][j] == '!') g[u][j] = '!';
                    else break;
                    u++;
                }
            }
            else if (g[i][j] == '>') {
                int u = j + 1;
                while (u < w) {
                    if (g[i][u] == '.' or g[i][u] == '!') g[i][u] = '!';
                    else break;
                    u++;
                }
            }
            else if (g[i][j] == '<') {
                int u = j - 1;
                while (u >= 0) {
                    if (g[i][u] == '.' or g[i][u] == '!') g[i][u] = '!';
                    else break;
                    u--;
                }
            }
            else if (g[i][j] == '^') {
                int u = i - 1;
                while (u >= 0) {
                    if (g[u][j] == '.' or g[u][j] == '!') g[u][j] = '!';
                    else break;
                    u--;
                }
            }
            else if (g[i][j] == 'S') q.push({i, j});
            else if (g[i][j] == 'G') goal = {i, j};
        }
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (g[i][j] == '^' or g[i][j] == '>' or g[i][j] == '<' or g[i][j] == 'v' or g[i][j] == '!') g[i][j] = '#';
        }
    }
    // for (auto s : g) cout << s << endl;
    vector d(h, vector<int>(w, -1));
    d[q.front().i][q.front().j] = 0;
    vector<int> di = {1, 0, -1, 0}, dj = {0, 1, 0, -1};
    while (!q.empty()) {
        point p = q.front(); q.pop();
        for (int k = 0; k < 4; k++) {
            int ni = p.i + di[k], nj = p.j + dj[k];
            if (ni >= h or ni < 0 or nj >= w or nj < 0) continue;
            if (d[ni][nj] != -1) continue;
            if (g[ni][nj] == '#') continue;
            d[ni][nj] = d[p.i][p.j] + 1;
            q.push({ni, nj});
        }
    }
    cout << d[goal.i][goal.j] << endl;

    
    
    return 0;
}