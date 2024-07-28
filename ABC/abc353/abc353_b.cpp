#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = 0, temp = 0;

    for (int i = 0; i < n; i++) {
        if (temp + a[i] > k) {
            temp = 0;
            ans++;
        }
        temp += a[i];
    }
    ans++;
    cout << ans << endl;
    
    
    return 0;
}