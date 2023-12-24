#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n; cin >> n;
    string s; cin >> s;
    vector<ll> num(10);
    for (ll i = 0; i < n; i++) {
        num[s[i] - '0']++;
    }
    ll ans = 0;
    for (ll i = 0; i*i < (ll)pow(10, 13); i++) {
        ll d = i*i;
        if (d >= (ll)pow(10, n)) continue;
        vector<ll> cnt(10);
        for (ll j = 0; j < n; j++) {
            cnt[d % 10]++;
            d /= 10;
        }
        bool square = true;
        for (ll j = 0; j < 10; j++) {
            if (num[j] != cnt[j]) square = false;
        }
        if (square) ans++;
    }
    cout << ans << endl;
    
    
    return 0;
}