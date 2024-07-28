#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int h; cin >> h;
    for (int i = 0; i < 40; i++) {
        if (h < (1 << i) - 1) {
            cout << i << endl;
            return 0;
        }
    }
    
    
    return 0;
}