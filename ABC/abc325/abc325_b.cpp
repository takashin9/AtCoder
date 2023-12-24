#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n; cin >> n;
    vector<ll> w(n), x(n);
    ll ans = 0;
    for (ll i = 0; i < n; i++) cin >> w[i] >> x[i];
    for (ll s = 0; s < 24; s++) {
        ll cnt = 0;
        for (ll i = 0; i < n; i++) {
            if ((x[i] + s) % 24 >= 9 and (x[i] + s) % 24 < 18) cnt += w[i];
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    
    
    return 0;
}