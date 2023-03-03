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
        ll u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    ll cnt1 = 0, cnt2 = 0;
    for(auto x : g){
        if(x.size() == 1) cnt1++;
        if(x.size() == 2) cnt2++;
    }

    vector<bool> chk(n+1);
    queue<ll> q;
    q.push(1);
    chk[1] = true;
    while(!q.empty()){
        ll v = q.front();
        q.pop();
        for(auto nv : g[v]){
            if(chk[nv]) continue;
            chk[nv] = true;
            q.push(nv);
        }
    }

    bool flag = true;

    for(int i = 1; i <= n; i++){
        if(!chk[i]) flag = false;
    }

    cout << (cnt1 == 2 and cnt2 == n-2 and flag ? "Yes" : "No") << endl;
    
    return 0;
}