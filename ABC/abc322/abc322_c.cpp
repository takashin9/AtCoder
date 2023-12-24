#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (auto &x : a) cin >> x;
    for (int i = 1; i <= n; i++) {
        auto itr = *lower_bound(begin(a), end(a), i);
        cout << itr - i << endl;
    }
    
    
    return 0;
}