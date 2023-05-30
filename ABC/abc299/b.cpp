#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n, t;
    cin >> n >> t;
    vector<ll> c(n), r(n);
    for (int i = 0; i < n; i++) cin >> c[i];
    for (int i = 0; i < n; i++) cin >> r[i];

    bool e = false;

    for (int i = 0; i < n; i++) {
        if (c[i] == t) e = true;
    }

    ll m = 0, ans = 1;
    if (e) {
        for (int i = 0; i < n; i++) {
            if (c[i] == t) {
                if (m < r[i]) {
                    m = r[i];
                    ans = i+1;
                }
            }
        }
    }
    else {
        t = c[0];
        for (int i = 0; i < n; i++) {
            if (c[i] == t) {
                if (m < r[i]) {
                    m = r[i];
                    ans = i+1;
                }
            }
        }
    }
    cout << ans << endl;

    
    return 0;
}