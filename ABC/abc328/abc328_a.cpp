#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, x; cin >> n >> x;
    vector<int> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] <= x) ans += s[i];
    }
    cout << ans << endl;
    
    
    
    return 0;
}