#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n, d;
    cin >> n >> d;
    vector<ll> t(n);
    for (int i = 0; i < n; i++) cin >> t[i];
    for (int i = 0; i < n-1; i++) {
        if (t[i+1] - t[i] <= d) {
            cout << t[i+1] << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    
    
    return 0;
}