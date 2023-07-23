#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, d;
    cin >> n >> d;
    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];
    vector<int> ok(d, 0);
    for (int i = 0; i < d; i++) {
        bool can = 1;
        for (int j = 0; j < n; j++) {
            if (s[j][i] == 'x') can = 0;
        }
        if (can) ok[i] = 1;
    }
    int ans = 0, cnt = 0;
    for (int i = 0; i < d; i++) {
        if (ok[i]) {
            cnt++;
            ans = max(ans, cnt);
        }
        else cnt = 0;
    }
    cout << ans << endl;
    
    
    return 0;
}