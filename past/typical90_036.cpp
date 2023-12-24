#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n, q; cin >> n >> q;
    vector<ll> x(n), y(n), z(n), w(n);
    for (ll i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
        z[i] = x[i] + y[i];
        w[i] = x[i] - y[i];
    }

    ll zi = *max_element(begin(z), end(z));
    ll zj = *min_element(begin(z), end(z));
    ll wi = *max_element(begin(w), end(w));
    ll wj = *min_element(begin(w), end(w));

    for (ll i = 0; i < q; i++) {
        ll p; cin >> p; p--;
        cout << max({abs(zi - z[p]), abs(z[p] - zj), abs(wi - w[p]), abs(w[p] - wj)}) << endl;
    }

    
    
    
    return 0;
}