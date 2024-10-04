#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int mod = 998244353;
    int n; cin >> n;
    vector dp(n, vector<int>(9));
    for (int i = 0; i < 9; i++) dp[0][i] = 1;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < 9; j++) {
            dp[i + 1][j] += dp[i][j];
            dp[i + 1][j] %= mod;
            if (j - 1 >= 0) {
                dp[i + 1][j - 1] += dp[i][j];
                dp[i + 1][j - 1] %= mod;
            }
            if (j + 1 < 9) {
                dp[i + 1][j + 1] += dp[i][j];
                dp[i + 1][j + 1] %= mod;
            }
        } 
    }
    int ans = 0;
    for (int i = 0; i < 9; i++) {
        ans += dp[n - 1][i];
        ans %= mod;
    }
    cout << ans << endl;
}
