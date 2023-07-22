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
    vector<pair<ll, ll>> c(n);
    for (int i = 0; i < n; i++) cin >> c[i].first >> c[i].second;
    sort(c.begin(), c.end());
    ll sum = 0;
    for (int i = 0; i < n; i++) sum += c[i].second;
    if (sum <= k) {
        cout << 1 << endl;
        return 0;
    }
    for (int i = 1; i < n; i++) {
        sum -= c[i - 1].second;
        if (sum <= k) {
            cout << c[i - 1].first + 1 << endl;
            return 0;
        }
    }
    cout << c[n - 1].first + 1 << endl;
    
    
    
    
    return 0;
}