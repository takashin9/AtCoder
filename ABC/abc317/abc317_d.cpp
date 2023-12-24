#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n; cin >> n;
    vector<ll> x(n), y(n), z(n);
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i] >> z[i];
    int sz = accumulate(begin(z), end(z), 0LL);
    vector dp(n + 1, vector<ll>(sz + 5, 9e18));//iまで見たとき，j議席獲得するのに必要な鞍替え人数
    dp[0][0] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= sz; j++) {
            if (j + z[i + 1] > sz) continue;
            if (x[i + 1] > y[i + 1]) {
                dp[i + 1][j + z[i + 1]] = min(dp[i + 1][j + z[i + 1]], dp[i][j]);
            }
            else {
                dp[i + 1][j + z[i + 1]] = min(dp[i + 1][j + z[i + 1]], dp[i][j] + (y[i] - x[i] + 1) / 2);
            }
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
        }
    }
    for (auto h : dp) {
        for (auto e : h) cout << e << " ";
        cout << endl;
    }
    cout << *min_element(begin(dp[n]) + (sz + 1) / 2, end(dp[n])) << endl;
    

    
    
    return 0;
}