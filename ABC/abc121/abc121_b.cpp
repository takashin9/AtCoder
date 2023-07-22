#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, m, c;
    cin >> n >> m >> c;
    vector<int> b(m);
    vector<vector<int>> a(n, vector<int>(m));
    for (auto &x : b) cin >> x;
    for (auto &x : a) {
        for (auto &y : x) cin >> y;
    }
    int ans = 0;
    for (auto &x : a) {
        int sum = c;
        for (int j = 0; j < m; j++) {
            sum += x[j]*b[j];
        }
        if (sum > 0) ans++;
    }
    cout << ans << endl;
    
    
    return 0;
}