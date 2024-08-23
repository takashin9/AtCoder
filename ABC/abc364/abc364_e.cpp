#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, x, y; cin >> n >> x >> y;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
    
    vector dp(n + 1, vector(x + 1, vector<int>(n + 1, 1e9))); // dp[i][j][k]: i個目まで見て、甘さj、食べた料理の個数kのときのしょっぱさの最小値
    dp[0][0][0] = 0;
    for (int i = 0; i < n; i++) {
        for (int k = 0; k <= i; k++) {
            for (int j = 0; j <= x; j++) {
                dp[i + 1][j][k] = min(dp[i + 1][j][k], dp[i][j][k]);
                if (j + a[i] <= x) dp[i + 1][j + a[i]][k + 1] = min(dp[i + 1][j + a[i]][k + 1], dp[i][j][k] + b[i]);
            }
        }
    }
    int ans = 0;
    for (int j = 0; j <= x; j++) {
        for (int k = 0; k <= n; k++) {
            if (dp[n][j][k] <= y) ans = max(ans, k);
        }
    }
    cout << min(ans + 1, n) << endl;

    return 0;
}
