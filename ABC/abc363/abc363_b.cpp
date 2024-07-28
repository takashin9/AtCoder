#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, t, p; cin >> n >> t >> p;
    vector<int> l(n);
    for (int i = 0; i < n; i++) cin >> l[i];
    sort(begin(l), end(l));
    if (l[n - p] >= t) cout << 0 << endl;
    else cout << t - l[n - p] << endl;
    
    
    return 0;
}
