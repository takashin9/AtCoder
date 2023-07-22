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
    for (auto &x : a) cin >> x;
    ll m = min(n, 8LL);
    vector b(200, vector<ll>(0));
    
    for (int i = 0; i < (1 << m); i++) {
        vector<ll> s;
        ll cnt = 0;
        for (int j = 0; j < m; j++) {
            if (i & (1 << j)) {
                s.push_back(j + 1);
                cnt += a[j];
                cnt %= 200;
            }
        }
        if (b[cnt].size()) {
            cout << "Yes" << endl;
            cout << b[cnt].size() << " ";
            for (auto x : b[cnt]) cout << x << " ";
            cout << endl;
            cout << s.size() << " ";
            for (auto x : s) cout << x << " ";
            cout << endl;
            return 0;
        }
        else b[cnt] = s;
    }
    
    cout << "No" << endl;
    
    
    
    
    return 0;
}