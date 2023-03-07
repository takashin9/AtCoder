#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    
    ll n;
    cin >> n;
    ll ans = 0;
    for (int ab = 1; ab < n; ab++) {
        int cd = n - ab;
        ll cntab = 0;
        for (int a = 1; a*a <= ab; a++) {
            if (ab % a == 0) {
                if (a != ab / a) cntab += 2;
                else cntab++;
            }
        }
        ll cntcd = 0;
        for (int c = 1; c*c <= cd; c++) {
            if (cd % c == 0) {
                if (c != cd / c) cntcd += 2;
                else cntcd++;
            }
        }
        ans += cntab*cntcd;
    }
    cout << ans << endl;
    
    return 0;
}