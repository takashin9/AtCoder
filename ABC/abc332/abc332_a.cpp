#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n, s, k; cin >> n >> s >> k;
    vector<ll> p(n), q(n);
    for (ll i = 0; i < n; i++) cin >> p[i] >> q[i];
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        sum += p[i] * q[i];
    }
    if (s > sum) cout << sum + k << endl;
    else cout << sum << endl;
    
    
    return 0;
}