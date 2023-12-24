#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    sort(begin(a), end(a));
    for (int i = 0; i < n - 1; i++) {
        if (a[i] + 1 != a[i + 1]) {
            cout << a[i] + 1 << endl;
            return 0;
        }
    }
    
    
    return 0;
}