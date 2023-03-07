#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    
    ll t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        ll n;
        cin >> n;
        ll cnt = 0;
        for (int i = 0; i < n; i++) {
            ll a;
            cin >> a;
            if (a % 2) cnt++;
        }
        cout << cnt << endl;
    }
    
    return 0;
}