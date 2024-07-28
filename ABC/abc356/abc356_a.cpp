#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, l, r; cin >> n >> l >> r;
    for (int i = 1; i < l; i++) cout << i << " ";
    for (int i = r; i >= l; i--) cout << i << " ";
    for (int i = r + 1; i <= n; i++) cout << i << " ";
    cout << endl;
    
    
    return 0;
}