#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    
    ll a, b;
    cin >> a >> b;

    if (a % b == 0) cout << a/b << endl;
    else cout << a/b + 1 << endl;
    
    return 0;
}