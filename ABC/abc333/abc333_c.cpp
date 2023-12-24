#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;




int main() {
    int n; cin >> n;
    vector<int> r(3, 1);
    for (int i = 0; i < n - 1; i++) {
        int m = *min_element(begin(r), end(r));
        for (int j = 0; j < 3; j++) {
            if (r[j] == m) {
                if (j == 0) {
                    r[0]++, r[1] = 1, r[2] = 1;
                    break;
                }
                else if (j == 1) {
                    r[1]++, r[2] = 1;
                    break;
                }
                else {
                    r[2]++;
                    break;
                }
            }
        }
    }
    ll ans = 0;
    for (int i = 0; i < 3; i++) {
        ll tmp = 0;
        for (ll j = 0; j < r[i]; j++) {
            tmp += (ll)pow(10LL, j);
        }
        ans += tmp;
    }
    cout << ans << endl;

    
    return 0;
}