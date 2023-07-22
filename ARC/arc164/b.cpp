#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> g(n);
    for (int i = 0; i < m; i++) {
        ll a, b;
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<ll> c(n);
    for (int i = 0; i < n; i++) cin >> c[i];
    
    
    
    
    return 0;
}