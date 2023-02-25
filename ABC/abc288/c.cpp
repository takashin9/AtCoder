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
    vector<vector<ll>> g(n+1, vector<ll>(0));

    for(int i = 0; i < m; i++){
        ll a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<bool> chk(n+1, false);

    ll cnt = 0;

    for(int p = 1; p <= n; p++){
        queue<ll> q;
        q.push(p);
        if(chk[p]) continue;
        chk[p] = true;
        while(!q.empty()){
            ll v = q.front();
            q.pop();
            for(auto nv : g[v]){
                if(chk[nv]) continue;
                q.push(nv);
                chk[nv] = true;
            }
        }
        cnt++;
    }

    cout << m - n + cnt << endl;
    
    
    return 0;
}