#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    string s; cin >> s;
    ll n = s.size();
    vector<ll> vb(26), ve(26);
    vb[s[0] - 'A']++;
    ll ans = 0;
    for (ll i = 2; i < n; i++) ve[s[i] - 'A']++;
    for (ll i = 1; i < n - 1; i++) {
        for (ll j = 0; j < 26; j++) ans += vb[j] * ve[j];
        vb[s[i] - 'A']++;
        ve[s[i + 1] - 'A']--;
    }
    cout << ans << endl;
    
    return 0;
}
