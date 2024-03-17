#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n; cin >> n;
    ll m = 1;
    while (true) {
        if ((1LL << m) <= n and n <= (1LL << (m + 1))) break;
        m++;
    }
    cout << (1LL << m) * m + (n - (1LL << m)) * (m + 2) << endl;
    

    return 0;
}