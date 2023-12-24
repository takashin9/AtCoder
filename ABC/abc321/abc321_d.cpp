#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
    using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n, m, p;
    cin >> n >> m >> p;
    vector<ll> a(n), b(m), c(m + 1);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    sort(begin(b), end(b));
    for (int i = 0; i < m; i++) {
        c[i + 1] = c[i] + b[i];
    }
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        int ind = lower_bound(begin(b), end(b), p - a[i]) - begin(b);
        ans += c[ind] + ind * a[i] + (m - ind) * p;
    }
    cout << ans << endl;



 
    
    return 0;
}