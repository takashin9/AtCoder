#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    
    ll T;
    cin >> T;
    vector<vector<ll>> t(T, vector<ll>(3));
    for(int i = 0; i < T; i++){
        for(int j = 0; j < 3; j++){
            cin >> t[i][j];
        }
    }

    for(auto x:t){
        ll n, d, k;
        n = x[0], d = x[1], k = x[2];
        cout << ((d * (k - 1) + ((k - 1)/(n / __gcd(n, d)))) % n) << endl;
    }
    
    return 0;
}