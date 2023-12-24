#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n, w;
    cin >> n >> w;
    vector<ll> s(n), t(n), p(n);
    for (ll i = 0; i < n; i++) cin >> s[i] >> t[i] >> p[i];
    vector<ll> u(200005);
    for (ll i = 0; i < n; i++) {
        u[s[i]] += p[i];
        u[t[i]] -= p[i];
    }
    for (ll i = 0; i < n - 1; i++) u[i + 1] += u[i];
    bool can = true;
    for (int i = 0; i < n; i++) {
        if (w - u[i] < 0) can = false;
    }
    cout << (can ? "Yes" : "No") << endl;
    
    
    
    return 0;
}