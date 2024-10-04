#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    
    int l, r; cin >> l >> r;
    if ((l ^ r) == 0) cout << "Invalid" << endl;
    else if (l == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}
