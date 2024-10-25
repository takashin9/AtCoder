#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, q; cin >> n >> q;
    vector<char> h(q);
    vector<int> t(q);
    for (int i = 0; i < q; i++) cin >> h[i] >> t[i];
    int L = 1, R = 2;
    int ans = 0;
    for (int i = 0; i < q; i++) {
        if (h[i] == 'L') {
            if (L < R and R < t[i] or t[i] < R and R < L) {
                ans += n - abs(L - t[i]);
            } else {
                ans += abs(L - t[i]);
            }
            L = t[i];
        } else {
            if (R < L and L < t[i] or t[i] < L and L < R) {
                ans += n - abs(R - t[i]);
            } else {
                ans += abs(R - t[i]);
            }
            R = t[i];
        }
    }
    cout << ans << endl;
    
    
    return 0;
}
