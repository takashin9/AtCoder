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
        for (ll i = 2; i*i*i <= n; i++) {
            if (n % i == 0) {
                if (n % (i*i) == 0) {
                    cout << i << ' ' << n / (i*i) << endl;
                    break;
                }
                else {
                    cout << (ll)sqrt(n / i) << ' ' << i << endl;
                    break;
                }
            }
        }
    }
    
    return 0;
}