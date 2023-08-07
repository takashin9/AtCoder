#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int h, w;
    cin >> h >> w;
    vector grid(h, vector<int>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            char c;
            cin >> c;
            if (c == '+') grid[i][j] = 1;
            if (c == '-') grid[i][j] = -1;
        }
    }
    vector dp(h, vector<int>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if ((i + j) % 2 == 0) dp[i][j] = 2e9;
            else dp[i][j] = -2e9;
        }
    }
    dp[h - 1][w - 1] = 0;
    for (int i = h - 1; i >= 0; i--) {
        for (int j = w - 1; j >= 0; j--) {
            if ((i + j) % 2 == 0) {
                if (i + 1 < h) dp[i][j] = max(dp[i][j], dp[i + 1][j] + grid[i + 1][j]);
                if (j + 1 < w) dp[i][j] = max(dp[i][j], dp[i][j + 1] + grid[i][j + 1]);
            }
            else {
                if (i + 1 < h) dp[i][j] = min(dp[i][j], dp[i + 1][j] - grid[i + 1][j]);
                if (j + 1 < w) dp[i][j] = min(dp[i][j], dp[i][j + 1] - grid[i][j + 1]);
            }
        }
    }
    int cmp = dp[0][0];
    if (cmp > 0) cout << "Takahashi" << endl;
    else if (cmp == 0) cout << "Draw" << endl;
    else cout << "Aoki" << endl;
    
    
    return 0;
}