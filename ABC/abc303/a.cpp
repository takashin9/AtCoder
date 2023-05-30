#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    
    int n;
    string s, t;
    cin >> n >> s >> t;
    
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == t[i]) {
            cnt++;
            continue;
            }
        if (s[i] == '1' or s[i] == 'l') {
            if (t[i] == '1' or t[i] == 'l') cnt++;
        }
        if (s[i] == '0' or s[i] == 'o') {
            if (t[i] == '0' or t[i] == 'o') cnt++;
        }
    }
    cout << ((cnt == n) ? "Yes" : "No") << endl;
    
    return 0;
}