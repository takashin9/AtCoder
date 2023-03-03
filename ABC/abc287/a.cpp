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
    ll cnt = 0;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(s == "For") cnt++;
    }
    cout << ((cnt*2 > n) ? "Yes" : "No") << endl;

    
    
    return 0;
}