#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int j = 0; j < m; j++) cin >> b[j];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll ans1, ans2;
    for (int i = 0; i < n; i++) {
        ll buy = b.end() - lower_bound(b.begin(), b.end(), a[i]);
        if (i + 1 >= buy) {
            ans1 = a[i];
            break;
        }
    }
    for (int i = 0; i < m; i++) {
        ll sell = lower_bound(a.begin(), a.end(), b[i] + 1) - a.begin();
        if (sell >= m - i - 1) {
            ans2 = b[i] + 1;
            break;
        }
    }
    cout << min(ans1, ans2) << endl;
    
    return 0;
}