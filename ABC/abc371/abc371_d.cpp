#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n; cin >> n;
    vector<ll> x(n), p(n), s(n + 1);
    for (ll i = 0; i < n; i++) cin >> x[i];
    for (ll i = 0; i < n; i++) cin >> p[i];
    for (ll i = 0; i < n; i++) {
        s[i + 1] += s[i] + p[i];
    }
    ll q; cin >> q;
    while (q--) {
        ll l, r; cin >> l >> r;
        auto idx1 = lower_bound(begin(x), end(x), l) - begin(x);
        auto idx2 = upper_bound(begin(x), end(x), r) - begin(x);
        cout << s[idx2] - s[idx1] << endl;
    }

    
    
    return 0;
}
