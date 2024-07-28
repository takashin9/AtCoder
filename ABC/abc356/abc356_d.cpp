#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n, m; cin >> n >> m;
    ll N = 0, bit = 0;
    while (N <= n) {
        if (N == 0) N++;
        else N *= 2;
        bit++;
    }
    N--;
    cout << N << endl;
    cout << bit << endl;
    ll cnt = N - n;
    ll ans = 0;
    vector<ll> s(bit);
    for (int i = 1; i <= bit; i++) {
        s[i - 1] = (cnt + (1 << i) - 1) / (1 << i) * (1 << (i - 1));
    }
    
    return 0;
}