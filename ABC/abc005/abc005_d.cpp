#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n;
    cin >> n;
    vector<vector<int>> d(n+1, vector<int>(n+1)), sum(n+1, vector<int>(n+1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> d[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            sum[i][j] = sum[i][j-1] + sum[i-1][j] -sum[i-1][j-1] + d[i][j];
        }
    }
    int q;
    cin >> q;
    while (q--) {
        int p;
        cin >> p;
        int ans = 0;
        for (int i = 1; i <= p; i++) {
            int r = min(p / i, n);
            for (int u = 0; u <= n - i; u++) {
                for (int v = 0; v <= n - r; v++) {
                    ans = max(ans, sum[u+i][v+r] + sum[u][v] - sum[u][v+r] - sum[u+i][v]);
                }
            }
        }
        cout << ans << endl;
    }

    
    
    return 0;
}