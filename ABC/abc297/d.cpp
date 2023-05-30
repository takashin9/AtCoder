#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll a, b;
    cin >> a >> b;
    ll ans = 0;
    ll m = gcd(a, b);


    while (a != b) {
        if (a == m or b == m) {
            ans += max(a, b) / min(a, b) - 1;
            break;
        }
        if (a > b) {
            ans += a / b;
            a %= b;
        }
        else {
            ans += b / a;
            b %= a;
        }
    }
 
    cout << ans << endl;
    
    
    
    return 0;
}