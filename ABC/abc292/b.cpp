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
    vector<ll> p(n+1);
    for (int i = 0; i < q; i++) {
        ll c, x;
        cin >> c >> x;
        if (c == 1) {
            p[x]++;
        }
        else if (c == 2) p[x] += 2;
        else {
            cout << (p[x] >= 2 ? "Yes" : "No") << endl;
        }
    }

    
    return 0;
}