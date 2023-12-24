#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll k, g, m; cin >> k >> g >> m;
    ll gg = 0, mm = 0;
    while (k--) {
        if (gg == g) gg = 0;
        else if (mm == 0) mm = m;
        else {
            ll tmp = gg;
            gg = min(g, mm + gg);
            mm = max(0LL, mm - (g - tmp));
        }
    }
    cout << gg << ' ' << mm << endl;
    
    
    return 0;
}