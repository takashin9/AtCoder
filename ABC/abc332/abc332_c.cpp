#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n, m; cin >> n >> m;
    string s; cin >> s;
    ll t = 0, lt = 0;
    ll tm = 0, ltm = 0;
    for (ll i = 0; i < n; i++) {
        if (s[i] == '2') lt++;
        if (s[i] == '0') {
            ltm = max(ltm, lt);
            lt = 0;
        }
    }
    ltm = max(ltm, lt);
    t = m + ltm;
    tm = t;
    for (ll i = 0; i < n; i++) {
        if (s[i] == '1') t--;
        if (s[i] == '2') t--;
        if (s[i] == '0') {
            tm = max(tm, tm - t);
            t = tm;
        }
    }
    tm = max(tm, tm - t);
    ll ans = max(0LL, tm - m);
    cout << ans << endl;
    
    
    return 0;
}