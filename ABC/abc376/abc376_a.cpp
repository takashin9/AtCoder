#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, c; cin >> n >> c;
    vector<int> t(n);
    for (int i = 0; i < n; i++) cin >> t[i];
    int ans = 1;
    int bef = t[0];
    for (int i = 1; i < n; i++) {
        if (t[i] - bef >= c) {
            ans++;
            bef = t[i];
        }
    }
    cout << ans << endl;
    
    
    return 0;
}
