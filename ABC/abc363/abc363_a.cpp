#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int r; cin >> r;
    cout << (r / 100 + 1) * 100 - r << endl;
    
    
    return 0;
}
