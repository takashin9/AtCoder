#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n; cin >> n;
    vector<int> a(n), b(n - 1);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n - 1; i++) cin >> b[i];
    sort(begin(a), end(a));
    sort(begin(b), end(b));
    int idx = n - 2;
    bool e = false;
    int ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (idx == -1) {
            if (e) cout << -1 << endl;
            else cout << a[0] << endl;
            return 0;
        }
        if (a[i] <= b[idx]) idx--;
        else {
            if (e) {
                cout << -1 << endl;
                return 0;
            }
            e = true;
            ans = a[i];
        }
    }
    cout << ans << endl;
    
    return 0;
}
