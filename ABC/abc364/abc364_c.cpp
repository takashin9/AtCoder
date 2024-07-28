#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n, x, y; cin >> n >> x >> y;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 0; i < n; i++) cin >> b[i];
    
    sort(rbegin(a), rend(a));
    sort(rbegin(b), rend(b));
    ll sa = 0, sb = 0;
    for (ll i = 0; i < n; i++) {
        sa += a[i];
        sb += b[i];
        if (sa > x) {
            cout << i + 1 << endl;
            return 0;
        }
        if (sb > y) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << n << endl;

    
    
    return 0;
}
