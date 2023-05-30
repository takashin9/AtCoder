#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll l, n1, n2;
    cin >> l >> n1 >> n2;
    vector<pair<ll, ll>> v1(n1), v2(n2);
    for (auto &p : v1) {
        ll a, b;
        cin >> a >> b;
        p = make_pair(a, b);
    }
    for (auto &p : v2) {
        ll a, b;
        cin >> a >> b;
        p = make_pair(a, b);
    }
    ll l1 = 0, l2 = 0, r1 = v1[0].second, r2 = v2[0].second;
    ll i = 0, j = 0;
    ll ans = 0;
    while (i < n1 or j < n2) {
        
        if (v1[i].first == v2[j].first) ans += min(r1, r2) - max(l1, l2);
        if (r1 == l+1 and r2 == l+1) break;
        if (r1 < r2) {
            i++;
            l1 = r1; r1 += v1[i].second;
            
        }
        else if (r1 == r2) {
            i++;
            l1 = r1; r1 += v1[i].second;
            j++;
            l2 = r2; r2 += v2[j].second;
            
        }
        else {
            j++;
            l2 = r2; r2 += v2[j].second;
            
        }
    }
    cout << ans << endl;
    
    
    return 0;
}