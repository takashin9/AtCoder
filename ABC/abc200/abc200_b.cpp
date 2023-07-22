#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    unsigned long long n, k;
    cin >> n >> k;
    while (k--) {
        if (n % 200 == 0) n /= 200;
        else {
            n *= 1000;
            n += 200;
        }
    }
    cout << n << endl;
    
    
    return 0;
}