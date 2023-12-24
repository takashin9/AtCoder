#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n; cin >> n;
    while (n % 2 == 0) n /= 2;
    while (n % 3 == 0) n /= 3;
    cout << (n == 1 ? "Yes" : "No") << endl;
    
    
    return 0;
}