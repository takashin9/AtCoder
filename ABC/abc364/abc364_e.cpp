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
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    vector dp(n + 1, vector<vector<int>>(10001, vector<int>(10001, -1)));
    for (int i = 0; i < n + 1; i++) {
        dp[i][0][0] = 0;
        dp[i][a[i]][b[i]] = 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 10001; j++) {
            for (int k = 0; k < 10001; k++) {
                dp[i + 1][j][k] = max(dp[i + 1][j][k], dp[i][j + a[i + 1]][k + b[i + 1]]);
            }
        }
    }

    return 0;
}
