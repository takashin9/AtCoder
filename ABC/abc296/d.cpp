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
    ll u = sqrt(m);
    ll ans = 1e18;
    for (ll a = 1; a <= u+1; a++) {
        ll b = m/a;
        if (a*b >= m) {
            
        }
    }
    return 0;
}