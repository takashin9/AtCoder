#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> x(n), y(n);
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
    }
    vector<ll> a(k), b(k);
    for (int i = 0; i < k; i++) cin >> a[i] >> b[i];
    vector<pair<ll, ll>> nearest(k);
    for (int i = 0; i < k; i++) {
        ll dist = 5000;
        for (int j = 0; j < n; j++) {
            ll ndist = (ll)sqrt(a[i]-x[j])*(a[i]-x[j])+(b[i]-y[j])*(b[i]-y[j])+1;
            if (dist > ndist) {
                dist = ndist;
                nearest[k].first = i;
                nearest[k].second = dist;
            }
        }
    }
    vector<ll> p(n), B(m, 1);
    for (int i = 0; i < k; i++) {
        if (p[nearest[k].first] < nearest[k].second) {
            p[nearest[k].first] = nearest[k].second;
        }
    }
    for (auto x : p) cout << x << ' ';
    cout << endl;
    for (auto x : B) cout << x << ' ';
    cout << endl;
    
    
    return 0;
}