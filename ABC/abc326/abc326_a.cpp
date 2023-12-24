#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int x, y; cin >> x >> y;
    if (y - x <= 2 and -3 <= y - x) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    
    return 0;
}