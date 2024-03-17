#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int q; cin >> q;
    vector<int> v;
    while (q--) {
        int p; cin >> p;
        if (p == 1) {
            int x; cin >> x;
            v.push_back(x);
        }
        if (p == 2) {
            int k; cin >> k;
            cout << v[v.size() - k] << endl;
        }
    }
    
    
    return 0;
}