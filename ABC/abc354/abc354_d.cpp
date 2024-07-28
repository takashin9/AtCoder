#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;

ll calc(ll x, ll y) {
    ll su[4] = {0, 1, 3, 4};
    ll sl[4] = {0, 2, 3, 3};
    ll ret = 8 * (x / 4) * (y / 2);
    ret += 4 * (x / 4) * (y % 2);
    ret += (su[x % 4] + sl[x % 4]) * (y / 2);
    ret += sl[x % 4] * (y % 2);
    return ret;
}


int main() {
    ll a, b, c, d; cin >> a >> b >> c >> d;
    a += 1000000000;
    b += 1000000000;
    c += 1000000000;
    d += 1000000000;
    cout << calc(c, d) - calc(c, b) - calc(a, d) + calc(a, b) << endl;
    
    return 0;
}