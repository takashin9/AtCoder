#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    ll q;
    cin >> q;
    vector<ll> l(q), r(q);
    for(int i = 0; i < q; i++){
        cin >> l[i] >> r[i];
    }
    vector<vector<ll>> s(k, vector<ll>(n+1));
    for(int i = 0; i < k; i++){
        for(int j = 0; j < n; j++){
            s[i][j+1] += s[i][j] + (j % k == i ? a[j] : 0);
        }
    }

    for(int i = 0; i < q; i++){
        bool flag = true;
        for(int j = 0; j < k; j++){
            if(s[0][r[i]] - s[0][l[i] - 1] != s[j][r[i]] - s[j][l[i] - 1]) flag = false;
        }
        cout << (flag ? "Yes" : "No") << endl;
    }




    
    return 0;
}