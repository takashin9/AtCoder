#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s; cin >> s;
    ll n = ssize(s);
    ll cnt = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            cnt++;
        } else {
            ans += cnt;
        }
    }
    cout << ans << endl;
    
    
    
    return 0;
}
