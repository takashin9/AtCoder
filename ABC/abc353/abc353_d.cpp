#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = unsigned long long;

ll ll_pow(ll a, ll n){
    ll ans = 1;
    for (int i = 0; i < n; i++) ans *= a;
    return ans;
}
int main() {
    ll mod = 998244353;
    ll n; cin >> n;
    vector<ll> a(n), s(n), t(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 0; i < n; i++) {
        t[i] = to_string(a[i]).size();
    }
    for (long long i = n - 2; i >= 0; i--) {
        s[i] += s[i + 1] + ll_pow(10ULL, t[i + 1]);
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        ans += a[i] * s[i];
        ans %= mod;
        ans += i * a[i];
        ans %= mod;
    }
    cout << ans << endl;
    
    return 0;
}