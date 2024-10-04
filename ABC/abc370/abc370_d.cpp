#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int h, w, q; cin >> h >> w >> q;
    
    while (q--) {
        int r, c; cin >> r >> c; r--, c--;
        if (g[r][c]) g[r][c] = 0;
        else {
            for (int i = r + 1; i < h; i++) {
                if (g[i][c]) {
                    g[i][c] = 0;
                    break;
                }
            }
            for (int i = r - 1; i >= 0; i--) {
                if (g[i][c]) {
                    g[i][c] = 0;
                    break;
                }
            }
            for (int j = c + 1; j < w; j++) {
                if (g[r][j]) {
                    g[r][j] = 0;
                    break;
                }
            }
            for (int j = c - 1; j >= 0; j--) {
                if (g[r][j]) {
                    g[r][j] = 0;
                    break;
                }
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
        }
    }
    cout << ans << endl;
    
    
    return 0;
}
