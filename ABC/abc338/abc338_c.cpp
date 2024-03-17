#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n; cin >> n;
    vector<int> q(n), a(n), b(n);
    for (int i = 0; i < n; i++) cin >> q[i];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    vector<int> an(n), bn(n);
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) an[i] = 1e9;
        else an[i] = q[i] / a[i];
        if (b[i] == 0) bn[i] = 1e9;
        else bn[i] = q[i] / b[i];
    }
    int am = *min_element(begin(an), end(an));
    int bm = *min_element(begin(bn), end(bn));
    int ans = 0;
    while (am != 0 or bm != 0) {
        if (am > bm) {
            for (int i = 0; i < n; i++) {
                q[i] -= a[i];
            }
            for (int i = 0; i < n; i++) {
                if (a[i] == 0) an[i] = 1e9;
                else an[i] = q[i] / a[i];
                if (b[i] == 0) bn[i] = 1e9;
                else bn[i] = q[i] / b[i];
            }
            am = *min_element(begin(an), end(an));
            bm = *min_element(begin(bn), end(bn));
            ans++;
        } else {
            for (int i = 0; i < n; i++) {
                q[i] -= b[i];
            }
            for (int i = 0; i < n; i++) {
                if (a[i] == 0) an[i] = 1e9;
                else an[i] = q[i] / a[i];
                if (b[i] == 0) bn[i] = 1e9;
                else bn[i] = q[i] / b[i];
            }
            am = *min_element(begin(an), end(an));
            bm = *min_element(begin(bn), end(bn));
            ans++;
        }
        
    }
    cout << ans << endl;

    
    return 0;
}