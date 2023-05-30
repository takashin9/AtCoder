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
    set<ll> s, cld;
    for (ll i = 1; i <= n; i++) s.insert(i);
    for (int i = 0; i < q; i++) {
        ll op;
        cin >> op;
        if (op == 1) {
            cld.insert(*s.begin());
            s.erase(*s.begin());
        }
        else if (op == 2) {
            ll x;
            cin >> x;
            cld.erase(x);
        }
        else {
            cout << *cld.begin() << endl;
        }
    }
    
    
    return 0;
}