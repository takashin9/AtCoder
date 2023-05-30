#include <iostream>
#include <set>
using namespace std;

int h, w;
int a[12][12];
bool visited[12][12];
int dx[2] = {1, 0};
int dy[2] = {0, 1};

int dfs(int x, int y) {
    if (x == h && y == w) return 1;
    int res = 0;
    for (int i = 0; i < 2; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx <= h && ny <= w && !visited[nx][ny] && a[nx][ny] != a[x][y]) {
            visited[nx][ny] = true;
            res += dfs(nx, ny);
            visited[nx][ny] = false;
        }
    }
    return res;
}

int main() {
    cin >> h >> w;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            cin >> a[i][j];
        }
    }
    visited[1][1] = true;
    cout << dfs(1, 1) << endl;
    return 0;
}
