#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n, k;
    cin >> n >> k;
    vector dp(4, vector<ll>(3*n + 10));//1-Nまでの数字をi個選んだ時，和がjとなるものの場合の数
    dp[0][0] = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < i*n; j++) {
            dp[i + 1][j + 1] += dp[i][j];
            dp[i + 1][j + n + 1] -= dp[i][j];
        }
        for (int j = 1; j <= (i + 1)*n; j++) {
            dp[i + 1][j] += dp[i + 1][j - 1];
        }
    }

    ll x, cnt = 0;
    for (int i = 3; i <= 3*n; i++) {
        cnt += dp[3][i];
        if (k <= cnt) {
            x = i;
            break;
        }
    }
    
    
    
    return 0;
}