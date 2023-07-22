#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    for (int i = 0; i < n - 1; i++) {
        a[i + 1] += a[i]; 
    }
    for (auto &x : a) x %= 360;
    sort(a.begin(), a.end());
    int ans = max(a[0], 360 - a[n - 1]);
    for (int i = 0; i < n - 1; i++) {
        ans = max(ans, a[i + 1] - a[i]);
    }
    cout << ans << endl;

    
    
    return 0;
}