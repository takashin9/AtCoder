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
    vector<ll> a(n);
    ll s = 0;
    for (auto &x : a) {
        cin >> x;
        s += x;
    }
    ll ave = s / n;
    ll r = s % n;
    sort(a.begin(), a.end());
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        if (i < n - r) ans += abs(a[i] - ave);
        else ans += abs(a[i] - ave - 1);
    }
    cout << ans / 2 << endl;

    
    
    return 0;
}