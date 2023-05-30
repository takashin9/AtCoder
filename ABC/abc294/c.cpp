#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    vector<ll> ia(n), ib(m);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    ll i = 0, j = 0;
    vector<ll> c(n + m);
    while (i + j < n + m) {
        if (j == m) {
            c[i + j] = a[i];
            ia[i] = i + j;
            i++;
            continue;
        }
        if (i == n) {
            c[i + j] = b[j];
            ib[j] = i + j;
            j++;
            continue;
        }
        if (a[i] < b[j]) {
            c[i + j] = a[i];
            ia[i] = i + j;
            i++;
        }
        else {
            c[i + j] = b[j];
            ib[j] = i + j;
            j++;
        }
    }
    for (auto x : ia) cout << x + 1 << ' ';
    cout << endl;
    for (auto x : ib) cout << x + 1 << ' ';
    cout << endl;
    
    
    return 0;
}