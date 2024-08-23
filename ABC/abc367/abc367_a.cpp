#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int a, b, c; cin >> a >> b >> c;
    if (b < c) {
        cout << ((b < a and a < c) ? "No" : "Yes") << endl;
    } else {
        cout << ((a < c or b < a) ? "No" : "Yes") << endl;
    }
    
    
    return 0;
}
