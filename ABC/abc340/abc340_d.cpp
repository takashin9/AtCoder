#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n; cin >> n;
    vector<ll> a(n - 1), b(n - 1), x(n - 1), dp(n, (1LL << 60));
    for (int i = 0; i < n - 1; i++) {
        cin >> a[i] >> b[i] >> x[i];
        x[i]--;
    }
    dp[0] = 0;
    for (int i = 0; i < n - 1; i++) {
        dp[i + 1] = min(dp[i + 1], dp[i] + a[i]);
        dp[x[i]] = min(dp[x[i]], dp[i] + b[i]);
    }
    cout << dp[n - 1] << endl;
    
    return 0;
}