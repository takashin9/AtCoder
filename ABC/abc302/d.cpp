#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    
    ll n, m, d;
    cin >> n >> m >> d;
    vector<ll> a(n), b(m);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll i = 0, j = 0, ans = -1;
    while (true) {
        if (abs(a[i] - b[j]) <= d) {
            if (ans < a[i] + b[j]) {
                ans = a[i] + b[j];
            }
            if (a[i] > b[j] and j < m-1) j++;
            else if (i < n-1) i++;
            else if (i == n-1) j++;
            else if (j == m-1) i++;
            else i++;
        }
        else if (i == n-1) {
            j++;
        }
        else if (j == m-1) {
            i++;
        }
        else {
            if (a[i] > b[j]) j++;
            else i++;
        }
        if (i >= n-1 and j >= m-1) {
            if (abs(a[i] - b[j]) <= d) {
                ans = max(ans, a[i] + b[j]);
            }
            cout << ans << endl;
            return 0;
        }
    }


    
    return 0;
}