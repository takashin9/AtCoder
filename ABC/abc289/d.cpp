#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(auto &x:a) cin >> x;
    ll m;
    cin >> m;
    set<ll> b;
    for(int i = 0; i < m; i++){
        ll x;
        cin >> x;
        b.insert(x);
    }
    ll x;
    cin >> x;

    vector<ll> dp(x+10, 0);

    for(int i = 0; i < n; i++){
        if(a[i] <= x) dp[a[i]] += a[i];
    }

    for(int i = 1; i <= x; i++){
        if(!b.count(i) and dp[i]){
            for(int j = 0; j < n; j++){
                if(i + a[j] <= x) dp[i + a[j]] = dp[i] + a[j];
            }
        }
    }

    cout << ((dp[x] ? "Yes" : "No")) << endl;
    
    return 0;
}