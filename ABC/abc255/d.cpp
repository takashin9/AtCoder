#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n), x(q);
    for(auto &y : a) cin >> y;
    for(auto &y : x) cin >> y;
    sort(a.begin(), a.end());
    cout << endl;
    vector<ll> s(n);
    s[0] = a[0];
    for (int i = 1; i < n; i++) s[i] += s[i-1] + a[i];
    for (int i = 0; i < q; i++) {
        auto itr = lower_bound(a.begin(), a.end(), x[i]);
        if (itr == a.begin()) cout << s[n-1] - n*x[i] << endl;
        else if (itr == a.end()) cout << n*x[i] - s[n-1] << endl;
        else {
            ll idx = distance(a.begin(), itr);
            cout << (idx)*x[i] - s[idx-1] + s[n-1] - s[idx-1] - (n - idx)*x[i] << endl;
        }
    }

    
    return 0;
}