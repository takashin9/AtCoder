#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    
    string s;
    cin >> s;
    ll n = s.size();
    ll ans = 0;

    for(ll i = n-1; i >= 0; i--){
        ans += (s[i] - 'A' + 1)*(ll)pow(26, n - i - 1);
    }
    cout << ans << endl;
    
    return 0;
}