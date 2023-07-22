#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n;
    cin >> n;
    vector<ll> a(n+1), s(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            s[i] = s[i-1] + a[i] - a[i-1];
        }
        else s[i] = s[i-1];
    }

    ll q;
    cin >> q;
    while (q--) {
        ll l, r;
        cin >> l >> r;
        auto left = lower_bound(a.begin(), a.end(), l);
        auto right = upper_bound(a.begin(), a.end(), r);
        ll lind = left - a.begin(), rind = right - a.begin() - 1;
        ll ret = 0;
        if (left == right) {
            if (lind % 2 == 1) {
                cout << r - l << endl;
            }
            else cout << 0 << endl;
            
            continue;
        }
        if (lind % 2 == 1) ret += a[lind] - l;
        if (rind % 2 == 0) ret += r - a[rind];
        ret += s[rind] - s[lind];
        cout << ret << endl;
    }
    
    
    return 0;
}