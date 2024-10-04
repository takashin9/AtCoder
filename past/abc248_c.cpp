#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int mod = 998244353;
    int n, m, k; cin >> n >> m >> k;
    vector dp(n + 1, vector<int>(k + 1, 0));
    dp[0][0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            if (dp[i][j] == 0) continue;
            for (int a = 1; a <= m; a++) {
                if (j + a > k) continue;
                dp[i + 1][j + a] += dp[i][j];
                dp[i + 1][j + a] %= mod;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i <= k; i++) {
        ans += dp[n][i];
        ans %= mod;
    }
    cout << ans << endl;

    return 0;
}
