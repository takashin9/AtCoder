#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n; cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    sort(begin(a), end(a));
    ll m = 0;
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        auto itr = lower_bound(begin(a) + i + 1, end(a), 100000000LL - a[i]);
        if (itr != end(a)) {
            m += end(a) - itr;
        }
        ans += a[i];
    }
    ans *= n - 1;
    ans -= m * 100000000LL;
    cout << ans << endl;
    
    
    return 0;
}