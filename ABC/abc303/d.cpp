#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
 
int main() {
    
    ll x, y, z;
    string s;
    cin >> x >> y >> z >> s;
    ll n = s.size();
    vector<vector<ll>> dp(2, vector<ll>(n, 1e18));
 
    if (s[0] == 'a') {
        dp[0][0] = min(x, y + z);
        dp[1][0] = min(y, z + x) + z;
    }
    else {
        dp[0][0] = min(y, z + x);
        dp[1][0] = min(x, y + z) + z;
    }
    for (int i = 0; i < n-1; i++) {
        if (s[i+1] == 'a') {
            dp[0][i+1] = min(dp[0][i] + x, dp[1][i] + x + z);
            dp[1][i+1] = min(dp[1][i] + y, dp[0][i] + z + y);
        }
        else {
            dp[0][i+1] = min(dp[0][i] + y, dp[1][i] + y + z);
            dp[1][i+1] = min(dp[1][i] + x, dp[0][i] + x + z);
        }
    }
    cout << min(dp[0][n-1], dp[1][n-1]) << endl;
    return 0;
}