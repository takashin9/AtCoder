#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;

const ll mod = 998244353;


int main() {
    
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];

    vector<ll> ap(n), bp(n);

    ap[0] = 1, bp[0] = 1;

    for(int i = 1; i < n; i++){
        if(a[i] != a[i-1]) ap[i] += ap[i-1];
        ap[i] %= mod;
        if(a[i] != b[i-1]) ap[i] += bp[i-1];
        ap[i] %= mod;
        if(b[i] != a[i-1]) bp[i] += ap[i-1];
        bp[i] %= mod;
        if(b[i] != b[i-1]) bp[i] += bp[i-1];
        bp[i] %= mod;
    }

    cout << (ap[n-1] + bp[n-1]) % mod << endl;
    
    return 0;
}