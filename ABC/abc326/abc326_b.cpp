#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n; cin >> n;
    for (int i = n; i < 1000; i++) {
        if ((i % 10) == ((i / 10) % 10) * ((i / 100) % 10)) {
            cout << i << endl;
            break;
        }
    }
    
    
    return 0;
}