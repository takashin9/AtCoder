#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n, s; cin >> n >> s;
    vector<ll> a(n), f(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    ll cnt = a[0];
    f[0] = 1;
    for (int i = 1; i < n; i++) {
        cnt += a[i];
        if (cnt > s) {
            cnt = a[i];
            f[i] = f[i - 1] + 1;
        }
        else f[i] = f[i - 1];
    }
    for (auto x : f) cout << x << endl;
    
    
    return 0;
}