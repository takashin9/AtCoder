#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n; cin >> n;
    vector<ll> x(n), y(n);
    for (ll i = 0; i < n; i++) cin >> x[i] >> y[i];
    long double ans = sqrt(x[0] * x[0] + y[0] * y[0]) + sqrt(x[n - 1] * x[n - 1] + y[n - 1] * y[n - 1]);
    for (ll i = 0; i < n - 1; i++) {
        ans += sqrt((x[i] - x[i + 1]) * (x[i] - x[i + 1]) + (y[i] - y[i + 1]) * (y[i] - y[i + 1]));
    }
    cout << setprecision(14) << fixed;
    cout << ans << endl;
    return 0;
}
