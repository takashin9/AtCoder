#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n; cin >> n;
    vector<ll> k(n);
    for (ll i = 0; i < n; i++) cin >> k[i];

    ll ans = (1LL << 60);

    for (ll i = 0; i < (1 << n); i++) {
        ll a = 0, b = 0;
        for (ll j = 0; j < n; j++) {
            if (i & (1 << j)) {
                a += k[j];
            } else {
                b += k[j];
            }
        }
        ans = min(ans, max(a, b));
    }
    cout << ans << endl;
    
    return 0;
}
