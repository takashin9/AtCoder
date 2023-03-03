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
    vector<string> s(n);
    set<string> t;
    for(auto &x : s) cin >> x;
    for(int i = 0; i < m; i++){
        string x;
        cin >> x;
        t.insert(x);
    }

    ll cnt = 0;
    for(auto x : s){
        if(t.count(x.substr(3, 3))) cnt++;
    }
    
    cout << cnt << endl;
    return 0;
}