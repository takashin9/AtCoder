#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> a(m, vector<ll>(0));

    for(int i = 0; i < m; i++){
        ll c;
        cin >> c;
        for(int j = 0; j < c; j++){
            ll x;
            cin >> x;
            a[i].push_back(x);
        }
    }

    ll ans = 0;

    for(int i = 1; i < (1 << m); i++){
        set<ll> s;
        for(int j = 0; j < m; j++){
            if((i & (1 << j))){
                for(int k = 0; k < a[j].size(); k++){
                    s.insert(a[j][k]);
                }
            }
        }
        bool flag = true;
        for(int l = 1; l <= n; l++){
            if(!s.count(l)) flag = false;
        }

        if(flag) ans++;
    }

    cout << ans << endl;
    
    return 0;
}