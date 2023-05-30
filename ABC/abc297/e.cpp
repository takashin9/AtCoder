#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;

const ll INF = 1e18;

int main() {
    ll N, K;
    cin >> N >> K;

    vector<ll> A(N);
    for (ll i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<vector<ll>> dp(N+1, vector<ll>(K+1, INF));
    dp[0][0] = 0;

    for (ll i = 1; i <= N; i++) {
        for (ll j = 0; j <= K; j++) {
            dp[i][j] = min(dp[i-1][j], (j > 0 ? dp[i][j-1] + A[i-1] : INF));
          	for (ll k = 0; k < i; k++) {
              	dp[i][j] = min(dp[i][j], dp[i][j-1] + A[k]);
            }
        }
    }

    cout << dp[N][K] << endl;
    return 0;
}
