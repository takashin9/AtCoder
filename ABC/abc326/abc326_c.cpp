#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(begin(a), end(a));
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int p = upper_bound(begin(a), end(a), a[i] + m - 1) - begin(a) - i;
        ans = max(ans, p);

    }
    cout << ans << endl;

    
    
    return 0;
}