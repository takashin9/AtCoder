#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll K;
    cin >> K;
    vector<ll> ln;
    for (ll i = 2; i < (1LL << 10); i++) {
        ll x = 0, cnt = 0;
        for (ll j = 0; j < 10; j++) {
            if (i & (1LL << j)) {
                x += j * pow(10, cnt);
                cnt++;
            }
        }
        ln.push_back(x);
    }
    sort(begin(ln), end(ln));
    cout << ln[K - 1] << endl;
    
    
    return 0;
}