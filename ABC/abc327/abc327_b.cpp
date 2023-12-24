#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll b; cin >> b;
    for (ll a = 1; a < 16; a++) {
        ll comp = 1;
        for (ll i = 0; i < a; i++) comp *= a;
        if (comp == b) {
            cout << a << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    
    
    return 0;
}