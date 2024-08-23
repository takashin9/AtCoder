#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, k; cin >> n >> k;
    vector<int> x(n), a(n);
    for (int i = 0; i < n; i++) cin >> x[i], x[i]--;
    for (int i = 0; i < n; i++) cin >> a[i];
    if (k == 0) {
        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
        return 0;
    }
    vector<vector<int>> g(n);
    for (int i = 0; i < n; i++) {
        g[x[i]].push_back(i);
    }

    
    
    return 0;
}
